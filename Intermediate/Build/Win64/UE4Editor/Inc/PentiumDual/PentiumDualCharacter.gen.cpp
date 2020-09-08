// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/PentiumDualCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePentiumDualCharacter() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDualCharacter_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_APentiumDualCharacter();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_ACharacterBase();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APentiumDualCharacter::execon_attack_overlap_end)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped_component);
		P_GET_OBJECT(AActor,Z_Param_other_actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_component);
		P_GET_PROPERTY(FIntProperty,Z_Param_other_body_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->on_attack_overlap_end(Z_Param_overlapped_component,Z_Param_other_actor,Z_Param_other_component,Z_Param_other_body_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APentiumDualCharacter::execon_attack_overlap_begin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped_component);
		P_GET_OBJECT(AActor,Z_Param_other_actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_component);
		P_GET_PROPERTY(FIntProperty,Z_Param_other_body_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->on_attack_overlap_begin(Z_Param_overlapped_component,Z_Param_other_actor,Z_Param_other_component,Z_Param_other_body_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APentiumDualCharacter::execOnAttackHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void APentiumDualCharacter::StaticRegisterNativesAPentiumDualCharacter()
	{
		UClass* Class = APentiumDualCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "on_attack_overlap_begin", &APentiumDualCharacter::execon_attack_overlap_begin },
			{ "on_attack_overlap_end", &APentiumDualCharacter::execon_attack_overlap_end },
			{ "OnAttackHit", &APentiumDualCharacter::execOnAttackHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics
	{
		struct PentiumDualCharacter_eventon_attack_overlap_begin_Parms
		{
			const UPrimitiveComponent* overlapped_component;
			const AActor* other_actor;
			UPrimitiveComponent* other_component;
			int32 other_body_index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_body_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_other_body_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapped_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapped_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_body_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_body_index = { "other_body_index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_begin_Parms, other_body_index), METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_body_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_body_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_component = { "other_component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_begin_Parms, other_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_actor = { "other_actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_begin_Parms, other_actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_overlapped_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_overlapped_component = { "overlapped_component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_begin_Parms, overlapped_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_overlapped_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_overlapped_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_body_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_other_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::NewProp_overlapped_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APentiumDualCharacter, nullptr, "on_attack_overlap_begin", nullptr, nullptr, sizeof(PentiumDualCharacter_eventon_attack_overlap_begin_Parms), Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics
	{
		struct PentiumDualCharacter_eventon_attack_overlap_end_Parms
		{
			const UPrimitiveComponent* overlapped_component;
			const AActor* other_actor;
			UPrimitiveComponent* other_component;
			int32 other_body_index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_body_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_other_body_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapped_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapped_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_body_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_body_index = { "other_body_index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_end_Parms, other_body_index), METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_body_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_body_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_component = { "other_component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_end_Parms, other_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_actor = { "other_actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_end_Parms, other_actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_overlapped_component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_overlapped_component = { "overlapped_component", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventon_attack_overlap_end_Parms, overlapped_component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_overlapped_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_overlapped_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_body_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_other_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::NewProp_overlapped_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APentiumDualCharacter, nullptr, "on_attack_overlap_end", nullptr, nullptr, sizeof(PentiumDualCharacter_eventon_attack_overlap_end_Parms), Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics
	{
		struct PentiumDualCharacter_eventOnAttackHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventOnAttackHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventOnAttackHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventOnAttackHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventOnAttackHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PentiumDualCharacter_eventOnAttackHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APentiumDualCharacter, nullptr, "OnAttackHit", nullptr, nullptr, sizeof(PentiumDualCharacter_eventOnAttackHit_Parms), Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APentiumDualCharacter_NoRegister()
	{
		return APentiumDualCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APentiumDualCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchAudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PunchAudioComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_right_fist_collision_box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_right_fist_collision_box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_left_fist_collision_box_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_left_fist_collision_box;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_melee_fist_attack_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_melee_fist_attack_montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distraction_sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_distraction_sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PunchSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APentiumDualCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APentiumDualCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_begin, "on_attack_overlap_begin" }, // 3513797923
		{ &Z_Construct_UFunction_APentiumDualCharacter_on_attack_overlap_end, "on_attack_overlap_end" }, // 2618558635
		{ &Z_Construct_UFunction_APentiumDualCharacter_OnAttackHit, "OnAttackHit" }, // 2415356691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PentiumDualCharacter.h" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchAudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchAudioComponent = { "PunchAudioComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, PunchAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchAudioComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_right_fist_collision_box_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_right_fist_collision_box = { "right_fist_collision_box", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, right_fist_collision_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_right_fist_collision_box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_right_fist_collision_box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_left_fist_collision_box_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_left_fist_collision_box = { "left_fist_collision_box", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, left_fist_collision_box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_left_fist_collision_box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_left_fist_collision_box_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_melee_fist_attack_montage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "Comment", "//melee fist montage\n" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
		{ "ToolTip", "melee fist montage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_melee_fist_attack_montage = { "melee_fist_attack_montage", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, melee_fist_attack_montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_melee_fist_attack_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_melee_fist_attack_montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_montage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_distraction_sound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_distraction_sound = { "distraction_sound", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, distraction_sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_distraction_sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_distraction_sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchSoundCue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchSoundCue = { "PunchSoundCue", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, PunchSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PentiumDualCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APentiumDualCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APentiumDualCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchAudioComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_right_fist_collision_box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_left_fist_collision_box,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_melee_fist_attack_montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_distraction_sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_PunchSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APentiumDualCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APentiumDualCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APentiumDualCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APentiumDualCharacter_Statics::ClassParams = {
		&APentiumDualCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APentiumDualCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APentiumDualCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APentiumDualCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APentiumDualCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APentiumDualCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APentiumDualCharacter, 3134739338);
	template<> PENTIUMDUAL_API UClass* StaticClass<APentiumDualCharacter>()
	{
		return APentiumDualCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APentiumDualCharacter(Z_Construct_UClass_APentiumDualCharacter, &APentiumDualCharacter::StaticClass, TEXT("/Script/PentiumDual"), TEXT("APentiumDualCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APentiumDualCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
