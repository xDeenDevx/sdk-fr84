namespace offsets
{
	namespace UHoudiniParameterRampColorPoint
	{
			constexpr auto Position = 0x28; // Size: 4, Type: float
			constexpr auto Value = 0x2c; // Size: 16, Type: struct FLinearColor
			constexpr auto Interpolation = 0x3c; // Size: 1, Type: enum class EHoudiniRampInterpolationType
			constexpr auto InstanceIndex = 0x40; // Size: 4, Type: int32_t
			constexpr auto PositionParentParm = 0x48; // Size: 8, Type: struct UHoudiniParameterFloat*
			constexpr auto ValueParentParm = 0x50; // Size: 8, Type: struct UHoudiniParameterColor*
			constexpr auto InterpolationParentParm = 0x58; // Size: 8, Type: struct UHoudiniParameterChoice*
	}
} 
