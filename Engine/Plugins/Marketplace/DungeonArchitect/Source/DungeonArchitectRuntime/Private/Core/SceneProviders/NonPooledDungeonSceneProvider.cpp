//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/SceneProviders/NonPooledDungeonSceneProvider.h"

#include "Core/Dungeon.h"
#include "Core/Utils/DungeonModelHelper.h"

DEFINE_LOG_CATEGORY(NonPooledDungeonSceneProvider);

void FNonPooledDungeonSceneProvider::OnDungeonBuildStart(UDungeonConfig* Config) {
    FDungeonSceneProvider::OnDungeonBuildStart(Config);

}

void FNonPooledDungeonSceneProvider::OnDungeonBuildStop() {
    // Sort the game commands based on priority
    ApplyExecutionWeights();
    GameThreadCommands.Sort(SceneProviderCommand::WeightSortPredicate);
}

void FNonPooledDungeonSceneProvider::AddStaticMesh(UDungeonMesh* Mesh, const FDungeonSceneProviderContext& Context) {
    if (Mesh->StaticMesh == nullptr) return;

    TSharedPtr<SceneProviderCommand> Command = MakeShareable(
        new SceneProviderCommand_CreateMesh(Dungeon, Context, Mesh));
    GameThreadCommands.Add(Command);
}

void FNonPooledDungeonSceneProvider::AddLight(UPointLightComponent* LightTemplate,
                                              const FDungeonSceneProviderContext& Context) {
    // No free actor exists.  Create a new actor later in the game thread
    TSharedPtr<SceneProviderCommand> Command = MakeShareable(
        new SceneProviderCommand_AddLight(Dungeon, Context, LightTemplate));
    GameThreadCommands.Add(Command);
}

void FNonPooledDungeonSceneProvider::AddParticleSystem(UParticleSystem* ParticleTemplate,
                                                       const FDungeonSceneProviderContext& Context) {
    // No free actor exists.  Create a new actor later in the game thread
    TSharedPtr<SceneProviderCommand> Command = MakeShareable(
        new SceneProviderCommand_AddParticleSystem(Dungeon, Context, ParticleTemplate));
    GameThreadCommands.Add(Command);
}

void FNonPooledDungeonSceneProvider::AddActorFromTemplate(UClass* ClassTemplate,
                                                          const FDungeonSceneProviderContext& Context) {
    TSharedPtr<SceneProviderCommand> Command = MakeShareable(
        new SceneProviderCommand_AddActor(Dungeon, Context, ClassTemplate));
    GameThreadCommands.Add(Command);
}

void FNonPooledDungeonSceneProvider::AddClonedActor(UDungeonActorTemplate* ActorTemplate,
                                                    const FDungeonSceneProviderContext& Context) {
    TSharedPtr<SceneProviderCommand> Command = MakeShareable(
        new SceneProviderCommand_CloneActor(Dungeon, Context, ActorTemplate));
    GameThreadCommands.Add(Command);
}

void FNonPooledDungeonSceneProvider::AddGroupActor(const TArray<FName>& ActorNodeIds,
                                                   const FDungeonSceneProviderContext& Context) {
    TSharedPtr<SceneProviderCommand> Command = MakeShareable(
        new SceneProviderCommand_CreateGroupActor(Dungeon, Context, ActorNodeIds));
    GameThreadCommands.Add(Command);
}

void FNonPooledDungeonSceneProvider::ExecuteCustomCommand(TSharedPtr<SceneProviderCommand> SceneCommand) {
    GameThreadCommands.Add(SceneCommand);
}

UWorld* FNonPooledDungeonSceneProvider::GetDungeonWorld() {
    return World;
}
