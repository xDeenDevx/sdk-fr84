namespace offsets
{
	namespace USolarBotAIWarmServiceSystem
	{
			constexpr auto WarmTargets = 0x28; // Size: 80, Type: struct TMap<struct ASolarPlayerState*, struct FWarmTargetState>
			constexpr auto ItemsByTime = 0x78; // Size: 16, Type: struct TArray<struct FTimeItemsSetting>
			constexpr auto TriggerWarmServiceValue = 0x8c; // Size: 4, Type: float
			constexpr auto MaxGroupDistance = 0x90; // Size: 4, Type: float
			constexpr auto MaxServiceBot = 0x94; // Size: 1, Type: char
			constexpr auto TraceRecordLength = 0x98; // Size: 4, Type: int32_t
			constexpr auto TraceRecordInterval = 0xa8; // Size: 4, Type: float
			constexpr auto UpdateInterval = 0xb8; // Size: 4, Type: float
			constexpr auto TeleportLocEQS = 0xc0; // Size: 8, Type: struct UEnvQuery*
			constexpr auto TeleportLocEQSRunMode = 0xc8; // Size: 1, Type: enum class EEnvQueryRunMode
			constexpr auto PopAllTriggerPlayerNum = 0xcc; // Size: 4, Type: int32_t
			constexpr auto PopAllTriggerTime = 0xd0; // Size: 4, Type: int32_t
			constexpr auto PopAllBotEQS = 0xd8; // Size: 8, Type: struct UEnvQuery*
			constexpr auto PopAllBotEQSRunMode = 0xe0; // Size: 1, Type: enum class EEnvQueryRunMode
			constexpr auto RewardScore = 0xe4; // Size: 4, Type: float
			constexpr auto MaxNumFishingBot = 0xe8; // Size: 1, Type: char
			constexpr auto NumPlayerKillThreshold = 0xe9; // Size: 1, Type: char
			constexpr auto NumRealPlayerKillThreshold = 0xea; // Size: 1, Type: char
			constexpr auto FishingTeleportEQS = 0xf0; // Size: 8, Type: struct UEnvQuery*
			constexpr auto FishingTeleportEQSRunMode = 0xf8; // Size: 1, Type: enum class EEnvQueryRunMode
			constexpr auto FishingInvisibleEffectClass = 0x100; // Size: 8, Type: UGameplayEffect*
			constexpr auto FishingBotCharacterID = 0x108; // Size: 4, Type: int32_t
			constexpr auto FishingBotSkinID = 0x10c; // Size: 4, Type: int32_t
			constexpr auto FilterDamageWeaponIDs = 0x110; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto FilterDamageVehicleIDs = 0x120; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto bCheckAccidentHit = 0x130; // Size: 1, Type: bool
			constexpr auto LimitAccidentAngle = 0x134; // Size: 4, Type: float
			constexpr auto ExReportMinAimbotThreshold = 0x138; // Size: 1, Type: char
			constexpr auto ExReportMinBiteThreshold = 0x139; // Size: 1, Type: char
			constexpr auto SuspiciousPlayers = 0x140; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
			constexpr auto FishingBots = 0x150; // Size: 16, Type: struct TArray<struct ASolarPlayerState*>
	}
} 
