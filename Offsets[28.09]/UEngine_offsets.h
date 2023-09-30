namespace offsets
{
	namespace UEngine
	{
			constexpr auto TinyFont = 0x30; // Size: 8, Type: struct UFont*
			constexpr auto TinyFontName = 0x38; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto SmallFont = 0x50; // Size: 8, Type: struct UFont*
			constexpr auto SmallFontName = 0x58; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto MediumFont = 0x70; // Size: 8, Type: struct UFont*
			constexpr auto MediumFontName = 0x78; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto LargeFont = 0x90; // Size: 8, Type: struct UFont*
			constexpr auto LargeFontName = 0x98; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto SubtitleFont = 0xb0; // Size: 8, Type: struct UFont*
			constexpr auto SubtitleFontName = 0xb8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto AdditionalFonts = 0xd0; // Size: 16, Type: struct TArray<struct UFont*>
			constexpr auto AdditionalFontNames = 0xe8; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ConsoleClass = 0xf8; // Size: 8, Type: UConsole*
			constexpr auto ConsoleClassName = 0x100; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameViewportClientClass = 0x118; // Size: 8, Type: UGameViewportClient*
			constexpr auto GameViewportClientClassName = 0x120; // Size: 24, Type: struct FSoftClassPath
			constexpr auto LocalPlayerClass = 0x138; // Size: 8, Type: ULocalPlayer*
			constexpr auto LocalPlayerClassName = 0x140; // Size: 24, Type: struct FSoftClassPath
			constexpr auto WorldSettingsClass = 0x158; // Size: 8, Type: AWorldSettings*
			constexpr auto WorldSettingsClassName = 0x160; // Size: 24, Type: struct FSoftClassPath
			constexpr auto NavigationSystemClassName = 0x178; // Size: 24, Type: struct FSoftClassPath
			constexpr auto NavigationSystemClass = 0x190; // Size: 8, Type: UNavigationSystemBase*
			constexpr auto NavigationSystemConfigClassName = 0x198; // Size: 24, Type: struct FSoftClassPath
			constexpr auto NavigationSystemConfigClass = 0x1b0; // Size: 8, Type: UNavigationSystemConfig*
			constexpr auto AvoidanceManagerClassName = 0x1b8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto AvoidanceManagerClass = 0x1d0; // Size: 8, Type: UAvoidanceManager*
			constexpr auto PhysicsCollisionHandlerClass = 0x1d8; // Size: 8, Type: UPhysicsCollisionHandler*
			constexpr auto PhysicsCollisionHandlerClassName = 0x1e0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameUserSettingsClassName = 0x1f8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameUserSettingsClass = 0x210; // Size: 8, Type: UGameUserSettings*
			constexpr auto AIControllerClassName = 0x218; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameUserSettings = 0x230; // Size: 8, Type: struct UGameUserSettings*
			constexpr auto LevelScriptActorClass = 0x238; // Size: 8, Type: ALevelScriptActor*
			constexpr auto LevelScriptActorClassName = 0x240; // Size: 24, Type: struct FSoftClassPath
			constexpr auto DefaultBlueprintBaseClassName = 0x258; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameSingletonClassName = 0x270; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameSingleton = 0x288; // Size: 8, Type: struct UObject*
			constexpr auto AssetManagerClassName = 0x290; // Size: 24, Type: struct FSoftClassPath
			constexpr auto AssetManager = 0x2a8; // Size: 8, Type: struct UAssetManager*
			constexpr auto RuntimeAssetsCollectionClassName = 0x2b0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto RuntimeAssetsCollection = 0x2c8; // Size: 8, Type: struct URuntimeAssetsCollectionBase*
			constexpr auto DefaultTexture = 0x2d0; // Size: 8, Type: struct UTexture2D*
			constexpr auto DefaultTextureName = 0x2d8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultDiffuseTexture = 0x2f0; // Size: 8, Type: struct UTexture*
			constexpr auto DefaultDiffuseTextureName = 0x2f8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultBSPVertexTexture = 0x310; // Size: 8, Type: struct UTexture2D*
			constexpr auto DefaultBSPVertexTextureName = 0x318; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto HighFrequencyNoiseTexture = 0x330; // Size: 8, Type: struct UTexture2D*
			constexpr auto HighFrequencyNoiseTextureName = 0x338; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultBokehTexture = 0x350; // Size: 8, Type: struct UTexture2D*
			constexpr auto DefaultBokehTextureName = 0x358; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultBloomKernelTexture = 0x370; // Size: 8, Type: struct UTexture2D*
			constexpr auto DefaultBloomKernelTextureName = 0x378; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto WireframeMaterial = 0x390; // Size: 8, Type: struct UMaterial*
			constexpr auto WireframeMaterialName = 0x398; // Size: 16, Type: struct FString
			constexpr auto DebugMeshMaterial = 0x3a8; // Size: 8, Type: struct UMaterial*
			constexpr auto DebugMeshMaterialName = 0x3b0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EmissiveMeshMaterial = 0x3c8; // Size: 8, Type: struct UMaterial*
			constexpr auto EmissiveMeshMaterialName = 0x3d0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto LevelColorationLitMaterial = 0x3e8; // Size: 8, Type: struct UMaterial*
			constexpr auto LevelColorationLitMaterialName = 0x3f0; // Size: 16, Type: struct FString
			constexpr auto LevelColorationUnlitMaterial = 0x400; // Size: 8, Type: struct UMaterial*
			constexpr auto LevelColorationUnlitMaterialName = 0x408; // Size: 16, Type: struct FString
			constexpr auto LightingTexelDensityMaterial = 0x418; // Size: 8, Type: struct UMaterial*
			constexpr auto LightingTexelDensityName = 0x420; // Size: 16, Type: struct FString
			constexpr auto ShadedLevelColorationLitMaterial = 0x430; // Size: 8, Type: struct UMaterial*
			constexpr auto ShadedLevelColorationLitMaterialName = 0x438; // Size: 16, Type: struct FString
			constexpr auto ShadedLevelColorationUnlitMaterial = 0x448; // Size: 8, Type: struct UMaterial*
			constexpr auto ShadedLevelColorationUnlitMaterialName = 0x450; // Size: 16, Type: struct FString
			constexpr auto RemoveSurfaceMaterial = 0x460; // Size: 8, Type: struct UMaterial*
			constexpr auto RemoveSurfaceMaterialName = 0x468; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto VertexColorMaterial = 0x480; // Size: 8, Type: struct UMaterial*
			constexpr auto VertexColorMaterialName = 0x488; // Size: 16, Type: struct FString
			constexpr auto VertexColorViewModeMaterial_ColorOnly = 0x498; // Size: 8, Type: struct UMaterial*
			constexpr auto VertexColorViewModeMaterialName_ColorOnly = 0x4a0; // Size: 16, Type: struct FString
			constexpr auto VertexColorViewModeMaterial_AlphaAsColor = 0x4b0; // Size: 8, Type: struct UMaterial*
			constexpr auto VertexColorViewModeMaterialName_AlphaAsColor = 0x4b8; // Size: 16, Type: struct FString
			constexpr auto VertexColorViewModeMaterial_RedOnly = 0x4c8; // Size: 8, Type: struct UMaterial*
			constexpr auto VertexColorViewModeMaterialName_RedOnly = 0x4d0; // Size: 16, Type: struct FString
			constexpr auto VertexColorViewModeMaterial_GreenOnly = 0x4e0; // Size: 8, Type: struct UMaterial*
			constexpr auto VertexColorViewModeMaterialName_GreenOnly = 0x4e8; // Size: 16, Type: struct FString
			constexpr auto VertexColorViewModeMaterial_BlueOnly = 0x4f8; // Size: 8, Type: struct UMaterial*
			constexpr auto VertexColorViewModeMaterialName_BlueOnly = 0x500; // Size: 16, Type: struct FString
			constexpr auto DebugEditorMaterialName = 0x510; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ConstraintLimitMaterial = 0x528; // Size: 8, Type: struct UMaterial*
			constexpr auto ConstraintLimitMaterialX = 0x530; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ConstraintLimitMaterialXAxis = 0x538; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ConstraintLimitMaterialY = 0x540; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ConstraintLimitMaterialYAxis = 0x548; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ConstraintLimitMaterialZ = 0x550; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ConstraintLimitMaterialZAxis = 0x558; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ConstraintLimitMaterialPrismatic = 0x560; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto InvalidLightmapSettingsMaterial = 0x568; // Size: 8, Type: struct UMaterial*
			constexpr auto InvalidLightmapSettingsMaterialName = 0x570; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PreviewShadowsIndicatorMaterial = 0x588; // Size: 8, Type: struct UMaterial*
			constexpr auto PreviewShadowsIndicatorMaterialName = 0x590; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ArrowMaterial = 0x5a8; // Size: 8, Type: struct UMaterial*
			constexpr auto ArrowMaterialYellow = 0x5b0; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto ArrowMaterialName = 0x5b8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto LightingOnlyBrightness = 0x5d0; // Size: 16, Type: struct FLinearColor
			constexpr auto ShaderComplexityColors = 0x5e0; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto QuadComplexityColors = 0x5f0; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto LightComplexityColors = 0x600; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto StationaryLightOverlapColors = 0x610; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto LODColorationColors = 0x620; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto HLODColorationColors = 0x630; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto StreamingAccuracyColors = 0x640; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto MaxPixelShaderAdditiveComplexityCount = 0x650; // Size: 4, Type: float
			constexpr auto MaxES3PixelShaderAdditiveComplexityCount = 0x654; // Size: 4, Type: float
			constexpr auto MinLightMapDensity = 0x658; // Size: 4, Type: float
			constexpr auto IdealLightMapDensity = 0x65c; // Size: 4, Type: float
			constexpr auto MaxLightMapDensity = 0x660; // Size: 4, Type: float
			constexpr auto bRenderLightMapDensityGrayscale = 0x664; // Size: 1, Type: char
			constexpr auto RenderLightMapDensityGrayscaleScale = 0x668; // Size: 4, Type: float
			constexpr auto RenderLightMapDensityColorScale = 0x66c; // Size: 4, Type: float
			constexpr auto LightMapDensityVertexMappedColor = 0x670; // Size: 16, Type: struct FLinearColor
			constexpr auto LightMapDensitySelectedColor = 0x680; // Size: 16, Type: struct FLinearColor
			constexpr auto StatColorMappings = 0x690; // Size: 16, Type: struct TArray<struct FStatColorMapping>
			constexpr auto DefaultPhysMaterial = 0x6a0; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto DefaultPhysMaterialName = 0x6a8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ActiveGameNameRedirects = 0x6c0; // Size: 16, Type: struct TArray<struct FGameNameRedirect>
			constexpr auto ActiveClassRedirects = 0x6d0; // Size: 16, Type: struct TArray<struct FClassRedirect>
			constexpr auto ActivePluginRedirects = 0x6e0; // Size: 16, Type: struct TArray<struct FPluginRedirect>
			constexpr auto ActiveStructRedirects = 0x6f0; // Size: 16, Type: struct TArray<struct FStructRedirect>
			constexpr auto PreIntegratedSkinBRDFTexture = 0x700; // Size: 8, Type: struct UTexture2D*
			constexpr auto PreIntegratedSkinBRDFTextureName = 0x708; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BlueNoiseTexture = 0x720; // Size: 8, Type: struct UTexture2D*
			constexpr auto BlueNoiseTextureName = 0x728; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto MiniFontTexture = 0x740; // Size: 8, Type: struct UTexture2D*
			constexpr auto MiniFontTextureName = 0x748; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto WeightMapPlaceholderTexture = 0x760; // Size: 8, Type: struct UTexture*
			constexpr auto WeightMapPlaceholderTextureName = 0x768; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto LightMapDensityTexture = 0x780; // Size: 8, Type: struct UTexture2D*
			constexpr auto LightMapDensityTextureName = 0x788; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GameViewport = 0x7a8; // Size: 8, Type: struct UGameViewportClient*
			constexpr auto DeferredCommands = 0x7b0; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto TickCycles = 0x7c0; // Size: 4, Type: int32_t
			constexpr auto GameCycles = 0x7c4; // Size: 4, Type: int32_t
			constexpr auto ClientCycles = 0x7c8; // Size: 4, Type: int32_t
			constexpr auto NearClipPlane = 0x7cc; // Size: 4, Type: float
			constexpr auto bHardwareSurveyEnabled = 0x7d0; // Size: 1, Type: char
			constexpr auto bSubtitlesEnabled = 0x7d0; // Size: 1, Type: char
			constexpr auto bSubtitlesForcedOff = 0x7d0; // Size: 1, Type: char
			constexpr auto MaximumLoopIterationCount = 0x7d4; // Size: 4, Type: int32_t
			constexpr auto bCanBlueprintsTickByDefault = 0x7d8; // Size: 1, Type: char
			constexpr auto bOptimizeAnimBlueprintMemberVariableAccess = 0x7d8; // Size: 1, Type: char
			constexpr auto bAllowMultiThreadedAnimationUpdate = 0x7d8; // Size: 1, Type: char
			constexpr auto bEnableEditorPSysRealtimeLOD = 0x7d8; // Size: 1, Type: char
			constexpr auto bSmoothFrameRate = 0x7d8; // Size: 1, Type: char
			constexpr auto bUseFixedFrameRate = 0x7d8; // Size: 1, Type: char
			constexpr auto FixedFrameRate = 0x7dc; // Size: 4, Type: float
			constexpr auto SmoothedFrameRateRange = 0x7e0; // Size: 16, Type: struct FFloatRange
			constexpr auto CustomTimeStep = 0x7f0; // Size: 8, Type: struct UEngineCustomTimeStep*
			constexpr auto SkipLODStripStaticMeshNames = 0x818; // Size: 16, Type: struct FString
			constexpr auto CustomTimeStepClassName = 0x828; // Size: 24, Type: struct FSoftClassPath
			constexpr auto TimecodeProvider = 0x840; // Size: 8, Type: struct UTimecodeProvider*
			constexpr auto TimecodeProviderClassName = 0x868; // Size: 24, Type: struct FSoftClassPath
			constexpr auto bGenerateDefaultTimecode = 0x880; // Size: 1, Type: bool
			constexpr auto GenerateDefaultTimecodeFrameRate = 0x884; // Size: 8, Type: struct FFrameRate
			constexpr auto GenerateDefaultTimecodeFrameDelay = 0x88c; // Size: 4, Type: float
			constexpr auto bCheckForMultiplePawnsSpawnedInAFrame = 0x890; // Size: 1, Type: char
			constexpr auto NumPawnsAllowedToBeSpawnedInAFrame = 0x894; // Size: 4, Type: int32_t
			constexpr auto bShouldGenerateLowQualityLightmaps = 0x898; // Size: 1, Type: char
			constexpr auto C_WorldBox = 0x89c; // Size: 4, Type: struct FColor
			constexpr auto C_BrushWire = 0x8a0; // Size: 4, Type: struct FColor
			constexpr auto C_AddWire = 0x8a4; // Size: 4, Type: struct FColor
			constexpr auto C_SubtractWire = 0x8a8; // Size: 4, Type: struct FColor
			constexpr auto C_SemiSolidWire = 0x8ac; // Size: 4, Type: struct FColor
			constexpr auto C_NonSolidWire = 0x8b0; // Size: 4, Type: struct FColor
			constexpr auto C_WireBackground = 0x8b4; // Size: 4, Type: struct FColor
			constexpr auto C_ScaleBoxHi = 0x8b8; // Size: 4, Type: struct FColor
			constexpr auto C_VolumeCollision = 0x8bc; // Size: 4, Type: struct FColor
			constexpr auto C_BSPCollision = 0x8c0; // Size: 4, Type: struct FColor
			constexpr auto C_OrthoBackground = 0x8c4; // Size: 4, Type: struct FColor
			constexpr auto C_Volume = 0x8c8; // Size: 4, Type: struct FColor
			constexpr auto C_BrushShape = 0x8cc; // Size: 4, Type: struct FColor
			constexpr auto StreamingDistanceFactor = 0x8d0; // Size: 4, Type: float
			constexpr auto GameScreenshotSaveDirectory = 0x8d8; // Size: 16, Type: struct FDirectoryPath
			constexpr auto TransitionType = 0x8e8; // Size: 1, Type: enum class ETransitionType
			constexpr auto TransitionDescription = 0x8f0; // Size: 16, Type: struct FString
			constexpr auto TransitionGameMode = 0x900; // Size: 16, Type: struct FString
			constexpr auto MeshLODRange = 0x910; // Size: 4, Type: float
			constexpr auto bAllowMatureLanguage = 0x914; // Size: 1, Type: char
			constexpr auto CameraRotationThreshold = 0x918; // Size: 4, Type: float
			constexpr auto CameraTranslationThreshold = 0x91c; // Size: 4, Type: float
			constexpr auto PrimitiveProbablyVisibleTime = 0x920; // Size: 4, Type: float
			constexpr auto MaxOcclusionPixelsFraction = 0x924; // Size: 4, Type: float
			constexpr auto bPauseOnLossOfFocus = 0x928; // Size: 1, Type: char
			constexpr auto MaxParticleResize = 0x92c; // Size: 4, Type: int32_t
			constexpr auto MaxParticleResizeWarn = 0x930; // Size: 4, Type: int32_t
			constexpr auto PendingDroppedNotes = 0x938; // Size: 16, Type: struct TArray<struct FDropNoteInfo>
			constexpr auto NetClientTicksPerSecond = 0x948; // Size: 4, Type: float
			constexpr auto DisplayGamma = 0x94c; // Size: 4, Type: float
			constexpr auto MinDesiredFrameRate = 0x950; // Size: 4, Type: float
			constexpr auto DefaultSelectedMaterialColor = 0x954; // Size: 16, Type: struct FLinearColor
			constexpr auto SelectedMaterialColor = 0x964; // Size: 16, Type: struct FLinearColor
			constexpr auto SelectionOutlineColor = 0x974; // Size: 16, Type: struct FLinearColor
			constexpr auto SubduedSelectionOutlineColor = 0x984; // Size: 16, Type: struct FLinearColor
			constexpr auto SelectedMaterialColorOverride = 0x994; // Size: 16, Type: struct FLinearColor
			constexpr auto bIsOverridingSelectedColor = 0x9a4; // Size: 1, Type: bool
			constexpr auto bEnableOnScreenDebugMessages = 0x9a8; // Size: 1, Type: char
			constexpr auto bEnableOnScreenDebugMessagesDisplay = 0x9a8; // Size: 1, Type: char
			constexpr auto bSuppressMapWarnings = 0x9a8; // Size: 1, Type: char
			constexpr auto bDisableAILogging = 0x9a8; // Size: 1, Type: char
			constexpr auto bEnableVisualLogRecordingOnStart = 0x9ac; // Size: 4, Type: uint32_t
			constexpr auto ScreenSaverInhibitorSemaphore = 0x9b4; // Size: 4, Type: int32_t
			constexpr auto bLockReadOnlyLevels = 0x9b8; // Size: 1, Type: char
			constexpr auto ParticleEventManagerClassPath = 0x9c0; // Size: 16, Type: struct FString
			constexpr auto SelectionHighlightIntensity = 0x9d0; // Size: 4, Type: float
			constexpr auto BSPSelectionHighlightIntensity = 0x9d4; // Size: 4, Type: float
			constexpr auto SelectionHighlightIntensityBillboards = 0x9d8; // Size: 4, Type: float
			constexpr auto NetDriverDefinitions = 0xc28; // Size: 16, Type: struct TArray<struct FNetDriverDefinition>
			constexpr auto ServerActors = 0xc38; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto RuntimeServerActors = 0xc48; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto NetErrorLogInterval = 0xc58; // Size: 4, Type: float
			constexpr auto bStartedLoadMapMovie = 0xc5c; // Size: 1, Type: char
			constexpr auto NextWorldContextHandle = 0xc78; // Size: 4, Type: int32_t
	}
} 