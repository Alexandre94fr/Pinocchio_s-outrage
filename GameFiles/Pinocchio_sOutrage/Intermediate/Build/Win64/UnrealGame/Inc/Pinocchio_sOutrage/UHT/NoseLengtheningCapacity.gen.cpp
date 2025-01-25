// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Capacity/Capacities/NoseLengtheningCapacity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoseLengtheningCapacity() {}

// Begin Cross Module References
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ACapacity();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ANoseLengtheningCapacity();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_ANoseLengtheningCapacity_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class ANoseLengtheningCapacity
void ANoseLengtheningCapacity::StaticRegisterNativesANoseLengtheningCapacity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoseLengtheningCapacity);
UClass* Z_Construct_UClass_ANoseLengtheningCapacity_NoRegister()
{
	return ANoseLengtheningCapacity::StaticClass();
}
struct Z_Construct_UClass_ANoseLengtheningCapacity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Capacity/Capacities/NoseLengtheningCapacity.h" },
		{ "ModuleRelativePath", "Public/Capacity/Capacities/NoseLengtheningCapacity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoseLengtheningCapacity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANoseLengtheningCapacity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACapacity,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoseLengtheningCapacity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoseLengtheningCapacity_Statics::ClassParams = {
	&ANoseLengtheningCapacity::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoseLengtheningCapacity_Statics::Class_MetaDataParams), Z_Construct_UClass_ANoseLengtheningCapacity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANoseLengtheningCapacity()
{
	if (!Z_Registration_Info_UClass_ANoseLengtheningCapacity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoseLengtheningCapacity.OuterSingleton, Z_Construct_UClass_ANoseLengtheningCapacity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANoseLengtheningCapacity.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<ANoseLengtheningCapacity>()
{
	return ANoseLengtheningCapacity::StaticClass();
}
ANoseLengtheningCapacity::ANoseLengtheningCapacity() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANoseLengtheningCapacity);
ANoseLengtheningCapacity::~ANoseLengtheningCapacity() {}
// End Class ANoseLengtheningCapacity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_NoseLengtheningCapacity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANoseLengtheningCapacity, ANoseLengtheningCapacity::StaticClass, TEXT("ANoseLengtheningCapacity"), &Z_Registration_Info_UClass_ANoseLengtheningCapacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoseLengtheningCapacity), 3502362985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_NoseLengtheningCapacity_h_1105621093(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_NoseLengtheningCapacity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Capacity_Capacities_NoseLengtheningCapacity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
