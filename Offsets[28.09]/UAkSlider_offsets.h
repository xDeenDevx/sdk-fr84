namespace offsets
{
	namespace UAkSlider
	{
			constexpr auto Value = 0x138; // Size: 4, Type: float
			constexpr auto ValueDelegate = 0x13c; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x150; // Size: 928, Type: struct FSliderStyle
			constexpr auto Orientation = 0x4f0; // Size: 1, Type: enum class EOrientation
			constexpr auto SliderBarColor = 0x4f4; // Size: 16, Type: struct FLinearColor
			constexpr auto SliderHandleColor = 0x504; // Size: 16, Type: struct FLinearColor
			constexpr auto IndentHandle = 0x514; // Size: 1, Type: bool
			constexpr auto Locked = 0x515; // Size: 1, Type: bool
			constexpr auto StepSize = 0x518; // Size: 4, Type: float
			constexpr auto IsFocusable = 0x51c; // Size: 1, Type: bool
			constexpr auto ThePropertyToControl = 0x520; // Size: 16, Type: struct FAkPropertyToControl
			constexpr auto ItemToControl = 0x530; // Size: 64, Type: struct FAkWwiseItemToControl
			constexpr auto OnValueChanged = 0x570; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnItemDropped = 0x580; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPropertyDropped = 0x590; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
