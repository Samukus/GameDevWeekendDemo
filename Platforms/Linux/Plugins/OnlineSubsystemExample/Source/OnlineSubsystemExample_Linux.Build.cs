using System.IO;
using System;
using UnrealBuildTool;

public class OnlineSubsystemExample_Linux : OnlineSubsystemExample
{
	public OnlineSubsystemExample_Linux(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateIncludePaths.Add(
			Path.Combine(GetModuleDirectoryForSubClass(typeof(OnlineSubsystemExample_Linux)).FullName, "Private")
		);
	}
}
