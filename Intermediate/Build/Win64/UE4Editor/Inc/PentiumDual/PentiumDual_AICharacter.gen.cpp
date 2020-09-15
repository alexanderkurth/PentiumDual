// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/PentiumDual_AICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePentiumDual_AICharacter() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDual_AICharacter_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDual_AICharacter();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void APentiumDual_AICharacter::StaticRegisterNativesAPentiumDual_AICharacter()
	{
	}
	UClass* Z_Construct_UClass_APentiumDual_AICharacter_NoRegister()
	{
		return APentiumDual_AICharacter::StaticClass();
	}
	struct Z_Construct_UClass_APentiumDual_AICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_behaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_behaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrol_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_patrol_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PunchSoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APentiumDual_AICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDual_AICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PentiumDual_AICharacter.h" },
		{ "ModuleRelativePath", "PentiumDual_AICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_behaviorTree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PentiumDual_AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_behaviorTree = { "behaviorTree", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDual_AICharacter, behaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_behaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_behaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_patrol_path_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "PentiumDual_AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_patrol_path = { "patrol_path", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDual_AICharacter, patrol_path), Z_Construct_UClass_APatrolPath_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_patrol_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_patrol_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_PunchSoundCue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "Comment", "//void AttackEnd();\n" },
		{ "ModuleRelativePath", "PentiumDual_AICharacter.h" },
		{ "ToolTip", "void AttackEnd();" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_PunchSoundCue = { "PunchSoundCue", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDual_AICharacter, PunchSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_PunchSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_PunchSoundCue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APentiumDual_AICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_behaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_patrol_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDual_AICharacter_Statics::NewProp_PunchSoundCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APentiumDual_AICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APentiumDual_AICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APentiumDual_AICharacter_Statics::ClassParams = {
		&APentiumDual_AICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APentiumDual_AICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APentiumDual_AICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APentiumDual_AICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APentiumDual_AICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APentiumDual_AICharacter, 3524150136);
	template<> PENTIUMDUAL_API UClass* StaticClass<APentiumDual_AICharacter>()
	{
		return APentiumDual_AICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APentiumDual_AICharacter(Z_Construct_UClass_APentiumDual_AICharacter, &APentiumDual_AICharacter::StaticClass, TEXT("/Script/PentiumDual"), TEXT("APentiumDual_AICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APentiumDual_AICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
