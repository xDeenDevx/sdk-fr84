namespace offsets
{
	namespace ASolarIronManVehicle
	{
			constexpr auto LeftHandSocket = 0x13b8; // Size: 8, Type: struct FName
			constexpr auto RightHandSocket = 0x13c0; // Size: 8, Type: struct FName
			constexpr auto LeftFootSocket = 0x13c8; // Size: 8, Type: struct FName
			constexpr auto RightFootSocket = 0x13d0; // Size: 8, Type: struct FName
			constexpr auto BackPackSocket = 0x13d8; // Size: 8, Type: struct FName
			constexpr auto RotationLaserMontage = 0x13e0; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto BoxHalfSize = 0x1408; // Size: 12, Type: struct FVector
			constexpr auto QuerySameActorMaxNum = 0x1414; // Size: 4, Type: int32_t
			constexpr auto VehicleSpeedThresholdFromStandToLie = 0x1418; // Size: 4, Type: float
			constexpr auto LeftHandBulletEffect = 0x1420; // Size: 144, Type: struct FVehicleVFX
			constexpr auto LeftHandMuzzleEffect = 0x14b0; // Size: 144, Type: struct FVehicleVFX
			constexpr auto RightHandBulletEffect = 0x1540; // Size: 144, Type: struct FVehicleVFX
			constexpr auto RightHandMuzzleEffect = 0x15d0; // Size: 144, Type: struct FVehicleVFX
			constexpr auto HitEffect = 0x1660; // Size: 144, Type: struct FVehicleVFX
			constexpr auto IronManJetEffectInfo = 0x16f0; // Size: 16, Type: struct TArray<struct FVehicleVFX>
			constexpr auto HitDecalExceptObjTypes = 0x1700; // Size: 16, Type: struct TArray<enum class ECollisionChannel>
			constexpr auto HitDecalParticle = 0x1710; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto HitDecalScale = 0x1738; // Size: 12, Type: struct FVector
			constexpr auto HitDecalInterval = 0x1744; // Size: 4, Type: float
			constexpr auto HitDecalBeginTime = 0x1748; // Size: 4, Type: float
			constexpr auto HitDecalEndTime = 0x174c; // Size: 4, Type: float
			constexpr auto HitDecalLength = 0x1750; // Size: 4, Type: float
			constexpr auto SmoothRotationSpeed = 0x1758; // Size: 4, Type: float
			constexpr auto MaxJetEffectFXkgValue = 0x175c; // Size: 4, Type: float
			constexpr auto JetEffectFXkgName = 0x1760; // Size: 8, Type: struct FName
			constexpr auto CanNotSwitchSeat = 0x1768; // Size: 8, Type: UGameplayEffect*
			constexpr auto IronManStaticMeshWithDriver = 0x17c0; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto IronManStaticMeshWithNoDriver = 0x17e8; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto bAddRiderSeat = 0x1810; // Size: 1, Type: bool
			constexpr auto RiderSeatSlot = 0x1818; // Size: 216, Type: struct FVehicleSeatSlot
	}
} 
