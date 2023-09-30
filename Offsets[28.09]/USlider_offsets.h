namespace offsets
{
	namespace USlider
	{
			constexpr auto Value = 0x138; // Size: 4, Type: float
			constexpr auto ValueDelegate = 0x13c; // Size: 16, Type: struct FDelegate
			constexpr auto MinValue = 0x14c; // Size: 4, Type: float
			constexpr auto MaxValue = 0x150; // Size: 4, Type: float
			constexpr auto WidgetStyle = 0x158; // Size: 928, Type: struct FSliderStyle
			constexpr auto Orientation = 0x4f8; // Size: 1, Type: enum class EOrientation
			constexpr auto SliderBarColor = 0x4fc; // Size: 16, Type: struct FLinearColor
			constexpr auto SliderHandleColor = 0x50c; // Size: 16, Type: struct FLinearColor
			constexpr auto SliderHandleOffset = 0x51c; // Size: 8, Type: struct FVector2D
			constexpr auto CommitTouchStartValue = 0x524; // Size: 1, Type: bool
			constexpr auto IndentHandle = 0x525; // Size: 1, Type: bool
			constexpr auto Locked = 0x526; // Size: 1, Type: bool
			constexpr auto MouseUsesStep = 0x527; // Size: 1, Type: bool
			constexpr auto RequiresControllerLock = 0x528; // Size: 1, Type: bool
			constexpr auto StepSize = 0x52c; // Size: 4, Type: float
			constexpr auto IsFocusable = 0x530; // Size: 1, Type: bool
			constexpr auto OnMouseCaptureBegin = 0x538; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMouseCaptureEnd = 0x548; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureBegin = 0x558; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureEnd = 0x568; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChanged = 0x578; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
