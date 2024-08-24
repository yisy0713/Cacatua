// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CacatuaEditor : ModuleRules
{
	public CacatuaEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // CacatuaEditor모듈은 언리얼 엔진에서 제공하는 Core, CoreUObject, Engine, InputCore라는 모듈을 사용하겠다는 뜻으로 나름대로 종속성을 정의해준 것
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

