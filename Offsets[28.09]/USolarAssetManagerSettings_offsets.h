namespace offsets
{
	namespace USolarAssetManagerSettings
	{
			constexpr auto PrimaryAssetTypesToScan = 0x38; // Size: 16, Type: struct TArray<struct FPrimaryAssetTypeInfo>
			constexpr auto DirectoriesToExclude = 0x48; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto PrimaryAssetRules = 0x58; // Size: 16, Type: struct TArray<struct FPrimaryAssetRulesOverride>
			constexpr auto CustomPrimaryAssetRules = 0x68; // Size: 16, Type: struct TArray<struct FPrimaryAssetRulesCustomOverride>
			constexpr auto WorldPlayStageConfig = 0x78; // Size: 80, Type: struct TMap<struct TSoftObjectPtr<UWorld>, enum class ESolarPlayStage>
			constexpr auto FolderDefaultPlayStageConfig = 0xc8; // Size: 80, Type: struct TMap<struct FString, enum class ESolarPlayStage>
			constexpr auto bOnlyCookProductionAssets = 0x118; // Size: 1, Type: bool
			constexpr auto bShouldManagerDetermineTypeAndName = 0x119; // Size: 1, Type: bool
			constexpr auto bShouldGuessTypeAndNameInEditor = 0x11a; // Size: 1, Type: bool
			constexpr auto bShouldAcquireMissingChunksOnLoad = 0x11b; // Size: 1, Type: bool
			constexpr auto PrimaryAssetIdRedirects = 0x120; // Size: 16, Type: struct TArray<struct FAssetManagerRedirect>
			constexpr auto PrimaryAssetTypeRedirects = 0x130; // Size: 16, Type: struct TArray<struct FAssetManagerRedirect>
			constexpr auto AssetPathRedirects = 0x140; // Size: 16, Type: struct TArray<struct FAssetManagerRedirect>
			constexpr auto MetaDataTagsForAssetRegistry = 0x150; // Size: 80, Type: struct TSet<struct FName>
			constexpr auto ChunkAssignConfigPath = 0x1a0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PreloadBundles = 0x1b8; // Size: 16, Type: struct TArray<struct FPreloadBundle>
			constexpr auto PreloadAssets = 0x1c8; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto PreloadClassAssets = 0x1d8; // Size: 16, Type: struct TArray<struct FSoftClassPath>
			constexpr auto ItemActorDataTable = 0x1e8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BackpackTrailAssemblingDataTable = 0x200; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ItemResourceDataTable = 0x218; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BuffEffectDataTable = 0x230; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ScreenEffectDataTable = 0x248; // Size: 24, Type: struct FSoftObjectPath
	}
} 
