// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GameCharacterEnum.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PINOCCHIO_SOUTRAGE_GameCharacterEnum_generated_h
#error "GameCharacterEnum.generated.h already included, missing '#pragma once' in GameCharacterEnum.h"
#endif
#define PINOCCHIO_SOUTRAGE_GameCharacterEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mes_jeux_Unreal__GitHub_Pinocchio_s_outrage_GameFiles_Pinocchio_sOutrage_Source_Pinocchio_sOutrage_Public_Character_GameCharacterEnum_h


#define FOREACH_ENUM_EGAMECHARACTERSENUM(op) \
	op(EGameCharactersEnum::Pinocchio) \
	op(EGameCharactersEnum::Pawn) \
	op(EGameCharactersEnum::Clown) 

enum class EGameCharactersEnum : uint8;
template<> struct TIsUEnumClass<EGameCharactersEnum> { enum { Value = true }; };
template<> PINOCCHIO_SOUTRAGE_API UEnum* StaticEnum<EGameCharactersEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
