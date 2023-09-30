namespace offsets
{
	namespace ASolarProjBullet
	{
			constexpr auto CollisionComp = 0x390; // Size: 8, Type: struct UShapeComponent*
			constexpr auto MovementComp = 0x398; // Size: 8, Type: struct UProjectileMovementComponent*
			constexpr auto SpawnedLocation = 0x440; // Size: 12, Type: struct FVector
			constexpr auto AkAudioComponent = 0x4a8; // Size: 8, Type: struct UAkComponent*
			constexpr auto CurrentTrajectoryParticle = 0x4b0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto bAttachToActorOnStop = 0x4b8; // Size: 1, Type: bool
			constexpr auto DeferExplodeTime = 0x4bc; // Size: 4, Type: float
			constexpr auto FlySoundPlayDistance = 0x4c0; // Size: 4, Type: float
			constexpr auto bForceExplodeOnLifeSpanExpired = 0x4c4; // Size: 1, Type: bool
			constexpr auto HitActorImmediateExplodeArray = 0x4c8; // Size: 16, Type: struct TArray<AActor*>
			constexpr auto ExplosionParticle = 0x4d8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ExplosionSoundName = 0x4e0; // Size: 16, Type: struct FString
			constexpr auto ServerWaitClientTime = 0x4f0; // Size: 4, Type: float
			constexpr auto BulletGameplayAbilityClass = 0x4f8; // Size: 8, Type: UGameplayAbility*
	}
} 
