// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSThPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSTH_FPSThPlayerController_generated_h
#error "FPSThPlayerController.generated.h already included, missing '#pragma once' in FPSThPlayerController.h"
#endif
#define FPSTH_FPSThPlayerController_generated_h

#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSThPlayerController(); \
	friend struct Z_Construct_UClass_AFPSThPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFPSThPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSTh"), NO_API) \
	DECLARE_SERIALIZER(AFPSThPlayerController)


#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSThPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSThPlayerController(AFPSThPlayerController&&); \
	AFPSThPlayerController(const AFPSThPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSThPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSThPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSThPlayerController) \
	NO_API virtual ~AFPSThPlayerController();


#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThPlayerController_h_14_PROLOG
#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Study_UE_FPSTh_Source_FPSTh_FPSThPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Study_UE_FPSTh_Source_FPSTh_FPSThPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSTH_API UClass* StaticClass<class AFPSThPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Study_UE_FPSTh_Source_FPSTh_FPSThPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
