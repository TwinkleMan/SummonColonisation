// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ld55_idea1 : ModuleRules
{
	public ld55_idea1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
