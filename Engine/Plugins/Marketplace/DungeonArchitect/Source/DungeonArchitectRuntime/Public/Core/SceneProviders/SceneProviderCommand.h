//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Actors/DungeonMesh.h"
#include "Core/Rules/DungeonSpawnLogic.h"
#include "Core/SceneProviders/DungeonSceneProviderContext.h"

#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"
#include "Engine/Level.h"
#include "Engine/World.h"
#include "Particles/Emitter.h"
#include "UObject/GCObject.h"

class ADungeon;
class UDungeonSpawnLogic;
class UDungeonActorTemplate;

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand : public FGCObject {
public:
    SceneProviderCommand(ADungeon* pDungeon, const FDungeonSceneProviderContext& InContext) :
        ExecutionPriority(INT_MAX), Dungeon(pDungeon), Context(InContext), bWaitForFrameUpdate(false) {
    }

    virtual ~SceneProviderCommand() {
    }

    void Execute(UWorld* World);

    static bool WeightSortPredicate(TSharedPtr<SceneProviderCommand> cmd1, TSharedPtr<SceneProviderCommand> cmd2) {
        return (cmd1->ExecutionPriority < cmd2->ExecutionPriority);
    }

    float ExecutionPriority;

    virtual void UpdateExecutionPriority(const FVector& BuildPosition) {
    }

    FORCEINLINE FName CreateNodeTagFromId(const FName& NodeId) {
        return *FString("NODE-").Append(NodeId.ToString());
    }

    virtual bool ShouldStallExecution() const { return false; }
    bool ShouldWaitTillEndOfFrame() const { return bWaitForFrameUpdate; }
    void SetShouldWaitTillEndOfFrame(bool InWaitTillEndOfFrame) { bWaitForFrameUpdate = InWaitTillEndOfFrame; }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

    static FName TagComplexActor; // If this tag is preset, we do not reuse this object, instead destroy and recreate it

    void PostInitializeActor(AActor* Actor);

    // If tagged as a complex object, it will not reuse the object, instead destroy and recreate it
    static void TagAsComplexObject(AActor* Actor);
    static void MoveToFolder(ADungeon* Dungeon, AActor* ActorToMove);

protected:
    virtual void ExecuteImpl(UWorld* World) = 0;

    void AddNodeTag(AActor* Actor, const FName& NodeId, bool bApplyPrefix = true);
    void MoveToFolder(AActor* ActorToMove);


    void UpdateExecutionPriorityByDistance(const FVector& BuildPosition, const FTransform& CommandTransform) {
        FVector Location = CommandTransform.GetLocation();
        ExecutionPriority = (Location - BuildPosition).SizeSquared();
    }

    template <typename T>
    T* AddActor(UWorld* World, ULevel* Level, const FTransform& transform, const FName& NodeId) {
        FActorSpawnParameters SpawnParams;
        SpawnParams.OverrideLevel = Level;
        T* Actor = World->SpawnActor<T>(T::StaticClass(), SpawnParams);
        Actor->SetActorTransform(transform);
        Actor->Tags.Add(FName("Dungeon"));
        AddNodeTag(Actor, NodeId);
        MoveToFolder(Actor);
        return Actor;
    }

    ADungeon* Dungeon;
    FDungeonSceneProviderContext Context;
    bool bWaitForFrameUpdate;

private:
    static void ExecuteSpawnLogics(AActor* SpawnedActor, ADungeon* InDungeon,
                                   const TArray<UDungeonSpawnLogic*>& SpawnLogics);

};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_CreateMesh : public SceneProviderCommand {
public:
    SceneProviderCommand_CreateMesh(ADungeon* pDungeon, const FDungeonSceneProviderContext& InContext,
                                    UDungeonMesh* pMesh)
        : SceneProviderCommand(pDungeon, InContext), Mesh(pMesh) {
    }

    static void SetMeshComponentAttributes(UStaticMeshComponent* StaticMeshComponent,
                                           UStaticMeshComponent* StaticMeshTemplate);

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Context.transform);
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UDungeonMesh* Mesh;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_AddLight : public SceneProviderCommand {
public:
    SceneProviderCommand_AddLight(ADungeon* pDungeon, const FDungeonSceneProviderContext& InContext,
                                  UPointLightComponent* pLightTemplate)
        : SceneProviderCommand(pDungeon, InContext), LightTemplate(pLightTemplate) {
    }

    static void SetSpotLightAttributes(USpotLightComponent* SpotLightComponent, USpotLightComponent* SpotLightTemplate);
    static void SetPointLightAttributes(UPointLightComponent* PointLightComponent, UPointLightComponent* LightTemplate);

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Context.transform);
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UPointLightComponent* LightTemplate;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_AddParticleSystem : public SceneProviderCommand {
public:
    SceneProviderCommand_AddParticleSystem(ADungeon* pDungeon, const FDungeonSceneProviderContext& InContext,
                                           UParticleSystem* pParticleTemplate)
        : SceneProviderCommand(pDungeon, InContext), ParticleTemplate(pParticleTemplate) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Context.transform);
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UParticleSystem* ParticleTemplate;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_AddActor : public SceneProviderCommand {
public:
    SceneProviderCommand_AddActor(ADungeon* pDungeon, const FDungeonSceneProviderContext& InContext,
                                  UClass* pClassTemplate)
        : SceneProviderCommand(pDungeon, InContext), ClassTemplate(pClassTemplate) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Context.transform);
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UClass* ClassTemplate;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_CreateGroupActor : public SceneProviderCommand {
public:
    SceneProviderCommand_CreateGroupActor(ADungeon* pDungeon, const FDungeonSceneProviderContext& InContext,
                                          const TArray<FName>& pActorNodeIds)
        : SceneProviderCommand(pDungeon, InContext)
          , ActorNodeIds(pActorNodeIds) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        ExecutionPriority = INT32_MAX;
    }

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    TArray<FName> ActorNodeIds;
};


