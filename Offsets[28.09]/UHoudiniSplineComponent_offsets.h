namespace offsets
{
	namespace UHoudiniSplineComponent
	{
			constexpr auto CurvePoints = 0x320; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto DisplayPoints = 0x330; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto DisplayPointIndexDivider = 0x340; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto HoudiniSplineName = 0x350; // Size: 16, Type: struct FString
			constexpr auto bClosed = 0x360; // Size: 1, Type: bool
			constexpr auto bReversed = 0x361; // Size: 1, Type: bool
			constexpr auto CurveOrder = 0x364; // Size: 4, Type: int32_t
			constexpr auto bIsHoudiniSplineVisible = 0x368; // Size: 1, Type: bool
			constexpr auto CurveType = 0x369; // Size: 1, Type: enum class EHoudiniCurveType
			constexpr auto CurveMethod = 0x36a; // Size: 1, Type: enum class EHoudiniCurveMethod
			constexpr auto CurveBreakpointParameterization = 0x36b; // Size: 1, Type: enum class EHoudiniCurveBreakpointParameterization
			constexpr auto bIsOutputCurve = 0x36c; // Size: 1, Type: bool
			constexpr auto bCookOnCurveChanged = 0x36d; // Size: 1, Type: bool
			constexpr auto bIsLegacyInputCurve = 0x36e; // Size: 1, Type: bool
			constexpr auto bHasChanged = 0x5a0; // Size: 1, Type: bool
			constexpr auto bNeedsToTriggerUpdate = 0x5a1; // Size: 1, Type: bool
			constexpr auto bIsInputCurve = 0x5a2; // Size: 1, Type: bool
			constexpr auto bIsEditableOutputCurve = 0x5a3; // Size: 1, Type: bool
			constexpr auto NodeId = 0x5a4; // Size: 4, Type: int32_t
			constexpr auto PartName = 0x5a8; // Size: 16, Type: struct FString
	}
} 
