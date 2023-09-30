namespace offsets
{
	namespace UCGMGameplayConfig
	{
			constexpr auto Formula = 0x38; // Size: 8, Type: ACGFormula*
			constexpr auto SettlePageConfig = 0x40; // Size: 8, Type: struct USettlementPageConfig*
			constexpr auto MapConfig = 0x48; // Size: 80, Type: struct TMap<struct FString, struct FSCMMapConfig>
			constexpr auto DataManagerConfig = 0x98; // Size: 16, Type: struct FDataManagerConfig
			constexpr auto JobConfig = 0xa8; // Size: 8, Type: struct FJobManagerConfig
			constexpr auto EnableUltimateSkill = 0xb0; // Size: 1, Type: bool
			constexpr auto UltimateSkillStateOperationOnInit = 0xb1; // Size: 1, Type: enum class ERoleSkillOperation
			constexpr auto EnableTacticalSkill = 0xb2; // Size: 1, Type: bool
			constexpr auto TacticalSkillStateOperationOnInit = 0xb3; // Size: 1, Type: enum class ERoleSkillOperation
			constexpr auto AirDropSkillMode = 0xb4; // Size: 4, Type: int32_t
			constexpr auto EnableWeaponUpgrade = 0xb8; // Size: 1, Type: bool
			constexpr auto InitInGamePlayerLevel = 0xbc; // Size: 4, Type: int32_t
			constexpr auto EnablePlayerUpgrade = 0xc0; // Size: 1, Type: bool
			constexpr auto InGameLevelingConfig = 0xc8; // Size: 8, Type: struct FInGameLevelingConfig
			constexpr auto CharacterDamageUpgradeTypes = 0xd0; // Size: 16, Type: struct TArray<enum class ESolarTablesEnum_BattleUpgradeEffectType>
			constexpr auto ExpItemConfig = 0xe0; // Size: 16, Type: struct FExpItemConfig
			constexpr auto ExpItemReduceRateConfig = 0xf0; // Size: 8, Type: struct FExpItemReduceRate
			constexpr auto BoxBurstItemConfig = 0xf8; // Size: 8, Type: struct FBoxBurstItemConfig
			constexpr auto bIfShouldSpawnDeathBox = 0x100; // Size: 1, Type: bool
			constexpr auto bIfSupportDeathverge = 0x101; // Size: 1, Type: bool
			constexpr auto DeathBoxEnergyLimitConfig = 0x108; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto bAutoMarkDamagedEnemy = 0x158; // Size: 1, Type: bool
			constexpr auto EnableSect = 0x159; // Size: 1, Type: bool
			constexpr auto CustomRoomData = 0x160; // Size: 120, Type: struct FCustomRoomData
			constexpr auto bIsCustomRoomMode = 0x1d8; // Size: 1, Type: bool
			constexpr auto bEnableTracking = 0x1d9; // Size: 1, Type: bool
			constexpr auto InitTrackingDelay = 0x1dc; // Size: 4, Type: float
			constexpr auto TrackingTimeInterval = 0x1e0; // Size: 4, Type: float
			constexpr auto DefaultTrackMaxRevealDistance = 0x1e4; // Size: 4, Type: float
			constexpr auto TrackReplaceDistance = 0x1e8; // Size: 4, Type: float
			constexpr auto MinRevealDistance = 0x1ec; // Size: 4, Type: float
			constexpr auto TrackTimeout = 0x1f0; // Size: 4, Type: float
			constexpr auto MaxTrackNum = 0x1f4; // Size: 4, Type: int32_t
			constexpr auto FinalsBGMData = 0x1f8; // Size: 40, Type: struct FFinalsBGMData
			constexpr auto bEnableSkydivingTrail = 0x220; // Size: 1, Type: bool
			constexpr auto FlyTrailClass = 0x228; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto DebugTrailEffectClass = 0x250; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
