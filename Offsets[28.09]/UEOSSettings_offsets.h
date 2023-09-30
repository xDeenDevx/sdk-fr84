namespace offsets
{
	namespace UEOSSettings
	{
			constexpr auto CacheDir = 0x28; // Size: 16, Type: struct FString
			constexpr auto DefaultArtifactName = 0x38; // Size: 16, Type: struct FString
			constexpr auto TickBudgetInMilliseconds = 0x48; // Size: 4, Type: int32_t
			constexpr auto bEnableOverlay = 0x4c; // Size: 1, Type: bool
			constexpr auto bEnableSocialOverlay = 0x4d; // Size: 1, Type: bool
			constexpr auto bShouldEnforceBeingLaunchedByEGS = 0x4e; // Size: 1, Type: bool
			constexpr auto TitleStorageTags = 0x50; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto TitleStorageReadChunkLength = 0x60; // Size: 4, Type: int32_t
			constexpr auto Artifacts = 0x68; // Size: 16, Type: struct TArray<struct FArtifactSettings>
			constexpr auto bUseEAS = 0x78; // Size: 1, Type: bool
			constexpr auto bUseEOSConnect = 0x79; // Size: 1, Type: bool
			constexpr auto bMirrorStatsToEOS = 0x7a; // Size: 1, Type: bool
			constexpr auto bMirrorAchievementsToEOS = 0x7b; // Size: 1, Type: bool
			constexpr auto bUseEOSSessions = 0x7c; // Size: 1, Type: bool
			constexpr auto bMirrorPresenceToEAS = 0x7d; // Size: 1, Type: bool
	}
} 
