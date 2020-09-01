// Fill out your copyright notice in the Description page of Project Settings.


#include "FindPathPoint.h"
#include "PentiumDual_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PentiumDual_AICharacter.h"
#include "blackboard_keys.h"


UFindPathPoint::UFindPathPoint(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Find Patrol Path Point");
}

EBTNodeResult::Type UFindPathPoint::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	// get the AI controller for the patrolling NPC

	if (APentiumDual_AIController* const controller = Cast<APentiumDual_AIController>(owner_comp.GetAIOwner()))
	{
		// get the current patrol path index from the blackboard
		int const index = owner_comp.GetBlackboardComponent()->GetValueAsInt(GetSelectedBlackboardKey());
	
		// use the index to get the current patrol path from the NPC's reference to the patrol path
		if (APentiumDual_AICharacter* const npc = Cast<APentiumDual_AICharacter>(controller->GetPawn()))
		{
			FVector const point = npc->get_patrol_path()->get_patrol_point(index);
		
			// transform this point to a global position using its parent
			FVector const global_point = npc->get_patrol_path()->GetActorTransform().TransformPosition(point);
		
			// write the current global path point to the blackboard
			owner_comp.GetBlackboardComponent()->SetValueAsVector(PatrolPathVectorKey.SelectedKeyName, global_point);
		
			// finish with success
			FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
		}
	}
	return EBTNodeResult::Failed;
}
