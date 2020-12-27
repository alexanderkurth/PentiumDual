// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponShotgun.h"

UWeaponShotgun::UWeaponShotgun()
{

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> ShotgunWeaponObject(TEXT("SkeletalMesh'/Game/PrototypeWeap/Prototype_Shotgun.Prototype_Shotgun'"));
	if (ShotgunWeaponObject.Succeeded())
	{
		SetSkeletalMesh(ShotgunWeaponObject.Object);
	}
}
