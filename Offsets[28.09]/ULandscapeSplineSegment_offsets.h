namespace offsets
{
	namespace ULandscapeSplineSegment
	{
			constexpr auto Connections[2] = 0x28; // Size: 48, Type: struct FLandscapeSplineSegmentConnection
			constexpr auto SurfaceType = 0x58; // Size: 1, Type: enum class ELandscapeSplineSegmentSurface
			constexpr auto bBranchTrunk = 0x5c; // Size: 1, Type: char
			constexpr auto SplineInfo = 0x60; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto Points = 0x78; // Size: 16, Type: struct TArray<struct FLandscapeSplineInterpPoint>
			constexpr auto Bounds = 0x88; // Size: 28, Type: struct FBox
			constexpr auto LocalMeshComponents = 0xa8; // Size: 16, Type: struct TArray<struct USplineMeshComponent*>
	}
} 
