// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSTh/TargetCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FPSTH_API UClass* Z_Construct_UClass_ATargetCube();
FPSTH_API UClass* Z_Construct_UClass_ATargetCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_FPSTh();
// End Cross Module References

// Begin Class ATargetCube Function GetMeshComponent
struct Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics
{
	struct TargetCube_eventGetMeshComponent_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetCube_eventGetMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetCube, nullptr, "GetMeshComponent", nullptr, nullptr, Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::TargetCube_eventGetMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::TargetCube_eventGetMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATargetCube_GetMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetCube_GetMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATargetCube::execGetMeshComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent();
	P_NATIVE_END;
}
// End Class ATargetCube Function GetMeshComponent

// Begin Class ATargetCube Function GetScore
struct Z_Construct_UFunction_ATargetCube_GetScore_Statics
{
	struct TargetCube_eventGetScore_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetCube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATargetCube_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetCube_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetCube_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetCube_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetCube_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetCube, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_ATargetCube_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATargetCube_GetScore_Statics::TargetCube_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATargetCube_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATargetCube_GetScore_Statics::TargetCube_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATargetCube_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetCube_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATargetCube::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class ATargetCube Function GetScore

// Begin Class ATargetCube Function SetImportanceTrue
struct Z_Construct_UFunction_ATargetCube_SetImportanceTrue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TargetCube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetCube_SetImportanceTrue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetCube, nullptr, "SetImportanceTrue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetCube_SetImportanceTrue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATargetCube_SetImportanceTrue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATargetCube_SetImportanceTrue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetCube_SetImportanceTrue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATargetCube::execSetImportanceTrue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImportanceTrue();
	P_NATIVE_END;
}
// End Class ATargetCube Function SetImportanceTrue

// Begin Class ATargetCube
void ATargetCube::StaticRegisterNativesATargetCube()
{
	UClass* Class = ATargetCube::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMeshComponent", &ATargetCube::execGetMeshComponent },
		{ "GetScore", &ATargetCube::execGetScore },
		{ "SetImportanceTrue", &ATargetCube::execSetImportanceTrue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetCube);
UClass* Z_Construct_UClass_ATargetCube_NoRegister()
{
	return ATargetCube::StaticClass();
}
struct Z_Construct_UClass_ATargetCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TargetCube.h" },
		{ "ModuleRelativePath", "TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFirstHit_MetaData[] = {
		{ "Category", "TargetCube" },
		{ "ModuleRelativePath", "TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportance_MetaData[] = {
		{ "Category", "TargetCube" },
		{ "ModuleRelativePath", "TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeVisual_MetaData[] = {
		{ "Category", "TargetCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddScore_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "TargetCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicRedMaterial_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "TargetCube.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bFirstHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstHit;
	static void NewProp_bImportance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeVisual;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddScore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMultiplier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicRedMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetCube_GetMeshComponent, "GetMeshComponent" }, // 1440223163
		{ &Z_Construct_UFunction_ATargetCube_GetScore, "GetScore" }, // 624947436
		{ &Z_Construct_UFunction_ATargetCube_SetImportanceTrue, "SetImportanceTrue" }, // 2870188590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ATargetCube_Statics::NewProp_bFirstHit_SetBit(void* Obj)
{
	((ATargetCube*)Obj)->bFirstHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_bFirstHit = { "bFirstHit", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATargetCube), &Z_Construct_UClass_ATargetCube_Statics::NewProp_bFirstHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFirstHit_MetaData), NewProp_bFirstHit_MetaData) };
void Z_Construct_UClass_ATargetCube_Statics::NewProp_bImportance_SetBit(void* Obj)
{
	((ATargetCube*)Obj)->bImportance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_bImportance = { "bImportance", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATargetCube), &Z_Construct_UClass_ATargetCube_Statics::NewProp_bImportance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportance_MetaData), NewProp_bImportance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_CubeVisual = { "CubeVisual", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCube, CubeVisual), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeVisual_MetaData), NewProp_CubeVisual_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_AddScore = { "AddScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCube, AddScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddScore_MetaData), NewProp_AddScore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCube, ScaleMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMultiplier_MetaData), NewProp_ScaleMultiplier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetCube_Statics::NewProp_DynamicRedMaterial = { "DynamicRedMaterial", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetCube, DynamicRedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicRedMaterial_MetaData), NewProp_DynamicRedMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_bFirstHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_bImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_CubeVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_AddScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_ScaleMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetCube_Statics::NewProp_DynamicRedMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FPSTh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetCube_Statics::ClassParams = {
	&ATargetCube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATargetCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetCube_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetCube()
{
	if (!Z_Registration_Info_UClass_ATargetCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetCube.OuterSingleton, Z_Construct_UClass_ATargetCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetCube.OuterSingleton;
}
template<> FPSTH_API UClass* StaticClass<ATargetCube>()
{
	return ATargetCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetCube);
ATargetCube::~ATargetCube() {}
// End Class ATargetCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetCube, ATargetCube::StaticClass, TEXT("ATargetCube"), &Z_Registration_Info_UClass_ATargetCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetCube), 1262077874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCube_h_1212065407(TEXT("/Script/FPSTh"),
	Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Study_UE_FPSTh_Source_FPSTh_TargetCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
