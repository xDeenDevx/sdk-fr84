namespace offsets
{
	namespace ULightComponent
	{
			constexpr auto Temperature = 0x348; // Size: 4, Type: float
			constexpr auto MaxDrawDistance = 0x34c; // Size: 4, Type: float
			constexpr auto MaxDistanceFadeRange = 0x350; // Size: 4, Type: float
			constexpr auto bUseTemperature = 0x354; // Size: 1, Type: char
			constexpr auto ShadowMapChannel = 0x358; // Size: 4, Type: int32_t
			constexpr auto MinRoughness = 0x360; // Size: 4, Type: float
			constexpr auto SpecularScale = 0x364; // Size: 4, Type: float
			constexpr auto ShadowResolutionScale = 0x368; // Size: 4, Type: float
			constexpr auto ShadowBias = 0x36c; // Size: 4, Type: float
			constexpr auto ShadowSlopeBias = 0x370; // Size: 4, Type: float
			constexpr auto ShadowSharpen = 0x374; // Size: 4, Type: float
			constexpr auto ContactShadowLength = 0x378; // Size: 4, Type: float
			constexpr auto ContactShadowLengthInWS = 0x37c; // Size: 1, Type: char
			constexpr auto InverseSquaredFalloff = 0x37c; // Size: 1, Type: char
			constexpr auto CastTranslucentShadows = 0x37c; // Size: 1, Type: char
			constexpr auto bCastShadowsFromCinematicObjectsOnly = 0x37c; // Size: 1, Type: char
			constexpr auto bAffectDynamicIndirectLighting = 0x37c; // Size: 1, Type: char
			constexpr auto bForceCachedShadowsForMovablePrimitives = 0x37c; // Size: 1, Type: char
			constexpr auto LightingChannels = 0x380; // Size: 1, Type: struct FLightingChannels
			constexpr auto LightFunctionMaterial = 0x388; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto LightFunctionScale = 0x390; // Size: 12, Type: struct FVector
			constexpr auto IESTexture = 0x3a0; // Size: 8, Type: struct UTextureLightProfile*
			constexpr auto bUseIESBrightness = 0x3a8; // Size: 1, Type: char
			constexpr auto IESBrightnessScale = 0x3ac; // Size: 4, Type: float
			constexpr auto LightFunctionFadeDistance = 0x3b0; // Size: 4, Type: float
			constexpr auto DisabledBrightness = 0x3b4; // Size: 4, Type: float
			constexpr auto bEnableLightShaftBloom = 0x3b8; // Size: 1, Type: char
			constexpr auto BloomScale = 0x3bc; // Size: 4, Type: float
			constexpr auto BloomThreshold = 0x3c0; // Size: 4, Type: float
			constexpr auto BloomMaxBrightness = 0x3c4; // Size: 4, Type: float
			constexpr auto BloomTint = 0x3c8; // Size: 4, Type: struct FColor
			constexpr auto bUseRayTracedDistanceFieldShadows = 0x3cc; // Size: 1, Type: bool
			constexpr auto RayStartOffsetDepthScale = 0x3d0; // Size: 4, Type: float
	}
} 
