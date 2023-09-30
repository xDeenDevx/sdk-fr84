namespace offsets
{
	namespace UCardView
	{
			constexpr auto EntryWidgetClass = 0x138; // Size: 8, Type: UUserWidget*
			constexpr auto EntryWidgetPool = 0x140; // Size: 128, Type: struct FUserWidgetPool
			constexpr auto CenterScale = 0x1c0; // Size: 4, Type: float
			constexpr auto CenterOffset = 0x1c4; // Size: 4, Type: float
			constexpr auto PageSpacing = 0x1c8; // Size: 4, Type: float
			constexpr auto AlignmentPercent = 0x1cc; // Size: 4, Type: float
			constexpr auto Orientation = 0x1d0; // Size: 1, Type: enum class EOrientation
			constexpr auto ListItems = 0x1d8; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto BP_OnItemClicked = 0x1f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnSelectedItemChanged = 0x208; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnSelectedIndexChanged = 0x218; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
