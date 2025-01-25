// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Capacity/Capacities/DodgeCapacity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeCapacity() {}

// Begin Cross Module References
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ACapacity();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ADodgeCapacity();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ADodgeCapacity_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class ADodgeCapacity
void ADodgeCapacity::StaticRegisterNativesADodgeCapacity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADodgeCapacity);
UClass* Z_Construct_UClass_ADodgeCapacity_NoRegister()
{
	return ADodgeCapacity::StaticClass();
}
struct Z_Construct_UClass_ADodgeCapacity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Capacity/Capacities/DodgeCapacity.h" },
		{ "ModuleRelativePath", "Public/Capacity/Capacities/DodgeCapacity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeCapacity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADodgeCapacity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACapacity,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeCapacity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADodgeCapacity_Statics::ClassParams = {
	&ADodgeCapacity::StaticClass,
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
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeCapacity_Statics::Class_MetaDataParams), Z_Construct_UClass_ADodgeCapacity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADodgeCapacity()
{
	if (!Z_Registration_Info_UClass_ADodgeCapacity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADodgeCapacity.OuterSingleton, Z_Construct_UClass_ADodgeCapacity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADodgeCapacity.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<ADodgeCapacity>()
{
	return ADodgeCapacity::StaticClass();
}
ADodgeCapacity::ADodgeCapacity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeCapacity);
ADodgeCapacity::~ADodgeCapacity() {}
// End Class ADodgeCapacity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_DodgeCapacity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADodgeCapacity, ADodgeCapacity::StaticClass, TEXT("ADodgeCapacity"), &Z_Registration_Info_UClass_ADodgeCapacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADodgeCapacity), 3592153016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_DodgeCapacity_h_1619332019(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_DodgeCapacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_DodgeCapacity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
