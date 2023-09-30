namespace offsets
{
	namespace USolarLowMemoryDeviceSettings
	{
			constexpr auto EnableLowMemDevice = 0x38; // Size: 1, Type: bool
			constexpr auto EnableLowMemDeviceDebugMode = 0x39; // Size: 1, Type: bool
			constexpr auto AdditionalCommand = 0x40; // Size: 16, Type: struct TArray<struct FString>
	}
} 
