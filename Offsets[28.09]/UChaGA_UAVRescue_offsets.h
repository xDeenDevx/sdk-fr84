namespace offsets
{
	namespace UChaGA_UAVRescue
	{
			constexpr auto RescueUAVClass = 0x460; // Size: 8, Type: ASolarUAVRescue*
			constexpr auto LifeTime = 0x468; // Size: 4, Type: float
			constexpr auto bEffectTeammates = 0x46c; // Size: 1, Type: bool
			constexpr auto SummoEmptyMontage = 0x470; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SummonAnimMontage = 0x478; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SummonTime = 0x480; // Size: 4, Type: float
			constexpr auto PermanentSpawnDelay = 0x484; // Size: 4, Type: float
			constexpr auto SkillRange = 0x488; // Size: 4, Type: float
			constexpr auto CueTag = 0x48c; // Size: 8, Type: struct FGameplayTag
	}
} 
