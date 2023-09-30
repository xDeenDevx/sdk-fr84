namespace offsets
{
	namespace USolarJoyStick
	{
			constexpr auto VirtualActionInput = 0x138; // Size: 32, Type: struct FSolarVirtualInput
			constexpr auto VirtualAxisXInput = 0x158; // Size: 32, Type: struct FSolarVirtualInput
			constexpr auto VirtualAxisYInput = 0x178; // Size: 32, Type: struct FSolarVirtualInput
			constexpr auto OnTouchPressed = 0x198; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTouchReleased = 0x1a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTouchMoveX = 0x1b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTouchMoveY = 0x1c8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
