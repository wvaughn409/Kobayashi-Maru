//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/DungeonBuilder.h"

#include "Builders/Grid/GridDungeonBuilder.h"
#include "Core/Actors/DungeonActorTemplate.h"
#include "Core/Dungeon.h"
#include "Core/DungeonEventListener.h"
#include "Core/DungeonQuery.h"
#include "Core/Markers/DungeonMarkerEmitter.h"
#include "Core/SceneProviders/InstancedDungeonSceneProvider.h"
#include "Core/SceneProviders/PooledDungeonSceneProvider.h"
#include "Core/Utils/DungeonModelHelper.h"
#include "Core/Volumes/DungeonMarkerReplaceVolume.h"
#include "Core/Volumes/DungeonMirrorVolume.h"
#include "Core/Volumes/DungeonThemeOverrideVolume.h"

#include "EngineUtils.h"
#include "Particles/ParticleSystem.h"
#include "PreviewScene.h"
#include "UObject/UObjectIterator.h"

DEFINE_LOG_CATEGORY(DungeonBuilderLog);


void CreatePropLookup(UDungeonThemeAsset* PropAsset, PropBySocketTypeByTheme_t& PropBySocketTypeByTheme) {
    if (!PropAsset || PropBySocketTypeByTheme.Contains(PropAsset)) {
        // Lookup for this theme has already been built
        return;
    }

    PropBySocketTypeByTheme.Add(PropAsset, PropBySocketType_t());
    PropBySocketType_t& PropBySocketType = PropBySocketTypeByTheme[PropAsset];

    for (const FPropTypeData& Prop : PropAsset->Props) {
        if (!PropBySocketType.Contains(Prop.AttachToSocket)) {
            PropBySocketType.Add(Prop.AttachToSocket, TArray<FPropTypeData>());
        }
        PropBySocketType[Prop.AttachToSocket].Add(Prop);
    }
}

// Picks a theme from the list that has a definition for the defined socket
UDungeonThemeAsset* GetBestMatchedTheme(const FRandomStream& random, const TArray<UDungeonThemeAsset*>& Themes,
                                        const FPropSocket& socket, PropBySocketTypeByTheme_t& PropBySocketTypeByTheme) {
    TArray<UDungeonThemeAsset*> ValidThemes;
    for (UDungeonThemeAsset* Theme : Themes) {
        if (PropBySocketTypeByTheme.Contains(Theme)) {
            PropBySocketType_t& PropBySocketType = PropBySocketTypeByTheme[Theme];
            if (PropBySocketType.Num() > 0) {
                if (PropBySocketType.Contains(socket.SocketType) && PropBySocketType[socket.SocketType].Num() > 0) {
                    ValidThemes.Add(Theme);
                }
            }
        }
    }
    if (ValidThemes.Num() == 0) {
        return nullptr;
    }

    int32 index = FMath::FloorToInt(random.FRand() * ValidThemes.Num()) % ValidThemes.Num();
    return ValidThemes[index];
}

struct ThemeOverrideInfo {
    FRectangle Bounds;
    ADungeonThemeOverrideVolume* Volume;
};

void GenerateThemeOverrideList(UWorld* World, ADungeon* Dungeon, PropBySocketTypeByTheme_t& PropBySocketTypeByTheme,
                               TArray<ThemeOverrideInfo>& OutOverrideList) {
    if (!World) return;

    OutOverrideList.Reset();
    if (World) {
        for (TActorIterator<ADungeonThemeOverrideVolume> VolumeIt(World); VolumeIt; ++VolumeIt) {
            ADungeonThemeOverrideVolume* Volume = *VolumeIt;
            if (Volume->IsPendingKill() || !Volume->IsValidLowLevel()) {
                continue;
            }
            bool valid;
            if (!Dungeon) {
                valid = true;
            }
            else {
                valid = (Volume->Dungeon == Dungeon);
            }
            if (valid && Volume->ThemeOverride) {
                FRectangle VolumeBounds;
                Volume->GetDungeonVolumeBounds(FVector(1, 1, 1), VolumeBounds);
                ThemeOverrideInfo Info;
                Info.Bounds = VolumeBounds;
                Info.Volume = Volume;
                OutOverrideList.Add(Info);

                // Build a lookup of the theme for faster access later on
                CreatePropLookup(Volume->ThemeOverride, PropBySocketTypeByTheme);
            }
        }
    }
}


