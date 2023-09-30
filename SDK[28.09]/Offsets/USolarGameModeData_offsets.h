namespace offsets
{
	namespace USolarGameModeData
	{
			constexpr auto GameModeId = 0x30; // Size: 4, Type: int32_t
			constexpr auto CurrentModeData = 0x38; // Size: 8, Type: struct USGameMode_ModeConfig*
			constexpr auto ModeConfigPath = 0x40; // Size: 16, Type: struct FString
			constexpr auto ModeParamsStr = 0x50; // Size: 16, Type: struct FString
			constexpr auto JobDataTable = 0x60; // Size: 8, Type: struct UDataTable*
			constexpr auto BoardDataTable = 0x68; // Size: 8, Type: struct UDataTable*
			constexpr auto AttributeDataTable = 0x70; // Size: 8, Type: struct UDataTable*
			constexpr auto ModeParams = 0xa8; // Size: 80, Type: struct TMap<struct FString, struct FString>
	}
} 
