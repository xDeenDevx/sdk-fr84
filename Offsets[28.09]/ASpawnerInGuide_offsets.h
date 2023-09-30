namespace offsets
{
	namespace ASpawnerInGuide
	{
			constexpr auto BotAISpawnerId = 0x228; // Size: 4, Type: int32_t
			constexpr auto BotAICharacterId = 0x22c; // Size: 4, Type: int32_t
			constexpr auto TeamID = 0x230; // Size: 4, Type: int32_t
			constexpr auto AIName = 0x238; // Size: 16, Type: struct FString
			constexpr auto bSpawnDeathBox = 0x248; // Size: 1, Type: bool
			constexpr auto bSpawnBeginPlay = 0x249; // Size: 1, Type: bool
			constexpr auto DelaySec = 0x24c; // Size: 4, Type: float
			constexpr auto SpawnLocationOffset = 0x250; // Size: 12, Type: struct FVector
			constexpr auto BotAIControllerClass = 0x260; // Size: 8, Type: ASolarBotAIController*
	}
} 
