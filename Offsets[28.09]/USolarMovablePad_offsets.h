namespace offsets
{
	namespace USolarMovablePad
	{
			constexpr auto InputEventHandle = 0x260; // Size: 1, Type: enum class EInputEventHandleType
			constexpr auto OnPressed = 0x268; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnReleased = 0x278; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMoving = 0x288; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto LimitationFlag = 0x298; // Size: 1, Type: enum class EMovablePadLimitationFlag
			constexpr auto PadBase = 0x2a0; // Size: 8, Type: struct UBorder*
			constexpr auto MovableWidget = 0x2a8; // Size: 8, Type: struct UNamedSlot*
			constexpr auto bWidgetStationary = 0x2b0; // Size: 1, Type: bool
			constexpr auto InnerPadding = 0x2b4; // Size: 16, Type: struct FMargin
			constexpr auto NormalBackground = 0x2c8; // Size: 152, Type: struct FSlateBrush
			constexpr auto PressedBackground = 0x360; // Size: 152, Type: struct FSlateBrush
			constexpr auto PointerAction = 0x3f8; // Size: 24, Type: struct FKey
			constexpr auto MoveXAxis = 0x410; // Size: 24, Type: struct FKey
			constexpr auto MoveYAxis = 0x428; // Size: 24, Type: struct FKey
			constexpr auto bOnlySimulateCapturedMove = 0x440; // Size: 1, Type: bool
			constexpr auto bUsingTouchPriority = 0x441; // Size: 1, Type: bool
			constexpr auto TouchMovePriority = 0x442; // Size: 1, Type: enum class ETouchMovePriority
	}
} 
