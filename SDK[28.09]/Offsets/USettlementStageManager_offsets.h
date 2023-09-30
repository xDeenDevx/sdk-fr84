namespace offsets
{
	namespace USettlementStageManager
	{
			constexpr auto SolarGameInstance = 0x30; // Size: 8, Type: struct USolarGameInstanceBase*
			constexpr auto CurStageIndex = 0x38; // Size: 4, Type: int32_t
			constexpr auto SettlementStageConfigID = 0x3c; // Size: 4, Type: int32_t
			constexpr auto SettlementConfig = 0x40; // Size: 8, Type: struct UDataTable*
			constexpr auto Formula = 0x48; // Size: 8, Type: struct ASettlementFormula*
	}
} 
