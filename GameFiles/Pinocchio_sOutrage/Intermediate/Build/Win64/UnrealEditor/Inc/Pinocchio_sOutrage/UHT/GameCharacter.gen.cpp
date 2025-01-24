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
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UCharacterStatisticsDataAsset_NoRegister();
PINOCCHIO_SOUTRAGE_API UClass* Z_Construct_UClass_UGameCharacterInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pinocchio_sOutrage();
// End Cross Module References

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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoesDevelopperEnabledDebugMode_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ModuleRelativePath", "Public/Character/GameCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStatistics_MetaData[] = {
		{ "Category", "Statistics" },
		{ "ModuleRelativePath", "Public/Character/GameCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_DoesDevelopperEnabledDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoesDevelopperEnabledDebugMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterStatistics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGameCharacter_Statics::NewProp_DoesDevelopperEnabledDebugMode_SetBit(void* Obj)
{
	((AGameCharacter*)Obj)->DoesDevelopperEnabledDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_DoesDevelopperEnabledDebugMode = { "DoesDevelopperEnabledDebugMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameCharacter), &Z_Construct_UClass_AGameCharacter_Statics::NewProp_DoesDevelopperEnabledDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoesDevelopperEnabledDebugMode_MetaData), NewProp_DoesDevelopperEnabledDebugMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameCharacter_Statics::NewProp_CharacterStatistics = { "CharacterStatistics", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameCharacter, CharacterStatistics), Z_Construct_UClass_UCharacterStatisticsDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStatistics_MetaData), NewProp_CharacterStatistics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_DoesDevelopperEnabledDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameCharacter_Statics::NewProp_CharacterStatistics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Pinocchio_sOutrage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGameCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameCharacterInterface_NoRegister, (int32)VTABLE_OFFSET(AGameCharacter, IGameCharacterInterface), false },  // 3994552323
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCharacter_Statics::ClassParams = {
	&AGameCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameCharacter, AGameCharacter::StaticClass, TEXT("AGameCharacter"), &Z_Registration_Info_UClass_AGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCharacter), 4212458354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_2178962607(TEXT("/Script/Pinocchio_sOutrage"),
	Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
