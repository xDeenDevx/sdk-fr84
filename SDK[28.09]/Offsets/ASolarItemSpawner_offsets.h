namespace offsets
{
	namespace ASolarItemSpawner
	{
			constexpr auto SpawnerID = 0x298; // Size: 4, Type: int32_t
			constexpr auto SpawnStage = 0x2c8; // Size: 1, Type: enum class ESpawnStage
			constexpr auto SpawnerType = 0x2c9; // Size: 1, Type: enum class ESpawnerType
			constexpr auto SpawnerLevel = 0x2ca; // Size: 1, Type: enum class ESpawnerLevel
			constexpr auto OutcomeID = 0x2cc; // Size: 4, Type: int32_t
			constexpr auto OriginPos = 0x2d0; // Size: 12, Type: struct FVector
			constexpr auto BoxExtent = 0x2dc; // Size: 12, Type: struct FVector
			constexpr auto SpawnerBox = 0x2e8; // Size: 28, Type: struct FBox
			constexpr auto RotateAngleRange = 0x304; // Size: 4, Type: float
			constexpr auto HasSpawnedItem = 0x308; // Size: 1, Type: bool
			constexpr auto bActiveSpawner = 0x309; // Size: 1, Type: bool
			constexpr auto SyncItemId = 0x310; // Size: 16, Type: struct FString
			constexpr auto BOpenLog = 0x320; // Size: 1, Type: bool
			constexpr auto bRefresh = 0x321; // Size: 1, Type: bool
			constexpr auto RefreshTime = 0x324; // Size: 4, Type: float
			constexpr auto bUseSpawnerTransform = 0x328; // Size: 1, Type: bool
			constexpr auto bToTheGround = 0x329; // Size: 1, Type: bool
			constexpr auto NumberOfPoints = 0x32c; // Size: 4, Type: int32_t
			constexpr auto fScalarParams = 0x330; // Size: 4, Type: float
			constexpr auto AppearanceType = 0x334; // Size: 1, Type: enum class EItemAppearanceType
			constexpr auto bUpdateOverlap = 0x335; // Size: 1, Type: bool
			constexpr auto ItemLoadHandle = 0x358; // Size: 8, Type: struct FTimerHandle
			constexpr auto ItemSpawnHandle = 0x360; // Size: 8, Type: struct FTimerHandle
			constexpr auto ItemRefreshHandle = 0x368; // Size: 8, Type: struct FTimerHandle
	}
} 
