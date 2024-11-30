// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSTH_MyPlayerState_generated_h
#error "MyPlayerState.generated.h already included, missing '#pragma once' in MyPlayerState.h"
#endif
#define FPSTH_MyPlayerState_generated_h

#define FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddScore);


#define FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerState(); \
	friend struct Z_Construct_UClass_AMyPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSTh"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerState)


#define FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayerState(AMyPlayerState&&); \
	AMyPlayerState(const AMyPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerState) \
	NO_API virtual ~AMyPlayerState();


#define FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_12_PROLOG
#define FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSTH_API UClass* StaticClass<class AMyPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
