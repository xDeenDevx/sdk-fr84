namespace offsets
{
	namespace ASolarSkill_EMPForceField
	{
			constexpr auto TestTypes = 0x3e0; // Size: 16, Type: struct TArray<enum class EActorRegisterType>
			constexpr auto TestRange = 0x3f0; // Size: 8, Type: struct FVector2D
			constexpr auto CoreName = 0x3f8; // Size: 8, Type: struct FName
			constexpr auto EMPParticleTable = 0x400; // Size: 80, Type: struct TMap<enum class ESolarEMPParticleType, struct FSolarEMPParticleInfo>
			constexpr auto ForceFieldReadyTime = 0x450; // Size: 4, Type: float
			constexpr auto ForceFieldActiveTime = 0x454; // Size: 4, Type: float
			constexpr auto ForceFieldEndTime = 0x458; // Size: 4, Type: float
			constexpr auto EMPStartSoundName = 0x460; // Size: 16, Type: struct FString
			constexpr auto EMPEndSoundName = 0x470; // Size: 16, Type: struct FString
			constexpr auto DamageShiledSoundName = 0x480; // Size: 16, Type: struct FString
			constexpr auto EffectActorClassPathForTeammate = 0x490; // Size: 24, Type: struct FSoftClassPath
			constexpr auto EffectActorClassPathForEnemy = 0x4a8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto DamageValueToCharacterShield = 0x4c0; // Size: 4, Type: float
			constexpr auto DamageCharacterShieldInterval = 0x4c4; // Size: 4, Type: float
			constexpr auto FixedDamageValueToCharacterShield = 0x4c8; // Size: 4, Type: float
			constexpr auto TestActorMap = 0x4d0; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<AActor>, struct FActiveGameplayEffectHandle>
			constexpr auto CoreComponent = 0x520; // Size: 8, Type: struct TWeakObjectPtr<UShapeComponent>
			constexpr auto ManualReleaseEmitterArray = 0x528; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto CurrentEMPState = 0x539; // Size: 1, Type: enum class ESolarEMPForceFieldState
			constexpr auto EffectActor = 0x540; // Size: 8, Type: struct ASolarSkill_ForceFieldEffect*
	}
} 
