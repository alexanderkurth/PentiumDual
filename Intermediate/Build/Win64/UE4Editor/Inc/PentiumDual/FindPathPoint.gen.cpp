// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/FindPathPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindPathPoint() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_UFindPathPoint_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_UFindPathPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UFindPathPoint::StaticRegisterNativesUFindPathPoint()
	{
	}
	UClass* Z_Construct_UClass_UFindPathPoint_NoRegister()
	{
		return UFindPathPoint::StaticClass();
	}
	struct Z_Construct_UClass_UFindPathPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPathVectorKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PatrolPathVectorKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindPathPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPathPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FindPathPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FindPathPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPathPoint_Statics::NewProp_PatrolPathVectorKey_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "FindPathPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFindPathPoint_Statics::NewProp_PatrolPathVectorKey = { "PatrolPathVectorKey", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPathPoint, PatrolPathVectorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UFindPathPoint_Statics::NewProp_PatrolPathVectorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPathPoint_Statics::NewProp_PatrolPathVectorKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindPathPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPathPoint_Statics::NewProp_PatrolPathVectorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindPathPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindPathPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindPathPoint_Statics::ClassParams = {
		&UFindPathPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindPathPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindPathPoint_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindPathPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPathPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindPathPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindPathPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindPathPoint, 4281092921);
	template<> PENTIUMDUAL_API UClass* StaticClass<UFindPathPoint>()
	{
		return UFindPathPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindPathPoint(Z_Construct_UClass_UFindPathPoint, &UFindPathPoint::StaticClass, TEXT("/Script/PentiumDual"), TEXT("UFindPathPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindPathPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
