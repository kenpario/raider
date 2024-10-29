// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UE5_RaiderProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5_RAIDER_UE5_RaiderProjectile_generated_h
#error "UE5_RaiderProjectile.generated.h already included, missing '#pragma once' in UE5_RaiderProjectile.h"
#endif
#define UE5_RAIDER_UE5_RaiderProjectile_generated_h

#define FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE5_RaiderProjectile(); \
	friend struct Z_Construct_UClass_AUE5_RaiderProjectile_Statics; \
public: \
	DECLARE_CLASS(AUE5_RaiderProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Raider"), NO_API) \
	DECLARE_SERIALIZER(AUE5_RaiderProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUE5_RaiderProjectile(AUE5_RaiderProjectile&&); \
	AUE5_RaiderProjectile(const AUE5_RaiderProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE5_RaiderProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE5_RaiderProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE5_RaiderProjectile) \
	NO_API virtual ~AUE5_RaiderProjectile();


#define FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_12_PROLOG
#define FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_RAIDER_API UClass* StaticClass<class AUE5_RaiderProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Engine_Games_Raider_raider_UE5_Raider_Source_UE5_Raider_UE5_RaiderProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
