//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "EdMode.h"
#include "EditorUndoClient.h"

DECLARE_LOG_CATEGORY_EXTERN(DungeonDrawMode, Log, All);

class ADungeon;
class IDungeonEdTool;
class UDungeonEdModeHandler;

/**
 * DungeonDraw editor mode
 */
class DUNGEONARCHITECTEDITOR_API FEdModeDungeon : public FEdMode, public FEditorUndoClient {
public:

    /** Constructor */
    FEdModeDungeon();

    /** Destructor */
    virtual ~FEdModeDungeon();

    /** FGCObject interface */
    void AddReferencedObjects(FReferenceCollector& Collector) override;

    /** FEdMode: Called when the mode is entered */
    void Enter() override;

    /** FEdMode: Called when the mode is exited */
    void Exit() override;
	virtual bool UsesToolkits() const override { return true; }

    void RecreateHandler(ADungeon* SelectedDungeon);
    void RecreateToolkit();

    void PostUndo() override {
    }

    // Begin FEditorUndoClient Interface
    void PostUndo(bool bSuccess) override;
    void PostRedo(bool bSuccess) override;
    // End of FEditorUndoClient


    /**
     * Called when the mouse is moved over the viewport
     *
     * @param	InViewportClient	Level editor viewport client that captured the mouse input
     * @param	InViewport			Viewport that captured the mouse input
     * @param	InMouseX			New mouse cursor X coordinate
     * @param	InMouseY			New mouse cursor Y coordinate
     *
     * @return	true if input was handled
     */
    bool MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 x, int32 y) override;

    /**
     * FEdMode: Called when the mouse is moved while a window input capture is in effect
     *
     * @param	InViewportClient	Level editor viewport client that captured the mouse input
     * @param	InViewport			Viewport that captured the mouse input
     * @param	InMouseX			New mouse cursor X coordinate
     * @param	InMouseY			New mouse cursor Y coordinate
     *
     * @return	true if input was handled
     */
    bool CapturedMouseMove(FEditorViewportClient* InViewportClient, FViewport* InViewport, int32 InMouseX,
                           int32 InMouseY) override;

    /** FEdMode: Called when a mouse button is pressed */
    bool StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;

    /** FEdMode: Called when a mouse button is released */
    bool EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;

    /** FEdMode: Called once per frame */
    void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;

    /** FEdMode: Called when a key is pressed */
    bool InputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey InKey,
                  EInputEvent InEvent) override;

    /** FEdMode: Called when mouse drag input it applied */
    bool InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot,
                    FVector& InScale) override;

    /** FEdMode: Render elements for the DungeonDraw tool */
    void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;

    /** FEdMode: Render HUD elements for this tool */
    void DrawHUD(FEditorViewportClient* ViewportClient, FViewport* Viewport, const FSceneView* View,
                 FCanvas* Canvas) override;

    /** FEdMode: Handling SelectActor */
    bool Select(AActor* InActor, bool bInSelected) override;

    /** FEdMode: Check to see if an actor can be selected in this mode - no side effects */
    bool IsSelectionAllowed(AActor* InActor, bool bInSelection) const override;

    /** FEdMode: Called when the currently selected actor has changed */
    void ActorSelectionChangeNotify() override;

    /** Notifies all active modes of mouse click messages. */
    virtual bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy,
                             const FViewportClick& Click) override;

    /** Called when the current level changes */
    void NotifyNewCurrentLevel();

    /** Called when the user changes the current tool in the UI */
    void NotifyToolChanged();

    void OnContentBrowserSelectionChanged(const TArray<FAssetData>& NewSelectedAssets, bool bIsPrimaryBrowser);

    /** FEdMode: widget handling */
    FVector GetWidgetLocation() const override;
    virtual bool AllowWidgetMove() override;
    bool ShouldDrawWidget() const override;
    bool UsesTransformWidget() const override;
    EAxisList::Type GetWidgetAxisToDraw(FWidget::EWidgetMode InWidgetMode) const override;

    bool DisallowMouseDeltaTracking() const override;

    /** Forces real-time perspective viewports */
    void SetRealtimeOverride();
    void RestoreRealtimeOverride();


    /** Apply brush */
    void ApplyBrush(FEditorViewportClient* ViewportClient);

    UDungeonEdModeHandler* GetHandler() const;

    static FEditorModeID EM_Dungeon;


private:
    TSharedPtr<class FDungeonBuildingNotification> DungeonBuildingNotification;

    UDungeonEdModeHandler* ModeHandler;
    bool bToolActive;
};
