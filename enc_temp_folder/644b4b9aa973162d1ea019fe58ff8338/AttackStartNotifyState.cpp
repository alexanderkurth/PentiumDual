// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackStartNotifyState.h"
#include "PentiumDualCharacter.h"


void UAttackStartNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		APentiumDualCharacter* Player = Cast<APentiumDualCharacter>(MeshComp->GetOwner());
		if (Player)
		{
			Player->AttackEnd();
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
	}
}
