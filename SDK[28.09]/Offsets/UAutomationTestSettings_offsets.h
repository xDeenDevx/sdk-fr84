namespace offsets
{
	namespace UAutomationTestSettings
	{
			constexpr auto EngineTestModules = 0x28; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto EditorTestModules = 0x38; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto AutomationTestmap = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EditorPerformanceTestMaps = 0x60; // Size: 16, Type: struct TArray<struct FEditorMapPerformanceTestDefinition>
			constexpr auto AssetsToOpen = 0x70; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto BuildPromotionTest = 0x80; // Size: 496, Type: struct FBuildPromotionTestSettings
			constexpr auto MaterialEditorPromotionTest = 0x270; // Size: 48, Type: struct FMaterialEditorPromotionSettings
			constexpr auto ParticleEditorPromotionTest = 0x2a0; // Size: 16, Type: struct FParticleEditorPromotionSettings
			constexpr auto BlueprintEditorPromotionTest = 0x2b0; // Size: 48, Type: struct FBlueprintEditorPromotionSettings
			constexpr auto TestLevelFolders = 0x2e0; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ExternalTools = 0x2f0; // Size: 16, Type: struct TArray<struct FExternalToolDefinition>
			constexpr auto ImportExportTestDefinitions = 0x300; // Size: 16, Type: struct TArray<struct FEditorImportExportTestDefinition>
			constexpr auto LaunchOnSettings = 0x310; // Size: 16, Type: struct TArray<struct FLaunchOnTestSettings>
			constexpr auto DefaultScreenshotResolution = 0x320; // Size: 8, Type: struct FIntPoint
	}
} 
