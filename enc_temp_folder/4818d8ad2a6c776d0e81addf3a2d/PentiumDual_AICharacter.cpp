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
APentiumDual_AICharacter::APentiumDual_AICharacter()
{
	bUseControllerRotationYaw = false;
	//GetCharacterMovement()->bUseControllerDesiredRotation = true;
	GetCharacterMovement()->bOrientRotationToMovement = true;

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
			// generate a random number between 1 and 2
	int montageSectionIndex = rand() % 3 + 1;

	//Create a new string reference
	FString montageSection = "start_" + FString::FromInt(montageSectionIndex);
	
	//if(!GetCurrentMontage())
		PlayAnimMontage(montage, 1.0f, FName(montageSection));
	}
}

void APentiumDual_AICharacter::AttackStart()
{
	UE_LOG(LogTemp, Warning, TEXT("Npc attack start"));

	left_fist_collision_box->SetCollisionProfileName("Weapon");
	right_fist_collision_box->SetCollisionProfileName("Weapon");
}

void APentiumDual_AICharacter::AttackEnd()
{
	UE_LOG(LogTemp, Warning, TEXT("Npc attack stop"));

	left_fist_collision_box->SetCollisionProfileName("NoCollision");
	right_fist_collision_box->SetCollisionProfileName("NoCollision");
}


