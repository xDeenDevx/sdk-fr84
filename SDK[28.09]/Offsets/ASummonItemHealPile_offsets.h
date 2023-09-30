namespace offsets
{
	namespace ASummonItemHealPile
	{
			constexpr auto ChargingInfoList = 0x3e0; // Size: 16, Type: struct TArray<struct FChargingInfo>
			constexpr auto ActorRegisterType = 0x3f0; // Size: 1, Type: enum class EActorRegisterType
			constexpr auto CollisionComp = 0x3f8; // Size: 8, Type: struct USphereComponent*
			constexpr auto NormalMesh = 0x400; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto SphereRadius = 0x408; // Size: 4, Type: float
			constexpr auto OwnerTeam = 0x40c; // Size: 4, Type: int32_t
			constexpr auto TestOverlapDestroyBoxExtent = 0x410; // Size: 12, Type: struct FVector
			constexpr auto RangeLoopEffect = 0x420; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto ChargeParticleEffects = 0x428; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto HealQuantity = 0x438; // Size: 4, Type: float
			constexpr auto HealFrequency = 0x43c; // Size: 4, Type: float
			constexpr auto DynamicMatHealPile = 0x448; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto NormalMeshPath = 0x450; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto RangeParticleStartPath = 0x468; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto RangeParticleLoopPath = 0x490; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto RangeParticleEndPath = 0x4b8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto EnemyRangeParticleStartPath = 0x4e0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto EnemyRangeParticleLoopPath = 0x508; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto EnemyRangeParticleEndPath = 0x530; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto RangeEffectScale = 0x558; // Size: 12, Type: struct FVector
			constexpr auto ChargeParticleEffectPath = 0x568; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BeamStartPos = 0x580; // Size: 12, Type: struct FVector
			constexpr auto OutlineMatPath = 0x590; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto BoomEffect = 0x5a8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto SolarAkGameObject = 0x5d8; // Size: 8, Type: struct USolarAkGameObject*
			constexpr auto ServerChargingTimerHandle = 0x5f0; // Size: 8, Type: struct FTimerHandle
			constexpr auto ClientChargingTimerHandle = 0x5f8; // Size: 8, Type: struct FTimerHandle
	}
} 
