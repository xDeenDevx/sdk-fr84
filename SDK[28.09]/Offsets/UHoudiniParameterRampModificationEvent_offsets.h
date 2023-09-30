namespace offsets
{
	namespace UHoudiniParameterRampModificationEvent
	{
			constexpr auto bIsInsertEvent = 0x28; // Size: 1, Type: bool
			constexpr auto bIsFloatRamp = 0x29; // Size: 1, Type: bool
			constexpr auto DeleteInstanceIndex = 0x2c; // Size: 4, Type: int32_t
			constexpr auto InsertPosition = 0x30; // Size: 4, Type: float
			constexpr auto InsertFloat = 0x34; // Size: 4, Type: float
			constexpr auto InsertColor = 0x38; // Size: 16, Type: struct FLinearColor
			constexpr auto InsertInterpolation = 0x48; // Size: 1, Type: enum class EHoudiniRampInterpolationType
	}
} 
