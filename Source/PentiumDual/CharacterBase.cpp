// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"

// Sets default values
ACharacterBase::ACharacterBase() 
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACharacterBase::attack_start()
{
	/*right_fist_collision_box->SetCollisionProfileName("Fist");
	right_fist_collision_box->SetNotifyRigidBodyCollision(true);*/
}

void ACharacterBase::attack_end()
{
	/*right_fist_collision_box->SetCollisionProfileName("NoCollision");
	right_fist_collision_box->SetNotifyRigidBodyCollision(false);*/
}

