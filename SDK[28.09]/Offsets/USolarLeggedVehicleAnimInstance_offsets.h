namespace offsets
{
	namespace USolarLeggedVehicleAnimInstance
	{
			constexpr auto VehicleAnimState = 0x330; // Size: 1, Type: enum class EVehicleAnimationState
			constexpr auto YawDifference = 0x334; // Size: 4, Type: float
			constexpr auto VehicleRotateType = 0x338; // Size: 1, Type: enum class EVehicleRotateAnimationType
			constexpr auto RotationBlend = 0x33c; // Size: 12, Type: struct FVector
			constexpr auto ProceduralWalkingAlpha = 0x348; // Size: 4, Type: float
			constexpr auto BodyRelativeLocation = 0x34c; // Size: 12, Type: struct FVector
			constexpr auto BodyRelativeRotator = 0x358; // Size: 12, Type: struct FRotator
			constexpr auto FLFootIKEffectorLocation = 0x364; // Size: 12, Type: struct FVector
			constexpr auto FRFootIKEffectorLocation = 0x370; // Size: 12, Type: struct FVector
			constexpr auto MLFootIKEffectorLocation = 0x37c; // Size: 12, Type: struct FVector
			constexpr auto MRFootIKEffectorLocation = 0x388; // Size: 12, Type: struct FVector
			constexpr auto BLFootIKEffectorLocation = 0x394; // Size: 12, Type: struct FVector
			constexpr auto BRFootIKEffectorLocation = 0x3a0; // Size: 12, Type: struct FVector
			constexpr auto FLFootIKAlpha = 0x3ac; // Size: 4, Type: float
			constexpr auto FRFootIKAlpha = 0x3b0; // Size: 4, Type: float
			constexpr auto MLFootIKAlpha = 0x3b4; // Size: 4, Type: float
			constexpr auto MRFootIKAlpha = 0x3b8; // Size: 4, Type: float
			constexpr auto BLFootIKAlpha = 0x3bc; // Size: 4, Type: float
			constexpr auto BRFootIKAlpha = 0x3c0; // Size: 4, Type: float
			constexpr auto FootRotatorOffsets = 0x3c8; // Size: 16, Type: struct TArray<float>
			constexpr auto LeftFootLocationX = 0x3d8; // Size: 4, Type: float
			constexpr auto RightFootLocationX = 0x3dc; // Size: 4, Type: float
			constexpr auto LeaningDegree = 0x3e0; // Size: 4, Type: float
	}
} 
