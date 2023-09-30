namespace offsets
{
	namespace UHoudiniInputSplineComponent
	{
			constexpr auto NumberOfSplineControlPoints = 0x120; // Size: 4, Type: int32_t
			constexpr auto SplineLength = 0x124; // Size: 4, Type: float
			constexpr auto SplineResolution = 0x128; // Size: 4, Type: float
			constexpr auto SplineClosed = 0x12c; // Size: 1, Type: bool
			constexpr auto SplineControlPoints = 0x130; // Size: 16, Type: struct TArray<struct FTransform>
	}
} 
