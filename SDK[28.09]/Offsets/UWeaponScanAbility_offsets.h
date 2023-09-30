namespace offsets
{
	namespace UWeaponScanAbility
	{
			constexpr auto RadarClass = 0x428; // Size: 8, Type: ASolarRadarBase*
			constexpr auto SpawnedRadar = 0x430; // Size: 8, Type: struct ASolarRadarBase*
			constexpr auto EffectRadius = 0x438; // Size: 4, Type: float
			constexpr auto DelayDisplayTime = 0x43c; // Size: 4, Type: float
			constexpr auto ExecuteAnimMontage = 0x440; // Size: 8, Type: struct UAnimMontage*
			constexpr auto ExecuteAnimMontageWithWeapon = 0x448; // Size: 8, Type: struct UAnimMontage*
			constexpr auto bExecuteAnimMontageByWeaponStatus = 0x450; // Size: 1, Type: bool
			constexpr auto bWaitMontageNotifyToSpawnRadar = 0x451; // Size: 1, Type: bool
			constexpr auto SpawnRadarMontageNotify = 0x454; // Size: 8, Type: struct FName
			constexpr auto bWaitExecuteAnimCompletedSpawnRader = 0x45c; // Size: 1, Type: bool
			constexpr auto WaitSpawnGameplayEffect = 0x460; // Size: 8, Type: UGameplayEffect*
			constexpr auto ActiveWaitSpawnEffectHandle = 0x468; // Size: 8, Type: struct FActiveGameplayEffectHandle
			constexpr auto EffectUser = 0x470; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto InstigatorCache = 0x488; // Size: 8, Type: struct TWeakObjectPtr<AActor>
	}
} 
