// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PENTIUMDUAL_PentiumDualCharacter_generated_h
#error "PentiumDualCharacter.generated.h already included, missing '#pragma once' in PentiumDualCharacter.h"
#endif
#define PENTIUMDUAL_PentiumDualCharacter_generated_h

#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_SPARSE_DATA
#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackHit);


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackHit);


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPentiumDualCharacter(); \
	friend struct Z_Construct_UClass_APentiumDualCharacter_Statics; \
public: \
	DECLARE_CLASS(APentiumDualCharacter, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentiumDual"), NO_API) \
	DECLARE_SERIALIZER(APentiumDualCharacter)


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPentiumDualCharacter(); \
	friend struct Z_Construct_UClass_APentiumDualCharacter_Statics; \
public: \
	DECLARE_CLASS(APentiumDualCharacter, ACharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PentiumDual"), NO_API) \
	DECLARE_SERIALIZER(APentiumDualCharacter)


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APentiumDualCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APentiumDualCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APentiumDualCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APentiumDualCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APentiumDualCharacter(APentiumDualCharacter&&); \
	NO_API APentiumDualCharacter(const APentiumDualCharacter&); \
public:


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APentiumDualCharacter(APentiumDualCharacter&&); \
	NO_API APentiumDualCharacter(const APentiumDualCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APentiumDualCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APentiumDualCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APentiumDualCharacter)


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APentiumDualCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APentiumDualCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__distraction_sound() { return STRUCT_OFFSET(APentiumDualCharacter, distraction_sound); } \
	FORCEINLINE static uint32 __PPO__melee_fist_attack_montage() { return STRUCT_OFFSET(APentiumDualCharacter, melee_fist_attack_montage); } \
	FORCEINLINE static uint32 __PPO__left_fist_collision_box() { return STRUCT_OFFSET(APentiumDualCharacter, left_fist_collision_box); } \
	FORCEINLINE static uint32 __PPO__right_fist_collision_box() { return STRUCT_OFFSET(APentiumDualCharacter, right_fist_collision_box); } \
	FORCEINLINE static uint32 __PPO__PunchAudioComponent() { return STRUCT_OFFSET(APentiumDualCharacter, PunchAudioComponent); }


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_16_PROLOG
#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_SPARSE_DATA \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_RPC_WRAPPERS \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_INCLASS \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_SPARSE_DATA \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_INCLASS_NO_PURE_DECLS \
	PentiumDual_Source_PentiumDual_PentiumDualCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PENTIUMDUAL_API UClass* StaticClass<class APentiumDualCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PentiumDual_Source_PentiumDual_PentiumDualCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
