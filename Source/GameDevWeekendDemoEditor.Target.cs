using UnrealBuildTool;
using System.Collections.Generic;

public class GameDevWeekendDemoEditorTarget : TargetRules
{
	public GameDevWeekendDemoEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "GameDevWeekendDemo" } );
	}
}
