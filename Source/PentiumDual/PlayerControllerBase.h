// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PentiumDualCharacter.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class PENTIUMDUAL_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	APlayerControllerBase();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupInputComponent();

	void CallMoveForward(float Value);

	void CallMoveRight(float Value);
};
