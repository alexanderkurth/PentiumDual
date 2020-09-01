// Fill out your copyright notice in the Description page of Project Settings.


#include "IncrementPathIndex.h"
#include "PentiumDual_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PentiumDual_AICharacter.h"
#include "blackboard_keys.h"
#include "cmath"

UIncrementPathIndex::UIncrementPathIndex(FObjectInitializer const& object_initilizer)
{
	NodeName = TEXT("Increment Path Index");
}

EBTNodeResult::Type UIncrementPathIndex::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	// get the AI controller
	if (APentiumDual_AIController* const controller = Cast<APentiumDual_AIController>(owner_comp.GetAIOwner()))
	{
		if (APentiumDual_AICharacter* const npc = Cast<APentiumDual_AICharacter>(controller->GetPawn()))
{
	int const no_of_points = npc->get_patrol_path()->num();
			int const min_index = 0;
			int const max_index = no_of_points - 1;
		
			// get and set the black board index key
			int index = owner_comp.GetBlackboardComponent()->GetValueAsInt(GetSelectedBlackboardKey());
			if (bidirectional)
			{
				if (index >= max_index && direction == EDirectionType::Forward)
				{
					direction = EDirectionType::Reverse;
				}
				else if (index == min_index && direction == EDirectionType::Reverse)
				{
					direction = EDirectionType::Forward;
				}
			}
		
			owner_comp.GetBlackboardComponent()->SetValueAsInt(GetSelectedBlackboardKey(),
					(direction == EDirectionType::Forward ? std::abs(++index) : std::abs(--index)) % no_of_points);
		
			//finish with success
			FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
			return EBTNodeResult::Succeeded;
}
	}
	return EBTNodeResult::Failed;
}