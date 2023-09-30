namespace offsets
{
	namespace USolarBotTimelineSystem
	{
			constexpr auto GlobalTimelineSettings = 0x28; // Size: 8, Type: struct UDataTable*
			constexpr auto UpdateInterval = 0x30; // Size: 4, Type: float
			constexpr auto bUsePlayerLandTime = 0x34; // Size: 1, Type: bool
			constexpr auto bEnableFinalDownsize = 0x35; // Size: 1, Type: bool
			constexpr auto FinalDownsizeDuration = 0x38; // Size: 4, Type: float
			constexpr auto CurrentActionTimelineTable = 0x40; // Size: 8, Type: struct UDataTable*
			constexpr auto CurrentUpdateItemTimelineTable = 0x48; // Size: 8, Type: struct UDataTable*
			constexpr auto CurrentDownsizeTimelineTable = 0x50; // Size: 8, Type: struct UDataTable*
			constexpr auto DirtyBots = 0x168; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
	}
} 
