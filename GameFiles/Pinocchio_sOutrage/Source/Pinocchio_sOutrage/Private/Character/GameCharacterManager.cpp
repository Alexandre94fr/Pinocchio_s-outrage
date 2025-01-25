// Made by Alexandre RICHARD. GitHub link : https://github.com/Alexandre94fr/


#include "Character/GameCharacterManager.h"

#include "Character/GameCharacter.h"
#include "Character/GameCharacterEnum.h"

#include "ExternalTools/MessageDebugger.h"

// The variable needs to be define, so we define it here
TObjectPtr<AGameCharacterManager> AGameCharacterManager::Instance = nullptr;

// Sets default values
AGameCharacterManager::AGameCharacterManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    TObjectPtr<USceneComponent> rootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    RootComponent = rootSceneComponent;

    CharactersInstantiatedFolderPath = FName("Characters/");
}

void AGameCharacterManager::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	Instance = this;
}

// Called when the game starts or when spawned
void AGameCharacterManager::BeginPlay()
{
	Super::BeginPlay();

    IsDictionnaryCorrectlySetted();
}

// Called every frame
void AGameCharacterManager::Tick(float p_deltaTime)
{
	Super::Tick(p_deltaTime);
}

void AGameCharacterManager::BeginDestroy()
{
    if (Instance == this)
    {
        Instance = nullptr;
    }

    Super::BeginDestroy();
}

bool AGameCharacterManager::IsDictionnaryCorrectlySetted() const
{
    if (GameCharactersEnumToClassDictionnary.IsEmpty())
    {
        MessageDebugger::ErrorOnScreen(-1, TEXT("The dictionnary 'GameCharactersEnumToClassDictionnary' is empty."));
        return false;
    }

    return true;
}

void AGameCharacterManager::InstantiateGameCharacter(EGameCharactersEnum p_gameCharacterType,
    FVector p_position, FRotator p_rotation,
    bool p_isNewPlayerCharacter, TObjectPtr<APlayerController> p_playerController)
{
    // Security : Verifying if the given jey exists in the dictionnary
    if (!GameCharactersEnumToClassDictionnary.Contains(p_gameCharacterType))
    {
        MessageDebugger::ErrorOnScreen(-1, FString::Printf(TEXT("Game character type not found in the dictionary: q%s"), *UEnum::GetValueAsString(p_gameCharacterType)));
        return;
    }

    TSubclassOf<AGameCharacter> gameCharacterClass = GameCharactersEnumToClassDictionnary[p_gameCharacterType];

    // Security : Verifying if the value founded is not null
    if (!gameCharacterClass)
    {
        MessageDebugger::ErrorOnScreen(-1, FString::Printf(TEXT("Game character class is null for type: %s"), *UEnum::GetValueAsString(p_gameCharacterType)));
        return;
    }

    FActorSpawnParameters spawnParams;
    spawnParams.Owner = this; // Not requiered, manages the owner of the new character (in multiplayer purposes)

    // Trying to instantiate the new character
    TObjectPtr<AGameCharacter> spawnedCharacter = GetWorld()->SpawnActor<AGameCharacter>(gameCharacterClass, p_position, p_rotation, spawnParams);

    // Handling if the character was not spawned
    if (!spawnedCharacter)
    {
        MessageDebugger::ErrorOnScreen(-1, FString::Printf(TEXT("Failed to spawn a character of type: %s"), *UEnum::GetValueAsString(p_gameCharacterType)));
        return;
    }

    InstantiatedCharacters.Add(spawnedCharacter);
#if WITH_EDITOR
    spawnedCharacter->SetFolderPath(CharactersInstantiatedFolderPath);
#endif

    // Handling new player character management
    if (p_isNewPlayerCharacter) 
    {
        if (p_playerController == nullptr)
        {
            MessageDebugger::ErrorOnScreen(-1, FString::Printf(TEXT("The given 'p_playerController' is nullptr, do not forget to give one to the method 'InstantiateGameCharacter'. \nFrom : "),
                *this->GetClass()->GetName())
            );

            return;
        }

        p_playerController->Possess(spawnedCharacter);

        PlayerCharacters.Add(spawnedCharacter);
    }
    else
    {
        EnemyCharacters.Add(spawnedCharacter);
    }

    MessageDebugger::CustomMessageOnScreen(-1, FString::Printf(TEXT("Successfully spawned character of type: %s"), *UEnum::GetValueAsString(p_gameCharacterType)), FColor::Green);
}