class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_CloneActor : public SceneProviderCommand {
public:
    SceneProviderCommand_CloneActor(ADungeon* pDungeon, const FDungeonSceneProviderContext& InContext,
                                    UDungeonActorTemplate* pActorTemplate)
        : SceneProviderCommand(pDungeon, InContext)
          , ActorTemplate(pActorTemplate) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Context.transform);
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UDungeonActorTemplate* ActorTemplate;
};


class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_SetActorTransform : public SceneProviderCommand {
public:
    SceneProviderCommand_SetActorTransform(const FDungeonSceneProviderContext& InContext, AActor* pActor) :
        SceneProviderCommand(nullptr, InContext), Actor(pActor) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Context.transform);
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    AActor* Actor;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_DestroyActor : public SceneProviderCommand {
public:
    SceneProviderCommand_DestroyActor(AActor* pActor) : SceneProviderCommand(nullptr, FDungeonSceneProviderContext()),
                                                        Actor(pActor) {
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    AActor* Actor;
};


class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_DestroyActorWithTag : public SceneProviderCommand {
public:
    SceneProviderCommand_DestroyActorWithTag(const FName& InTag) : SceneProviderCommand(
                                                                       nullptr, FDungeonSceneProviderContext()),
                                                                   Tag(InTag) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        ExecutionPriority = INT32_MAX;
    }

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    FName Tag;
};


class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_ReuseActor : public SceneProviderCommand {
public:
    SceneProviderCommand_ReuseActor(ADungeon* InDungeon, const FDungeonSceneProviderContext& InContext,
                                    AActor* InActorToReuse)
        : SceneProviderCommand(InDungeon, InContext)
          , ActorToReuse(InActorToReuse) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Context.transform);
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

protected:
    AActor* ActorToReuse;
    bool bRerunConstructionScripts = true;
};


class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_ReuseStaticMesh : public SceneProviderCommand_ReuseActor {
public:
    SceneProviderCommand_ReuseStaticMesh(ADungeon* InDungeon, const FDungeonSceneProviderContext& InContext,
                                         AActor* InActorToReuse, UStaticMesh* InStaticMesh)
        : SceneProviderCommand_ReuseActor(InDungeon, InContext, InActorToReuse)
          , StaticMesh(InStaticMesh) {
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UStaticMesh* StaticMesh;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_ReuseLight : public SceneProviderCommand_ReuseActor {
public:
    SceneProviderCommand_ReuseLight(ADungeon* InDungeon, const FDungeonSceneProviderContext& InContext,
                                    AActor* InActorToReuse, UPointLightComponent* InLightTemplate)
        : SceneProviderCommand_ReuseActor(InDungeon, InContext, InActorToReuse)
          , LightTemplate(InLightTemplate) {
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UPointLightComponent* LightTemplate;
};


class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_ReuseParticleSystem : public SceneProviderCommand_ReuseActor {
public:
    SceneProviderCommand_ReuseParticleSystem(ADungeon* InDungeon, const FDungeonSceneProviderContext& InContext,
                                             AActor* InActorToReuse, UParticleSystem* InParticleTemplate)
        : SceneProviderCommand_ReuseActor(InDungeon, InContext, InActorToReuse)
          , ParticleTemplate(InParticleTemplate) {
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UParticleSystem* ParticleTemplate;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_ReuseActorTemplate : public SceneProviderCommand_ReuseActor {
public:
    SceneProviderCommand_ReuseActorTemplate(ADungeon* InDungeon, const FDungeonSceneProviderContext& InContext,
                                            AActor* InActorToReuse, UClass* InClassTemplate)
        : SceneProviderCommand_ReuseActor(InDungeon, InContext, InActorToReuse)
          , ClassTemplate(InClassTemplate) {
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UClass* ClassTemplate;
};

class DUNGEONARCHITECTRUNTIME_API SceneProviderCommand_ReuseClonedActor : public SceneProviderCommand_ReuseActor {
public:
    SceneProviderCommand_ReuseClonedActor(ADungeon* InDungeon, const FDungeonSceneProviderContext& InContext,
                                          AActor* InActorToReuse, UDungeonActorTemplate* InActorTemplate)
        : SceneProviderCommand_ReuseActor(InDungeon, InContext, InActorToReuse)
          , ActorTemplate(InActorTemplate) {
    }

    void AddReferencedObjects(FReferenceCollector& Collector) override;

protected:
    void ExecuteImpl(UWorld* World) override;

private:
    UDungeonActorTemplate* ActorTemplate;
};
