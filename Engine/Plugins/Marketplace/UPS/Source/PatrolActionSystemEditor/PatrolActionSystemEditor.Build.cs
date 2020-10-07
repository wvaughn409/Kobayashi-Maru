// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class PatrolActionSystemEditor : ModuleRules
	{
        public PatrolActionSystemEditor(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PublicIncludePaths.AddRange(new string[]
			{
				System.IO.Path.Combine(ModuleDirectory, "Public")
			});


            PrivateIncludePaths.AddRange(new string[] { "PatrolActionSystemEditor/Private" });

            PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
                    "EditorStyle",
					"Engine",
                    "InputCore",
					"LevelEditor",
					"Slate",
                    "AssetTools",
                    "KismetWidgets",
                    "WorkspaceMenuStructure",
                    "Projects",
                    "GraphEditor",
                    "AnimGraph",
                    "Blutility",
                    "GameplayTasks",
                    "AIModule",
                    "UMGEditor",
                    "GameplayTags"
                }
			);

            PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"PropertyEditor",
					"SlateCore",
                    "ApplicationCore",
                    "UnrealEd",
                    "Json",
                    "JsonUtilities",
                    "PatrolActionSystem"
				}
			);

			PrivateIncludePathModuleNames.AddRange(
				new string[]
				{
					"MainFrame",
					"Settings"
				}
			);


		}
	}
}
