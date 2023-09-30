namespace offsets
{
	namespace USolarVehicleAnimInstance
	{
			constexpr auto VehicleRudderRotator = 0x270; // Size: 12, Type: struct FRotator
			constexpr auto VehicleRotationValue = 0x27c; // Size: 4, Type: float
			constexpr auto VehicleRotationPercent = 0x280; // Size: 4, Type: float
			constexpr auto VehicleCameraYaw = 0x284; // Size: 4, Type: float
			constexpr auto VehicleCameraPitch = 0x288; // Size: 4, Type: float
			constexpr auto bWithDriver = 0x28c; // Size: 1, Type: bool
			constexpr auto bAbilityActivated = 0x28d; // Size: 1, Type: bool
			constexpr auto Speed = 0x290; // Size: 4, Type: float
			constexpr auto VelocityDegree = 0x294; // Size: 4, Type: float
			constexpr auto PlayerInputVector = 0x298; // Size: 8, Type: struct FVector2D
			constexpr auto bVehicleInAir = 0x2a0; // Size: 1, Type: bool
			constexpr auto bEquipWeapon = 0x2a1; // Size: 1, Type: bool
			constexpr auto VehicleWeaponFireMontage = 0x2a8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto VehicleWeaponRechamberMontage = 0x2b0; // Size: 8, Type: struct UAnimMontage*
			constexpr auto VehicleWeaponPitchRot = 0x2b8; // Size: 12, Type: struct FRotator
			constexpr auto VehicleWeaponYawRot = 0x2c4; // Size: 12, Type: struct FRotator
			constexpr auto LeftBoneIKOffset = 0x2d0; // Size: 12, Type: struct FVector
			constexpr auto RightBoneIKOffset = 0x2dc; // Size: 12, Type: struct FVector
			constexpr auto bUpdateVisual = 0x2e8; // Size: 1, Type: bool
			constexpr auto ExternalForceScale = 0x2ec; // Size: 12, Type: struct FVector
			constexpr auto MinAddForceDistance = 0x2f8; // Size: 4, Type: float
			constexpr auto MoveReferenceBone = 0x2fc; // Size: 8, Type: struct FName
			constexpr auto AnimExternalForce = 0x304; // Size: 12, Type: struct FVector
	}
} 
