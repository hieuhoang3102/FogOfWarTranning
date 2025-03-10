// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FogOfWarTranning/FogOfWarTranningPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFogOfWarTranningPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AFogOfWarTranningPlayerController();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AFogOfWarTranningPlayerController_NoRegister();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AMyCanvas_NoRegister();
FOGOFWARTRANNING_API UScriptStruct* Z_Construct_UScriptStruct_FMiniEle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_FogOfWarTranning();
// End Cross Module References

// Begin ScriptStruct FMiniEle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MiniEle;
class UScriptStruct* FMiniEle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniEle, (UObject*)Z_Construct_UPackage__Script_FogOfWarTranning(), TEXT("MiniEle"));
	}
	return Z_Registration_Info_UScriptStruct_MiniEle.OuterSingleton;
}
template<> FOGOFWARTRANNING_API UScriptStruct* StaticStruct<FMiniEle>()
{
	return FMiniEle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMiniEle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniEle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniEle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarTranning,
	nullptr,
	&NewStructOps,
	"MiniEle",
	nullptr,
	0,
	sizeof(FMiniEle),
	alignof(FMiniEle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniEle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMiniEle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMiniEle()
{
	if (!Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton, Z_Construct_UScriptStruct_FMiniEle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MiniEle.InnerSingleton;
}
// End ScriptStruct FMiniEle

// Begin Class AFogOfWarTranningPlayerController Function DrawFogOfWar
struct Z_Construct_UFunction_AFogOfWarTranningPlayerController_DrawFogOfWar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFogOfWarTranningPlayerController_DrawFogOfWar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFogOfWarTranningPlayerController, nullptr, "DrawFogOfWar", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFogOfWarTranningPlayerController_DrawFogOfWar_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFogOfWarTranningPlayerController_DrawFogOfWar_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFogOfWarTranningPlayerController_DrawFogOfWar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFogOfWarTranningPlayerController_DrawFogOfWar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFogOfWarTranningPlayerController::execDrawFogOfWar)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawFogOfWar();
	P_NATIVE_END;
}
// End Class AFogOfWarTranningPlayerController Function DrawFogOfWar

// Begin Class AFogOfWarTranningPlayerController
void AFogOfWarTranningPlayerController::StaticRegisterNativesAFogOfWarTranningPlayerController()
{
	UClass* Class = AFogOfWarTranningPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawFogOfWar", &AFogOfWarTranningPlayerController::execDrawFogOfWar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFogOfWarTranningPlayerController);
UClass* Z_Construct_UClass_AFogOfWarTranningPlayerController_NoRegister()
{
	return AFogOfWarTranningPlayerController::StaticClass();
}
struct Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FogOfWarTranningPlayerController.h" },
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedSize_MetaData[] = {
		{ "Category", "FogOfWarTranningPlayerController" },
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannelProperty_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCanvass_MetaData[] = {
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTexture_MetaData[] = {
		{ "Category", "FogOfWarTranningPlayerController" },
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackTexture_MetaData[] = {
		{ "Category", "FogOfWarTranningPlayerController" },
		{ "ModuleRelativePath", "FogOfWarTranningPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannelProperty;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCanvass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WhiteTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFogOfWarTranningPlayerController_DrawFogOfWar, "DrawFogOfWar" }, // 4095641170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFogOfWarTranningPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationClickAction_MetaData), NewProp_SetDestinationClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationTouchAction_MetaData), NewProp_SetDestinationTouchAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_FixedSize = { "FixedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, FixedSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedSize_MetaData), NewProp_FixedSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_TraceChannelProperty = { "TraceChannelProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, TraceChannelProperty), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannelProperty_MetaData), NewProp_TraceChannelProperty_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_MyCanvass = { "MyCanvass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, MyCanvass), Z_Construct_UClass_AMyCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCanvass_MetaData), NewProp_MyCanvass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_WhiteTexture = { "WhiteTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, WhiteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteTexture_MetaData), NewProp_WhiteTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_BlackTexture = { "BlackTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFogOfWarTranningPlayerController, BlackTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackTexture_MetaData), NewProp_BlackTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_SetDestinationClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_SetDestinationTouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_FixedSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_TraceChannelProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_MyCanvass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_WhiteTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::NewProp_BlackTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarTranning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::ClassParams = {
	&AFogOfWarTranningPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::PropPointers),
	0,
	0x008002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFogOfWarTranningPlayerController()
{
	if (!Z_Registration_Info_UClass_AFogOfWarTranningPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFogOfWarTranningPlayerController.OuterSingleton, Z_Construct_UClass_AFogOfWarTranningPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFogOfWarTranningPlayerController.OuterSingleton;
}
template<> FOGOFWARTRANNING_API UClass* StaticClass<AFogOfWarTranningPlayerController>()
{
	return AFogOfWarTranningPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFogOfWarTranningPlayerController);
AFogOfWarTranningPlayerController::~AFogOfWarTranningPlayerController() {}
// End Class AFogOfWarTranningPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMiniEle::StaticStruct, Z_Construct_UScriptStruct_FMiniEle_Statics::NewStructOps, TEXT("MiniEle"), &Z_Registration_Info_UScriptStruct_MiniEle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMiniEle), 713487621U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFogOfWarTranningPlayerController, AFogOfWarTranningPlayerController::StaticClass, TEXT("AFogOfWarTranningPlayerController"), &Z_Registration_Info_UClass_AFogOfWarTranningPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFogOfWarTranningPlayerController), 2161986454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_1650661374(TEXT("/Script/FogOfWarTranning"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_FogOfWarTranningPlayerController_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
