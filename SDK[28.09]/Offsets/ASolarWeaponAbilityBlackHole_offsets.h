namespace offsets
{
	namespace ASolarWeaponAbilityBlackHole
	{
			constexpr auto CoreComponent = 0x3e8; // Size: 8, Type: struct USphereComponent*
			constexpr auto TestActorMap = 0x3f0; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<AActor>, struct FSolarBlackHoleTestActorInfo>
			constexpr auto CoreTag = 0x440; // Size: 8, Type: struct FName
			constexpr auto TestTypes = 0x448; // Size: 16, Type: struct TArray<enum class EActorRegisterType>
			constexpr auto TestRadius = 0x458; // Size: 4, Type: float
			constexpr auto ForbidAttractiveDistance = 0x45c; // Size: 4, Type: float
			constexpr auto AttractiveSpeedWhenNoInput = 0x460; // Size: 4, Type: float
			constexpr auto AttractiveSpeedFactorForCharacterInWater = 0x464; // Size: 4, Type: float
			constexpr auto MaxAttractiveSpeedReduceCurve = 0x468; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto AttractiveSpeedReduceAngleWeightCurve = 0x4f0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto ToSelfGameplayEffectHandle = 0x578; // Size: 16, Type: struct FGameplayEffectSpecHandle
			constexpr auto ToTargetGameplayEffectHandle = 0x588; // Size: 16, Type: struct FGameplayEffectSpecHandle
			constexpr auto ParticleInfoTable = 0x598; // Size: 80, Type: struct TMap<enum class ESolarBlackHoleParticle, struct FSolarBlackHoleParticleInfo>
			constexpr auto CurrentBlackHoleState = 0x5f8; // Size: 1, Type: enum class ESolarBlackHoleState
			constexpr auto BlackHoleReadyDuration = 0x604; // Size: 4, Type: float
			constexpr auto BlackHoleActiveDuration = 0x608; // Size: 4, Type: float
			constexpr auto BlackHoleEndDuration = 0x60c; // Size: 4, Type: float
			constexpr auto ZeroSpeedGameplayEffectClass = 0x610; // Size: 8, Type: UGameplayEffect*
			constexpr auto ForceAttractiveTag = 0x618; // Size: 8, Type: struct FGameplayTag
			constexpr auto ClassTypeDamageValueMap = 0x620; // Size: 80, Type: struct TMap<AActor*, float>
			constexpr auto CardSplineArray = 0x670; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto CardArray = 0x688; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto CardStartLocation = 0x6a0; // Size: 12, Type: struct FVector
			constexpr auto CardSpeed = 0x6b8; // Size: 4, Type: float
			constexpr auto CardClass = 0x6c0; // Size: 8, Type: AActor*
			constexpr auto DefaultCardPathLength = 0x6c8; // Size: 4, Type: float
	}
} 
