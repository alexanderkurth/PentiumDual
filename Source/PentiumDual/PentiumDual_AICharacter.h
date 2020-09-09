// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PatrolPath.h"
#include "Animation/AnimMontage.h"
#include "CharacterBase.h"
#include "BehaviorTree/BehaviorTree.h"

#include "PentiumDual_AICharacter.generated.h"

UCLASS()
class PENTIUMDUAL_API APentiumDual_AICharacter : public ACharacterBase
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APentiumDual_AICharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	APatrolPath* get_patrol_path();

	void melee_attack();

	UAnimMontage* get_montage() const;

	UBehaviorTree* GetBehaviorTree() const;

	void SetPatrolPath(APatrolPath* const path);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI", meta = (AllowPrivateAccess = "true"))
	APatrolPath* patrol_path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	UBehaviorTree* behaviorTree;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* montage;
};
