namespace offsets
{
	namespace ASolarLootZone
	{
			constexpr auto OwnningItemSpawners = 0x230; // Size: 16, Type: struct TArray<struct ASolarItemSpawner*>
			constexpr auto SpawnerPathGraph = 0x240; // Size: 80, Type: struct TMap<struct ASolarItemSpawner*, struct FItemSpawnerGraphNode>
			constexpr auto LootZonePathGraph = 0x290; // Size: 16, Type: struct TArray<struct FLootZonePath>
			constexpr auto MaxRadius = 0x2a0; // Size: 4, Type: float
			constexpr auto OwnningChargingPiles = 0x2a8; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<ASolarChargingPile>>
			constexpr auto OwnningSniperPosition = 0x2b8; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<ASolarBotSniperPosition>>
			constexpr auto OwnningPOIs = 0x2c8; // Size: 16, Type: struct TArray<struct FVector>
	}
} 
