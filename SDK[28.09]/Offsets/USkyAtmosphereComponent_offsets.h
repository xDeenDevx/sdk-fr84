namespace offsets
{
	namespace USkyAtmosphereComponent
	{
			constexpr auto TransformMode = 0x318; // Size: 1, Type: enum class ESkyAtmosphereTransformMode
			constexpr auto BottomRadius = 0x31c; // Size: 4, Type: float
			constexpr auto GroundAlbedo = 0x320; // Size: 4, Type: struct FColor
			constexpr auto AtmosphereHeight = 0x324; // Size: 4, Type: float
			constexpr auto MultiScatteringFactor = 0x328; // Size: 4, Type: float
			constexpr auto RayleighScatteringScale = 0x32c; // Size: 4, Type: float
			constexpr auto RayleighScattering = 0x330; // Size: 16, Type: struct FLinearColor
			constexpr auto RayleighExponentialDistribution = 0x340; // Size: 4, Type: float
			constexpr auto MieScatteringScale = 0x344; // Size: 4, Type: float
			constexpr auto MieScattering = 0x348; // Size: 16, Type: struct FLinearColor
			constexpr auto MieAbsorptionScale = 0x358; // Size: 4, Type: float
			constexpr auto MieAbsorption = 0x35c; // Size: 16, Type: struct FLinearColor
			constexpr auto MieAnisotropy = 0x36c; // Size: 4, Type: float
			constexpr auto MieExponentialDistribution = 0x370; // Size: 4, Type: float
			constexpr auto OtherAbsorptionScale = 0x374; // Size: 4, Type: float
			constexpr auto OtherAbsorption = 0x378; // Size: 16, Type: struct FLinearColor
			constexpr auto OtherTentDistribution = 0x388; // Size: 12, Type: struct FTentDistribution
			constexpr auto SkyLuminanceFactor = 0x394; // Size: 16, Type: struct FLinearColor
			constexpr auto AerialPespectiveViewDistanceScale = 0x3a4; // Size: 4, Type: float
			constexpr auto HeightFogContribution = 0x3a8; // Size: 4, Type: float
			constexpr auto TransmittanceMinLightElevationAngle = 0x3ac; // Size: 4, Type: float
			constexpr auto bStaticLightingBuiltGUID = 0x3d4; // Size: 16, Type: struct FGuid
	}
} 
