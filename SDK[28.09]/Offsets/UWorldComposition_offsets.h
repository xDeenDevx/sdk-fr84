namespace offsets
{
	namespace UWorldComposition
	{
			constexpr auto TilesStreaming = 0x88; // Size: 16, Type: struct TArray<struct ULevelStreaming*>
			constexpr auto TilesStreamingTimeThreshold = 0x98; // Size: 8, Type: double
			constexpr auto bLoadAllTilesDuringCinematic = 0xa0; // Size: 1, Type: bool
			constexpr auto bRebaseOriginIn3DSpace = 0xa1; // Size: 1, Type: bool
			constexpr auto RebaseOriginDistance = 0xa4; // Size: 4, Type: float
			constexpr auto DirectoriesToScan = 0xa8; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto MapsToScan = 0xb8; // Size: 16, Type: struct TArray<struct FFilePath>
			constexpr auto DirectoriesToNeverScan = 0xc8; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto MapsToNeverScan = 0xd8; // Size: 16, Type: struct TArray<struct FFilePath>
			constexpr auto WaitForShownLevels = 0xe8; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
	}
} 
