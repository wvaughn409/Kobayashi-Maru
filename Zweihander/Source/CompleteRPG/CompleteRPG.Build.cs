// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CompleteRPG : ModuleRules
{
	public CompleteRPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivatePCHHeaderFile = "Public/CompleteRPG.h";

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore",
			"NavigationSystem",
			"AIModule",
			"GameplayTasks",
            "Landscape",
            "Foliage", 
			"Paper2D",
			"ArticyRuntime"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { "Json" });
	}
}
