// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FogOfWarTranning/GridManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AGrid_NoRegister();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AGridManager();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FogOfWarTranning();
// End Cross Module References

// Begin Class AGridManager Function SpawnGrid
struct Z_Construct_UFunction_AGridManager_SpawnGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SpawnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SpawnGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SpawnGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SpawnGrid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGridManager_SpawnGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SpawnGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSpawnGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnGrid();
	P_NATIVE_END;
}
// End Class AGridManager Function SpawnGrid

// Begin Class AGridManager
void AGridManager::StaticRegisterNativesAGridManager()
{
	UClass* Class = AGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnGrid", &AGridManager::execSpawnGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridManager);
UClass* Z_Construct_UClass_AGridManager_NoRegister()
{
	return AGridManager::StaticClass();
}
struct Z_Construct_UClass_AGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GridManager.h" },
		{ "ModuleRelativePath", "GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "Category", "Floor Grid" },
		{ "ModuleRelativePath", "GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Col_MetaData[] = {
		{ "Category", "Floor Grid" },
		{ "ModuleRelativePath", "GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSpawn_MetaData[] = {
		{ "Category", "Floor Grid" },
		{ "ModuleRelativePath", "GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Col;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GridSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_SpawnGrid, "SpawnGrid" }, // 3915099019
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, Row), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Col = { "Col", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, Col), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Col_MetaData), NewProp_Col_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_GridSpawn = { "GridSpawn", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, GridSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AGrid_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSpawn_MetaData), NewProp_GridSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Col,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_GridSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarTranning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
	&AGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridManager()
{
	if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
}
template<> FOGOFWARTRANNING_API UClass* StaticClass<AGridManager>()
{
	return AGridManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
AGridManager::~AGridManager() {}
// End Class AGridManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_FogOfWarTranning_Source_FogOfWarTranning_GridManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 551747875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FogOfWarTranning_Source_FogOfWarTranning_GridManager_h_3556028845(TEXT("/Script/FogOfWarTranning"),
	Z_CompiledInDeferFile_FID_FogOfWarTranning_Source_FogOfWarTranning_GridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FogOfWarTranning_Source_FogOfWarTranning_GridManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
