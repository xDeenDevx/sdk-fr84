namespace offsets
{
	namespace UHoudiniInputBrush
	{
			constexpr auto BrushesInfo = 0x150; // Size: 16, Type: struct TArray<struct FHoudiniBrushInfo>
			constexpr auto CombinedModel = 0x160; // Size: 8, Type: struct UModel*
			constexpr auto bIgnoreInputObject = 0x168; // Size: 1, Type: bool
			constexpr auto CachedInputBrushType = 0x169; // Size: 1, Type: enum class EBrushType
	}
} 
