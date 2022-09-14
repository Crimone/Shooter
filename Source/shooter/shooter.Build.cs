// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class shooter : ModuleRules
{
	public shooter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" , "HeadMountedDisplay" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate","SlateCore" });
	}
}
