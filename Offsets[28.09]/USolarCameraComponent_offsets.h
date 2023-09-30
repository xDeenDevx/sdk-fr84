namespace offsets
{
	namespace USolarCameraComponent
	{
			constexpr auto ConfigDistanceToTarget = 0x980; // Size: 4, Type: float
			constexpr auto ConfigCameraOffset = 0x984; // Size: 12, Type: struct FVector
			constexpr auto ConfigTargetOffset = 0x990; // Size: 12, Type: struct FVector
			constexpr auto ConfigFOV = 0x99c; // Size: 4, Type: float
			constexpr auto ViewPitchMax = 0x9a0; // Size: 4, Type: float
			constexpr auto ViewPitchMin = 0x9a4; // Size: 4, Type: float
			constexpr auto ViewYawMax = 0x9a8; // Size: 4, Type: float
			constexpr auto ViewYawMin = 0x9ac; // Size: 4, Type: float
			constexpr auto CameraOccupiedRoom = 0x9b0; // Size: 4, Type: float
			constexpr auto EnableDistanceSmooth = 0x9b4; // Size: 1, Type: bool
			constexpr auto EnableFOVSmooth = 0x9b5; // Size: 1, Type: bool
	}
} 
