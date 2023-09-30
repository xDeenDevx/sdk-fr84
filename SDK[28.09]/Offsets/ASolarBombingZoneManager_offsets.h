namespace offsets
{
	namespace ASolarBombingZoneManager
	{
			constexpr auto BPClass = 0x228; // Size: 8, Type: ASolarBombActor*
			constexpr auto ZoneArray = 0x230; // Size: 16, Type: struct TArray<struct FBombingZone>
			constexpr auto WeightInCar = 0x244; // Size: 4, Type: int32_t
			constexpr auto WeightInPoision = 0x248; // Size: 4, Type: int32_t
			constexpr auto WeightInRoom = 0x24c; // Size: 4, Type: int32_t
			constexpr auto LocationLimit = 0x250; // Size: 8, Type: struct FVector2D
			constexpr auto NotifyTime = 0x258; // Size: 4, Type: float
	}
} 
