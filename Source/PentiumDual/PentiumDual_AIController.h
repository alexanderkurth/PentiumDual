// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "PentiumDual_AIController.generated.h"

/**
 * 
 */
UCLASS()
class PENTIUMDUAL_API APentiumDual_AIController : public AAIController
{
	GENERATED_BODY()
	
public :
	APentiumDual_AIController(FObjectInitializer const& object_initializer = FObjectInitializer::Get());
	void OnPossess(APawn* InPawn) override;

private :
	UPROPERTY()
	UBlackboardComponent* blackboardComponent;

	class UAISenseConfig_Sight* sight_config;

	class UAISenseConfig_Hearing* hearing_config;

	UFUNCTION()
	void on_updated(TArray<AActor*> const& updated_actors);

	void setup_perception_system();
};
