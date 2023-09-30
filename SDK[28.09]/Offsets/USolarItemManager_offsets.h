namespace offsets
{
	namespace USolarItemManager
	{
			constexpr auto RootActor = 0x30; // Size: 8, Type: struct ASolarItemRootActor*
			constexpr auto SpawnedActors = 0x38; // Size: 80, Type: struct TMap<int32_t, struct TWeakObjectPtr<AActor>>
			constexpr auto ItemSpawners = 0xd8; // Size: 16, Type: struct TArray<struct ASolarItemSpawner*>
			constexpr auto NSItemSpanwers = 0xe8; // Size: 16, Type: struct TArray<struct ASolarItemSpawner*>
			constexpr auto VehicleSpawners = 0xf8; // Size: 16, Type: struct TArray<struct ASolarVehicleSpawner*>
			constexpr auto ItemSpawnersMap = 0x158; // Size: 80, Type: struct TMap<int32_t, struct ASolarItemSpawner*>
			constexpr auto AirDropSpawnersMap = 0x1a8; // Size: 80, Type: struct TMap<int32_t, struct ASolarAirDropSpawner*>
			constexpr auto NSItemSpawnerMap = 0x1f8; // Size: 80, Type: struct TMap<int32_t, struct FSolarItemSpawnerArray>
			constexpr auto ItemOutcomeDatas = 0x248; // Size: 80, Type: struct TMap<int32_t, struct FOutcomeData>
			constexpr auto OutcomeCollection = 0x298; // Size: 80, Type: struct TMap<int32_t, struct FOutcomeDataCollection>
			constexpr auto OriginDropItemDatas = 0x2e8; // Size: 80, Type: struct TMap<int32_t, struct FSimpleDropItemDataCollection>
			constexpr auto AirDropItemDatas = 0x338; // Size: 80, Type: struct TMap<int32_t, struct FFinalDropDataCollection>
			constexpr auto AirDropChestIndexMap = 0x388; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto UsedAirDropChestIndexMap = 0x3d8; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto MaxPileMap = 0x428; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto ItemStream = 0x478; // Size: 8, Type: struct FRandomStream
			constexpr auto DelaySpawnTime = 0x480; // Size: 4, Type: float
			constexpr auto SubLevelNames = 0x488; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto BInitSpawner = 0x498; // Size: 1, Type: bool
			constexpr auto BSpawnerDestoryed = 0x499; // Size: 1, Type: bool
			constexpr auto ItemInitSpawnerHandle = 0x4a0; // Size: 8, Type: struct FTimerHandle
			constexpr auto DelayInitSpawnerTime = 0x4a8; // Size: 4, Type: float
			constexpr auto ItemLoopSpawnHandle = 0x4b0; // Size: 8, Type: struct FTimerHandle
			constexpr auto SpawnLoopInterval = 0x4b8; // Size: 4, Type: float
			constexpr auto SpawnMinDisSquared = 0x4bc; // Size: 4, Type: float
			constexpr auto SpawnMaxHeightOffset = 0x4c0; // Size: 4, Type: float
			constexpr auto ChestSpawnMinDisSquared = 0x4c4; // Size: 4, Type: float
			constexpr auto VehicleSpawnMinDisSquared = 0x4c8; // Size: 4, Type: float
			constexpr auto ItemResReferenceTable = 0x4d0; // Size: 8, Type: struct UDataTable*
			constexpr auto ItemResReferenceTablePath = 0x4d8; // Size: 16, Type: struct FString
			constexpr auto BOpenLog = 0x520; // Size: 1, Type: bool
			constexpr auto FirstSpawnerIndex = 0x524; // Size: 4, Type: int32_t
			constexpr auto FirstTBoxIndex = 0x528; // Size: 4, Type: int32_t
			constexpr auto FirstAirDropIndex = 0x52c; // Size: 4, Type: int32_t
			constexpr auto FirstVehicleIndex = 0x530; // Size: 4, Type: int32_t
			constexpr auto ChestKeyCode = 0x534; // Size: 4, Type: int32_t
			constexpr auto Level1OutcomeID = 0x538; // Size: 4, Type: int32_t
			constexpr auto Level2OutcomeID = 0x53c; // Size: 4, Type: int32_t
			constexpr auto Level3OutcomeID = 0x540; // Size: 4, Type: int32_t
			constexpr auto ItemID2Types = 0x638; // Size: 80, Type: struct TMap<int32_t, enum class EItemType>
			constexpr auto ThisIdRefCount = 0x688; // Size: 8, Type: int64_t
			constexpr auto ServerNowSeconds = 0x690; // Size: 8, Type: int64_t
			constexpr auto RootActorBpPath = 0x698; // Size: 16, Type: struct FString
			constexpr auto CheckDropRadius = 0x6a8; // Size: 4, Type: float
			constexpr auto CheckDropHeight = 0x6ac; // Size: 4, Type: float
			constexpr auto DropLineTraceLength = 0x6b0; // Size: 4, Type: float
			constexpr auto DropUnitOffset = 0x6b4; // Size: 4, Type: float
			constexpr auto MapManager = 0x6b8; // Size: 8, Type: struct USolarMapManager*
			constexpr auto ActiveAirDropBox = 0x6c0; // Size: 16, Type: struct TArray<struct ASolarAirDropSpawner*>
			constexpr auto AirDropsList = 0x780; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<AAirDropTreasureBox>>
			constexpr auto DeathTreasureBoxList = 0x790; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<ADeathTreasureBox>>
	}
} 
