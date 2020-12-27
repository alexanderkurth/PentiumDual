// Fill out your copyright notice in the Description page of Project Settings.


#include "RangeAttack.h"
#include "PentiumDual_AIController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"



URangeAttack::URangeAttack(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Range Attack");
}

EBTNodeResult::Type URangeAttack::ExecuteTask(UBehaviorTreeComponent& owner_comp, uint8* node_memory)
{
	//get npc

	//if (APentiumDual_AIController* const cont = Cast<APentiumDual_AIController>(owner_comp.GetAIOwner()))
	//{
	//	if (APentiumDual_AICharacter* const npc = Cast<APentiumDual_AICharacter>(cont->GetPawn()))
	//	{
	//		if (montage_has_finished(npc))
	//		{
	//			npc->AttackInput();
	//		}
	//	}
	//
	//	FinishLatentTask(owner_comp, EBTNodeResult::Succeeded);
	//	return EBTNodeResult::Succeeded;
	//}
	return EBTNodeResult::Failed;
}

//bool URangeAttack::montage_has_finished(APentiumDual_AICharacter* const npc)
//{
//	return npc->GetMesh()->GetAnimInstance()->Montage_GetIsStopped(npc->get_montage());
//}
