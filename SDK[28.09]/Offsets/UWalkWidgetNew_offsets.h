namespace offsets
{
	namespace UWalkWidgetNew
	{
			constexpr auto OnSprintChangeToCenterState = 0x1e0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSprintIconActive = 0x1f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSprintIconHide = 0x200; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSprintLockIconActive = 0x210; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStartSprintFree = 0x220; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTerminateSprintFree = 0x230; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto JoyStickThumb = 0x240; // Size: 152, Type: struct FSlateBrush
			constexpr auto JoyStickThumbPress = 0x2d8; // Size: 152, Type: struct FSlateBrush
			constexpr auto JoyStickBG = 0x370; // Size: 152, Type: struct FSlateBrush
			constexpr auto SprintImage = 0x408; // Size: 152, Type: struct FSlateBrush
			constexpr auto UsedSprintImage = 0x4a0; // Size: 152, Type: struct FSlateBrush
			constexpr auto SprintImageHovered = 0x538; // Size: 152, Type: struct FSlateBrush
			constexpr auto UsedSprintImageHovered = 0x5d0; // Size: 152, Type: struct FSlateBrush
			constexpr auto SprintSize = 0x668; // Size: 8, Type: struct FVector2D
			constexpr auto TriggerDistanceToSprint = 0x670; // Size: 4, Type: float
			constexpr auto TriggerDistanceToShowSprint = 0x674; // Size: 4, Type: float
			constexpr auto ShowSprintIconSectorAngle = 0x678; // Size: 4, Type: float
			constexpr auto ShowLockSprintIconSectorAngle = 0x67c; // Size: 4, Type: float
			constexpr auto bOpenLeftHalfTouch = 0x680; // Size: 1, Type: bool
			constexpr auto bUseTouchStartOffset = 0x681; // Size: 1, Type: bool
			constexpr auto VisualCenter = 0x684; // Size: 8, Type: struct FVector2D
			constexpr auto VisualSize = 0x68c; // Size: 8, Type: struct FVector2D
			constexpr auto ThumbSize = 0x694; // Size: 8, Type: struct FVector2D
			constexpr auto InputScale = 0x69c; // Size: 8, Type: struct FVector2D
			constexpr auto ActiveOpacity = 0x6a4; // Size: 4, Type: float
			constexpr auto InactiveOpacity = 0x6a8; // Size: 4, Type: float
			constexpr auto TimeUntilDeactive = 0x6ac; // Size: 4, Type: float
			constexpr auto bPreventReCenter = 0x6b0; // Size: 1, Type: bool
	}
} 
