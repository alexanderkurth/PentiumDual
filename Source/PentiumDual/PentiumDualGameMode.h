// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PentiumDual_AICharacter.h"
#include "PentiumDualGameMode.generated.h"

UCLASS(minimalapi)
class APentiumDualGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APentiumDualGameMode();
	void BeginPlay() override;
private:
	TSubclassOf<APentiumDual_AICharacter> FNPC_Class;
	TSubclassOf<APatrolPath> FPatrolPath_Class;

};



