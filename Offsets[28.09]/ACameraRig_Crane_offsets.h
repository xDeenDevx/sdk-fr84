namespace offsets
{
	namespace ACameraRig_Crane
	{
			constexpr auto CranePitch = 0x228; // Size: 4, Type: float
			constexpr auto CraneYaw = 0x22c; // Size: 4, Type: float
			constexpr auto CraneArmLength = 0x230; // Size: 4, Type: float
			constexpr auto bLockMountPitch = 0x234; // Size: 1, Type: bool
			constexpr auto bLockMountYaw = 0x235; // Size: 1, Type: bool
			constexpr auto TransformComponent = 0x238; // Size: 8, Type: struct USceneComponent*
			constexpr auto CraneYawControl = 0x240; // Size: 8, Type: struct USceneComponent*
			constexpr auto CranePitchControl = 0x248; // Size: 8, Type: struct USceneComponent*
			constexpr auto CraneCameraMount = 0x250; // Size: 8, Type: struct USceneComponent*
	}
} 
