namespace offsets
{
	namespace AMobilePlatform
	{
			constexpr auto SplineComponent = 0x228; // Size: 8, Type: struct USplineComponent*
			constexpr auto MeshComponent = 0x230; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto PointInfos = 0x238; // Size: 16, Type: struct TArray<struct FMobilePlatformSplinePoint>
			constexpr auto ConfigDefaultSpeed = 0x248; // Size: 4, Type: float
			constexpr auto ConfigDefaultDelayTime = 0x24c; // Size: 4, Type: float
			constexpr auto CurrentSpeed = 0x250; // Size: 4, Type: float
			constexpr auto CurrentDistance = 0x254; // Size: 4, Type: float
			constexpr auto TotalDistance = 0x258; // Size: 4, Type: float
			constexpr auto DelayTime = 0x25c; // Size: 4, Type: float
			constexpr auto PointNum = 0x260; // Size: 4, Type: int32_t
			constexpr auto PointIndex = 0x264; // Size: 4, Type: int32_t
			constexpr auto MoveVecter = 0x268; // Size: 12, Type: struct FVector
			constexpr auto MeshExtend = 0x274; // Size: 12, Type: struct FVector
	}
} 
