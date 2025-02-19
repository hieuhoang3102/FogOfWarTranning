// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FogOfWarTranningPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOGOFWARTRANNING_FogOfWarTranningPlayerController_generated_h
#error "FogOfWarTranningPlayerController.generated.h already included, missing '#pragma once' in FogOfWarTranningPlayerController.h"
#endif
#define FOGOFWARTRANNING_FogOfWarTranningPlayerController_generated_h

#define FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataFog_Statics; \
	FOGOFWARTRANNING_API static class UScriptStruct* StaticStruct();


template<> FOGOFWARTRANNING_API UScriptStruct* StaticStruct<struct FDataFog>();

#define FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawFow); \
	DECLARE_FUNCTION(execUpdateFogOfWar);


#define FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFogOfWarTranningPlayerController(); \
	friend struct Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFogOfWarTranningPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FogOfWarTranning"), NO_API) \
	DECLARE_SERIALIZER(AFogOfWarTranningPlayerController)


#define FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFogOfWarTranningPlayerController(AFogOfWarTranningPlayerController&&); \
	AFogOfWarTranningPlayerController(const AFogOfWarTranningPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFogOfWarTranningPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFogOfWarTranningPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFogOfWarTranningPlayerController) \
	NO_API virtual ~AFogOfWarTranningPlayerController();


#define FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_29_PROLOG
#define FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_32_INCLASS_NO_PURE_DECLS \
	FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOGOFWARTRANNING_API UClass* StaticClass<class AFogOfWarTranningPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
