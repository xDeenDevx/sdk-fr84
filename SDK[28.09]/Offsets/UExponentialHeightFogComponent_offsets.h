namespace offsets
{
	namespace UExponentialHeightFogComponent
	{
			constexpr auto EnableFarlightMobile = 0x318; // Size: 1, Type: bool
			constexpr auto DistanceFogData_M = 0x31c; // Size: 24, Type: struct FSLDistanceFogData
			constexpr auto HeightFogData_M = 0x334; // Size: 16, Type: struct FSLHeightFogData
			constexpr auto ScatteringData_M = 0x344; // Size: 32, Type: struct FSLDirectionalLightScattering
			constexpr auto FogColor_M = 0x364; // Size: 16, Type: struct FLinearColor
			constexpr auto FogDensity = 0x374; // Size: 4, Type: float
			constexpr auto FogHeightFalloff = 0x378; // Size: 4, Type: float
			constexpr auto SecondFogData = 0x37c; // Size: 12, Type: struct FExponentialHeightFogData
			constexpr auto FogInscatteringColor = 0x388; // Size: 16, Type: struct FLinearColor
			constexpr auto InscatteringColorCubemap = 0x398; // Size: 8, Type: struct UTextureCube*
			constexpr auto InscatteringColorCubemapAngle = 0x3a0; // Size: 4, Type: float
			constexpr auto InscatteringTextureTint = 0x3a4; // Size: 16, Type: struct FLinearColor
			constexpr auto FullyDirectionalInscatteringColorDistance = 0x3b4; // Size: 4, Type: float
			constexpr auto NonDirectionalInscatteringColorDistance = 0x3b8; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringExponent = 0x3bc; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringStartDistance = 0x3c0; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringColor = 0x3c4; // Size: 16, Type: struct FLinearColor
			constexpr auto FogMaxOpacity = 0x3d4; // Size: 4, Type: float
			constexpr auto StartDistance = 0x3d8; // Size: 4, Type: float
			constexpr auto FogCutoffDistance = 0x3dc; // Size: 4, Type: float
			constexpr auto bEnableVolumetricFog = 0x3e0; // Size: 1, Type: bool
			constexpr auto VolumetricFogScatteringDistribution = 0x3e4; // Size: 4, Type: float
			constexpr auto VolumetricFogAlbedo = 0x3e8; // Size: 4, Type: struct FColor
			constexpr auto VolumetricFogEmissive = 0x3ec; // Size: 16, Type: struct FLinearColor
			constexpr auto VolumetricFogExtinctionScale = 0x3fc; // Size: 4, Type: float
			constexpr auto VolumetricFogDistance = 0x400; // Size: 4, Type: float
			constexpr auto VolumetricFogStaticLightingScatteringIntensity = 0x404; // Size: 4, Type: float
			constexpr auto bOverrideLightColorsWithFogInscatteringColors = 0x408; // Size: 1, Type: bool
	}
} 
