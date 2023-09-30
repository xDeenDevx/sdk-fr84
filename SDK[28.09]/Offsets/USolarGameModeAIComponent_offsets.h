namespace offsets
{
	namespace USolarGameModeAIComponent
	{
			constexpr auto BotAIControllerClass = 0xe0; // Size: 8, Type: ASolarBotAIController*
			constexpr auto OfflinePlayerAIControllerClass = 0xe8; // Size: 8, Type: ASolarAIControllerBase*
			constexpr auto GameModeOwner = 0xf0; // Size: 8, Type: struct ASolarGameMode*
			constexpr auto bEnableIrisAIStrategy = 0xf8; // Size: 1, Type: bool
			constexpr auto bEnableMLSetting = 0xf9; // Size: 1, Type: bool
			constexpr auto bPreserveBotOnMatchStart = 0xfa; // Size: 1, Type: bool
			constexpr auto BotTeamManagerClass = 0x100; // Size: 8, Type: USolarBotAITeamManager*
			constexpr auto BotPreservedManagerClass = 0x108; // Size: 8, Type: USolarPreservedBotManager*
			constexpr auto BotWarmServiceSystemClass = 0x110; // Size: 8, Type: USolarBotAIWarmServiceSystem*
			constexpr auto BotTimelineSystemClass = 0x118; // Size: 8, Type: USolarBotTimelineSystem*
			constexpr auto MaxNumPreservedBots = 0x120; // Size: 4, Type: int32_t
			constexpr auto MaxRatioPreservedBots = 0x124; // Size: 4, Type: float
			constexpr auto BotTeamManager = 0x138; // Size: 8, Type: struct USolarBotAITeamManager*
			constexpr auto BotPreservedManager = 0x140; // Size: 8, Type: struct USolarPreservedBotManager*
			constexpr auto BotWarmServiceSystem = 0x148; // Size: 8, Type: struct USolarBotAIWarmServiceSystem*
			constexpr auto BotTimelineSystem = 0x150; // Size: 8, Type: struct USolarBotTimelineSystem*
			constexpr auto bInitBotByTeamPreset = 0x158; // Size: 1, Type: bool
			constexpr auto bCanBotTeamRebirth = 0x159; // Size: 1, Type: bool
			constexpr auto bCanPlayerTeamRebirth = 0x15a; // Size: 1, Type: bool
			constexpr auto bCanBotTeamBuyRescue = 0x15b; // Size: 1, Type: bool
			constexpr auto bCanPlayerTeamBuyRescue = 0x15c; // Size: 1, Type: bool
	}
} 
