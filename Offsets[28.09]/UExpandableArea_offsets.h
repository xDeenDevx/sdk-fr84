namespace offsets
{
	namespace UExpandableArea
	{
			constexpr auto Style = 0x140; // Size: 320, Type: struct FExpandableAreaStyle
			constexpr auto BorderBrush = 0x280; // Size: 152, Type: struct FSlateBrush
			constexpr auto BorderColor = 0x318; // Size: 40, Type: struct FSlateColor
			constexpr auto bIsExpanded = 0x340; // Size: 1, Type: bool
			constexpr auto MaxHeight = 0x344; // Size: 4, Type: float
			constexpr auto HeaderPadding = 0x348; // Size: 16, Type: struct FMargin
			constexpr auto AreaPadding = 0x358; // Size: 16, Type: struct FMargin
			constexpr auto OnExpansionChanged = 0x368; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto HeaderContent = 0x378; // Size: 8, Type: struct UWidget*
			constexpr auto BodyContent = 0x380; // Size: 8, Type: struct UWidget*
	}
} 
