namespace offsets
{
	namespace USolarBTS_BotSearchSupplies
	{
			constexpr auto bOverrideBotConfig = 0x70; // Size: 1, Type: bool
			constexpr auto OverrideSearchConfig = 0x74; // Size: 68, Type: struct FSolarBotLootSearchConfig
			constexpr auto bOverrideWeaponFeedConfig = 0xb8; // Size: 1, Type: bool
			constexpr auto OverrideWeaponFeedConfig = 0xc0; // Size: 32, Type: struct FSolarBotLootWeaponFeedConfig
			constexpr auto MaxDistanceToShieldUpgradeItemShop = 0xe0; // Size: 4, Type: float
	}
} 
