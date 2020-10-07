//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Utils/DungeonBPFunctionLibrary.h"

#include "Core/Dungeon.h"
#include "Core/SceneProviders/SceneProviderCommand.h"
#include "Core/Utils/DungeonModelHelper.h"

DEFINE_LOG_CATEGORY_STATIC(LogDungeonBPLibrary, Log, All);

AActor* UDungeonBPFunctionLibrary::SpawnDungeonOwnedActor(ADungeon* Dungeon, TSubclassOf<AActor> ActorClass,
                                                          const FTransform& Transform) {
    if (!Dungeon) {
        UE_LOG(LogDungeonBPLibrary, Error, TEXT("Invalid Dungeon reference passed to SpawnDungeonActor"));
        return nullptr;
    }

    UWorld* World = Dungeon->GetWorld();
    AActor* Actor = World->SpawnActor<AActor>(ActorClass, Transform);
    if (Actor) {
        if (World->WorldType == EWorldType::Editor) {
            Actor->RerunConstructionScripts();
        }
        FName DungeonIdTag = UDungeonModelHelper::GetDungeonIdTag(Dungeon);
        Actor->Tags.Add(DungeonIdTag);

        SceneProviderCommand::MoveToFolder(Dungeon, Actor);
        SceneProviderCommand::TagAsComplexObject(Actor);
    }

    return Actor;
}
