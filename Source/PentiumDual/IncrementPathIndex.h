// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "IncrementPathIndex.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PENTIUMDUAL_API UIncrementPathIndex : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UIncrementPathIndex(FObjectInitializer const& object_initilizer);

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory) override;
private :
	enum class EDirectionType
	{
		Forward, Reverse
	};

	EDirectionType direction = EDirectionType::Forward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
	bool bidirectional = true;
};
