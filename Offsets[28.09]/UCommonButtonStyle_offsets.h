namespace offsets
{
	namespace UCommonButtonStyle
	{
			constexpr auto bSingleMaterial = 0x28; // Size: 1, Type: bool
			constexpr auto SingleMaterialBrush = 0x30; // Size: 152, Type: struct FSlateBrush
			constexpr auto NormalBase = 0xc8; // Size: 152, Type: struct FSlateBrush
			constexpr auto NormalHovered = 0x160; // Size: 152, Type: struct FSlateBrush
			constexpr auto NormalPressed = 0x1f8; // Size: 152, Type: struct FSlateBrush
			constexpr auto SelectedBase = 0x290; // Size: 152, Type: struct FSlateBrush
			constexpr auto SelectedHovered = 0x328; // Size: 152, Type: struct FSlateBrush
			constexpr auto SelectedPressed = 0x3c0; // Size: 152, Type: struct FSlateBrush
			constexpr auto Disabled = 0x458; // Size: 152, Type: struct FSlateBrush
			constexpr auto ButtonPadding = 0x4f0; // Size: 16, Type: struct FMargin
			constexpr auto CustomPadding = 0x500; // Size: 16, Type: struct FMargin
			constexpr auto MinWidth = 0x510; // Size: 4, Type: int32_t
			constexpr auto MinHeight = 0x514; // Size: 4, Type: int32_t
			constexpr auto NormalTextStyle = 0x518; // Size: 8, Type: UCommonTextStyle*
			constexpr auto NormalHoveredTextStyle = 0x520; // Size: 8, Type: UCommonTextStyle*
			constexpr auto SelectedTextStyle = 0x528; // Size: 8, Type: UCommonTextStyle*
			constexpr auto SelectedHoveredTextStyle = 0x530; // Size: 8, Type: UCommonTextStyle*
			constexpr auto DisabledTextStyle = 0x538; // Size: 8, Type: UCommonTextStyle*
			constexpr auto PressedSlateSound = 0x540; // Size: 24, Type: struct FSlateSound
			constexpr auto SelectedPressedSlateSound = 0x558; // Size: 32, Type: struct FCommonButtonStyleOptionalSlateSound
			constexpr auto DisabledPressedSlateSound = 0x578; // Size: 32, Type: struct FCommonButtonStyleOptionalSlateSound
			constexpr auto HoveredSlateSound = 0x598; // Size: 24, Type: struct FSlateSound
			constexpr auto SelectedHoveredSlateSound = 0x5b0; // Size: 32, Type: struct FCommonButtonStyleOptionalSlateSound
			constexpr auto DisabledHoveredSlateSound = 0x5d0; // Size: 32, Type: struct FCommonButtonStyleOptionalSlateSound
	}
} 
