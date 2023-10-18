using UnrealBuildTool;
using System.Collections.Generic;

public class AVGameEditorTarget : TargetRules
{
	public AVGameEditorTarget(TargetInfo Target)
	{
		Type = TargetType.Editor;
	}

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "AVGame", "DNEAnimation" } );
	}
}