void UDungeonBuilder::BuildDungeon(ADungeon* pDungeon, UWorld* World) {
    this->Dungeon = pDungeon;
    if (!Dungeon) {
        UE_LOG(DungeonBuilderLog, Log, TEXT("Cannot build dungeon due to invalid reference"));
        return;
    }

    BuildDungeon(Dungeon->GetModel(), Dungeon->GetConfig(), Dungeon->GetQuery(), World);
}

void UDungeonBuilder::BuildDungeon(UDungeonModel* pModel, UDungeonConfig* pConfig, UDungeonQuery* pQuery,
                                   UWorld* World) {
    this->model = pModel;
    this->config = pConfig;
    this->query = pQuery;

    if (query && query->UserState) {
        query->UserState->ClearAllState();
    }

    _SocketIdCounter = 0;
    nrandom.Init(config->Seed);
    random.Initialize(config->Seed);

    BuildDungeonImpl(World);
}

void UDungeonBuilder::BuildNonThemedDungeon(ADungeon* pDungeon, TSharedPtr<FDungeonSceneProvider> SceneProvider,
                                            UWorld* World) {
    this->Dungeon = pDungeon;
    if (!Dungeon) {
        UE_LOG(DungeonBuilderLog, Log, TEXT("Cannot build dungeon due to invalid reference"));
        return;
    }

    BuildNonThemedDungeon(Dungeon->GetModel(), Dungeon->GetConfig(), Dungeon->GetQuery(), SceneProvider, World);
}

void UDungeonBuilder::BuildNonThemedDungeon(UDungeonModel* pModel, UDungeonConfig* pConfig, UDungeonQuery* pQuery,
                                            TSharedPtr<FDungeonSceneProvider> SceneProvider, UWorld* World) {
    this->model = pModel;
    this->config = pConfig;
    this->query = pQuery;

    if (query && query->UserState) {
        query->UserState->ClearAllState();
    }

    _SocketIdCounter = 0;
    nrandom.Init(config->Seed);
    random.Initialize(config->Seed);

    BuildNonThemedDungeonImpl(World, SceneProvider);
}

void UDungeonBuilder::DestroyNonThemedDungeon(UDungeonModel* pModel, UDungeonConfig* pConfig, UDungeonQuery* pQuery,
                                              ADungeon* InDungeon, UWorld* World) {
    this->model = pModel;
    this->config = pConfig;
    this->query = pQuery;
    this->Dungeon = InDungeon;

    DestroyNonThemedDungeonImpl(World);
}

