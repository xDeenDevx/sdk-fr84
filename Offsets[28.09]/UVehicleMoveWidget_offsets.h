namespace offsets
{
	namespace UVehicleMoveWidget
	{
			constexpr auto JoyStickThumb = 0x1e0; // Size: 152, Type: struct FSlateBrush
			constexpr auto JoyStickThumbPress = 0x278; // Size: 152, Type: struct FSlateBrush
			constexpr auto ThumbSize = 0x310; // Size: 8, Type: struct FVector2D
			constexpr auto SprintImage = 0x318; // Size: 152, Type: struct FSlateBrush
			constexpr auto SprintSize = 0x3b0; // Size: 8, Type: struct FVector2D
			constexpr auto TriggerPressTime = 0x3b8; // Size: 4, Type: float
			constexpr auto DistanceSprintImageToCenter = 0x3bc; // Size: 4, Type: float
			constexpr auto ShowLockSprintIconSectorAngle = 0x3c0; // Size: 4, Type: float
			constexpr auto VisualSize = 0x3c4; // Size: 8, Type: struct FVector2D
			constexpr auto OnSprintIconActive = 0x3e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSprintIconHide = 0x3f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSprintLockIconActive = 0x400; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSprintChangeToCenterState = 0x410; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
