// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "Components/WidgetComponent.h"
#include "HealthBar.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"

#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "PentiumDual_AICharacter.h"
#include "PentiumDualCharacter.h"
#include "Components/CapsuleComponent.h"


ACharacterBase::ACharacterBase() :
									health(max_health),
									widget_component(CreateDefaultSubobject<UWidgetComponent  >(TEXT("HealthValue")))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(36.f, 96.0f);

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (widget_component)
	{
		widget_component->SetupAttachment(RootComponent);
		widget_component->SetWidgetSpace(EWidgetSpace::Screen);
		widget_component->SetRelativeLocation(FVector(0.0f, 0.0f, 85.0f));
		static ConstructorHelpers::FClassFinder<UUserWidget> widget_class(TEXT("/Game/UI/BP_HealthBar"));

		if (widget_class.Succeeded())
		{
			widget_component->SetWidgetClass(widget_class.Class);
		}
	}

	//static ConstructorHelpers::FObjectFinder<UAnimMontage> MeleeFistAttackMontageObecjt(TEXT("AnimMontage'/Game/Animations/MeleeFistAttackMontage.MeleeFistAttackMontage'"));
	//if (MeleeFistAttackMontageObecjt.Succeeded())
	//{
	//	melee_fist_attack_montage = MeleeFistAttackMontageObecjt.Object;
	//}

	//left_fist_collision_box = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFistCollisionBox"));
	//left_fist_collision_box->SetupAttachment(RootComponent);
	//left_fist_collision_box->SetCollisionProfileName("NoCollision");

	//right_fist_collision_box = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistCollisionBox"));
	//right_fist_collision_box->SetupAttachment(RootComponent);
	//right_fist_collision_box->SetCollisionProfileName("NoCollision");
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

	//attach colllision component sto socket based on transformation definitions
	//const FAttachmentTransformRules attachmentRules(EAttachmentRule::SnapToTarget, EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld, false);


	//left_fist_collision_box->AttachToComponent(GetMesh(), attachmentRules, "hand_l_socket");
	//right_fist_collision_box->AttachToComponent(GetMesh(), attachmentRules, "hand_r_socket");

	//left_fist_collision_box->OnComponentHit.AddDynamic(this, &ACharacterBase::OnAttackHit);
	//right_fist_collision_box->OnComponentHit.AddDynamic(this, &ACharacterBase::OnAttackHit);
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto const uw = Cast<UHealthBar>(widget_component->GetUserWidgetObject());
	if (uw)
	{
		uw->set_bar_value_percent(health / max_health);
	}
}

float ACharacterBase::get_health() const
{
	return health;
}

float ACharacterBase::get_max_health() const
{
	return max_health;
}

void ACharacterBase::set_health(float const new_health)
{
	health = new_health;
}

void ACharacterBase::OnAttackHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//if (APentiumDualCharacter* Player = Cast<APentiumDualCharacter>(OtherComp->GetOwner()))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Some warning message"));
	//}

	//if (APentiumDual_AICharacter* NPC = Cast<APentiumDual_AICharacter>(OtherComp->GetOwner()))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Some warning message 2 "));
	//}

	//if (ACharacterBase* NPC = Cast<ACharacterBase>(OtherComp->GetOwner()))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Some warning message 3 "));
	//	NPC->set_health(health - 10);

	//}


	//if (PunchAudioComponent && !PunchAudioComponent->IsPlaying())
	//{
	//	PunchAudioComponent->SetPitchMultiplier(FMath::RandRange(1.0f, 1.3f));
	//	PunchAudioComponent->Play(0.f);
	//}
}

void ACharacterBase::AttackStart()
{
	//left_fist_collision_box->SetCollisionProfileName("Weapon");
	//right_fist_collision_box->SetCollisionProfileName("Weapon");
}

void ACharacterBase::AttackEnd()
{
	//left_fist_collision_box->SetCollisionProfileName("NoCollision");
	//right_fist_collision_box->SetCollisionProfileName("NoCollision");
}

void ACharacterBase::AttackInput()
{
	// generate a rendom number between 1 and 2
	//int montageSectionIndex = rand() % 3 + 1;

	//Create a new string reference
	//FString montageSection = "start_" + FString::FromInt(montageSectionIndex);

	//if(!GetCurrentMontage())
	//PlayAnimMontage(melee_fist_attack_montage, 1.0f, FName(montageSection));
}
