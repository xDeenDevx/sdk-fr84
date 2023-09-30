namespace offsets
{
	namespace UCommonUIInputSettings
	{
			constexpr auto bLinkCursorToGamepadFocus = 0x28; // Size: 1, Type: bool
			constexpr auto UIActionProcessingPriority = 0x2c; // Size: 4, Type: int32_t
			constexpr auto InputActions = 0x30; // Size: 16, Type: struct TArray<struct FUIInputAction>
			constexpr auto ActionOverrides = 0x40; // Size: 16, Type: struct TArray<struct FUIInputAction>
			constexpr auto AnalogCursorSettings = 0x50; // Size: 40, Type: struct FCommonAnalogCursorSettings
	}
} 
