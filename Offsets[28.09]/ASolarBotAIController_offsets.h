namespace offsets
{
	namespace ASolarBotAIController
	{
			constexpr auto BotLootComponent = 0x380; // Size: 8, Type: struct USolarBotLootComponent*
			constexpr auto BotPerceptionComponent = 0x388; // Size: 8, Type: struct USolarPerceptionComponent*
			constexpr auto BotConfigPreset = 0x390; // Size: 8, Type: struct USolarBotAIConfig*
			constexpr auto DefaultBattleConfig = 0x398; // Size: 344, Type: struct FSolarBotBattleConfig
			constexpr auto VehicleAgentProperties = 0x4f0; // Size: 48, Type: struct FNavAgentProperties
			constexpr auto UniqueSpawnerID = 0x520; // Size: 4, Type: int32_t
			constexpr auto BattleSubTreeTag = 0x524; // Size: 8, Type: struct FGameplayTag
			constexpr auto DefaultDifficultyLevel = 0x52c; // Size: 4, Type: int32_t
			constexpr auto CurrentDifficultyLevel = 0x530; // Size: 4, Type: int32_t
			constexpr auto CharacterLookAtInterpSpeed = 0x534; // Size: 4, Type: float
			constexpr auto MinSpecVehicleDeltaPitch = 0x538; // Size: 4, Type: float
			constexpr auto bInitDefaultWeapon = 0x53c; // Size: 1, Type: bool
			constexpr auto BotDefaultWeaponId = 0x540; // Size: 4, Type: int32_t
			constexpr auto bAimBoneWhenFire = 0x544; // Size: 1, Type: bool
			constexpr auto FireTargetBoneName = 0x548; // Size: 8, Type: struct FName
			constexpr auto bSpawnDeathBox = 0x550; // Size: 1, Type: bool
			constexpr auto BonusDropConfig = 0x554; // Size: 24, Type: struct FBotBonusDropConfig
			constexpr auto MinimumDistanceForRepeatedBoarding = 0x56c; // Size: 4, Type: float
			constexpr auto BotAIType = 0x570; // Size: 1, Type: enum class EBotAIType
			constexpr auto BotFeature = 0x574; // Size: 4, Type: int32_t
			constexpr auto MovementVector = 0x578; // Size: 8, Type: struct FVector2D
			constexpr auto BPDefaultNavigationFilterClass = 0x580; // Size: 8, Type: UNavigationQueryFilter*
			constexpr auto SubTreeMap = 0x5b8; // Size: 80, Type: struct TMap<struct FGameplayTag, struct UBehaviorTree*>
			constexpr auto AITarget = 0x640; // Size: 8, Type: struct TWeakObjectPtr<AActor>
			constexpr auto ShootSimulater = 0x648; // Size: 8, Type: struct USolarBotShootSimulater*
			constexpr auto OnBotAIDeath = 0x6b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto PossessedCharacer = 0x6d4; // Size: 8, Type: struct TWeakObjectPtr<ASolarCharacter>
			constexpr auto PathFollowingComp = 0x6e0; // Size: 8, Type: struct USolarFollowingComponent*
			constexpr auto NgaiComponent = 0x6f0; // Size: 8, Type: struct UNgaiAIControllerComponent*
			constexpr auto ValidEmojiUseDistance = 0x708; // Size: 4, Type: float
			constexpr auto WorldMarkMessageDelayTime = 0x7d8; // Size: 4, Type: float
	}
} 
