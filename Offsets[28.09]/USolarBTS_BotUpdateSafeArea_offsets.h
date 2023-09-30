namespace offsets
{
	namespace USolarBTS_BotUpdateSafeArea
	{
			constexpr auto bOverrideBotConfig = 0x70; // Size: 1, Type: bool
			constexpr auto DefaultConfig = 0x74; // Size: 8, Type: struct FSolarBotSafeAreaConfig
			constexpr auto SafeAreaSnapExtent = 0x7c; // Size: 12, Type: struct FVector
			constexpr auto bAllowUseSpaceDistance = 0x88; // Size: 1, Type: bool
	}
} 
