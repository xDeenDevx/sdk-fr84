namespace offsets
{
	namespace UCommonInputBaseControllerData
	{
			constexpr auto InputType = 0x28; // Size: 1, Type: enum class ECommonInputType
			constexpr auto GamepadName = 0x2c; // Size: 8, Type: struct FName
			constexpr auto GamepadDisplayName = 0x38; // Size: 24, Type: struct FText
			constexpr auto GamepadCategory = 0x50; // Size: 24, Type: struct FText
			constexpr auto GamepadPlatformName = 0x68; // Size: 24, Type: struct FText
			constexpr auto GamepadHardwareIdMapping = 0x80; // Size: 16, Type: struct TArray<struct FInputDeviceIdentifierPair>
			constexpr auto ControllerTexture = 0x90; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto ControllerButtonMaskTexture = 0xb8; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto InputBrushDataMap = 0xe0; // Size: 16, Type: struct TArray<struct FCommonInputKeyBrushConfiguration>
			constexpr auto InputBrushKeySets = 0xf0; // Size: 16, Type: struct TArray<struct FCommonInputKeySetBrushConfiguration>
	}
} 
