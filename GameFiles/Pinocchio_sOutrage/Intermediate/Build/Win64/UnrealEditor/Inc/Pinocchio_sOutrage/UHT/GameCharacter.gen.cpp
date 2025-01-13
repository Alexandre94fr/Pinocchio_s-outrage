// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Character/GameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AGameCharacter();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_AGameCharacter_NoRegister();
PINOCCHIO_SOUTRAGE_API UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Enum ECharactersEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharactersEnum;
static UEnum* ECharactersEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharactersEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharactersEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum, (UObject*)Z_Construct_UPackage__Script_Pinocchio_sOutrage(), TEXT("ECharactersEnum"));
	}
	return Z_Registration_Info_UEnum_ECharactersEnum.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UEnum* StaticEnum<ECharactersEnum>()
{
	return ECharactersEnum_StaticEnum();
}
struct Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clown.Name", "ECharactersEnum::Clown" },
		{ "ModuleRelativePath", "Public/Character/GameCharacter.h" },
		{ "Pawn.Name", "ECharactersEnum::Pawn" },
		{ "Pinocchio.Name", "ECharactersEnum::Pinocchio" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharactersEnum::Pinocchio", (int64)ECharactersEnum::Pinocchio },
		{ "ECharactersEnum::Pawn", (int64)ECharactersEnum::Pawn },
		{ "ECharactersEnum::Clown", (int64)ECharactersEnum::Clown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
	nullptr,
	"ECharactersEnum",
	"ECharactersEnum",
	Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum()
{
	if (!Z_Registration_Info_UEnum_ECharactersEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharactersEnum.InnerSingleton, Z_Construct_UEnum_Pinocchio_sOutrage_ECharactersEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharactersEnum.InnerSingleton;
}
// End Enum ECharactersEnum

// Begin Class AGameCharacter
void AGameCharacter::StaticRegisterNativesAGameCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameCharacter);
UClass* Z_Construct_UClass_AGameCharacter_NoRegister()
{
	return AGameCharacter::StaticClass();
}
struct Z_Construct_UClass_AGameCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GameCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/GameCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCharacter_Statics::ClassParams = {
	&AGameCharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameCharacter()
{
	if (!Z_Registration_Info_UClass_AGameCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameCharacter.OuterSingleton, Z_Construct_UClass_AGameCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameCharacter.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UClass* StaticClass<AGameCharacter>()
{
	return AGameCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCharacter);
AGameCharacter::~AGameCharacter() {}
// End Class AGameCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharactersEnum_StaticEnum, TEXT("ECharactersEnum"), &Z_Registration_Info_UEnum_ECharactersEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1127751440U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameCharacter, AGameCharacter::StaticClass, TEXT("AGameCharacter"), &Z_Registration_Info_UClass_AGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCharacter), 391824924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_4009867414(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
