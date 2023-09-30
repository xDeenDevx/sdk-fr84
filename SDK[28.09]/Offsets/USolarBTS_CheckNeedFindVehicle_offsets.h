namespace offsets
{
	namespace USolarBTS_CheckNeedFindVehicle
	{
			constexpr auto bMarkOccupiedAfterVehicleSelected = 0x98; // Size: 1, Type: bool
			constexpr auto bCleanTargetOnCeaseRelevant = 0x99; // Size: 1, Type: bool
			constexpr auto SolarWheeledVehicleClass = 0xa0; // Size: 16, Type: struct TArray<ASolarVehiclePawn*>
			constexpr auto bIgnoreVehicleInPoision = 0xb0; // Size: 1, Type: bool
			constexpr auto bIgnoreVehicleOffNavmesh = 0xb1; // Size: 1, Type: bool
			constexpr auto CheckOnNavmeshExtent = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto FilterClass = 0xc0; // Size: 8, Type: UNavigationQueryFilter*
			constexpr auto ExceptVehicleId = 0xc8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto AcceptableRadius = 0xd8; // Size: 4, Type: float
			constexpr auto MoveToDistanceFindVehicle = 0xdc; // Size: 4, Type: float
			constexpr auto RangeFindVehicle = 0xe0; // Size: 4, Type: float
			constexpr auto HealthTakingVehicle = 0xe4; // Size: 4, Type: float
			constexpr auto MaxDistanceFindTeamVehicle = 0xe8; // Size: 4, Type: float
			constexpr auto bCheckSameTarget = 0xec; // Size: 1, Type: bool
			constexpr auto SameTargetDistThreshold = 0xf0; // Size: 4, Type: float
	}
} 
