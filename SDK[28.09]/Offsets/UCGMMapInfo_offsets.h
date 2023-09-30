namespace offsets
{
	namespace UCGMMapInfo
	{
			constexpr auto AreaPosArray = 0xd0; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto MapID = 0xe0; // Size: 4, Type: int32_t
			constexpr auto UsedAirlineID = 0xe4; // Size: 4, Type: int32_t
			constexpr auto UsedAirlineData = 0xe8; // Size: 40, Type: struct FAirlineData
			constexpr auto AirlineDataList = 0x120; // Size: 80, Type: struct TMap<int32_t, struct FAirlineData>
			constexpr auto MaskWidth = 0x170; // Size: 4, Type: int32_t
			constexpr auto MaskScale = 0x174; // Size: 4, Type: float
			constexpr auto MapWidth = 0x178; // Size: 4, Type: int32_t
			constexpr auto MapHeight = 0x17c; // Size: 4, Type: int32_t
	}
} 
