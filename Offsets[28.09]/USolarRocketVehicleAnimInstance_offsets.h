namespace offsets
{
	namespace USolarRocketVehicleAnimInstance
	{
			constexpr auto bInEquipState = 0x3e8; // Size: 1, Type: bool
			constexpr auto FootTargetTraceLength = 0x3ec; // Size: 4, Type: float
			constexpr auto FootTargetTraceStartLocations = 0x3f0; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto FootTraceRadius = 0x400; // Size: 4, Type: float
			constexpr auto FootTargetBlendSpeed = 0x404; // Size: 4, Type: float
			constexpr auto FootTargetOffsets = 0x408; // Size: 16, Type: struct TArray<float>
			constexpr auto VehicleWeapoReloadMontage = 0x418; // Size: 8, Type: struct UAnimMontage*
			constexpr auto bWeaponFiring = 0x420; // Size: 1, Type: bool
			constexpr auto bInPrecisionShoot = 0x421; // Size: 1, Type: bool
			constexpr auto RocketBoneAlpha = 0x424; // Size: 4, Type: float
			constexpr auto RocketBoneScales = 0x428; // Size: 80, Type: struct TMap<struct FName, struct FVector>
	}
} 
