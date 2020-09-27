// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/PentiumDual_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePentiumDual_PlayerController() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDual_PlayerController_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDual_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
// End Cross Module References
	void APentiumDual_PlayerController::StaticRegisterNativesAPentiumDual_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_APentiumDual_PlayerController_NoRegister()
	{
		return APentiumDual_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APentiumDual_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APentiumDual_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDual_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PentiumDual_PlayerController.h" },
		{ "ModuleRelativePath", "PentiumDual_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APentiumDual_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APentiumDual_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APentiumDual_PlayerController_Statics::ClassParams = {
		&APentiumDual_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APentiumDual_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APentiumDual_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APentiumDual_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APentiumDual_PlayerController, 3127765517);
	template<> PENTIUMDUAL_API UClass* StaticClass<APentiumDual_PlayerController>()
	{
		return APentiumDual_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APentiumDual_PlayerController(Z_Construct_UClass_APentiumDual_PlayerController, &APentiumDual_PlayerController::StaticClass, TEXT("/Script/PentiumDual"), TEXT("APentiumDual_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APentiumDual_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
