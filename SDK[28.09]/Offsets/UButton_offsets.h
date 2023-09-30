namespace offsets
{
	namespace UButton
	{
			constexpr auto Style = 0x150; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto WidgetStyle = 0x158; // Size: 696, Type: struct FButtonStyle
			constexpr auto ColorAndOpacity = 0x410; // Size: 16, Type: struct FLinearColor
			constexpr auto BackgroundColor = 0x420; // Size: 16, Type: struct FLinearColor
			constexpr auto ClickMethod = 0x430; // Size: 1, Type: enum class EButtonClickMethod
			constexpr auto TouchMethod = 0x431; // Size: 1, Type: enum class EButtonTouchMethod
			constexpr auto PressMethod = 0x432; // Size: 1, Type: enum class EButtonPressMethod
			constexpr auto IsFocusable = 0x433; // Size: 1, Type: bool
			constexpr auto OnClicked = 0x438; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPressed = 0x448; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReleased = 0x458; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHovered = 0x468; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUnhovered = 0x478; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
