// Copyright 2019 Chris Garnier. All Rights Reserved.

#include "AssetsCleanerBPLibrary.h"
#include "AssetsCleaner.h"
#include "Core/Public/Misc/MessageDialog.h"
#include "DesktopPlatform/Public/DesktopPlatformModule.h"
#include "Core/Public/Misc/Paths.h"
#include "AssetData.h"
#include "AssetsCleanerEntryObject.h"
#include "Editor/UnrealEd/Public/Dialogs/DlgPickPath.h"
#include "Editor/UnrealEd/Public/ObjectTools.h"
#include "Editor.h"
#include "AssetManagerEditorModule.h"



UAssetsCleanerBPLibrary::UAssetsCleanerBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}


void UAssetsCleanerBPLibrary::SortAssetEntryArray(UPARAM(ref)TArray<UAssetsCleanerEntryObject*> &Array_To_Sort, int SortMethod, bool Descending, TArray<UAssetsCleanerEntryObject*> &Sorted_Array)
{

	if (SortMethod == 0) {
		Array_To_Sort.Sort([Descending](const UAssetsCleanerEntryObject& A, const UAssetsCleanerEntryObject& B) {
			if (Descending) {
				return A.CustomAssetData.AssetName.ToString() > B.CustomAssetData.AssetName.ToString();
			}
			else {
				return A.CustomAssetData.AssetName.ToString() < B.CustomAssetData.AssetName.ToString();
			}
			
		});
	}
	else if (SortMethod == 1) {
		Array_To_Sort.Sort([Descending](const UAssetsCleanerEntryObject& A, const UAssetsCleanerEntryObject& B) {
			if (Descending) {
				return A.CustomAssetData.AssetClass.ToString() > B.CustomAssetData.AssetClass.ToString();
			}
			else {
				return A.CustomAssetData.AssetClass.ToString() < B.CustomAssetData.AssetClass.ToString();
			}

			
		});
	}
	else if (SortMethod == 2) {
		Array_To_Sort.Sort([Descending](const UAssetsCleanerEntryObject& A, const UAssetsCleanerEntryObject& B) {
			if (Descending) {
				return A.CustomAssetData.PackagePath.ToString() > B.CustomAssetData.PackagePath.ToString();
			}
			else {
				return A.CustomAssetData.PackagePath.ToString() < B.CustomAssetData.PackagePath.ToString();
			}
			
		});
	}
	else if (SortMethod == 3) {
		Array_To_Sort.Sort([Descending](const UAssetsCleanerEntryObject& A, const UAssetsCleanerEntryObject& B) {
			if (Descending) {
				return A.DiskSize > B.DiskSize;
			}
			else {
				return A.DiskSize < B.DiskSize;
			}

		});
	}


	else {
		UE_LOG(LogTemp, Error, TEXT("Invalid SortMethod used"));
	}

	Sorted_Array = Array_To_Sort;
}

void UAssetsCleanerBPLibrary::PickPath(bool & Succeeded, FString & Path)
{
	TSharedPtr<SDlgPickPath> PickPathWidget =
		SNew(SDlgPickPath)
		.Title(FText::FromString("Move files to..."))
		.DefaultPath(FText::FromString("/Game"));

	if (PickPathWidget->ShowModal() == EAppReturnType::Ok)
	{
		FText pickedpath = PickPathWidget->GetPath();
		if (pickedpath.IsEmpty()) {
			UE_LOG(LogTemp, Error, TEXT("Invalid Folder"));
		}
		else {
			FString sPickedPath = pickedpath.ToString();
			if (!sPickedPath.StartsWith("/Game") || sPickedPath.StartsWith("/Game/Collections") || sPickedPath.StartsWith("/Game/Developers")) {
				FMessageDialog::Open(EAppMsgType::Ok, FText::FromString("Invalid folder selected. It must be inside your project's /Content folder (excluding Collections or Developers)"));
			}
			else {
				Succeeded = true;
				Path = sPickedPath;
				}
		}		
	}
	
}

void UAssetsCleanerBPLibrary::DeleteAssets(UPARAM(ref)TArray<FAssetData>& AssetsToDelete, bool & Succeeded)
{
	int32 numAssetsDeleted = ObjectTools::DeleteAssets(AssetsToDelete, true);
	if (numAssetsDeleted == AssetsToDelete.Num()) {
		Succeeded = true;
	}
	
}

