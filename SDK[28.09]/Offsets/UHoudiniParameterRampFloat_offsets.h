namespace offsets
{
	namespace UHoudiniParameterRampFloat
	{
			constexpr auto Points = 0x150; // Size: 16, Type: struct TArray<struct UHoudiniParameterRampFloatPoint*>
			constexpr auto CachedPoints = 0x160; // Size: 16, Type: struct TArray<struct UHoudiniParameterRampFloatPoint*>
			constexpr auto DefaultPositions = 0x170; // Size: 16, Type: struct TArray<float>
			constexpr auto DefaultValues = 0x180; // Size: 16, Type: struct TArray<float>
			constexpr auto DefaultChoices = 0x190; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumDefaultPoints = 0x1a0; // Size: 4, Type: int32_t
			constexpr auto bCaching = 0x1a4; // Size: 1, Type: bool
			constexpr auto ModificationEvents = 0x1a8; // Size: 16, Type: struct TArray<struct UHoudiniParameterRampModificationEvent*>
	}
} 
