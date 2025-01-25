// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Character/Characters/ClownCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClownCharacter() {}

// Begin Cross Module References
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AClownCharacter();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AClownCharacter_NoRegister();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AGameCharacter();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class AClownCharacter
void AClownCharacter::StaticRegisterNativesAClownCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClownCharacter);
UClass* Z_Construct_UClass_AClownCharacter_NoRegister()
{
	return AClownCharacter::StaticClass();
}
struct Z_Construct_UClass_AClownCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Characters/ClownCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/Characters/ClownCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClownCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AClownCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClownCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClownCharacter_Statics::ClassParams = {
	&AClownCharacter::StaticClass,
	"Game",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClownCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AClownCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClownCharacter()
{
	if (!Z_Registration_Info_UClass_AClownCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClownCharacter.OuterSingleton, Z_Construct_UClass_AClownCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClownCharacter.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<AClownCharacter>()
{
	return AClownCharacter::StaticClass();
}
AClownCharacter::AClownCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClownCharacter);
AClownCharacter::~AClownCharacter() {}
// End Class AClownCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_ClownCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClownCharacter, AClownCharacter::StaticClass, TEXT("AClownCharacter"), &Z_Registration_Info_UClass_AClownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClownCharacter), 395701624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_ClownCharacter_h_3561517605(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_ClownCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_ClownCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
