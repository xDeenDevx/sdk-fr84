namespace offsets
{
	namespace USolarMapManager
	{
			constexpr auto MapData = 0x38; // Size: 60, Type: struct FMapData
			constexpr auto VehicleData = 0x74; // Size: 16, Type: struct FVehicleData
			constexpr auto CurAirlineData = 0x84; // Size: 48, Type: struct FMiniMapAirlineData
			constexpr auto AirlineActorLoc = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto CurrentMapID = 0xc0; // Size: 4, Type: int32_t
			constexpr auto CurrentMapName = 0xc8; // Size: 16, Type: struct FString
			constexpr auto BattlePromptConfig = 0x148; // Size: 8, Type: struct UVisualSoundConfig*
			constexpr auto GameModeGlobalSetting = 0x150; // Size: 8, Type: struct UGameModeGlobalSetting*
			constexpr auto BattlePromptData = 0x1a8; // Size: 24, Type: struct FBattlePromptData
	}
} 
