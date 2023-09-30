namespace offsets
{
	namespace USolarSpecABP_Vehicle
	{
			constexpr auto SolarCharacterOwner = 0x268; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto ViewPitch = 0x270; // Size: 4, Type: float
			constexpr auto ViewYaw = 0x274; // Size: 4, Type: float
			constexpr auto InVehicleState = 0x278; // Size: 1, Type: enum class EInVehicleState
			constexpr auto CurrentVehicleAnimationType = 0x279; // Size: 1, Type: enum class EVehicleAnimationType
			constexpr auto CurrentVehicleRotationValue = 0x27c; // Size: 4, Type: float
			constexpr auto CurrentInputOnVehicle = 0x280; // Size: 8, Type: struct FVector2D
			constexpr auto LeanTowardRightValue = 0x288; // Size: 4, Type: float
			constexpr auto bVehicleInAir = 0x28c; // Size: 1, Type: bool
			constexpr auto AngleBetweenViewAndVehicle = 0x290; // Size: 4, Type: float
			constexpr auto RotateThreshold = 0x294; // Size: 4, Type: float
			constexpr auto RotateSpeed = 0x298; // Size: 4, Type: float
			constexpr auto RotateSpeedForAiming = 0x29c; // Size: 4, Type: float
			constexpr auto CurrentRotateOffset = 0x2a0; // Size: 12, Type: struct FRotator
			constexpr auto bIronManCanFlyFlight = 0x2b5; // Size: 1, Type: bool
			constexpr auto bIronManForceOutInVehicleState = 0x2b6; // Size: 1, Type: bool
			constexpr auto bHasPassenger = 0x2b7; // Size: 1, Type: bool
			constexpr auto VehicleSpeed = 0x2b8; // Size: 4, Type: float
			constexpr auto bIronManUseIK = 0x2bc; // Size: 1, Type: bool
			constexpr auto DriveIdleTurnType = 0x2bd; // Size: 1, Type: enum class EDriveTurnType
			constexpr auto SteeringRoatingratio = 0x2c0; // Size: 4, Type: float
			constexpr auto LeftHandOnRudderLocation = 0x2c4; // Size: 12, Type: struct FVector
			constexpr auto RightHandOnRudderLocation = 0x2d0; // Size: 12, Type: struct FVector
			constexpr auto IronManHandRIKLocation = 0x2dc; // Size: 12, Type: struct FVector
			constexpr auto WeaponStatus = 0x2e8; // Size: 1, Type: enum class EWeaponStatus
	}
} 
