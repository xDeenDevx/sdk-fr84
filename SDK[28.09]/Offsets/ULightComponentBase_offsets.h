namespace offsets
{
	namespace ULightComponentBase
	{
			constexpr auto LightGuid = 0x318; // Size: 16, Type: struct FGuid
			constexpr auto Brightness = 0x328; // Size: 4, Type: float
			constexpr auto Intensity = 0x32c; // Size: 4, Type: float
			constexpr auto LightColor = 0x330; // Size: 4, Type: struct FColor
			constexpr auto bAffectsWorld = 0x334; // Size: 1, Type: char
			constexpr auto CastShadows = 0x334; // Size: 1, Type: char
			constexpr auto CastStaticShadows = 0x334; // Size: 1, Type: char
			constexpr auto CastDynamicShadows = 0x334; // Size: 1, Type: char
			constexpr auto bAffectTranslucentLighting = 0x334; // Size: 1, Type: char
			constexpr auto bTransmission = 0x334; // Size: 1, Type: char
			constexpr auto bCastVolumetricShadow = 0x334; // Size: 1, Type: char
			constexpr auto bCastDeepShadow = 0x334; // Size: 1, Type: char
			constexpr auto bCastRaytracedShadow = 0x335; // Size: 1, Type: char
			constexpr auto bAffectReflection = 0x335; // Size: 1, Type: char
			constexpr auto bAffectGlobalIllumination = 0x335; // Size: 1, Type: char
			constexpr auto IndirectLightingIntensity = 0x338; // Size: 4, Type: float
			constexpr auto VolumetricScatteringIntensity = 0x33c; // Size: 4, Type: float
			constexpr auto SamplesPerPixel = 0x340; // Size: 4, Type: int32_t
	}
} 
