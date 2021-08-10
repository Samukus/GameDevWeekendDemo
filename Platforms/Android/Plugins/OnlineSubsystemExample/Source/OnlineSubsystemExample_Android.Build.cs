using System.IO;
using System;
using UnrealBuildTool;

public class OnlineSubsystemExample_Android : OnlineSubsystemExample
{
	public OnlineSubsystemExample_Android(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateIncludePaths.Add(
			Path.Combine(GetModuleDirectoryForSubClass(typeof(OnlineSubsystemExample_Android)).FullName, "Private")
		);
	}
}
