// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_IsPlayerFireRange.h"
#include "PentiumDual_AIController.h"
#include "PentiumDual_AICharacter.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "blackboard_keys.h"

UBTService_IsPlayerFireRange::UBTService_IsPlayerFireRange()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player In Fire Range");
}

void UBTService_IsPlayerFireRange::OnBecomeRelevant(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	Super::OnBecomeRelevant(owner_comp, node_memory);

	//get the npc
	if (APentiumDual_AIController* const cont = Cast<APentiumDual_AIController>(owner_comp.GetAIOwner()))
	{
		if (APentiumDual_AICharacter* const npc = Cast<APentiumDual_AICharacter>(cont->GetPawn()))
	{
		
			//get player character
			ACharacter* const player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		
			//write true or false depending on wheter the player is within melee_range
			owner_comp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(),
				npc->GetDistanceTo(player) <= fire_range);
	}
	}
}
