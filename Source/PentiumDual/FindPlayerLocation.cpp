// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "PentiumDual_AIController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "blackboard_keys.h"

UFindPlayerLocation::UFindPlayerLocation(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UFindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	// get player character and the NPC's controller

	if (ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
	{
		// get player location to use as an origin
		FVector const player_location = player->GetActorLocation();
		if (search_random)
		{
			FNavLocation loc;
	
			// get the navigation system and generate a random location near the player
			if (UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				if (nav_sys->GetRandomPointInNavigableRadius(player_location, search_radius, loc, nullptr))
				{
					owner_comp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), loc.Location);
				}
			}
		}
		else
		{
			owner_comp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), player_location);
		}
		// finish with success
		FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}