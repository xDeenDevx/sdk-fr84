namespace offsets
{
	namespace ASolarSummonJumpPad
	{
			constexpr auto Mesh = 0x438; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto SpawnAnim = 0x440; // Size: 8, Type: struct UAnimSequence*
			constexpr auto LaunchAnim = 0x448; // Size: 8, Type: struct UAnimSequence*
			constexpr auto HorizantalSpeedMultipleFac = 0x450; // Size: 4, Type: float
			constexpr auto MaxHorizantalSpeed = 0x454; // Size: 4, Type: float
			constexpr auto VerticalSpeed = 0x458; // Size: 4, Type: float
			constexpr auto LaunchCDEffect = 0x460; // Size: 8, Type: UGameplayEffect*
			constexpr auto SpawnSound = 0x468; // Size: 8, Type: struct FName
			constexpr auto DestroySound = 0x470; // Size: 8, Type: struct FName
			constexpr auto HitSoundAttacker2D = 0x478; // Size: 8, Type: struct FName
			constexpr auto HitSound = 0x480; // Size: 8, Type: struct FName
			constexpr auto LaunchSound = 0x488; // Size: 8, Type: struct FName
			constexpr auto SmokeFX = 0x490; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DestroyFX = 0x498; // Size: 8, Type: struct UParticleSystem*
			constexpr auto LaunchCount = 0x4a0; // Size: 4, Type: int32_t
			constexpr auto HitCount = 0x4a4; // Size: 4, Type: int32_t
			constexpr auto VehicleHitCheckInterval = 0x4a8; // Size: 4, Type: float
			constexpr auto VehicleCheckShape = 0x4b0; // Size: 8, Type: struct TWeakObjectPtr<UShapeComponent>
	}
} 
