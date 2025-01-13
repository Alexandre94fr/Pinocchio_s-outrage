// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Capacity/Capacities/CircusDanceCapacity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircusDanceCapacity() {}

// Begin Cross Module References
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ACapacity();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ACircusDanceCapacity();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ACircusDanceCapacity_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class ACircusDanceCapacity
void ACircusDanceCapacity::StaticRegisterNativesACircusDanceCapacity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACircusDanceCapacity);
UClass* Z_Construct_UClass_ACircusDanceCapacity_NoRegister()
{
	return ACircusDanceCapacity::StaticClass();
}
struct Z_Construct_UClass_ACircusDanceCapacity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Capacity/Capacities/CircusDanceCapacity.h" },
		{ "ModuleRelativePath", "Public/Capacity/Capacities/CircusDanceCapacity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACircusDanceCapacity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACircusDanceCapacity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACapacity,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACircusDanceCapacity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACircusDanceCapacity_Statics::ClassParams = {
	&ACircusDanceCapacity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACircusDanceCapacity_Statics::Class_MetaDataParams), Z_Construct_UClass_ACircusDanceCapacity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACircusDanceCapacity()
{
	if (!Z_Registration_Info_UClass_ACircusDanceCapacity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACircusDanceCapacity.OuterSingleton, Z_Construct_UClass_ACircusDanceCapacity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACircusDanceCapacity.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<ACircusDanceCapacity>()
{
	return ACircusDanceCapacity::StaticClass();
}
ACircusDanceCapacity::ACircusDanceCapacity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACircusDanceCapacity);
ACircusDanceCapacity::~ACircusDanceCapacity() {}
// End Class ACircusDanceCapacity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_CircusDanceCapacity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACircusDanceCapacity, ACircusDanceCapacity::StaticClass, TEXT("ACircusDanceCapacity"), &Z_Registration_Info_UClass_ACircusDanceCapacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACircusDanceCapacity), 1528507671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_CircusDanceCapacity_h_490877595(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_CircusDanceCapacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_CircusDanceCapacity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