void UDungeonBuilder::ApplyDungeonTheme(const TArray<UDungeonThemeAsset*>& Themes,
                                        const TArray<FClusterThemeInfo>& ClusteredThemes,
                                        TSharedPtr<FDungeonSceneProvider> SceneProvider, UWorld* World) {

    PropBySocketTypeByTheme_t PropBySocketTypeByTheme;
    for (UDungeonThemeAsset* Theme : Themes) {
        CreatePropLookup(Theme, PropBySocketTypeByTheme);
    }
    TArray<ThemeOverrideInfo> ThemeOverrideList;
    GenerateThemeOverrideList(World, Dungeon, PropBySocketTypeByTheme, ThemeOverrideList);

    TMap<FString, FClusterThemeInfo> ClusteredThemeByName;
    for (const FClusterThemeInfo& ClusteredThemeInfo : ClusteredThemes) {
        if (!ClusteredThemeByName.Contains(ClusteredThemeInfo.ClusterThemeName)) {
            ClusteredThemeByName.Add(ClusteredThemeInfo.ClusterThemeName, ClusteredThemeInfo);
        }

        for (UDungeonThemeAsset* Theme : ClusteredThemeInfo.Themes) {
            if (!PropBySocketTypeByTheme.Contains(Theme)) {
                CreatePropLookup(Theme, PropBySocketTypeByTheme);
            }
        }
    }

    TArray<FDungeonMarkerInfo> MarkersToEmit;

    // Fill up the prop sockets with the defined mesh data 
    for (int32 i = 0; i < PropSockets.Num(); i++) {
        const FPropSocket& socket = PropSockets[i];

        UDungeonThemeAsset* ThemeToUse = nullptr;

        // User the overridden theme if specified
        if (!socket.ClusterThemeOverride.IsEmpty() && ClusteredThemeByName.Contains(socket.ClusterThemeOverride)) {
            ThemeToUse = GetBestMatchedTheme(random, ClusteredThemeByName[socket.ClusterThemeOverride].Themes, socket,
                                             PropBySocketTypeByTheme); // PropAsset;
        }

        if (!ThemeToUse) {
            // use the default theme list
            ThemeToUse = GetBestMatchedTheme(random, Themes, socket, PropBySocketTypeByTheme); // PropAsset;
        }

        UDungeonThemeAsset* FallbackTheme = ThemeToUse;

        ADungeonThemeOverrideVolume* BestOverrideVolume = nullptr;
        float BestOverrideWeight = 0;

        // Check if this socket resides within a override volume
        for (const ThemeOverrideInfo& OverrideInfo : ThemeOverrideList) {
            FVector Location = socket.Transform.GetLocation();
            ADungeonThemeOverrideVolume* ThemeOverrideVolume = OverrideInfo.Volume;
            if (!ThemeOverrideVolume) continue;

            FIntVector ILocation(Location.X, Location.Y, Location.Z);
            bool intersects = OverrideInfo.Bounds.Contains(ILocation);
            if (OverrideInfo.Volume->Reversed) {
                intersects = !intersects;
            }

            if (intersects) {
                if (!BestOverrideVolume || BestOverrideWeight < ThemeOverrideVolume->OverrideWeight) {
                    BestOverrideVolume = ThemeOverrideVolume;
                    BestOverrideWeight = ThemeOverrideVolume->OverrideWeight;
                }
            }
        }

        if (BestOverrideVolume) {
            ThemeToUse = BestOverrideVolume->ThemeOverride;
            if (!BestOverrideVolume->FallbackOnMissingMarkers) {
                // We do not want a fallback. So use this same theme as a fallback
                FallbackTheme = ThemeToUse;
            }
        }

        if (!ThemeToUse) continue;

        check(PropBySocketTypeByTheme.Contains(ThemeToUse));
        PropBySocketType_t* PropBySocketTypePtr = &PropBySocketTypeByTheme[ThemeToUse];
        if (FallbackTheme != ThemeToUse && FallbackTheme != nullptr && !PropBySocketTypePtr->Contains(socket.SocketType)
        ) {
            // The theme we are about to use doesn't have any nodes attached to this marker.
            // Check if we can use a fallback theme
            PropBySocketType_t* FallbackPropBySocketTypePtr = &PropBySocketTypeByTheme[FallbackTheme];
            if (FallbackPropBySocketTypePtr->Contains(socket.SocketType)) {
                PropBySocketTypePtr = FallbackPropBySocketTypePtr;
            }
        }

        PropBySocketType_t& PropBySocketType = *PropBySocketTypePtr;

        if (PropBySocketType.Contains(socket.SocketType)) {
            const TArray<FPropTypeData>& props = PropBySocketType[socket.SocketType];
            for (const FPropTypeData& prop : props) {
                bool insertMesh = false;
                if (prop.bUseSelectionLogic) {
                    insertMesh = PerformSelectionLogic(prop.SelectionLogics, socket);

                    if (insertMesh && !prop.bLogicOverridesAffinity) {
                        // The logic has selected the mesh and it doesn't override the affinity.
                        // Respect the affinity variable and apply probability
                        float probability = random.FRand();
                        insertMesh = (probability < prop.Probability);
                    }
                }
                else {
                    // Perform probability based selection logic
                    float probability = random.FRand();
                    insertMesh = (probability < prop.Probability);
                }

                FQuat spatialRotationOffset = FQuat::Identity;

                // Check if we are using spatial constraints
                if (prop.bUseSpatialConstraint) {

                    bool bPassesSpatialConstraint = ProcessSpatialConstraint(
                        prop.SpatialConstraint, socket.Transform, spatialRotationOffset);
                    if (!bPassesSpatialConstraint) {
                        insertMesh = false;
                    }
                }

                if (insertMesh) {
                    // Attach this prop to the socket
                    FTransform transform = socket.Transform;

                    // Apply the spatial rotation offset
                    if (prop.bUseSpatialConstraint && prop.SpatialConstraint) {
                        if (!prop.SpatialConstraint->bApplyBaseRotation) {
                            transform.SetRotation(FQuat::Identity);
                        }
                        FTransform spatialRotationTransform = FTransform::Identity;
                        spatialRotationTransform.SetRotation(spatialRotationOffset);
                        FTransform out;
                        FTransform::Multiply(&out, &spatialRotationTransform, &transform);
                        transform = out;
                    }

                    {
                        FTransform out;
                        FTransform::Multiply(&out, &prop.Offset, &transform);
                        transform = out;
                    }


                    // Apply transform logic, if specified
                    if (prop.bUseTransformLogic) {
                        FTransform logicOffset = PerformTransformLogic(prop.TransformLogics, socket);
                        FTransform out;
                        FTransform::Multiply(&out, &logicOffset, &transform);
                        transform = out;
                    }

                    TArray<UDungeonSpawnLogic*> SpawnLogics;
                    {
                        TArray<UDungeonSpawnLogic*> SpawnLogicsSource = prop.bUseSpawnLogic
                                                                            ? prop.SpawnLogics
                                                                            : TArray<UDungeonSpawnLogic*>();
                        UObject* SpawnLogicArrayOuter = Dungeon;
                        if (!SpawnLogicArrayOuter) {
                            SpawnLogicArrayOuter = this;
                        }

                        UDungeonModelHelper::CloneUObjectArray(SpawnLogicArrayOuter, SpawnLogicsSource, SpawnLogics);
                    }

                    if (prop.AssetObject) {
                        FDungeonMarkerInfo MarkerInfo;
                        MarkerInfo.transform = transform;
                        MarkerInfo.NodeId = prop.NodeId;
                        MarkerInfo.SpawnLogics = SpawnLogics;
                        MarkerInfo.TemplateObject = prop.AssetObject;
                        MarkerInfo.UserData = socket.UserData;
                        MarkersToEmit.Add(MarkerInfo);
                    }

                    // Add child sockets if any
                    for (const FPropChildSocketData& ChildSocket : prop.ChildSockets) {
                        FTransform childTransform;
                        FTransform::Multiply(&childTransform, &ChildSocket.Offset, &transform);
                        AddMarker(ChildSocket.SocketType, childTransform);

                        // Sync the user data
                        {
                            FPropSocket& NewSocket = PropSockets[PropSockets.Num() - 1];
                            NewSocket.ClusterThemeOverride = socket.ClusterThemeOverride;
                            NewSocket.UserData = socket.UserData;
                        }
                    }

                    if (prop.ConsumeOnAttach) {
                        // Attach no more on this socket
                        break;
                    }
                }
            }
        }
    }

    // Notify that the markers have been emitted
    DungeonUtils::FDungeonEventListenerNotifier::NotifyMarkersEmitted(Dungeon, MarkersToEmit);

    // Create the scene build commands based on the markers emitted on the scene
    SceneProvider->OnDungeonBuildStart(config);

    for (const FDungeonMarkerInfo& MarkerInfo : MarkersToEmit) {
        FDungeonSceneProviderContext Context;
        Context.transform = MarkerInfo.transform;
        Context.NodeId = MarkerInfo.NodeId;
        Context.SpawnLogics = MarkerInfo.SpawnLogics;
        Context.MarkerUserData = MarkerInfo.UserData;

        // Add a mesh instance, if specified
        AActor* SpawnedActor = nullptr;
        if (UDungeonMesh* Mesh = Cast<UDungeonMesh>(MarkerInfo.TemplateObject)) {
            SceneProvider->AddStaticMesh(Mesh, Context);
        }
        else if (UPointLightComponent* Light = Cast<UPointLightComponent>(MarkerInfo.TemplateObject)) {
            SceneProvider->AddLight(Light, Context);
        }
        else if (UParticleSystem* Particle = Cast<UParticleSystem>(MarkerInfo.TemplateObject)) {
            SceneProvider->AddParticleSystem(Particle, Context);
        }
        else if (UClass* ClassTemplate = Cast<UClass>(MarkerInfo.TemplateObject)) {
            SceneProvider->AddActorFromTemplate(ClassTemplate, Context);
        }
        else if (UDungeonActorTemplate* ActorTemplate = Cast<UDungeonActorTemplate>(MarkerInfo.TemplateObject)) {
            SceneProvider->AddClonedActor(ActorTemplate, Context);
        }
        else {
            // Not supported.  Give the implementation an opportunity to handle it
            SceneProvider->ProcessUnsupportedObject(MarkerInfo.TemplateObject, Context);
        }
    }

    SceneProvider->OnDungeonBuildStop();
}

