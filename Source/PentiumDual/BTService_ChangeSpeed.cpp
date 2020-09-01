// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_ChangeSpeed.h"
#include "PentiumDual_AICharacter.h"
#include "PentiumDual_AIController.h"
#include "GameFramework/CharacterMovementComponent.h"

UBTService_ChangeSpeed::UBTService_ChangeSpeed()
{
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Change Speed");
}

void UBTService_ChangeSpeed::OnBecomeRelevant(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	Super::OnBecomeRelevant(owner_comp, node_memory);
	if (auto const cont = owner_comp.GetAIOwner())
	{
		if (APentiumDual_AICharacter* const npc = Cast<APentiumDual_AICharacter>(cont->GetPawn()))
		{
			npc->GetCharacterMovement()->MaxWalkSpeed = speed;
		}
	}
}

FString UBTService_ChangeSpeed::GetStaticServiceDescription() const
{
	return FString("Change the NPC speed");
}
