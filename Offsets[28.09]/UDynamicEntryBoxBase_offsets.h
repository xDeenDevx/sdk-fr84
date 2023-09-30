namespace offsets
{
	namespace UDynamicEntryBoxBase
	{
			constexpr auto EntryBoxType = 0x138; // Size: 1, Type: enum class EDynamicBoxType
			constexpr auto EntrySpacing = 0x13c; // Size: 8, Type: struct FVector2D
			constexpr auto SpacingPattern = 0x148; // Size: 16, Type: struct TArray<struct FVector2D>
			constexpr auto EntrySizeRule = 0x158; // Size: 8, Type: struct FSlateChildSize
			constexpr auto EntryHorizontalAlignment = 0x160; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto EntryVerticalAlignment = 0x161; // Size: 1, Type: enum class EVerticalAlignment
			constexpr auto MaxElementSize = 0x164; // Size: 4, Type: int32_t
			constexpr auto EntryWidgetPool = 0x178; // Size: 128, Type: struct FUserWidgetPool
	}
} 
