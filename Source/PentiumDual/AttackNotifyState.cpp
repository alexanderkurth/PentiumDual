// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackNotifyState.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Components/SkeletalMeshComponent.h"
#include "PentiumDualCharacter.h"
#include "PentiumDual_AICharacter.h"


void UAttackNotifyState::NotifyBegin(USkeletalMeshComponent* const mesh, UAnimSequenceBase* const animation, float const total_duration)
{
	UE_LOG(LogTemp, Warning, TEXT("Notify Begin"));

	if (mesh != NULL && mesh->GetOwner() != NULL)
	{
		if (APentiumDualCharacter* const character = Cast<APentiumDualCharacter>(mesh->GetOwner()))
		{
			character->AttackStart();
		}

		APentiumDual_AICharacter* NPC = Cast<APentiumDual_AICharacter>(mesh->GetOwner());
		if (NPC)
		{
			NPC->AttackStart();
		}
	}
}

void UAttackNotifyState::NotifyEnd(USkeletalMeshComponent* const mesh, UAnimSequenceBase* const animation)
{
	UE_LOG(LogTemp, Warning, TEXT("Notify End"));

	if (mesh != NULL && mesh->GetOwner() != NULL)
	{
		if (APentiumDualCharacter* const character = Cast<APentiumDualCharacter>(mesh->GetOwner()))
		{
			character->AttackEnd();
		}

		APentiumDual_AICharacter* NPC = Cast<APentiumDual_AICharacter>(mesh->GetOwner());
		if (NPC)
		{
			NPC->AttackEnd();
		}
	}
}
