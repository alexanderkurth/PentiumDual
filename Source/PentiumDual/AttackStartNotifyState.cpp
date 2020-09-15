// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackStartNotifyState.h"
#include "PentiumDualCharacter.h"
#include "PentiumDual_AICharacter.h"


void UAttackStartNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		APentiumDualCharacter* Player = Cast<APentiumDualCharacter>(MeshComp->GetOwner());
		if (Player)
		{
			Player->AttackEnd();
		}

		APentiumDual_AICharacter* NPC = Cast<APentiumDual_AICharacter>(MeshComp->GetOwner());
		if (NPC)
		{
			NPC->AttackEnd();
		}
	}
}

void UAttackStartNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		APentiumDualCharacter* Player = Cast<APentiumDualCharacter>(MeshComp->GetOwner());
		if (Player)
		{
			Player->AttackStart();
		}

		APentiumDual_AICharacter* NPC = Cast<APentiumDual_AICharacter>(MeshComp->GetOwner());
		if (NPC)
		{
			NPC->AttackStart();
		}
	}
}
