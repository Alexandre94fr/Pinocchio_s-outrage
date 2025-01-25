// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#include "Statistics/CapacityStatisticsDataAsset.h"
//#include "ExternalTools/MessageDebugger.h"
//#include "Misc/UObjectToken.h"
//
//#include "PlayerInputs/PlayerInputsManager.h"
//
//void UCapacityStatisticsDataAsset::PostEditChangeProperty(FPropertyChangedEvent& p_propertyChangedEvent) 
//{
//	Super::PostEditChangeProperty(p_propertyChangedEvent);
//
//    // Check if the modifiyed property is "CapacityType"
//    static const FName CapacityTypeName = GET_MEMBER_NAME_CHECKED(UCapacityStatisticsDataAsset, CapacityType);
//
//    if (!p_propertyChangedEvent.Property)
//    {
//        UE_LOG(LogTemp, Error, TEXT("p_propertyChangedEvent.Property is null!"));
//        return;
//    }
//
//    UE_LOG(LogTemp, Warning, TEXT("Changed Property: %s"), *p_propertyChangedEvent.Property->GetFName().ToString());
//
//    // TODO: Fix that (if I don't explode because of Unreal)
//    if (p_propertyChangedEvent.Property && p_propertyChangedEvent.Property->GetFName() == CapacityTypeName)
//    {
//        // List of correct values
//        TArray<EPlayerActionType> validValues = {
//            EPlayerActionType::BasicCapacity1,
//            EPlayerActionType::BasicCapacity2,
//            EPlayerActionType::BasicCapacity3,
//            EPlayerActionType::SpecialCapacity1,
//            EPlayerActionType::SpecialCapacity2,
//            EPlayerActionType::SpecialCapacity3
//        };
//
//        // Log pour debug : contenu de validValues
//        for (EPlayerActionType value : validValues)
//        {
//            UE_LOG(LogTemp, Warning, TEXT("Value in validValues: %d"), static_cast<uint8>(value));
//        }
//
//        // Log pour debug : valeur actuelle de CapacityType
//        UE_LOG(LogTemp, Warning, TEXT("CapacityType value: %d"), static_cast<uint8>(CapacityType));
//
//        // Warning the developer that he has chosen a wrong action type
//        if (!validValues.Contains(CapacityType))
//        {
//            // PIE stands for Play In Editor
//            FMessageLog("PIE").Error()
//                ->AddToken(FUObjectToken::Create(this))
//                ->AddToken(FTextToken::Create(
//                    FText::FromString(FString::Printf(TEXT("Invalid value for CapacityType. Only Basic and Special Capacities are allowed! [Called at File: %s, Line: %d]"), TEXT(__FILE__), __LINE__))));
//
//            CapacityType = EPlayerActionType::BasicCapacity1;
//        }
//    }
//}