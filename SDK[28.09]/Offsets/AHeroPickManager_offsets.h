namespace offsets
{
	namespace AHeroPickManager
	{
			constexpr auto HeroPickArray = 0x228; // Size: 16, Type: struct TArray<struct AHeroPickInfo*>
			constexpr auto HeroPickTime = 0x238; // Size: 4, Type: float
			constexpr auto TransitionAnimTime = 0x23c; // Size: 4, Type: float
			constexpr auto WaitingToStartTime = 0x240; // Size: 4, Type: float
			constexpr auto WaitingForEndTime = 0x244; // Size: 4, Type: float
			constexpr auto AIPickRule = 0x248; // Size: 8, Type: struct UHeroPickRuleBase*
			constexpr auto ElementLevels = 0x250; // Size: 16, Type: struct TArray<struct FSoftObjectPath>
			constexpr auto bIsAllPlayerSelecting = 0x260; // Size: 1, Type: bool
	}
} 
