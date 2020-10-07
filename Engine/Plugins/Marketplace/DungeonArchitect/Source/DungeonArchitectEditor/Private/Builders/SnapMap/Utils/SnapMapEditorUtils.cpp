//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Utils/SnapMapEditorUtils.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"
#include "Builders/SnapMap/SnapMapDungeonConfig.h"

#include "Engine/LevelBounds.h"

void FSnapMapEditorUtils::BuildModuleDatabaseCache(USnapMapModuleDatabase* InDatabase) {
    if (!InDatabase) return;

    for (FSnapMapModuleDatabaseItem& Module : InDatabase->Modules) {

        UWorld* World = Module.Level.LoadSynchronous();

        if (World) {
            ULevel* Level = World->PersistentLevel;
            Level->UpdateLevelComponents(false);

            Module.Connections.Reset();

            FBox LevelBounds(ForceInit);
            for (AActor* Actor : Level->Actors) {
                // Update the level bounds
                if (ALevelBounds* LevelBoundsActor = Cast<ALevelBounds>(Actor)) {
                    LevelBounds = LevelBoundsActor->GetComponentsBoundingBox();
                }

                // Update the connection actor list
                ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(Actor);
                if (ConnectionActor && ConnectionActor->ConnectionComponent) {
                    FSnapMapModuleDatabaseConnectionInfo Connection;
                    Connection.ConnectionId = ConnectionActor->GetConnectionId();
                    Connection.Transform = ConnectionActor->GetActorTransform();
                    Connection.ConnectionInfo = ConnectionActor->ConnectionComponent->ConnectionInfo;
                    Connection.ConnectionConstraint = ConnectionActor->ConnectionComponent->ConnectionConstraint;
                    Module.Connections.Add(Connection);
                }
            }

            if (!LevelBounds.IsValid) {
                LevelBounds = ALevelBounds::CalculateLevelBounds(Level);
            }

            Module.ModuleBounds = LevelBounds;
        }
    }

    InDatabase->Modify();
}
