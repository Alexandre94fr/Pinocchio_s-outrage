// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#include "ExternalTools/MessageDebugger.h"

bool MessageDebugger::IsGEngineSetted()
{
	if (!GEngine)
	{
		UE_LOG(LogTemp, Warning, TEXT("WARNING ! GEngine has not been setted by Unreal Engine yet."));
		return false;
	}
	
	return true;
}

#pragma region -= On screen methods =-

#pragma region - Pre-made methods -

void MessageDebugger::MessageOnScreen(
	int32 p_key,
	const FString& p_message,
	float p_timeToDisplay,
	const FVector2D& p_textScale,
	bool p_isAlsoLogging,
	bool p_isNewerOnTop)
{
	if (!MessageDebugger::IsGEngineSetted())
		return;

	GEngine->AddOnScreenDebugMessage(
		p_key,
		p_timeToDisplay,
		FColor::White,
		p_message,
		p_isNewerOnTop,
		p_textScale
	);

	if (p_isAlsoLogging)
		LogMessage(p_message);
}

void MessageDebugger::WarningOnScreen(
	int32 p_key,
	const FString& p_message,
	float p_timeToDisplay,
	const FVector2D& p_textScale,
	bool p_isAlsoLogging,
	bool p_isNewerOnTop)
{
	if (!MessageDebugger::IsGEngineSetted())
		return;

	GEngine->AddOnScreenDebugMessage(
		p_key,
		p_timeToDisplay,
		FColor::Yellow,
		"WARNING ! " + p_message,
		p_isNewerOnTop,
		p_textScale
	);

	if (p_isAlsoLogging)
		LogWarning(p_message);
}

void MessageDebugger::ErrorOnScreen(
	int32 p_key,
	const FString& p_message,
	float p_timeToDisplay,
	const FVector2D& p_textScale,
	bool p_isAlsoLogging,
	bool p_isNewerOnTop)
{
	if (!MessageDebugger::IsGEngineSetted())
		return;

	GEngine->AddOnScreenDebugMessage(
		p_key,
		p_timeToDisplay,
		FColor::Red,
		"ERROR ! " + p_message,
		p_isNewerOnTop,
		p_textScale
	);

	if (p_isAlsoLogging)
		LogError(p_message);
}
#pragma endregion

void MessageDebugger::CustomMessageOnScreen(
	int32 p_key,
	const FString& p_message,
	FColor p_textColor,
	float p_timeToDisplay,
	const FVector2D& p_textScale,
	bool p_isAlsoLogging,
	bool p_isNewerOnTop)
{
	if (!MessageDebugger::IsGEngineSetted())
		return;

	GEngine->AddOnScreenDebugMessage(
		p_key,
		p_timeToDisplay,
		p_textColor,
		p_message,
		p_isNewerOnTop,
		p_textScale
	);

	if (p_isAlsoLogging)
		LogMessage(p_message);
}
#pragma endregion

#pragma region -= Log methods =-

void MessageDebugger::LogMessage(const FString& p_message)
{
	UE_LOG(LogTemp, Log, TEXT("%s"), *p_message);
}

void MessageDebugger::LogWarning(const FString& p_message)
{
	UE_LOG(LogScript, Warning, TEXT("WARNING ! %s"), *p_message);
}

void MessageDebugger::LogError(const FString& p_message)
{
	UE_LOG(LogScript, Error, TEXT("ERROR ! %s"), *p_message);
}
#pragma endregion