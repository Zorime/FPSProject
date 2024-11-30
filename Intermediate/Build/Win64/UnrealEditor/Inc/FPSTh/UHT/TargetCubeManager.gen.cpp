// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSTh/TargetCubeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetCubeManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FPSTH_API UClass* Z_Construct_UClass_ATargetCube_NoRegister();
FPSTH_API UClass* Z_Construct_UClass_ATargetCubeManager();
FPSTH_API UClass* Z_Construct_UClass_ATargetCubeManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSTh();
// End Cross Module References

// Begin Class ATargetCubeManager
void ATargetCubeManager::StaticRegisterNativesATargetCubeManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetCubeManager);
UClass* Z_Construct_UClass_ATargetCubeManager_NoRegister()
{
	return ATargetCubeManager::StaticClass();
}
struct Z_Construct_UClass_ATargetCubeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TargetCubeManager.h" },
		{ "ModuleRelativePath", "TargetCubeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeArray_MetaData[] = {
		{ "Category", "TargetCubeManager" },
		{ "ModuleRelativePath", "TargetCubeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandmCount_MetaData[] = {
		{ "Category", "TargetCubeManager" },
		{ "ModuleRelativePath", "TargetCubeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CubeArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandmCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetCubeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetCubeManager_Statics::NewProp_CubeArray_Inner = { "CubeArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATargetCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATargetCubeManager_Statics::NewProp_CubeArray = { "CubeArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCubeManager, CubeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeArray_MetaData), NewProp_CubeArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetCubeManager_Statics::NewProp_RandmCount = { "RandmCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCubeManager, RandmCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandmCount_MetaData), NewProp_RandmCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetCubeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCubeManager_Statics::NewProp_CubeArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCubeManager_Statics::NewProp_CubeArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCubeManager_Statics::NewProp_RandmCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCubeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetCubeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSTh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCubeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetCubeManager_Statics::ClassParams = {
	&ATargetCubeManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATargetCubeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCubeManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCubeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetCubeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetCubeManager()
{
	if (!Z_Registration_Info_UClass_ATargetCubeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetCubeManager.OuterSingleton, Z_Construct_UClass_ATargetCubeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetCubeManager.OuterSingleton;
}
template<> FPSTH_API UClass* StaticClass<ATargetCubeManager>()
{
	return ATargetCubeManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetCubeManager);
ATargetCubeManager::~ATargetCubeManager() {}
// End Class ATargetCubeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCubeManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetCubeManager, ATargetCubeManager::StaticClass, TEXT("ATargetCubeManager"), &Z_Registration_Info_UClass_ATargetCubeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetCubeManager), 569804582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCubeManager_h_2862881697(TEXT("/Script/FPSTh"),
	Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCubeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCubeManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
