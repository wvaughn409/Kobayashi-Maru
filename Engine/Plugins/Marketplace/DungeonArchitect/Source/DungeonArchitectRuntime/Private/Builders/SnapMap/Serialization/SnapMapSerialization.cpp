//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Serialization/SnapMapSerialization.h"

#include "Engine/Level.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"

DEFINE_LOG_CATEGORY_STATIC(LogSnapMapStreamingData, Log, All);

void USnapMapStreamingChunkActorData::SaveLevel(ULevel* InLevel) {
    if (!InLevel) return;

    ActorEntries.Empty();

    int32 NumActorsSaved = 0;
    for (AActor* Actor : InLevel->Actors) {

        if (UKismetSystemLibrary::DoesImplementInterface(Actor, USnapMapSerializable::StaticClass())) {
            int32 EntryIndex = ActorEntries.AddDefaulted();
            FSnapMapChunkActorDataEntry& Entry = ActorEntries[EntryIndex];
            SaveActor(Actor, Entry);
            NumActorsSaved++;
        }
    }

    UE_LOG(LogSnapMapStreamingData, Log, TEXT("Saved %d actors"), NumActorsSaved);

    Modify();
}

void USnapMapStreamingChunkActorData::LoadLevel(ULevel* InLevel) {
    if (!InLevel) return;

    // Build a map for faster access
    TMap<FName, const FSnapMapChunkActorDataEntry*> ActorToEntryMap;
    for (const FSnapMapChunkActorDataEntry& Entry : ActorEntries) {
        FName Key = *Entry.ActorName;
        if (!ActorToEntryMap.Contains(Key)) {
            ActorToEntryMap.Add(Key, &Entry);
        }
    }

    int32 NumActorsLoaded = 0;
    for (AActor* Actor : InLevel->Actors) {
        if (UKismetSystemLibrary::DoesImplementInterface(Actor, USnapMapSerializable::StaticClass())) {
            FName Key = Actor->GetFName();
            const FSnapMapChunkActorDataEntry** SearchResult = ActorToEntryMap.Find(Key);
            if (SearchResult) {
                const FSnapMapChunkActorDataEntry* EntryPtr = *SearchResult;
                if (EntryPtr->ActorClass == Actor->GetClass()) {
                    LoadActor(Actor, *EntryPtr);
                    NumActorsLoaded++;
                }

                // TODO: Handle deletion / spawning of actors not in the list
            }
        }
    }

    UE_LOG(LogSnapMapStreamingData, Log, TEXT("Deserialized %d actors"), NumActorsLoaded);

}

struct FSnapMapSaveChunkArchive : public FObjectAndNameAsStringProxyArchive {
    FSnapMapSaveChunkArchive(FArchive& InInnerArchive)
        : FObjectAndNameAsStringProxyArchive(InInnerArchive, true) {
        ArIsSaveGame = true;
    }
};

void USnapMapStreamingChunkActorData::SaveActor(AActor* InActor, FSnapMapChunkActorDataEntry& OutEntry) {
    OutEntry.ActorName = InActor->GetName();
    OutEntry.ActorClass = InActor->GetClass();
    OutEntry.ActorTransform = InActor->GetActorTransform();

    // https://answers.unrealengine.com/questions/35618/savingloading-an-array-of-objects.html
    FMemoryWriter MemoryWriter(OutEntry.ActorData, true);
    FSnapMapSaveChunkArchive Ar(MemoryWriter);

    InActor->Serialize(Ar);
}

void USnapMapStreamingChunkActorData::LoadActor(AActor* InActor, const FSnapMapChunkActorDataEntry& InEntry) {
    if (!InActor) return;
    check(InActor->GetName() == InEntry.ActorName);
    check(InActor->GetClass() == InEntry.ActorClass);
    if (InActor->GetRootComponent() && InActor->GetRootComponent()->Mobility == EComponentMobility::Movable) {
        InActor->SetActorTransform(InEntry.ActorTransform);
    }

    FMemoryReader Reader(InEntry.ActorData, true);
    FSnapMapSaveChunkArchive Ar(Reader);
    InActor->Serialize(Ar);

    ISnapMapSerializable::Execute_OnSnapDataLoaded(InActor);
}


///////////////////////////////// USnapMapSerializable ///////////////////////////////// 
