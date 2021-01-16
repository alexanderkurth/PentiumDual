// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PentiumDual/BasicSplineController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicSplineController() {}
// Cross Module References
	PENTIUMDUAL_API UClass* Z_Construct_UClass_ABasicSplineController_NoRegister();
	PENTIUMDUAL_API UClass* Z_Construct_UClass_ABasicSplineController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PentiumDual();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
// End Cross Module References
	void ABasicSplineController::StaticRegisterNativesABasicSplineController()
	{
	}
	UClass* Z_Construct_UClass_ABasicSplineController_NoRegister()
	{
		return ABasicSplineController::StaticClass();
	}
	struct Z_Construct_UClass_ABasicSplineController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pointArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_treeNumberSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_treeNumberSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleMatrix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CircleMatrix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angleX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angleX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angleZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angleZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angleY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angleY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicSplineController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PentiumDual,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BasicSplineController.h" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "SplineController" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = \"SplineController\")\n//USceneComponent* Root;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = \"SplineController\")\nUSceneComponent* Root;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_pointArray_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_pointArray = { "pointArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, pointArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_pointArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_pointArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_pointArray_Inner = { "pointArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, offset), METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_treeNumberSection_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_treeNumberSection = { "treeNumberSection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, treeNumberSection), METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_treeNumberSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_treeNumberSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_point_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_point = { "point", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_point_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_CircleMatrix_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_CircleMatrix = { "CircleMatrix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, CircleMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_CircleMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_CircleMatrix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleX_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleX = { "angleX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, angleX), METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleZ_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleZ = { "angleZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, angleZ), METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleY_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleY = { "angleY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, angleY), METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicSplineController_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "BasicSplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABasicSplineController_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABasicSplineController, radius), METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::NewProp_radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicSplineController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_SplineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_pointArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_pointArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_treeNumberSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_CircleMatrix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_angleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicSplineController_Statics::NewProp_radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicSplineController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicSplineController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicSplineController_Statics::ClassParams = {
		&ABasicSplineController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicSplineController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicSplineController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicSplineController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicSplineController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicSplineController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicSplineController, 2077544963);
	template<> PENTIUMDUAL_API UClass* StaticClass<ABasicSplineController>()
	{
		return ABasicSplineController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicSplineController(Z_Construct_UClass_ABasicSplineController, &ABasicSplineController::StaticClass, TEXT("/Script/PentiumDual"), TEXT("ABasicSplineController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicSplineController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
