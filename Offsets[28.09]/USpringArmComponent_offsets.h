namespace offsets
{
	namespace USpringArmComponent
	{
			constexpr auto TargetArmLength = 0x318; // Size: 4, Type: float
			constexpr auto SocketOffset = 0x31c; // Size: 12, Type: struct FVector
			constexpr auto TargetOffset = 0x328; // Size: 12, Type: struct FVector
			constexpr auto ProbeSize = 0x334; // Size: 4, Type: float
			constexpr auto ProbeChannel = 0x338; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto bDoCollisionTest = 0x33c; // Size: 1, Type: char
			constexpr auto bUsePawnControlRotation = 0x33c; // Size: 1, Type: char
			constexpr auto bInheritPitch = 0x33c; // Size: 1, Type: char
			constexpr auto bInheritYaw = 0x33c; // Size: 1, Type: char
			constexpr auto bInheritRoll = 0x33c; // Size: 1, Type: char
			constexpr auto bEnableCameraLag = 0x33c; // Size: 1, Type: char
			constexpr auto bEnableCameraRotationLag = 0x33c; // Size: 1, Type: char
			constexpr auto bUseCameraLagSubstepping = 0x33c; // Size: 1, Type: char
			constexpr auto bDrawDebugLagMarkers = 0x33d; // Size: 1, Type: char
			constexpr auto CameraLagSpeed = 0x340; // Size: 4, Type: float
			constexpr auto CameraRotationLagSpeed = 0x344; // Size: 4, Type: float
			constexpr auto CameraLagMaxTimeStep = 0x348; // Size: 4, Type: float
			constexpr auto CameraLagMaxDistance = 0x34c; // Size: 4, Type: float
	}
} 
