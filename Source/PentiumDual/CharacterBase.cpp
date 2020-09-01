// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"

// Sets default values
ACharacterBase::ACharacterBase() : right_fist_collision_box(CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("RightFistCollisionBox")))
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (right_fist_collision_box)
	{
		FVector const extent(10.0f);
		right_fist_collision_box->SetBoxExtent(extent, false);
		right_fist_collision_box->SetCollisionProfileName("NoCollision");
	}

}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
	if (right_fist_collision_box)
	{

		FAttachmentTransformRules const rules(
			EAttachmentRule::SnapToTarget,
			EAttachmentRule::SnapToTarget,
			EAttachmentRule::KeepWorld,
			false);

		right_fist_collision_box->AttachToComponent(GetMesh(), rules, "hand_r_socket");

		right_fist_collision_box->SetRelativeLocation(FVector(-7.0f, 0.0f, 0.0f));
	}
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACharacterBase::attack_start()
{
	right_fist_collision_box->SetCollisionProfileName("Fist");
	right_fist_collision_box->SetNotifyRigidBodyCollision(true);
}

void ACharacterBase::attack_end()
{
	right_fist_collision_box->SetCollisionProfileName("NoCollision");
	right_fist_collision_box->SetNotifyRigidBodyCollision(false);
}

