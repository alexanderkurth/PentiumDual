// Copyright Epic Games, Inc. All Rights Reserved.

#include "PentiumDualCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISense_Hearing.h"
#include "ai_tags.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Components/WidgetComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"

//////////////////////////////////////////////////////////////////////////
// APentiumDualCharacter

APentiumDualCharacter::APentiumDualCharacter() 
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	setup_stimulus();

	static ConstructorHelpers::FObjectFinder<UAnimMontage> MeleeFistAttackMontageObecjt(TEXT("AnimMontage'/Game/Animations/MeleeFistAttackMontage.MeleeFistAttackMontage'"));
	if (MeleeFistAttackMontageObecjt.Succeeded())
	{
		melee_fist_attack_montage = MeleeFistAttackMontageObecjt.Object;
	}

	static ConstructorHelpers::FObjectFinder<USoundCue> USoundCueObject(TEXT("SoundCue'/Game/Sound/PunchSoundCue.PunchSoundCue'"));
	if (USoundCueObject.Succeeded())
	{
		PunchSoundCue = USoundCueObject.Object;

		PunchAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PunchAudioComponent"));
		PunchAudioComponent->AttachTo(RootComponent);

	}
	
	left_fist_collision_box = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFistCollisionBox"));
	left_fist_collision_box->SetupAttachment(RootComponent);
	left_fist_collision_box->SetCollisionProfileName("NoCollision");

	right_fist_collision_box = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistCollisionBox"));
	right_fist_collision_box->SetupAttachment(RootComponent);
	right_fist_collision_box->SetCollisionProfileName("NoCollision");
}

//////////////////////////////////////////////////////////////////////////
// Input

void APentiumDualCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &APentiumDualCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APentiumDualCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APentiumDualCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APentiumDualCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &APentiumDualCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &APentiumDualCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &APentiumDualCharacter::OnResetVR);
	

	//PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APentiumDualCharacter::on_attack);
	PlayerInputComponent->BindAction("Distract", IE_Pressed, this, &APentiumDualCharacter::on_distract);

	//attack functionality
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APentiumDualCharacter::AttackInput);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &APentiumDualCharacter::AttackEnd);
}


void APentiumDualCharacter::AttackStart()
{
	left_fist_collision_box->SetCollisionProfileName("Weapon");
	right_fist_collision_box->SetCollisionProfileName("Weapon");
}

void APentiumDualCharacter::AttackEnd()
{
	left_fist_collision_box->SetCollisionProfileName("NoCollision");
	right_fist_collision_box->SetCollisionProfileName("NoCollision");
}

void APentiumDualCharacter::AttackInput()
{
	// generate a rendom number between 1 and 2
	int montageSectionIndex = rand() % 3 + 1;

	//Create a new string reference
	FString montageSection = "start_" + FString::FromInt(montageSectionIndex);
	
	//if(!GetCurrentMontage())
		PlayAnimMontage(melee_fist_attack_montage, 1.0f, FName(montageSection));
}


void APentiumDualCharacter::Tick(float const DeltaTime)
{
	Super::Tick(DeltaTime);
}


void APentiumDualCharacter::BeginPlay()
{
	Super::BeginPlay();

	//attach colllision component sto socket based on transformation definitions
	const FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);
	
	left_fist_collision_box->AttachToComponent(GetMesh(), attachmentRules, "hand_l_socket");
	right_fist_collision_box->AttachToComponent(GetMesh(), attachmentRules, "hand_r_socket");

	left_fist_collision_box->OnComponentHit.AddDynamic(this, &APentiumDualCharacter::OnAttackHit);
	right_fist_collision_box->OnComponentHit.AddDynamic(this, &APentiumDualCharacter::OnAttackHit);

	if (PunchSoundCue && PunchAudioComponent)
	{
		PunchAudioComponent->SetSound(PunchSoundCue);
	}

}

void APentiumDualCharacter::setup_stimulus()
{
	stimulus = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimulus"));
	stimulus->RegisterForSense(TSubclassOf < UAISense_Sight>());
	stimulus->RegisterWithPerceptionSystem();
}

void APentiumDualCharacter::on_distract()
{
	if (distraction_sound)
	{
		FVector const loc = GetActorLocation();
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), distraction_sound, loc);
		UAISense_Hearing::ReportNoiseEvent(GetWorld(), loc, 1.0f, this, 0.0f, tags::noise_tag);
	}
}

void APentiumDualCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APentiumDualCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void APentiumDualCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void APentiumDualCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APentiumDualCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APentiumDualCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APentiumDualCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}


void APentiumDualCharacter::OnAttackHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	if (PunchAudioComponent && !PunchAudioComponent->IsPlaying())
	{
		PunchAudioComponent->SetPitchMultiplier(FMath::RandRange(1.0f,1.3f));
		PunchAudioComponent->Play(0.f);
	}
}