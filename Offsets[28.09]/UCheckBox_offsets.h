namespace offsets
{
	namespace UCheckBox
	{
			constexpr auto CheckedState = 0x150; // Size: 1, Type: enum class ECheckBoxState
			constexpr auto CheckedStateDelegate = 0x154; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x168; // Size: 1552, Type: struct FCheckBoxStyle
			constexpr auto Style = 0x778; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto UncheckedImage = 0x780; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UncheckedHoveredImage = 0x788; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UncheckedPressedImage = 0x790; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CheckedImage = 0x798; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CheckedHoveredImage = 0x7a0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CheckedPressedImage = 0x7a8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UndeterminedImage = 0x7b0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UndeterminedHoveredImage = 0x7b8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto UndeterminedPressedImage = 0x7c0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto HorizontalAlignment = 0x7c8; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto Padding = 0x7cc; // Size: 16, Type: struct FMargin
			constexpr auto BorderBackgroundColor = 0x7e0; // Size: 40, Type: struct FSlateColor
			constexpr auto ClickMethod = 0x808; // Size: 1, Type: enum class EButtonClickMethod
			constexpr auto TouchMethod = 0x809; // Size: 1, Type: enum class EButtonTouchMethod
			constexpr auto PressMethod = 0x80a; // Size: 1, Type: enum class EButtonPressMethod
			constexpr auto IsFocusable = 0x80b; // Size: 1, Type: bool
			constexpr auto OnCheckStateChanged = 0x810; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
