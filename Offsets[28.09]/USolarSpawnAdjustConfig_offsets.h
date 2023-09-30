namespace offsets
{
	namespace USolarSpawnAdjustConfig
	{
			constexpr auto bDrawDebug = 0x30; // Size: 1, Type: bool
			constexpr auto AdjustBlockTypes = 0x38; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto AdjustDetectBoxExtent = 0x48; // Size: 12, Type: struct FVector
			constexpr auto AdjustDetectBoxOffset = 0x54; // Size: 12, Type: struct FVector
			constexpr auto bUseActorRotation = 0x60; // Size: 1, Type: bool
			constexpr auto AdjustVerticalDist = 0x64; // Size: 4, Type: float
			constexpr auto AdjustHorizonDist = 0x68; // Size: 4, Type: float
			constexpr auto AdjustFindStep = 0x6c; // Size: 4, Type: float
			constexpr auto TraceUpLength = 0x70; // Size: 4, Type: float
			constexpr auto TraceDownLength = 0x74; // Size: 4, Type: float
			constexpr auto TraceZOffset = 0x78; // Size: 4, Type: float
			constexpr auto AdjustPlaceTypes = 0x80; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
	}
} 
