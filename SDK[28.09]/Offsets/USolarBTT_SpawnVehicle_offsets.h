namespace offsets
{
	namespace USolarBTT_SpawnVehicle
	{
			constexpr auto SpawnIds = 0x98; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto bUsingSelectedSpawnId = 0xa8; // Size: 1, Type: bool
			constexpr auto SelectedSpawnId = 0xb0; // Size: 40, Type: struct FBlackboardKeySelector
			constexpr auto SpawnedVehicle = 0xd8; // Size: 40, Type: struct FBlackboardKeySelector
			constexpr auto SpawnHeightOffset = 0x100; // Size: 4, Type: float
			constexpr auto SpawnFailedSec = 0x104; // Size: 4, Type: float
	}
} 
