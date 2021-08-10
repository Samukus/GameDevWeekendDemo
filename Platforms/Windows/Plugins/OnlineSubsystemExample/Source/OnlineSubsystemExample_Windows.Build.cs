using System.IO;
using System;
using UnrealBuildTool;

public class OnlineSubsystemExample_Windows : OnlineSubsystemExample
{
	public OnlineSubsystemExample_Windows(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateIncludePaths.Add(
			Path.Combine(GetModuleDirectoryForSubClass(typeof(OnlineSubsystemExample_Windows)).FullName, "Private")
		);
	}
}
