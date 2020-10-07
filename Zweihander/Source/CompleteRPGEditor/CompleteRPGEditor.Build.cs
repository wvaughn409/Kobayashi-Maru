// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CompleteRPGEditor : ModuleRules
{
	public CompleteRPGEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivatePCHHeaderFile = "Public/CompleteRPGEditor.h";

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
            "Core",
			"CoreUObject",
			"InputCore",
			"Engine",
			"UnrealEd",
			"Slate",
			"SlateCore",
            "EditorStyle",
			"RenderCore",
			"LevelEditor",
			"Landscape",
            "PropertyEditor",
            "AssetTools",
            "Foliage",
            "CompleteRPG"
		});
	}
}
