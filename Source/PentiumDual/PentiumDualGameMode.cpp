// Copyright Epic Games, Inc. All Rights Reserved.

#include "PentiumDualGameMode.h"
#include "PentiumDualCharacter.h"
#include "UObject/ConstructorHelpers.h"

APentiumDualGameMode::APentiumDualGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	static ConstructorHelpers::FClassFinder<APentiumDual_AICharacter> npc(TEXT("/Game/AI/BP_AICharacter"));
	if (npc.Succeeded())
	{
		FNPC_Class = npc.Class;
	}
	static ConstructorHelpers::FClassFinder<APatrolPath> patrol(TEXT("/Game/AI/BP_PatrolPath"));
	if (patrol.Succeeded())
	{
		FPatrolPath_Class = patrol.Class;
	}
}

void APentiumDualGameMode::BeginPlay()
{
	Super::BeginPlay();
	if (FNPC_Class && FPatrolPath_Class)
	{
		FVector const NPC_loc{ -1011.29126f, -703.557251f, 226.001602f };
		FVector const PatrolPath_loc{ -605.f, -1110.f, 130.f };
		FActorSpawnParameters const params;
		if (auto const path = GetWorld()->SpawnActor<APatrolPath>(FPatrolPath_Class, PatrolPath_loc, FRotator::ZeroRotator, params))
		{
			path->add_patrol_point(FVector{ 0.f, 0.f, 0.f });
			path->add_patrol_point(FVector{ 1550.f, -30.f, 0.f });
			path->add_patrol_point(FVector{ 1580.f, 2290.f, 0.f });
			path->add_patrol_point(FVector{ 90.f, 2350.f, 0.f });
			path->add_patrol_point(FVector{ 0.f, 1150.f, 0.f });
			if (auto const NPC = GetWorld()->SpawnActor<APentiumDual_AICharacter>(FNPC_Class, NPC_loc, FRotator::ZeroRotator, params))
			{
				NPC->SetPatrolPath(path);
			}
		}
	}
}
