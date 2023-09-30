namespace offsets
{
	namespace USolarBTS_TeamTaskAllocation
	{
			constexpr auto RescueAllocateThresholdScore = 0x98; // Size: 4, Type: float
			constexpr auto RescueAbandonThresholdScore = 0x9c; // Size: 4, Type: float
			constexpr auto RescuePunishScore = 0xa0; // Size: 4, Type: float
			constexpr auto RescueRewardScore = 0xa4; // Size: 4, Type: float
			constexpr auto bNeedToRebornBotInBotTeam = 0xa8; // Size: 1, Type: bool
			constexpr auto bNeedToRebornBotInPlayerTeam = 0xa9; // Size: 1, Type: bool
			constexpr auto bDebugTaskScore = 0xaa; // Size: 1, Type: bool
			constexpr auto bDebugEachTaskScore = 0xab; // Size: 1, Type: bool
			constexpr auto PoisonSnapExtent = 0xac; // Size: 12, Type: struct FVector
			constexpr auto CustomTaskScoringItemList = 0xb8; // Size: 80, Type: struct FSolarTaskScoringItem
			constexpr auto SelfController = 0x158; // Size: 8, Type: struct ASolarBotAIController*
			constexpr auto SelfCharacter = 0x160; // Size: 8, Type: struct ASolarCharacter*
	}
} 
