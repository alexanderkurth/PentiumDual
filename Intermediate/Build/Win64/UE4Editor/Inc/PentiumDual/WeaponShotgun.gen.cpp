// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/WeaponShotgun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponShotgun() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_UWeaponShotgun_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_UWeaponShotgun();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
// End Cross Module References
	void UWeaponShotgun::StaticRegisterNativesUWeaponShotgun()
	{
	}
	UClass* Z_Construct_UClass_UWeaponShotgun_NoRegister()
	{
		return UWeaponShotgun::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponShotgun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponShotgun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponShotgun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "WeaponShotgun.h" },
		{ "ModuleRelativePath", "WeaponShotgun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponShotgun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponShotgun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponShotgun_Statics::ClassParams = {
		&UWeaponShotgun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponShotgun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponShotgun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponShotgun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponShotgun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponShotgun, 1400172632);
	template<> PENTIUMDUAL_API UClass* StaticClass<UWeaponShotgun>()
	{
		return UWeaponShotgun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponShotgun(Z_Construct_UClass_UWeaponShotgun, &UWeaponShotgun::StaticClass, TEXT("/Script/PentiumDual"), TEXT("UWeaponShotgun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponShotgun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
