// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TheTransvestigator : ModuleRules
{
	public TheTransvestigator(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