void UDungeonBuilder::MirrorDungeon() {
    if (Dungeon) {
        for (TObjectIterator<ADungeonMirrorVolume> Volume; Volume; ++Volume) {
            if (!Volume || Volume->IsPendingKill() || !Volume->IsValidLowLevel()) {
                continue;
            }
            if (Volume->Dungeon == Dungeon) {
                // Build a lookup of the theme for faster access later on
                MirrorDungeonWithVolume(*Volume);
            }
        }
    }
}

TSharedPtr<FDungeonSceneProvider> UDungeonBuilder::CreateSceneProvider(UDungeonConfig* pConfig, ADungeon* pDungeon,
                                                                       UWorld* World) {
    if (!pConfig) {
        UE_LOG(DungeonBuilderLog, Error, TEXT("Invalid config reference"));
        return nullptr;
    }

    TSharedPtr<FDungeonSceneProvider> SceneProvider;
    if (pConfig->Instanced) {
        SceneProvider = MakeShareable(new FInstancedDungeonSceneProvider(pDungeon, World));
    }
    else {
        SceneProvider = MakeShareable(new FPooledDungeonSceneProvider(pDungeon, World));
    }

    return SceneProvider;
}

bool UDungeonBuilder::ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint,
                                               const FTransform& Transform, FQuat& OutRotationOffset) {
    return true;
}