void UAssetsCleanerBPLibrary::GetModuleExists(UPARAM() FString ModuleName, bool &Exists)
{
	const TCHAR* ModuleNameChar = *ModuleName;
	Exists = FModuleManager::Get().ModuleExists(ModuleNameChar);
}

void UAssetsCleanerBPLibrary::SyncBrowserToAssetData(UPARAM(ref)TArray<FAssetData>& AssetsToSelect)
{
	GEditor->SyncBrowserToObjects(AssetsToSelect);

}

void UAssetsCleanerBPLibrary::GetAssetDataSize(UPARAM(ref)FAssetData& AssetToSelect, bool& Returned, float& Size)
{
	if (FModuleManager::Get().ModuleExists(TEXT("AssetManagerEditor"))) {
		IAssetManagerEditorModule& Module = FModuleManager::LoadModuleChecked< IAssetManagerEditorModule >("AssetManagerEditor");
		const FAssetManagerEditorRegistrySource* regsource = Module.GetCurrentRegistrySource();
		if (!regsource || !regsource->RegistryState) {
		}
		else {
			int64 sizeInt;
			Returned = Module.GetIntegerValueForCustomColumn(AssetToSelect, Module.DiskSizeName, sizeInt);
			Size = (float)sizeInt;
		}
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("AssetManagerEditor plugin is not enabled"));
	}

}



void UAssetsCleanerBPLibrary::ShowRefGraph(UPARAM(ref)TArray<FAssetData>& SelectedAssets)
{

	if (FModuleManager::Get().ModuleExists(TEXT("AssetManagerEditor"))) {
		TArray< FName > packages;
		for (FAssetData& asset : SelectedAssets) {
			packages.AddUnique(FName(asset.PackageName));
		}
		IAssetManagerEditorModule& Module = FModuleManager::LoadModuleChecked< IAssetManagerEditorModule >("AssetManagerEditor");
		Module.OpenReferenceViewerUI(packages);
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("AssetManagerEditor plugin is not enabled"));
	}
}

void UAssetsCleanerBPLibrary::ShowSizeMap(UPARAM(ref)TArray<FAssetData>& SelectedAssets)
{
	if (FModuleManager::Get().ModuleExists(TEXT("AssetManagerEditor"))) {
		TArray< FName > packages;
		for (FAssetData& asset : SelectedAssets) {
			packages.AddUnique(FName(asset.PackageName));
		}
		IAssetManagerEditorModule& Module = FModuleManager::LoadModuleChecked< IAssetManagerEditorModule >("AssetManagerEditor");
		Module.OpenSizeMapUI(packages);
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("AssetManagerEditor plugin is not enabled"));
	}

}

void UAssetsCleanerBPLibrary::GetIsPlayingInEditor(bool & Playing)
{
	if (GEditor->PlayWorld || GIsPlayInEditorWorld)
	{
		Playing = true;
	} else {
		Playing = false;
	}
	
}

void UAssetsCleanerBPLibrary::OpenConfirmationDialog(UPARAM()FText Message, EDialogBoxResult& Results)
{
	EAppReturnType::Type Result = FMessageDialog::Open(EAppMsgType::OkCancel, Message);
	if (Result == EAppReturnType::Ok) {
		Results = EDialogBoxResult::OK;
	}
	else {
		Results = EDialogBoxResult::Cancel;
	}

}

void UAssetsCleanerBPLibrary::LocateAssetsOnDisk(UPARAM(ref)TArray<FAssetData>& Assets)
{
	for (FAssetData& asset : Assets) {
		const FString PackageName = asset.PackageName.ToString();
		const bool bIsWorldAsset = (asset.AssetClass == UWorld::StaticClass()->GetFName());
		const FString Extension = bIsWorldAsset ? FPackageName::GetMapPackageExtension() : FPackageName::GetAssetPackageExtension();
		const FString FilePath = FPackageName::LongPackageNameToFilename(PackageName, Extension);
		const FString FullFilePath = FPaths::ConvertRelativePathToFull(FilePath);
		FPlatformProcess::ExploreFolder(*FullFilePath);
	}
	
}


