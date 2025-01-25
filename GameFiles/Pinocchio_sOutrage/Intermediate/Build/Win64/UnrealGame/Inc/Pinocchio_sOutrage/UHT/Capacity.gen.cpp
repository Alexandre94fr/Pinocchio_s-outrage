// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Capacity/Capacity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapacity() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ACapacity();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ACapacity_NoRegister();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UCapacityStatisticsDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class ACapacity
void ACapacity::StaticRegisterNativesACapacity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACapacity);
UClass* Z_Construct_UClass_ACapacity_NoRegister()
{
	return ACapacity::StaticClass();
}
struct Z_Construct_UClass_ACapacity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Capacity/Capacity.h" },
		{ "ModuleRelativePath", "Public/Capacity/Capacity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapacityStatisticsDataAsset_MetaData[] = {
		{ "Category", "Capacity statistics" },
		{ "ModuleRelativePath", "Public/Capacity/Capacity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapacityStatisticsDataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapacity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapacity_Statics::NewProp_CapacityStatisticsDataAsset = { "CapacityStatisticsDataAsset", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACapacity, CapacityStatisticsDataAsset), Z_Construct_UClass_UCapacityStatisticsDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapacityStatisticsDataAsset_MetaData), NewProp_CapacityStatisticsDataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapacity_Statics::NewProp_CapacityStatisticsDataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACapacity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACapacity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACapacity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACapacity_Statics::ClassParams = {
	&ACapacity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACapacity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACapacity_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACapacity_Statics::Class_MetaDataParams), Z_Construct_UClass_ACapacity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACapacity()
{
	if (!Z_Registration_Info_UClass_ACapacity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACapacity.OuterSingleton, Z_Construct_UClass_ACapacity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACapacity.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<ACapacity>()
{
	return ACapacity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACapacity);
ACapacity::~ACapacity() {}
// End Class ACapacity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACapacity, ACapacity::StaticClass, TEXT("ACapacity"), &Z_Registration_Info_UClass_ACapacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACapacity), 2924466598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacity_h_3410252399(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
