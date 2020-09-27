// Fill out your copyright notice in the Description page of Project Settings.


#include "RangeWeaponBase.h"

// Sets default values
ARangeWeaponBase::ARangeWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComp = CreateAbstractDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = meshComp;
}

// Called when the game starts or when spawned
void ARangeWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARangeWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

