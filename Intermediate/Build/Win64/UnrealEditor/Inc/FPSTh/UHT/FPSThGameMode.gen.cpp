// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSTh/FPSThGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSThGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FPSTH_API UClass* Z_Construct_UClass_AFPSThGameMode();
FPSTH_API UClass* Z_Construct_UClass_AFPSThGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSTh();
// End Cross Module References

// Begin Class AFPSThGameMode
void AFPSThGameMode::StaticRegisterNativesAFPSThGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSThGameMode);
UClass* Z_Construct_UClass_AFPSThGameMode_NoRegister()
{
	return AFPSThGameMode::StaticClass();
}
struct Z_Construct_UClass_AFPSThGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSThGameMode.h" },
		{ "ModuleRelativePath", "FPSThGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSThGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSThGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSTh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSThGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSThGameMode_Statics::ClassParams = {
	&AFPSThGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSThGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSThGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSThGameMode()
{
	if (!Z_Registration_Info_UClass_AFPSThGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSThGameMode.OuterSingleton, Z_Construct_UClass_AFPSThGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSThGameMode.OuterSingleton;
}
template<> FPSTH_API UClass* StaticClass<AFPSThGameMode>()
{
	return AFPSThGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSThGameMode);
AFPSThGameMode::~AFPSThGameMode() {}
// End Class AFPSThGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_FPSThGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSThGameMode, AFPSThGameMode::StaticClass, TEXT("AFPSThGameMode"), &Z_Registration_Info_UClass_AFPSThGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSThGameMode), 783595070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_FPSThGameMode_h_1032964906(TEXT("/Script/FPSTh"),
	Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_FPSThGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_FPSThGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
