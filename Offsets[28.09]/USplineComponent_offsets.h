namespace offsets
{
	namespace USplineComponent
	{
			constexpr auto SplineCurves = 0x540; // Size: 104, Type: struct FSplineCurves
			constexpr auto SplineInfo = 0x5a8; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineRotInfo = 0x5c0; // Size: 24, Type: struct FInterpCurveQuat
			constexpr auto SplineScaleInfo = 0x5d8; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineReparamTable = 0x5f0; // Size: 24, Type: struct FInterpCurveFloat
			constexpr auto bAllowSplineEditingPerInstance = 0x608; // Size: 1, Type: bool
			constexpr auto ReparamStepsPerSegment = 0x60c; // Size: 4, Type: int32_t
			constexpr auto Duration = 0x610; // Size: 4, Type: float
			constexpr auto bStationaryEndpoints = 0x614; // Size: 1, Type: bool
			constexpr auto bSplineHasBeenEdited = 0x615; // Size: 1, Type: bool
			constexpr auto bModifiedByConstructionScript = 0x616; // Size: 1, Type: bool
			constexpr auto bInputSplinePointsToConstructionScript = 0x617; // Size: 1, Type: bool
			constexpr auto bDrawDebug = 0x618; // Size: 1, Type: bool
			constexpr auto bClosedLoop = 0x619; // Size: 1, Type: bool
			constexpr auto bLoopPositionOverride = 0x61a; // Size: 1, Type: bool
			constexpr auto LoopPosition = 0x61c; // Size: 4, Type: float
			constexpr auto DefaultUpVector = 0x620; // Size: 12, Type: struct FVector
	}
} 
