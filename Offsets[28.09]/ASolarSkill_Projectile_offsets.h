namespace offsets
{
	namespace ASolarSkill_Projectile
	{
			constexpr auto ProjectileMovementComponent = 0x230; // Size: 8, Type: struct UProjectileMovementComponent*
			constexpr auto DefaultUpdateComponent = 0x238; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto ProjectileVelocity = 0x240; // Size: 12, Type: struct FVector
			constexpr auto ToSelfGameplayEffectHandle = 0x250; // Size: 16, Type: struct FGameplayEffectSpecHandle
			constexpr auto ToTargetGameplayEffectHandle = 0x260; // Size: 16, Type: struct FGameplayEffectSpecHandle
			constexpr auto ProjectileStopResult = 0x270; // Size: 136, Type: struct FHitResult
			constexpr auto bDebug = 0x2f8; // Size: 1, Type: bool
			constexpr auto bInstantStop = 0x2f9; // Size: 1, Type: bool
			constexpr auto ForceStopTime = 0x2fc; // Size: 4, Type: float
			constexpr auto DeferExplodeTime = 0x300; // Size: 4, Type: float
			constexpr auto ProjectileStopEffectPath = 0x308; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ProjectileStopEffectTransform = 0x320; // Size: 48, Type: struct FTransform
			constexpr auto ProjectileExplosionEffectPath = 0x350; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ProjectileExplosionEffectTransform = 0x370; // Size: 48, Type: struct FTransform
			constexpr auto ProjectileTrajectoryEffectPath = 0x3a0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto bAttachToHitActorOnStop = 0x3b8; // Size: 1, Type: bool
			constexpr auto bDestroyOnExplode = 0x3b9; // Size: 1, Type: bool
			constexpr auto DeferDestroyTime = 0x3bc; // Size: 4, Type: float
			constexpr auto bHiddenOnStop = 0x3c0; // Size: 1, Type: bool
			constexpr auto bHiddenOnExplode = 0x3c1; // Size: 1, Type: bool
			constexpr auto SpawnActorClassOnStop = 0x3c8; // Size: 8, Type: AActor*
			constexpr auto SpawnActorClassOnExplode = 0x3d0; // Size: 8, Type: AActor*
			constexpr auto bForbidSpawnActorOnHitSomeActor = 0x3d8; // Size: 1, Type: bool
			constexpr auto ForbidSpawnActorArray = 0x3e0; // Size: 16, Type: struct TArray<AActor*>
			constexpr auto AkAudioComponent = 0x490; // Size: 8, Type: struct UAkComponent*
			constexpr auto SetProjectileVelocitySoundEvent1P = 0x498; // Size: 16, Type: struct FString
			constexpr auto SetProjectileVelocitySoundEvent3P = 0x4a8; // Size: 16, Type: struct FString
			constexpr auto SetProjectileVelocitySoundEvent3PEnemy = 0x4b8; // Size: 16, Type: struct FString
			constexpr auto OnProjectileMovementStopSoundEvent1P = 0x4c8; // Size: 16, Type: struct FString
			constexpr auto OnProjectileMovementStopSoundEvent3P = 0x4d8; // Size: 16, Type: struct FString
			constexpr auto OnProjectileMovementStopSoundEvent3PEnemy = 0x4e8; // Size: 16, Type: struct FString
			constexpr auto CommonHitSound1P = 0x4f8; // Size: 16, Type: struct FString
			constexpr auto CommonHitSound3P = 0x508; // Size: 16, Type: struct FString
			constexpr auto CommonHitSound3PEnemy = 0x518; // Size: 16, Type: struct FString
			constexpr auto ExplosionSound1P = 0x528; // Size: 16, Type: struct FString
			constexpr auto ExplosionSound3P = 0x538; // Size: 16, Type: struct FString
			constexpr auto ExplosionSound3PEnemy = 0x548; // Size: 16, Type: struct FString
	}
} 
