namespace offsets
{
	namespace UDirectionalLightComponent
	{
			constexpr auto ShadowCascadeBiasDistribution = 0x448; // Size: 4, Type: float
			constexpr auto bEnableLightShaftOcclusion = 0x44c; // Size: 1, Type: char
			constexpr auto OcclusionMaskDarkness = 0x450; // Size: 4, Type: float
			constexpr auto OcclusionDepthRange = 0x454; // Size: 4, Type: float
			constexpr auto LightShaftOverrideDirection = 0x458; // Size: 12, Type: struct FVector
			constexpr auto WholeSceneDynamicShadowRadius = 0x464; // Size: 4, Type: float
			constexpr auto DynamicShadowDistanceMovableLight = 0x468; // Size: 4, Type: float
			constexpr auto DynamicShadowDistanceStationaryLight = 0x46c; // Size: 4, Type: float
			constexpr auto DynamicShadowCascades = 0x470; // Size: 4, Type: int32_t
			constexpr auto CascadeDistributionExponent = 0x474; // Size: 4, Type: float
			constexpr auto CascadeTransitionFraction = 0x478; // Size: 4, Type: float
			constexpr auto ShadowDistanceFadeoutFraction = 0x47c; // Size: 4, Type: float
			constexpr auto bUseInsetShadowsForMovableObjects = 0x480; // Size: 1, Type: char
			constexpr auto FarShadowCascadeCount = 0x484; // Size: 4, Type: int32_t
			constexpr auto FarShadowDistance = 0x488; // Size: 4, Type: float
			constexpr auto DistanceFieldShadowDistance = 0x48c; // Size: 4, Type: float
			constexpr auto LightSourceAngle = 0x490; // Size: 4, Type: float
			constexpr auto LightSourceSoftAngle = 0x494; // Size: 4, Type: float
			constexpr auto TraceDistance = 0x498; // Size: 4, Type: float
			constexpr auto LightmassSettings = 0x49c; // Size: 16, Type: struct FLightmassDirectionalLightSettings
			constexpr auto bCastModulatedShadows = 0x4ac; // Size: 1, Type: char
			constexpr auto ModulatedShadowColor = 0x4b0; // Size: 4, Type: struct FColor
			constexpr auto ShadowAmount = 0x4b4; // Size: 4, Type: float
			constexpr auto bUsedAsAtmosphereSunLight = 0x4b8; // Size: 1, Type: char
			constexpr auto AtmosphereSunLightIndex = 0x4bc; // Size: 4, Type: int32_t
	}
} 
