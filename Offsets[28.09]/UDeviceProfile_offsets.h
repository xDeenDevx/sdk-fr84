namespace offsets
{
	namespace UDeviceProfile
	{
			constexpr auto DeviceType = 0x38; // Size: 16, Type: struct FString
			constexpr auto BaseProfileName = 0x48; // Size: 16, Type: struct FString
			constexpr auto Parent = 0x58; // Size: 8, Type: struct UObject*
			constexpr auto CVars = 0x78; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto StaticMeshDeviceLODSettings = 0x88; // Size: 16, Type: struct TArray<struct FMeshDeviceLODSettings>
			constexpr auto SkeletalMeshDeviceLODSettings = 0x98; // Size: 16, Type: struct TArray<struct FMeshDeviceLODSettings>
	}
} 
