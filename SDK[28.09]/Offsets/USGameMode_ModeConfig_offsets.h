namespace offsets
{
	namespace USGameMode_ModeConfig
	{
			constexpr auto BP_Mode = 0x30; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BP_Reward = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto RewardMap = 0x60; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto JobStructure = 0x78; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DataStructure = 0x90; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto AttributeModifier = 0xa8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto WellEffectJobRelationTable = 0xc0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BadEffectJobRelationTable = 0xd8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto UIConfig = 0xf0; // Size: 16, Type: struct FString
			constexpr auto GameModeSetting = 0x100; // Size: 104, Type: struct FSCustomMode_GameModeSetting
			constexpr auto Levels = 0x168; // Size: 16, Type: struct TArray<struct FSGameMode_LevelConfig>
			constexpr auto Arguments = 0x178; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto bDestroyItemOnDiscard = 0x1c8; // Size: 1, Type: bool
			constexpr auto bDestroyWeaponOnDiscard = 0x1c9; // Size: 1, Type: bool
			constexpr auto AllowJoinBattleLifeTime = 0x1cc; // Size: 4, Type: float
			constexpr auto bAllowJoinAITeammate = 0x1d0; // Size: 1, Type: bool
			constexpr auto bConsiderPotentialPlayerWhenSpawnAI = 0x1d1; // Size: 1, Type: bool
	}
} 
