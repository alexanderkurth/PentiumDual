// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/PentiumDual_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePentiumDual_AIController() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDual_AIController_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDual_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APentiumDual_AIController::execon_updated)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_updated_actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->on_updated(Z_Param_Out_updated_actors);
		P_NATIVE_END;
	}
	void APentiumDual_AIController::StaticRegisterNativesAPentiumDual_AIController()
	{
		UClass* Class = APentiumDual_AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "on_updated", &APentiumDual_AIController::execon_updated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics
	{
		struct PentiumDual_AIController_eventon_updated_Parms
		{
			TArray<AActor*> updated_actors;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_updated_actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_updated_actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_updated_actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::NewProp_updated_actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::NewProp_updated_actors = { "updated_actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDual_AIController_eventon_updated_Parms, updated_actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::NewProp_updated_actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::NewProp_updated_actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::NewProp_updated_actors_Inner = { "updated_actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::NewProp_updated_actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::NewProp_updated_actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PentiumDual_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APentiumDual_AIController, nullptr, "on_updated", nullptr, nullptr, sizeof(PentiumDual_AIController_eventon_updated_Parms), Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APentiumDual_AIController_on_updated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APentiumDual_AIController_on_updated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APentiumDual_AIController_NoRegister()
	{
		return APentiumDual_AIController::StaticClass();
	}
	struct Z_Construct_UClass_APentiumDual_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blackboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blackboardComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APentiumDual_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APentiumDual_AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APentiumDual_AIController_on_updated, "on_updated" }, // 2451296515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDual_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PentiumDual_AIController.h" },
		{ "ModuleRelativePath", "PentiumDual_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDual_AIController_Statics::NewProp_blackboardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PentiumDual_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDual_AIController_Statics::NewProp_blackboardComponent = { "blackboardComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDual_AIController, blackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDual_AIController_Statics::NewProp_blackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AIController_Statics::NewProp_blackboardComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APentiumDual_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDual_AIController_Statics::NewProp_blackboardComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APentiumDual_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APentiumDual_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APentiumDual_AIController_Statics::ClassParams = {
		&APentiumDual_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APentiumDual_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APentiumDual_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDual_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APentiumDual_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APentiumDual_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APentiumDual_AIController, 3370151240);
	template<> PENTIUMDUAL_API UClass* StaticClass<APentiumDual_AIController>()
	{
		return APentiumDual_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APentiumDual_AIController(Z_Construct_UClass_APentiumDual_AIController, &APentiumDual_AIController::StaticClass, TEXT("/Script/PentiumDual"), TEXT("APentiumDual_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APentiumDual_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
