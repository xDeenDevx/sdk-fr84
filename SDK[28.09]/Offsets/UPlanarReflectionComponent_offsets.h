namespace offsets
{
	namespace UPlanarReflectionComponent
	{
			constexpr auto PreviewBox = 0x3b0; // Size: 8, Type: struct UBoxComponent*
			constexpr auto NormalDistortionStrength = 0x3b8; // Size: 4, Type: float
			constexpr auto PrefilterRoughness = 0x3bc; // Size: 4, Type: float
			constexpr auto PrefilterRoughnessDistance = 0x3c0; // Size: 4, Type: float
			constexpr auto ScreenPercentage = 0x3c4; // Size: 4, Type: int32_t
			constexpr auto ExtraFOV = 0x3c8; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeStart = 0x3cc; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeEnd = 0x3d0; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeoutStart = 0x3d4; // Size: 4, Type: float
			constexpr auto DistanceFromPlaneFadeoutEnd = 0x3d8; // Size: 4, Type: float
			constexpr auto AngleFromPlaneFadeStart = 0x3dc; // Size: 4, Type: float
			constexpr auto AngleFromPlaneFadeEnd = 0x3e0; // Size: 4, Type: float
			constexpr auto bShowPreviewPlane = 0x3e4; // Size: 1, Type: bool
			constexpr auto bRenderSceneTwoSided = 0x3e5; // Size: 1, Type: bool
	}
} 