void UDungeonBuilder::AddMarker(const FString& SocketType, const FTransform& _transform, int count,
                                const FVector& InterOffset, TSharedPtr<class IDungeonMarkerUserData> InUserData) {
    FTransform transform = _transform;
    FVector Location = transform.GetLocation();
    for (int i = 0; i < count; i++) {
        AddMarker(SocketType, transform, InUserData);
        Location += InterOffset;
        transform.SetLocation(Location);
    }
}

void UDungeonBuilder::AddMarker(const FString& SocketType, const FTransform& transform,
                                TSharedPtr<class IDungeonMarkerUserData> InUserData) {
    FPropSocket socket;
    socket.Id = ++_SocketIdCounter;
    socket.IsConsumed = false;
    socket.SocketType = SocketType;
    socket.Transform = transform;
    socket.UserData = InUserData;
    PropSockets.Add(socket);
}

void UDungeonBuilder::AddMarker(TArray<FPropSocket>& pPropSockets, const FString& SocketType,
                                const FTransform& transform, TSharedPtr<class IDungeonMarkerUserData> InUserData) {
    FPropSocket socket;
    socket.Id = ++_SocketIdCounter;
    socket.IsConsumed = false;
    socket.SocketType = SocketType;
    socket.Transform = transform;
    socket.UserData = InUserData;
    pPropSockets.Add(socket);
}

void UDungeonBuilder::EmitDungeonMarkers_Implementation() {
    random.Initialize(config->Seed);
}

void UDungeonBuilder::EmitMarker(const FString& SocketType, const FTransform& Transform) {
    AddMarker(SocketType, Transform);
}

void UDungeonBuilder::EmitCustomMarkers(TArray<UDungeonMarkerEmitter*> MarkerEmitters) {
    /*
    UDungeonQuery* Query = nullptr;
    if (Dungeon) {
        Query = Dungeon->GetQuery();
    }
    else {
        // The theme editor does not have a dungeon actor. Create a new query object in that case
        Query = NewObject<UDungeonQuery>(this, GetQueryClass());
        Query->Initialize(config, GetModel(), FTransform::Identity);
    }
    */

    for (UDungeonMarkerEmitter* MarkerEmitter : MarkerEmitters) {
        if (MarkerEmitter) {
            MarkerEmitter->EmitMarkers(this, GetModel(), config, query);
        }
    }
}

UClass* UDungeonBuilder::DefaultBuilderClass() {
    return UGridDungeonBuilder::StaticClass();
}

void UDungeonBuilder::ProcessMarkerReplacementVolumes() {
    UWorld* World = Dungeon ? Dungeon->GetWorld() : nullptr;
    if (World) {
        for (TActorIterator<ADungeonMarkerReplaceVolume> VolumeIt(World); VolumeIt; ++VolumeIt) {
            ADungeonMarkerReplaceVolume* Volume = *VolumeIt;
            if (Volume && Volume->Dungeon == Dungeon) {
                ProcessMarkerReplacementVolume(Volume);
            }
        }
    }
}

void UDungeonBuilder::ProcessMarkerReplacementVolume(class ADungeonMarkerReplaceVolume* MarkerReplaceVolume) {
    if (!MarkerReplaceVolume) return;
    for (FPropSocket& Socket : PropSockets) {
        if (MarkerReplaceVolume->EncompassesPoint(Socket.Transform.GetLocation())) {
            for (const FMarkerReplaceEntry& Entry : MarkerReplaceVolume->Replacements) {
                if (Socket.SocketType == Entry.MarkerName) {
                    Socket.SocketType = Entry.ReplacementName;
                }
            }
        }
    }
}

void UDungeonBuilder::ProcessThemeItemUserData(TSharedPtr<IDungeonMarkerUserData> UserData, AActor* SpawnedActor) {
}
