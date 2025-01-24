// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#include "Capacity/Capacity.h"

#include "Statistics/CapacityStatisticsDataAsset.h"

#include "ExternalTools/MessageDebugger.h"

// Sets default values
ACapacity::ACapacity()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACapacity::BeginPlay()
{
	Super::BeginPlay();

	if (!IsClassPropertiesCorrectlySetted())
		return;
}

// TESTING NAMMING CONVENTION MODIFICATION BELOW (I will let that here in case)

// Called every frame
void ACapacity::Tick(float p_deltaTime) // Visual Studio détecte un non respect des conventions de nommage (il veut transformer p_deltaTime -> pDeltaTime)
{
	// Pas de message, tout fonctionne correctement
	int jeSuisUneVariable = 4;

	// Devrait détecter un non respect des conventions de nommage (_jeSuisUneVariable -> jeSuisUneVariable)
	int _jeSuisUneVariable = 4;

	// Détecter un non respect des conventions de nommage (p_jeSuisUneVariable -> pJeSuisUneVariable mais devrait faire p_jeSuisUneVariable -> jeSuisUneVariable)
	int p_jeSuisUneVariable = 4;

	Super::Tick(p_deltaTime);
}

bool ACapacity::IsClassPropertiesCorrectlySetted()
{
	bool isCorrectlySetted = true;

	if (!CapacityStatisticsDataAsset)
	{
		isCorrectlySetted = false;
		MessageDebugger::ErrorOnScreen(-1, "The 'CapacityStatisticsDataAsset' variable is null.");
	}
	
	return isCorrectlySetted;
}

void ACapacity::StartCapacity()
{
	//MessageDebugger::MessageOnScreen(-1, 
	//	FString::Printf(TEXT("Capacity launched : %s"), CapacityStatisticsDataAsset->Name)
	//);
}