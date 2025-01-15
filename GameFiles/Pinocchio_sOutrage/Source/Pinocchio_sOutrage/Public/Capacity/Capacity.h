// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/

#pragma once

#include <Statistics/CapacityStatisticsDataAsset.h>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capacity.generated.h"

UCLASS(Blueprintable)
class PINOCCHIO_SOUTRAGE_API ACapacity : public AActor
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Capacity statistics")
	TObjectPtr<UCapacityStatisticsDataAsset> CapacityStatisticsDataAsset;

public:	
	// Sets default values for this actor's properties
	ACapacity();

	// Called every frame
	virtual void Tick(float p_deltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual bool IsClassPropertiesCorrectlySetted();
	
	virtual void StartCapacity();

private:
	int _testGoo;
	void JeSuisUneMethod(int p_aaaaaaaaaa);

};
