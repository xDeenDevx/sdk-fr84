namespace offsets
{
	namespace URawInputSettings
	{
			constexpr auto DeviceConfigurations = 0x38; // Size: 16, Type: struct TArray<struct FRawInputDeviceConfiguration>
			constexpr auto bRegisterDefaultDevice = 0x48; // Size: 1, Type: bool
			constexpr auto LeftStickDeadzone = 0x50; // Size: 24, Type: struct FRawInputDeadzoneConfiguration
			constexpr auto RightStickDeadzone = 0x68; // Size: 24, Type: struct FRawInputDeadzoneConfiguration
			constexpr auto TriggerDeadzone = 0x80; // Size: 24, Type: struct FRawInputDeadzoneConfiguration
	}
} 
