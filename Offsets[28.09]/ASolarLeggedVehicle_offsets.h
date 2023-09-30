namespace offsets
{
	namespace ASolarLeggedVehicle
	{
			constexpr auto LeggedVehicleMovement = 0x1380; // Size: 8, Type: struct USolarLeggedVehicleMovement*
			constexpr auto VehicleCapsule = 0x1388; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto BlockForVehicleComp = 0x1390; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto BlockForVehicleCollisionDelay = 0x1398; // Size: 4, Type: float
			constexpr auto ReplicatedAnimState = 0x13a8; // Size: 1, Type: enum class EVehicleAnimationState
			constexpr auto InitialFootIkLocations = 0x13b0; // Size: 16, Type: struct TArray<struct FVector_NetQuantize>
			constexpr auto StandOnVehicleRadiusMultiplier = 0x13c0; // Size: 4, Type: float
	}
} 
