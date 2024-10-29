// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_Raider_init() {}
	UE5_RAIDER_API UFunction* Z_Construct_UDelegateFunction_UE5_Raider_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UE5_Raider;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UE5_Raider()
	{
		if (!Z_Registration_Info_UPackage__Script_UE5_Raider.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UE5_Raider_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UE5_Raider",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x636C893A,
				0x534F851B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UE5_Raider.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UE5_Raider.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UE5_Raider(Z_Construct_UPackage__Script_UE5_Raider, TEXT("/Script/UE5_Raider"), Z_Registration_Info_UPackage__Script_UE5_Raider, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x636C893A, 0x534F851B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
