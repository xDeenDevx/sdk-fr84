namespace offsets
{
	namespace USettlementPageConfig
	{
			constexpr auto PageSkipIndex = 0x30; // Size: 4, Type: int32_t
			constexpr auto SettlementPage = 0x38; // Size: 16, Type: struct TArray<struct TSoftClassPtr<UObject>>
			constexpr auto EnterSettleSoundEvent = 0x48; // Size: 16, Type: struct FString
			constexpr auto ExitSettleSoundEvent = 0x58; // Size: 16, Type: struct FString
			constexpr auto PageIndexs = 0x68; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto IsCustomRoom = 0x78; // Size: 1, Type: bool
	}
} 
