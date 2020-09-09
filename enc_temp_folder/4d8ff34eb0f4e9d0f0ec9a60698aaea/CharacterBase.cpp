// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "Components/WidgetComponent.h"
#include "HealthBar.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
ACharacterBase::ACharacterBase() :
									health(max_health),
									widget_component(CreateDefaultSubobject<UWidgetComponent  >(TEXT("HealthValue")))

{
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
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
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