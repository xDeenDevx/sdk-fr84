namespace offsets
{
	namespace UTweenBase
	{
			constexpr auto AutoPlay = 0x260; // Size: 1, Type: bool
			constexpr auto Interval = 0x264; // Size: 4, Type: float
			constexpr auto bLoop = 0x268; // Size: 1, Type: bool
			constexpr auto bEndHide = 0x269; // Size: 1, Type: bool
			constexpr auto OnTweenStart = 0x290; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTweenStop = 0x2a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto LinkWidget = 0x2c0; // Size: 8, Type: struct UWidget*
			constexpr auto Progress = 0x2cc; // Size: 4, Type: float
	}
} 
