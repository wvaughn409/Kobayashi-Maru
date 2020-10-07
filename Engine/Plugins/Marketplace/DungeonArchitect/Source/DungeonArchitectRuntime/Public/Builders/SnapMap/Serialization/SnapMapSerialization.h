//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "UObject/Interface.h"
#include "SnapMapSerialization.generated.h"

USTRUCT()
struct DUNGEONARCHITECTRUNTIME_API FSnapMapChunkActorDataEntry {
    GENERATED_USTRUCT_BODY()

    UPROPERTY()
    TSubclassOf<AActor> ActorClass;

    UPROPERTY()
    FTransform ActorTransform;

    UPROPERTY()
    FString ActorName;

    UPROPERTY()
    TArray<uint8> ActorData;
};

UCLASS()
class DUNGEONARCHITECTRUNTIME_API USnapMapStreamingChunkActorData : public UObject {
    GENERATED_BODY()
public:

    UPROPERTY()
    TArray<FSnapMapChunkActorDataEntry> ActorEntries;

public:
    void SaveLevel(ULevel* InLevel);
    void LoadLevel(ULevel* InLevel);

private:
    void SaveActor(AActor* InActor, FSnapMapChunkActorDataEntry& OutEntry);
    void LoadActor(AActor* InActor, const FSnapMapChunkActorDataEntry& InEntry);

};

UINTERFACE(BlueprintType)
class DUNGEONARCHITECTRUNTIME_API USnapMapSerializable : public UInterface {
    GENERATED_BODY()

};

class DUNGEONARCHITECTRUNTIME_API ISnapMapSerializable {
    GENERATED_BODY()

public:
    //classes using this interface must implement ReactToHighNoon
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dungeon")
    void OnSnapDataLoaded();

};
