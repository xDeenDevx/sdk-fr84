namespace offsets
{
	namespace USynth2DSlider
	{
			constexpr auto ValueX = 0x138; // Size: 4, Type: float
			constexpr auto ValueY = 0x13c; // Size: 4, Type: float
			constexpr auto ValueXDelegate = 0x140; // Size: 16, Type: struct FDelegate
			constexpr auto ValueYDelegate = 0x150; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x160; // Size: 776, Type: struct FSynth2DSliderStyle
			constexpr auto SliderHandleColor = 0x468; // Size: 16, Type: struct FLinearColor
			constexpr auto IndentHandle = 0x478; // Size: 1, Type: bool
			constexpr auto Locked = 0x479; // Size: 1, Type: bool
			constexpr auto StepSize = 0x47c; // Size: 4, Type: float
			constexpr auto IsFocusable = 0x480; // Size: 1, Type: bool
			constexpr auto OnMouseCaptureBegin = 0x488; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMouseCaptureEnd = 0x498; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureBegin = 0x4a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureEnd = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChangedX = 0x4c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChangedY = 0x4d8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
