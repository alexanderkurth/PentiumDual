// Fill out your copyright notice in the Description page of Project Settings.


#include "PentiumDual_AICharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/WidgetComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "HealthBar.h"
#include "Components/BoxComponent.h"
#include "CharacterBase.h"

// Sets default values
APentiumDual_AICharacter::APentiumDual_AICharacter() :
	health(max_health),
	widget_component(CreateDefaultSubobject<UWidgetComponent  >(TEXT("HealthValue")))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationYaw = false;
	//GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = true;

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
}

// Called when the game starts or when spawned
void APentiumDual_AICharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APentiumDual_AICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	auto const uw = Cast<UHealthBar>(widget_component->GetUserWidgetObject());
	if (uw)
	{
		uw->set_bar_value_percent(health / max_health);
	}
}

// Called to bind functionality to input
void APentiumDual_AICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

APatrolPath* APentiumDual_AICharacter::get_patrol_path()
{
	return patrol_path;
}

UAnimMontage* APentiumDual_AICharacter::get_montage() const
{
	return montage;
}

float APentiumDual_AICharacter::get_health() const
{
	return health;
}

float APentiumDual_AICharacter::get_max_health() const
{
	return max_health;
}

void APentiumDual_AICharacter::set_health(float const new_health)
{
	health = new_health;
}

UBehaviorTree* APentiumDual_AICharacter::GetBehaviorTree() const
{
	return behaviorTree;
}

void APentiumDual_AICharacter::SetPatrolPath(APatrolPath* const path)
{
	patrol_path = path;
}

void APentiumDual_AICharacter::melee_attack()
{
	if (montage)
	{
		PlayAnimMontage(montage);
	}
}

