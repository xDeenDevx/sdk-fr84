namespace offsets
{
	namespace UFireInputWidget
	{
			constexpr auto JoyStickThumb = 0x138; // Size: 152, Type: struct FSlateBrush
			constexpr auto JoyStickThumbPress = 0x1d0; // Size: 152, Type: struct FSlateBrush
			constexpr auto JoyStickIcon = 0x268; // Size: 152, Type: struct FSlateBrush
			constexpr auto VisualSize = 0x300; // Size: 8, Type: struct FVector2D
			constexpr auto ThumbSize = 0x308; // Size: 8, Type: struct FVector2D
			constexpr auto InputScale = 0x310; // Size: 8, Type: struct FVector2D
			constexpr auto IconSize = 0x318; // Size: 8, Type: struct FVector2D
			constexpr auto ActiveOpacity = 0x320; // Size: 4, Type: float
			constexpr auto InactiveOpacity = 0x324; // Size: 4, Type: float
			constexpr auto TimeUntilDeactive = 0x328; // Size: 4, Type: float
			constexpr auto bPreventReCenter = 0x32c; // Size: 1, Type: bool
			constexpr auto OnJoystickPressed = 0x340; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnJoystickRelease = 0x350; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInputYawAndPitch = 0x360; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
