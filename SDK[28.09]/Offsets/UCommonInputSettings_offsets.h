namespace offsets
{
	namespace UCommonInputSettings
	{
			constexpr auto InputData = 0x28; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto CommonInputPlatformData = 0x50; // Size: 80, Type: struct TMap<struct FName, struct FCommonInputPlatformBaseData>
			constexpr auto bEnableInputMethodThrashingProtection = 0xa0; // Size: 1, Type: bool
			constexpr auto InputMethodThrashingLimit = 0xa4; // Size: 4, Type: int32_t
			constexpr auto InputMethodThrashingWindowInSeconds = 0xa8; // Size: 8, Type: double
			constexpr auto InputMethodThrashingCooldownInSeconds = 0xb0; // Size: 8, Type: double
			constexpr auto bAllowOutOfFocusDeviceInput = 0xb8; // Size: 1, Type: bool
			constexpr auto InputDataClass = 0xc0; // Size: 8, Type: UCommonUIInputData*
			constexpr auto CurrentPlatform = 0xc8; // Size: 56, Type: struct FCommonInputPlatformBaseData
	}
} 
