// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pinocchio_sOutrage/Public/Character/GameCharacterEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCharacterEnum() {}

// Begin Cross Module References
PINOCCHIO_SOUTRAGE_API UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

// Begin Enum EGameCharactersEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameCharactersEnum;
static UEnum* EGameCharactersEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameCharactersEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameCharactersEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum, (UObject*)Z_Construct_UPackage__Script_Pinocchio_sOutrage(), TEXT("EGameCharactersEnum"));
	}
	return Z_Registration_Info_UEnum_EGameCharactersEnum.OuterSingleton;
}
template<> PINOCCHIO_SOUTRAGE_API UEnum* StaticEnum<EGameCharactersEnum>()
{
	return EGameCharactersEnum_StaticEnum();
}
struct Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clown.Name", "EGameCharactersEnum::Clown" },
		{ "ModuleRelativePath", "Public/Character/GameCharacterEnum.h" },
		{ "Pawn.Name", "EGameCharactersEnum::Pawn" },
		{ "Pinocchio.Name", "EGameCharactersEnum::Pinocchio" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameCharactersEnum::Pinocchio", (int64)EGameCharactersEnum::Pinocchio },
		{ "EGameCharactersEnum::Pawn", (int64)EGameCharactersEnum::Pawn },
		{ "EGameCharactersEnum::Clown", (int64)EGameCharactersEnum::Clown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
	nullptr,
	"EGameCharactersEnum",
	"EGameCharactersEnum",
	Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum()
{
	if (!Z_Registration_Info_UEnum_EGameCharactersEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameCharactersEnum.InnerSingleton, Z_Construct_UEnum_Pinocchio_sOutrage_EGameCharactersEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameCharactersEnum.InnerSingleton;
}
// End Enum EGameCharactersEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameCharactersEnum_StaticEnum, TEXT("EGameCharactersEnum"), &Z_Registration_Info_UEnum_EGameCharactersEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1126591438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterEnum_h_1707904656(TEXT("/Script/Pinocchio_sOutrage"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
