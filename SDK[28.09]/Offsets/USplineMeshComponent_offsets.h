namespace offsets
{
	namespace USplineMeshComponent
	{
			constexpr auto SplineParams = 0x608; // Size: 88, Type: struct FSplineMeshParams
			constexpr auto SplineUpDir = 0x660; // Size: 12, Type: struct FVector
			constexpr auto SplineBoundaryMin = 0x66c; // Size: 4, Type: float
			constexpr auto CachedMeshBodySetupGuid = 0x670; // Size: 16, Type: struct FGuid
			constexpr auto BodySetup = 0x680; // Size: 8, Type: struct UBodySetup*
			constexpr auto SplineBoundaryMax = 0x688; // Size: 4, Type: float
			constexpr auto bAllowSplineEditingPerInstance = 0x68c; // Size: 1, Type: char
			constexpr auto bSmoothInterpRollScale = 0x68c; // Size: 1, Type: char
			constexpr auto bMeshDirty = 0x68c; // Size: 1, Type: char
			constexpr auto ForwardAxis = 0x68d; // Size: 1, Type: enum class ESplineMeshAxis
			constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x690; // Size: 4, Type: float
	}
} 
