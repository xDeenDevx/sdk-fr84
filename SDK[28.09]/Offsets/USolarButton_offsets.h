namespace offsets
{
	namespace USolarButton
	{
			constexpr auto Style = 0x150; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto WidgetStyle = 0x158; // Size: 696, Type: struct FButtonStyle
			constexpr auto ImageFillType = 0x410; // Size: 1, Type: enum class ESolarImageFillType
			constexpr auto ImageFillRatioHorizontal = 0x414; // Size: 4, Type: float
			constexpr auto ImageFillRatioVertical = 0x418; // Size: 4, Type: float
			constexpr auto ImageFillPixelLeft = 0x41c; // Size: 4, Type: float
			constexpr auto ImageFillPixelTop = 0x420; // Size: 4, Type: float
			constexpr auto ImageFillPixelRight = 0x424; // Size: 4, Type: float
			constexpr auto ImageFillPixelBottom = 0x428; // Size: 4, Type: float
			constexpr auto ColorAndOpacity = 0x42c; // Size: 16, Type: struct FLinearColor
			constexpr auto BackgroundColor = 0x43c; // Size: 16, Type: struct FLinearColor
			constexpr auto bReleaseUnfocus = 0x44c; // Size: 1, Type: bool
			constexpr auto bEnableClickSound = 0x44d; // Size: 1, Type: bool
			constexpr auto ClickSoundEventName = 0x450; // Size: 16, Type: struct FString
			constexpr auto ClickMethod = 0x460; // Size: 1, Type: enum class EButtonClickMethod
			constexpr auto TouchMethod = 0x461; // Size: 1, Type: enum class EButtonTouchMethod
			constexpr auto PressMethod = 0x462; // Size: 1, Type: enum class EButtonPressMethod
			constexpr auto IsFocusable = 0x463; // Size: 1, Type: bool
			constexpr auto OnClicked = 0x468; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPressed = 0x478; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReleased = 0x488; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHovered = 0x498; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnUnhovered = 0x4a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnFocusLosted = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
