namespace offsets
{
	namespace ASolarCharacterBase
	{
			constexpr auto CachedActorHandle = 0x4f4; // Size: 4, Type: struct FSpawnedActorHandle
			constexpr auto SolarAbilityComponent = 0x4f8; // Size: 8, Type: struct USolarAbilityComponent*
			constexpr auto bPendingEnterWater = 0x500; // Size: 1, Type: bool
			constexpr auto InstigatorCharacter = 0x508; // Size: 8, Type: struct ASolarCharacterBase*
			constexpr auto DedicatedDeathEffect = 0x510; // Size: 8, Type: struct TWeakObjectPtr<UParticleSystem>
			constexpr auto DeathEffectSoft = 0x518; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto VehicleCollisionProtectionTimeOnJumpingOff = 0x574; // Size: 4, Type: float
			constexpr auto PushYScale = 0x578; // Size: 4, Type: float
			constexpr auto PushXScaleOnSwimming = 0x57c; // Size: 4, Type: float
			constexpr auto PushYScaleOnSwimming = 0x580; // Size: 4, Type: float
			constexpr auto PushZScaleOnSwimming = 0x584; // Size: 4, Type: float
			constexpr auto SolarAbilitySystemComponent = 0x588; // Size: 8, Type: struct USolarAbilitySystemComponent*
			constexpr auto bHoldSignificanceWhenDyingForAutonomous = 0x5b4; // Size: 1, Type: bool
			constexpr auto AkAudioComponent = 0x5b8; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x5c0; // Size: 8, Type: struct USolarAkGameObject*
			constexpr auto CharacterSoundConfig = 0x5c8; // Size: 8, Type: struct UCharacterSoundConfig*
	}
} 
