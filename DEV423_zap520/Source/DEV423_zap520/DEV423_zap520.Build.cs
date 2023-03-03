// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DEV423_zap520 : ModuleRules
{
	public DEV423_zap520(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
