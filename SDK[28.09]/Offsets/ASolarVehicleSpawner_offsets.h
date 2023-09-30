namespace offsets
{
	namespace ASolarVehicleSpawner
	{
			constexpr auto SpawnID = 0x394; // Size: 4, Type: int32_t
			constexpr auto VehicleSpawnType = 0x398; // Size: 1, Type: enum class EVehicleSpawnType
			constexpr auto bVehicleRefresh = 0x3a0; // Size: 1, Type: bool
			constexpr auto VehicleRefreshSecond = 0x3a4; // Size: 4, Type: int32_t
			constexpr auto bVehicleRefreshRand = 0x3a8; // Size: 1, Type: bool
			constexpr auto bVehicleRefreshWaitPreBroken = 0x3a9; // Size: 1, Type: bool
			constexpr auto VehicleRefreshCheckRoleDisSquared = 0x3b0; // Size: 8, Type: int64_t
			constexpr auto VehicleCheckObjectTypes = 0x3b8; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto VehicleCheckBoxSize = 0x3c8; // Size: 12, Type: struct FVector
			constexpr auto VehicleSpawnEffectClass = 0x3f0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto VehicleSpawnEffect = 0x418; // Size: 8, Type: struct ASolarVehicleSpawnEffect*
			constexpr auto CachedActorHandle = 0x428; // Size: 4, Type: struct FSpawnedActorHandle
	}
} 
