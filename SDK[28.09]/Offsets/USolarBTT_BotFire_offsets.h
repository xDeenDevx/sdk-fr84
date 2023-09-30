namespace offsets
{
	namespace USolarBTT_BotFire
	{
			constexpr auto bEnableOffset = 0x98; // Size: 1, Type: bool
			constexpr auto OffsetRadiusMax = 0x9c; // Size: 4, Type: float
			constexpr auto OffsetRadiusMin = 0xa0; // Size: 4, Type: float
			constexpr auto MaxFireDuration = 0xa4; // Size: 4, Type: float
			constexpr auto bEnableShootSimulator = 0xa8; // Size: 1, Type: bool
			constexpr auto bForceReset = 0xa9; // Size: 1, Type: bool
			constexpr auto bOverrideDefaultShootConfig = 0xaa; // Size: 1, Type: bool
			constexpr auto ShootConfig = 0xac; // Size: 88, Type: struct FSolarBotShootConfig
	}
} 
