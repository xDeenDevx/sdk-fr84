namespace offsets
{
	namespace ADatasmithAreaLightActor
	{
			constexpr auto LightType = 0x228; // Size: 1, Type: enum class EDatasmithAreaLightActorType
			constexpr auto LightShape = 0x229; // Size: 1, Type: enum class EDatasmithAreaLightActorShape
			constexpr auto Dimensions = 0x22c; // Size: 8, Type: struct FVector2D
			constexpr auto Intensity = 0x234; // Size: 4, Type: float
			constexpr auto IntensityUnits = 0x238; // Size: 1, Type: enum class ELightUnits
			constexpr auto Color = 0x23c; // Size: 16, Type: struct FLinearColor
			constexpr auto Temperature = 0x24c; // Size: 4, Type: float
			constexpr auto IESTexture = 0x250; // Size: 8, Type: struct UTextureLightProfile*
			constexpr auto bUseIESBrightness = 0x258; // Size: 1, Type: bool
			constexpr auto IESBrightnessScale = 0x25c; // Size: 4, Type: float
			constexpr auto Rotation = 0x260; // Size: 12, Type: struct FRotator
			constexpr auto SourceRadius = 0x26c; // Size: 4, Type: float
			constexpr auto SourceLength = 0x270; // Size: 4, Type: float
			constexpr auto AttenuationRadius = 0x274; // Size: 4, Type: float
			constexpr auto SpotlightInnerAngle = 0x278; // Size: 4, Type: float
			constexpr auto SpotlightOuterAngle = 0x27c; // Size: 4, Type: float
	}
} 
