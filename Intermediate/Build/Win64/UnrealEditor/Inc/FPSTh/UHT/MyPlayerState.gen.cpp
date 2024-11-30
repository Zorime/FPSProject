// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSTh/MyPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
FPSTH_API UClass* Z_Construct_UClass_AMyPlayerState();
FPSTH_API UClass* Z_Construct_UClass_AMyPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSTh();
// End Cross Module References

// Begin Class AMyPlayerState Function AddScore
struct Z_Construct_UFunction_AMyPlayerState_AddScore_Statics
{
	struct MyPlayerState_eventAddScore_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPlayerState_eventAddScore_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerState, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::MyPlayerState_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::MyPlayerState_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPlayerState_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerState_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayerState::execAddScore)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Value);
	P_NATIVE_END;
}
// End Class AMyPlayerState Function AddScore

// Begin Class AMyPlayerState
void AMyPlayerState::StaticRegisterNativesAMyPlayerState()
{
	UClass* Class = AMyPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &AMyPlayerState::execAddScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerState);
UClass* Z_Construct_UClass_AMyPlayerState_NoRegister()
{
	return AMyPlayerState::StaticClass();
}
struct Z_Construct_UClass_AMyPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyPlayerState.h" },
		{ "ModuleRelativePath", "MyPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyScore_MetaData[] = {
		{ "Category", "MyPlayerState" },
		{ "ModuleRelativePath", "MyPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MyScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerState_AddScore, "AddScore" }, // 1283050573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayerState_Statics::NewProp_MyScore = { "MyScore", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayerState, MyScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyScore_MetaData), NewProp_MyScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerState_Statics::NewProp_MyScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSTh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerState_Statics::ClassParams = {
	&AMyPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayerState()
{
	if (!Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton, Z_Construct_UClass_AMyPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayerState.OuterSingleton;
}
template<> FPSTH_API UClass* StaticClass<AMyPlayerState>()
{
	return AMyPlayerState::StaticClass();
}
AMyPlayerState::AMyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerState);
AMyPlayerState::~AMyPlayerState() {}
// End Class AMyPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerState, AMyPlayerState::StaticClass, TEXT("AMyPlayerState"), &Z_Registration_Info_UClass_AMyPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerState), 98288926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_2053050367(TEXT("/Script/FPSTh"),
	Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_MyPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
