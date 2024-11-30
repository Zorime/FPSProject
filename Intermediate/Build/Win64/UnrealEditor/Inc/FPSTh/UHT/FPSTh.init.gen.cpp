// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSTh_init() {}
	FPSTH_API UFunction* Z_Construct_UDelegateFunction_FPSTh_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPSTh;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPSTh()
	{
		if (!Z_Registration_Info_UPackage__Script_FPSTh.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSTh_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPSTh",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA655EDB1,
				0xD2B7FDE8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPSTh.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPSTh.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPSTh(Z_Construct_UPackage__Script_FPSTh, TEXT("/Script/FPSTh"), Z_Registration_Info_UPackage__Script_FPSTh, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA655EDB1, 0xD2B7FDE8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
