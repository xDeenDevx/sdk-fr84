namespace offsets
{
	namespace UUdiniAttribute
	{
			constexpr auto AttributeName = 0x28; // Size: 16, Type: struct FString
			constexpr auto help = 0x38; // Size: 16, Type: struct FString
			constexpr auto AttributeType = 0x48; // Size: 1, Type: enum class EUdiniAttributeType
			constexpr auto AttributeOwner = 0x49; // Size: 1, Type: enum class EUdiniAttributeClass
			constexpr auto bIsHide = 0x4a; // Size: 1, Type: bool
			constexpr auto AttributeCount = 0x4c; // Size: 4, Type: int32_t
			constexpr auto AttributeTupleSize = 0x50; // Size: 4, Type: int32_t
			constexpr auto MaxValue = 0x54; // Size: 4, Type: float
			constexpr auto MinValue = 0x58; // Size: 4, Type: float
			constexpr auto hasMin = 0x5c; // Size: 1, Type: bool
			constexpr auto hasMax = 0x5d; // Size: 1, Type: bool
			constexpr auto hasUIMin = 0x5e; // Size: 1, Type: bool
			constexpr auto hasUIMax = 0x5f; // Size: 1, Type: bool
			constexpr auto UIMax = 0x60; // Size: 4, Type: float
			constexpr auto UIMin = 0x64; // Size: 4, Type: float
			constexpr auto ShowValueSize = 0x68; // Size: 4, Type: float
			constexpr auto ShowAttributeValueAsDir = 0x6c; // Size: 1, Type: bool
			constexpr auto ShowAttributeValueAsText = 0x6d; // Size: 1, Type: bool
			constexpr auto EnableShowBackGroundValue = 0x6e; // Size: 1, Type: bool
	}
} 
