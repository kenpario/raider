// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Raider/UE5_RaiderPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_RaiderPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UE5_RAIDER_API UClass* Z_Construct_UClass_AUE5_RaiderPlayerController();
UE5_RAIDER_API UClass* Z_Construct_UClass_AUE5_RaiderPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UE5_Raider();
// End Cross Module References

// Begin Class AUE5_RaiderPlayerController
void AUE5_RaiderPlayerController::StaticRegisterNativesAUE5_RaiderPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_RaiderPlayerController);
UClass* Z_Construct_UClass_AUE5_RaiderPlayerController_NoRegister()
{
	return AUE5_RaiderPlayerController::StaticClass();
}
struct Z_Construct_UClass_AUE5_RaiderPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UE5_RaiderPlayerController.h" },
		{ "ModuleRelativePath", "UE5_RaiderPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "UE5_RaiderPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_RaiderPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUE5_RaiderPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_UE5_Raider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::ClassParams = {
	&AUE5_RaiderPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUE5_RaiderPlayerController()
{
	if (!Z_Registration_Info_UClass_AUE5_RaiderPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_RaiderPlayerController.OuterSingleton, Z_Construct_UClass_AUE5_RaiderPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUE5_RaiderPlayerController.OuterSingleton;
}
template<> UE5_RAIDER_API UClass* StaticClass<AUE5_RaiderPlayerController>()
{
	return AUE5_RaiderPlayerController::StaticClass();
}
AUE5_RaiderPlayerController::AUE5_RaiderPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_RaiderPlayerController);
AUE5_RaiderPlayerController::~AUE5_RaiderPlayerController() {}
// End Class AUE5_RaiderPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_RaiderPlayerController, AUE5_RaiderPlayerController::StaticClass, TEXT("AUE5_RaiderPlayerController"), &Z_Registration_Info_UClass_AUE5_RaiderPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_RaiderPlayerController), 1127818891U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderPlayerController_h_4215179392(TEXT("/Script/UE5_Raider"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
