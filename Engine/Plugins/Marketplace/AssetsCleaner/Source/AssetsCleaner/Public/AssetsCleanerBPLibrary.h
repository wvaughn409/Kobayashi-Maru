// Copyright 2019 Chris Garnier. All Rights Reserved.
#pragma once
#include "AssetData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetsCleanerEntryObject.h"
#include "AssetsCleanerBPLibrary.generated.h"


/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

UENUM(BlueprintType)
enum class EDialogBoxResult : uint8
{
	OK,
	Cancel
};

UCLASS()
class UAssetsCleanerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()


		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sort AssetEntry array"), Category = "AssetsCleanerLibrary")
		static void  SortAssetEntryArray(UPARAM(ref) TArray <UAssetsCleanerEntryObject*> &Array_To_Sort, int SortMethod, bool Descending, TArray <UAssetsCleanerEntryObject*> &Sorted_Array);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Pick Folder", Keywords = "pick folder open browse", ToolTip = "For AssetCleanerPlugin use only: Proper folder picker"), Category = "AssetCleanerPlugin")
		static void PickPath(bool& Succeeded, FString& Path);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Delete Assets with Dialog", Keywords = "Delete Assets editor dialog window popup", ToolTip = "For AssetCleanerPlugin use only: Delete Assets (Using editor 'Delete Assets' confirmation window"), Category = "AssetCleanerPlugin")
		static void DeleteAssets(UPARAM(ref) TArray<FAssetData>& AssetsToDelete, bool& Succeeded);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Show Reference Graph for Assets", Keywords = "Show reference graph asset", ToolTip = "For AssetCleanerPlugin use only: Show the reference graph for the selected assets"), Category = "AssetCleanerPlugin")
		static void ShowRefGraph(UPARAM(ref) TArray<FAssetData>& SelectedAssets);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Show Size Map for Assets", Keywords = "Show size map asset", ToolTip = "For AssetCleanerPlugin use only: Show the Size map tool for the selected assets"), Category = "AssetCleanerPlugin")
		static void ShowSizeMap(UPARAM(ref) TArray<FAssetData>& SelectedAssets);

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Does Module Exist", Keywords = "does module exist modulemanager", ToolTip = "For AssetCleanerPlugin use only: returns if a code module exists (loaded or not)"), Category = "AssetCleanerPlugin")
		static void GetModuleExists(UPARAM() FString ModuleName, bool &Exists);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Sync Content Browser to Asset Data", Keywords = "Sync content browser asset data", ToolTip = "For AssetCleanerPlugin use only: Sync content browser asset data"), Category = "AssetCleanerPlugin")
		static void SyncBrowserToAssetData(UPARAM(ref) TArray<FAssetData>& AssetsToSelect);

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Get AssetData Size", Keywords = "get size disk asset data", ToolTip = "For AssetCleanerPlugin use only: Gets the Disk size of an Asset through AssetData"), Category = "AssetCleanerPlugin")
		static void GetAssetDataSize(UPARAM(ref) FAssetData& AssetToSelect, bool& Returned, float& Size);

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Is Playing In Editor?", Keywords = "get is playing in editor PIE", ToolTip = "For AssetCleanerPlugin use only: Return if editor is in Play In Editor mode"), Category = "AssetCleanerPlugin")
		static void GetIsPlayingInEditor(bool& Playing);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Open Confirmation Dialog", ExpandEnumAsExecs = "Results", Keywords = "For AssetCleanerPlugin use only: Open confirmation dialog box popup", ToolTip = "Open an editor dialog confirmation box"), Category = "AssetCleanerPlugin")
		static void OpenConfirmationDialog(UPARAM()FText Message, EDialogBoxResult& Results);

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Locate Asset on Disk", Keywords = "locate asset explore disk explorer", ToolTip = "For AssetCleanerPlugin use only: Locates the asset in Explorer"), Category = "AssetCleanerPlugin")
		static void LocateAssetsOnDisk(UPARAM(ref)TArray<FAssetData>& Assets);
};
