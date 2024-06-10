// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Patron_Observer : ModuleRules
{
	public Patron_Observer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
