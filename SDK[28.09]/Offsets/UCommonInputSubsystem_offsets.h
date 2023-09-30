namespace offsets
{
	namespace UCommonInputSubsystem
	{
			constexpr auto OnInputMethodChanged = 0x50; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto NumberOfInputMethodChangesRecently = 0x60; // Size: 4, Type: int32_t
			constexpr auto LastInputMethodChangeTime = 0x68; // Size: 8, Type: double
			constexpr auto LastTimeInputMethodThrashingBegan = 0x70; // Size: 8, Type: double
			constexpr auto LastInputType = 0x78; // Size: 1, Type: enum class ECommonInputType
			constexpr auto CurrentInputType = 0x79; // Size: 1, Type: enum class ECommonInputType
			constexpr auto GamepadInputType = 0x7c; // Size: 8, Type: struct FName
			constexpr auto CurrentInputLocks = 0x88; // Size: 80, Type: struct TMap<struct FName, enum class ECommonInputType>
			constexpr auto bIsGamepadSimulatedClick = 0xf0; // Size: 1, Type: bool
	}
} 
