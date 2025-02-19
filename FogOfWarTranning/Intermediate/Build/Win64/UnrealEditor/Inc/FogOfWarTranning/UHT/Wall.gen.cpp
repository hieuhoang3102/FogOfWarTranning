// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FogOfWarTranning/Wall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWall() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AWall();
FOGOFWARTRANNING_API UClass* Z_Construct_UClass_AWall_NoRegister();
UPackage* Z_Construct_UPackage__Script_FogOfWarTranning();
// End Cross Module References

// Begin Class AWall
void AWall::StaticRegisterNativesAWall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWall);
UClass* Z_Construct_UClass_AWall_NoRegister()
{
	return AWall::StaticClass();
}
struct Z_Construct_UClass_AWall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Wall.h" },
		{ "ModuleRelativePath", "Wall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Wall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Wall.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWall_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWall, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWall_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWall, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWall_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWall_Statics::NewProp_BoxComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FogOfWarTranning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWall_Statics::ClassParams = {
	&AWall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWall_Statics::Class_MetaDataParams), Z_Construct_UClass_AWall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWall()
{
	if (!Z_Registration_Info_UClass_AWall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWall.OuterSingleton, Z_Construct_UClass_AWall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWall.OuterSingleton;
}
template<> FOGOFWARTRANNING_API UClass* StaticClass<AWall>()
{
	return AWall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWall);
AWall::~AWall() {}
// End Class AWall

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_Wall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWall, AWall::StaticClass, TEXT("AWall"), &Z_Registration_Info_UClass_AWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWall), 548775326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_Wall_h_1830733760(TEXT("/Script/FogOfWarTranning"),
	Z_CompiledInDeferFile_FID_GitHub_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_Wall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_FogOfWarTranning_FogOfWarTranning_Source_FogOfWarTranning_Wall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
