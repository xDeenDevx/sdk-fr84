namespace offsets
{
	namespace UHoudiniParameterRampFloatPoint
	{
			constexpr auto Position = 0x28; // Size: 4, Type: float
			constexpr auto Value = 0x2c; // Size: 4, Type: float
			constexpr auto Interpolation = 0x30; // Size: 1, Type: enum class EHoudiniRampInterpolationType
			constexpr auto InstanceIndex = 0x34; // Size: 4, Type: int32_t
			constexpr auto PositionParentParm = 0x38; // Size: 8, Type: struct UHoudiniParameterFloat*
			constexpr auto ValueParentParm = 0x40; // Size: 8, Type: struct UHoudiniParameterFloat*
			constexpr auto InterpolationParentParm = 0x48; // Size: 8, Type: struct UHoudiniParameterChoice*
	}
} 
