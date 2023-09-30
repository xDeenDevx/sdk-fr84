namespace offsets
{
	namespace USynthKnob
	{
			constexpr auto Value = 0x138; // Size: 4, Type: float
			constexpr auto StepSize = 0x13c; // Size: 4, Type: float
			constexpr auto MouseSpeed = 0x140; // Size: 4, Type: float
			constexpr auto MouseFineTuneSpeed = 0x144; // Size: 4, Type: float
			constexpr auto ShowTooltipInfo = 0x148; // Size: 1, Type: char
			constexpr auto ParameterName = 0x150; // Size: 24, Type: struct FText
			constexpr auto ParameterUnits = 0x168; // Size: 24, Type: struct FText
			constexpr auto ValueDelegate = 0x180; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x190; // Size: 632, Type: struct FSynthKnobStyle
			constexpr auto Locked = 0x408; // Size: 1, Type: bool
			constexpr auto IsFocusable = 0x409; // Size: 1, Type: bool
			constexpr auto OnMouseCaptureBegin = 0x410; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMouseCaptureEnd = 0x420; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureBegin = 0x430; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureEnd = 0x440; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChanged = 0x450; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
