//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionConstants.h"
#include "Builders/SnapMap/SnapMapDungeonConfig.h"

class UGrammarScriptGraph;
class UGraphGrammar;
class USnapMapConnectionInfo;

namespace SnapMapDiagnostics {
    class FDiagnostics;
}

namespace SnapMapGraph {
    typedef TSharedPtr<struct FModuleNode> FModuleNodePtr;
    typedef TSharedPtr<struct FModuleDoor> FModuleDoorPtr;

    struct FSnapNegationVolumeState {
        FBox Bounds;
        bool bInverse = false;
    };

    struct FGrowthStaticState {
        FRandomStream Random;
        float BoundsContraction = 0;
        USnapMapModuleDatabase* ModuleDatabase;
        TMap<FName, TArray<FSnapMapModuleDatabaseItem>> ModulesByCategory;
        FTransform DungeonBaseTransform = FTransform::Identity;
        double StartTimeSecs;
        double MaxProcessingTimeSecs;
        bool bAllowModuleRotations = true;
        TArray<FSnapNegationVolumeState> NegationVolumes;
        TSharedPtr<SnapMapDiagnostics::FDiagnostics> Diagnostics;
    };

    struct FModuleDoor {
        FGuid ConnectionId;

        // The transform of the door relative to the module
        FTransform LocalTransform;

        // The connection info object defined in the door connection asset
        USnapMapConnectionInfo* ConnectionInfo;

        // The connection constraint (magnet, male-female etc)
        ESnapMapConnectionConstraint ConnectionConstraint;

        // The module that hosts this door
        FModuleNodePtr Owner;

        // The other door that is connected to this door
        FModuleDoorPtr ConnectedDoor;
    };

    struct FModuleNode {
        FGuid ModuleInstanceId;
        FTransform WorldTransform = FTransform::Identity;
        FSnapMapModuleDatabaseItem ModuleDBInfo;

        // The doors in this module
        TArray<FModuleDoorPtr> Doors;

        FModuleDoorPtr Incoming;
        TSet<FModuleDoorPtr> Outgoing;

        uint32 NetworkId = 0;

        FBox GetModuleBounds() const;
    };

    class DUNGEONARCHITECTRUNTIME_API FSnapMapGraphGenerator {
        public:
        static FModuleNodePtr Generate(int32 Seed, UGraphGrammar* MissionGrammar, UGrammarScriptGraph* MissionGraph, const FGrowthStaticState& StaticState);

    };
}

