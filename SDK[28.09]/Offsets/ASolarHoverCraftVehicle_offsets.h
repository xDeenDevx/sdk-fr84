namespace offsets
{
	namespace ASolarHoverCraftVehicle
	{
			constexpr auto MeshOffsetWithoutDriver = 0x13b8; // Size: 4, Type: float
			constexpr auto MeshOffsetLerpSpeed = 0x13bc; // Size: 4, Type: float
			constexpr auto HoverCraftHitImpulseMul = 0x13c0; // Size: 80, Type: struct TMap<enum class EHoverCraftHitType, float>
			constexpr auto HoverCraftHitImpulseLimit = 0x1410; // Size: 4, Type: float
			constexpr auto BodyBoxComp = 0x1418; // Size: 8, Type: struct UBoxComponent*
			constexpr auto BodyTraceExceptVehicleTypeIDs = 0x1420; // Size: 16, Type: struct TArray<int32_t>
	}
} 
