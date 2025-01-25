// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Character/Characters/PawnCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnCharacter() {}

// Begin Cross Module References
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AGameCharacter();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_APawnCharacter();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_APawnCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Class APawnCharacter
void APawnCharacter::StaticRegisterNativesAPawnCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APawnCharacter);
UClass* Z_Construct_UClass_APawnCharacter_NoRegister()
{
	return APawnCharacter::StaticClass();
}
struct Z_Construct_UClass_APawnCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Characters/PawnCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/Characters/PawnCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawnCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APawnCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APawnCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APawnCharacter_Statics::ClassParams = {
	&APawnCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APawnCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APawnCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APawnCharacter()
{
	if (!Z_Registration_Info_UClass_APawnCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APawnCharacter.OuterSingleton, Z_Construct_UClass_APawnCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APawnCharacter.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<APawnCharacter>()
{
	return APawnCharacter::StaticClass();
}
APawnCharacter::APawnCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APawnCharacter);
APawnCharacter::~APawnCharacter() {}
// End Class APawnCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_PawnCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APawnCharacter, APawnCharacter::StaticClass, TEXT("APawnCharacter"), &Z_Registration_Info_UClass_APawnCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APawnCharacter), 3419126929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_PawnCharacter_h_1805811982(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_PawnCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_Characters_PawnCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
