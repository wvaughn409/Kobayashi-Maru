// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CompleteRPGEditorTarget : TargetRules
{
	public CompleteRPGEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.Add("CompleteRPG");
        ExtraModuleNames.Add("CompleteRPGEditor");
	}
}
