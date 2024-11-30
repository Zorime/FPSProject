// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSThProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSTH_FPSThProjectile_generated_h
#error "FPSThProjectile.generated.h already included, missing '#pragma once' in FPSThProjectile.h"
#endif
#define FPSTH_FPSThProjectile_generated_h

#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSThProjectile(); \
	friend struct Z_Construct_UClass_AFPSThProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSThProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSTh"), NO_API) \
	DECLARE_SERIALIZER(AFPSThProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFPSThProjectile(AFPSThProjectile&&); \
	AFPSThProjectile(const AFPSThProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSThProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSThProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSThProjectile) \
	NO_API virtual ~AFPSThProjectile();


#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_12_PROLOG
#define FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSTH_API UClass* StaticClass<class AFPSThProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Study_UE_FPSTh_Source_FPSTh_FPSThProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
