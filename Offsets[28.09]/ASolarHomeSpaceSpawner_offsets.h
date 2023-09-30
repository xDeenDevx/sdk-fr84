namespace offsets
{
	namespace ASolarHomeSpaceSpawner
	{
			constexpr auto HomeActorMgr = 0x298; // Size: 8, Type: struct USolarHomeActorManager*
			constexpr auto TypeClassMap = 0x2a0; // Size: 80, Type: struct TMap<enum class EHomeActor_SecondType, UObject*>
			constexpr auto LayerMap = 0x2f0; // Size: 80, Type: struct TMap<float, int32_t>
			constexpr auto FloorUnit = 0x360; // Size: 4, Type: float
			constexpr auto WallUnit = 0x364; // Size: 4, Type: float
			constexpr auto BaseUnit = 0x368; // Size: 4, Type: float
			constexpr auto RoundOnBase = 0x36c; // Size: 4, Type: float
			constexpr auto RoundOnFloor = 0x370; // Size: 4, Type: float
			constexpr auto ArrowOnBase = 0x374; // Size: 4, Type: float
			constexpr auto ArrowOnFloor = 0x378; // Size: 4, Type: float
			constexpr auto ArrowToWall = 0x37c; // Size: 4, Type: float
			constexpr auto BasisFloorsTransArr = 0x388; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto IsAirWallOpen = 0x3b8; // Size: 1, Type: bool
	}
} 
