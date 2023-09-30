namespace offsets
{
	namespace USolarAngleViewWidget
	{
			constexpr auto JoyStickThumb = 0x138; // Size: 152, Type: struct FSlateBrush
			constexpr auto JoyStickThumbPress = 0x1d0; // Size: 152, Type: struct FSlateBrush
			constexpr auto JoyStickBG = 0x268; // Size: 152, Type: struct FSlateBrush
			constexpr auto VisualSize = 0x300; // Size: 8, Type: struct FVector2D
			constexpr auto ThumbSize = 0x308; // Size: 8, Type: struct FVector2D
			constexpr auto InputScale = 0x310; // Size: 8, Type: struct FVector2D
			constexpr auto ActiveOpacity = 0x318; // Size: 4, Type: float
			constexpr auto InactiveOpacity = 0x31c; // Size: 4, Type: float
			constexpr auto TimeUntilDeactive = 0x320; // Size: 4, Type: float
			constexpr auto bPreventReCenter = 0x324; // Size: 1, Type: bool
			constexpr auto OnJoystickPressed = 0x338; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnJoystickRelease = 0x348; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInputYawAndPitch = 0x358; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
