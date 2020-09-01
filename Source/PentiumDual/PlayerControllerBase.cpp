// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"
#include "Components/InputComponent.h"
#include "GameFramework/PlayerController.h"

APlayerControllerBase::APlayerControllerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void APlayerControllerBase::BeginPlay()
{

}

void APlayerControllerBase::Tick(float DeltaSeconds)
{

}

void APlayerControllerBase::SetupInputComponent()
{
	Super::SetupInputComponent();

	check(InputComponent);

	InputComponent->BindAxis("MoveForward", this, &APlayerControllerBase::CallMoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayerControllerBase::CallMoveRight);
}

void APlayerControllerBase::CallMoveForward(float Value)
{

}

void APlayerControllerBase::CallMoveRight(float Value)
{

}
