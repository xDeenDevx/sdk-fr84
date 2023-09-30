namespace offsets
{
	namespace UAssetManager
	{
			constexpr auto ObjectReferenceList = 0x2c0; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto bIsGlobalAsyncScanEnvironment = 0x2d0; // Size: 1, Type: bool
			constexpr auto bShouldGuessTypeAndName = 0x2d1; // Size: 1, Type: bool
			constexpr auto bShouldUseSynchronousLoad = 0x2d2; // Size: 1, Type: bool
			constexpr auto bIsLoadingFromPakFiles = 0x2d3; // Size: 1, Type: bool
			constexpr auto bShouldAcquireMissingChunksOnLoad = 0x2d4; // Size: 1, Type: bool
			constexpr auto bOnlyCookProductionAssets = 0x2d5; // Size: 1, Type: bool
			constexpr auto bIsBulkScanning = 0x2d6; // Size: 1, Type: bool
			constexpr auto bIsPrimaryAssetDirectoryCurrent = 0x2d7; // Size: 1, Type: bool
			constexpr auto bIsManagementDatabaseCurrent = 0x2d8; // Size: 1, Type: bool
			constexpr auto bUpdateManagementDatabaseAfterScan = 0x2d9; // Size: 1, Type: bool
			constexpr auto bIncludeOnlyOnDiskAssets = 0x2da; // Size: 1, Type: bool
			constexpr auto NumberOfSpawnedNotifications = 0x2dc; // Size: 4, Type: int32_t
	}
} 
