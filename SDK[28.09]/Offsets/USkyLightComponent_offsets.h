namespace offsets
{
	namespace USkyLightComponent
	{
			constexpr auto SourceType = 0x348; // Size: 1, Type: enum class ESkyLightSourceType
			constexpr auto Cubemap = 0x350; // Size: 8, Type: struct UTextureCube*
			constexpr auto SourceCubemapAngle = 0x358; // Size: 4, Type: float
			constexpr auto CubemapResolution = 0x35c; // Size: 4, Type: int32_t
			constexpr auto SkyDistanceThreshold = 0x360; // Size: 4, Type: float
			constexpr auto bCaptureEmissiveOnly = 0x364; // Size: 1, Type: bool
			constexpr auto bLowerHemisphereIsBlack = 0x365; // Size: 1, Type: bool
			constexpr auto LowerHemisphereColor = 0x368; // Size: 16, Type: struct FLinearColor
			constexpr auto OcclusionMaxDistance = 0x378; // Size: 4, Type: float
			constexpr auto Contrast = 0x37c; // Size: 4, Type: float
			constexpr auto OcclusionExponent = 0x380; // Size: 4, Type: float
			constexpr auto MinOcclusion = 0x384; // Size: 4, Type: float
			constexpr auto OcclusionTint = 0x388; // Size: 4, Type: struct FColor
			constexpr auto OcclusionCombineMode = 0x38c; // Size: 1, Type: enum class EOcclusionCombineMode
			constexpr auto BlendDestinationCubemap = 0x448; // Size: 8, Type: struct UTextureCube*
	}
} 
