// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;
using System;

public class OnlineSubsystemExample : ModuleRules
{
	public OnlineSubsystemExample(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Engine",
			"OnlineSubsystem",
		});

		PrivateIncludePaths.AddRange(new string[]
		{
			ModuleDirectory + "/Private",
		});
	}
}