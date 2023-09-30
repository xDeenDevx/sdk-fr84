namespace offsets
{
	namespace UHoudiniParameterRampColor
	{
			constexpr auto Points = 0x150; // Size: 16, Type: struct TArray<struct UHoudiniParameterRampColorPoint*>
			constexpr auto bCaching = 0x160; // Size: 1, Type: bool
			constexpr auto CachedPoints = 0x168; // Size: 16, Type: struct TArray<struct UHoudiniParameterRampColorPoint*>
			constexpr auto DefaultPositions = 0x178; // Size: 16, Type: struct TArray<float>
			constexpr auto DefaultValues = 0x188; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto DefaultChoices = 0x198; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumDefaultPoints = 0x1a8; // Size: 4, Type: int32_t
			constexpr auto ModificationEvents = 0x1b0; // Size: 16, Type: struct TArray<struct UHoudiniParameterRampModificationEvent*>
	}
} 
