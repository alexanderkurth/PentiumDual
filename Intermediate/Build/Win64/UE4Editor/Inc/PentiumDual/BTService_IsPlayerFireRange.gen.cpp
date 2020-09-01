// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/BTService_IsPlayerFireRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_IsPlayerFireRange() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_UBTService_IsPlayerFireRange_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_UBTService_IsPlayerFireRange();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
// End Cross Module References
	void UBTService_IsPlayerFireRange::StaticRegisterNativesUBTService_IsPlayerFireRange()
	{
	}
	UClass* Z_Construct_UClass_UBTService_IsPlayerFireRange_NoRegister()
	{
		return UBTService_IsPlayerFireRange::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fire_range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fire_range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTService_IsPlayerFireRange.h" },
		{ "ModuleRelativePath", "BTService_IsPlayerFireRange.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::NewProp_fire_range_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BTService_IsPlayerFireRange.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::NewProp_fire_range = { "fire_range", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_IsPlayerFireRange, fire_range), METADATA_PARAMS(Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::NewProp_fire_range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::NewProp_fire_range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::NewProp_fire_range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_IsPlayerFireRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::ClassParams = {
		&UBTService_IsPlayerFireRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_IsPlayerFireRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_IsPlayerFireRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_IsPlayerFireRange, 3477955922);
	template<> PENTIUMDUAL_API UClass* StaticClass<UBTService_IsPlayerFireRange>()
	{
		return UBTService_IsPlayerFireRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_IsPlayerFireRange(Z_Construct_UClass_UBTService_IsPlayerFireRange, &UBTService_IsPlayerFireRange::StaticClass, TEXT("/Script/PentiumDual"), TEXT("UBTService_IsPlayerFireRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_IsPlayerFireRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
