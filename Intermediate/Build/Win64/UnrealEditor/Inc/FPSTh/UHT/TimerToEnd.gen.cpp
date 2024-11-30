// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSTh/TimerToEnd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerToEnd() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FPSTH_API UClass* Z_Construct_UClass_ATimerToEnd();
FPSTH_API UClass* Z_Construct_UClass_ATimerToEnd_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSTh();
// End Cross Module References

// Begin Class ATimerToEnd
void ATimerToEnd::StaticRegisterNativesATimerToEnd()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimerToEnd);
UClass* Z_Construct_UClass_ATimerToEnd_NoRegister()
{
	return ATimerToEnd::StaticClass();
}
struct Z_Construct_UClass_ATimerToEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TimerToEnd.h" },
		{ "ModuleRelativePath", "TimerToEnd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[] = {
		{ "Category", "TimerToEnd" },
		{ "ModuleRelativePath", "TimerToEnd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerToEnd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimerToEnd_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimerToEnd, Timer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timer_MetaData), NewProp_Timer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerToEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerToEnd_Statics::NewProp_Timer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerToEnd_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimerToEnd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSTh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerToEnd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimerToEnd_Statics::ClassParams = {
	&ATimerToEnd::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATimerToEnd_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimerToEnd_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerToEnd_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimerToEnd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimerToEnd()
{
	if (!Z_Registration_Info_UClass_ATimerToEnd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimerToEnd.OuterSingleton, Z_Construct_UClass_ATimerToEnd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimerToEnd.OuterSingleton;
}
template<> FPSTH_API UClass* StaticClass<ATimerToEnd>()
{
	return ATimerToEnd::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerToEnd);
ATimerToEnd::~ATimerToEnd() {}
// End Class ATimerToEnd

// Begin Registration
struct Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TimerToEnd_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimerToEnd, ATimerToEnd::StaticClass, TEXT("ATimerToEnd"), &Z_Registration_Info_UClass_ATimerToEnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimerToEnd), 1371187346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TimerToEnd_h_907001260(TEXT("/Script/FPSTh"),
	Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TimerToEnd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TimerToEnd_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
