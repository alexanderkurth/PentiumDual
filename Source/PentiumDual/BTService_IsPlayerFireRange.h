// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_IsPlayerFireRange.generated.h"

/**
 * 
 */
UCLASS()
class PENTIUMDUAL_API UBTService_IsPlayerFireRange : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	UBTService_IsPlayerFireRange();
	void OnBecomeRelevant(UBehaviorTreeComponent& owner_comp, uint8* node_memory) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	float fire_range = 50.0f;
};
