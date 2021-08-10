using UnrealBuildTool;
using System.Collections.Generic;

public class GameDevWeekendDemoTarget : TargetRules
{
	public GameDevWeekendDemoTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] {
			"GameDevWeekendDemo"
		});
	}
}
