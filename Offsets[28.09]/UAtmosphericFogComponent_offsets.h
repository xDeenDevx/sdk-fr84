namespace offsets
{
	namespace UAtmosphericFogComponent
	{
			constexpr auto SunMultiplier = 0x318; // Size: 4, Type: float
			constexpr auto FogMultiplier = 0x31c; // Size: 4, Type: float
			constexpr auto DensityMultiplier = 0x320; // Size: 4, Type: float
			constexpr auto DensityOffset = 0x324; // Size: 4, Type: float
			constexpr auto DistanceScale = 0x328; // Size: 4, Type: float
			constexpr auto AltitudeScale = 0x32c; // Size: 4, Type: float
			constexpr auto DistanceOffset = 0x330; // Size: 4, Type: float
			constexpr auto GroundOffset = 0x334; // Size: 4, Type: float
			constexpr auto StartDistance = 0x338; // Size: 4, Type: float
			constexpr auto SunDiscScale = 0x33c; // Size: 4, Type: float
			constexpr auto DefaultBrightness = 0x340; // Size: 4, Type: float
			constexpr auto DefaultLightColor = 0x344; // Size: 4, Type: struct FColor
			constexpr auto bDisableSunDisk = 0x348; // Size: 1, Type: char
			constexpr auto bAtmosphereAffectsSunIlluminance = 0x348; // Size: 1, Type: char
			constexpr auto bDisableGroundScattering = 0x348; // Size: 1, Type: char
			constexpr auto PrecomputeParams = 0x34c; // Size: 44, Type: struct FAtmospherePrecomputeParameters
			constexpr auto TransmittanceTexture = 0x378; // Size: 8, Type: struct UTexture2D*
			constexpr auto IrradianceTexture = 0x380; // Size: 8, Type: struct UTexture2D*
	}
} 
