// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Raider/UE5_RaiderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_RaiderGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UE5_RAIDER_API UClass* Z_Construct_UClass_AUE5_RaiderGameMode();
UE5_RAIDER_API UClass* Z_Construct_UClass_AUE5_RaiderGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Raider();
// End Cross Module References

// Begin Class AUE5_RaiderGameMode
void AUE5_RaiderGameMode::StaticRegisterNativesAUE5_RaiderGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_RaiderGameMode);
UClass* Z_Construct_UClass_AUE5_RaiderGameMode_NoRegister()
{
	return AUE5_RaiderGameMode::StaticClass();
}
struct Z_Construct_UClass_AUE5_RaiderGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_RaiderGameMode.h" },
		{ "ModuleRelativePath", "UE5_RaiderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_RaiderGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUE5_RaiderGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Raider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_RaiderGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_RaiderGameMode_Statics::ClassParams = {
	&AUE5_RaiderGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_RaiderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_RaiderGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE5_RaiderGameMode()
{
	if (!Z_Registration_Info_UClass_AUE5_RaiderGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_RaiderGameMode.OuterSingleton, Z_Construct_UClass_AUE5_RaiderGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE5_RaiderGameMode.OuterSingleton;
}
template<> UE5_RAIDER_API UClass* StaticClass<AUE5_RaiderGameMode>()
{
	return AUE5_RaiderGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_RaiderGameMode);
AUE5_RaiderGameMode::~AUE5_RaiderGameMode() {}
// End Class AUE5_RaiderGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_RaiderGameMode, AUE5_RaiderGameMode::StaticClass, TEXT("AUE5_RaiderGameMode"), &Z_Registration_Info_UClass_AUE5_RaiderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_RaiderGameMode), 55915481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderGameMode_h_2948408112(TEXT("/Script/UE5_Raider"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
