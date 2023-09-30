namespace offsets
{
	namespace ASolarEnergyShield
	{
			constexpr auto HitEffect = 0x3e8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ExplodeEffect = 0x3f0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto VehicleWholeShieldBrokenEffect = 0x3f8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto HitEffectScale = 0x420; // Size: 12, Type: struct FVector
			constexpr auto OwnerTeam = 0x42c; // Size: 1, Type: char
			constexpr auto StartSoundMap = 0x430; // Size: 80, Type: struct TMap<enum class ESolarSummonSoundType, struct FString>
			constexpr auto LoopSoundMap = 0x480; // Size: 80, Type: struct TMap<enum class ESolarSummonSoundType, struct FString>
			constexpr auto HitSoundMap = 0x4d0; // Size: 80, Type: struct TMap<enum class ESolarSummonSoundType, struct FString>
			constexpr auto EndSoundMap = 0x520; // Size: 80, Type: struct TMap<enum class ESolarSummonSoundType, struct FString>
			constexpr auto BrokenSoundMap = 0x570; // Size: 80, Type: struct TMap<enum class ESolarSummonSoundType, struct FString>
			constexpr auto CollisionMeshName = 0x5c0; // Size: 16, Type: struct FString
			constexpr auto ShieldMeshName = 0x5d0; // Size: 16, Type: struct FString
			constexpr auto DecalMeshName = 0x5e0; // Size: 16, Type: struct FString
			constexpr auto BeginMatUpdateParams = 0x5f0; // Size: 16, Type: struct TArray<struct FMatUpdateParams>
			constexpr auto DeathMatUpdateParams = 0x600; // Size: 16, Type: struct TArray<struct FMatUpdateParams>
			constexpr auto HealthMatUpdateParams = 0x610; // Size: 16, Type: struct TArray<struct FMatUpdateParams>
			constexpr auto EnemyShieldMaterials = 0x620; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto EnemyDecalMaterials = 0x630; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto EnemyHitEffect = 0x640; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EnemyExplodeEffect = 0x648; // Size: 8, Type: struct UParticleSystem*
			constexpr auto OverlapActorsTimeMap = 0x650; // Size: 80, Type: struct TMap<struct TWeakObjectPtr<AActor>, float>
			constexpr auto OverlapActorIntervalTime = 0x6a0; // Size: 4, Type: float
			constexpr auto BounceForceToUniqueSkill = 0x6a4; // Size: 4, Type: float
			constexpr auto CollisionMesh = 0x6a8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ShieldMesh = 0x6b0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DecalMesh = 0x6b8; // Size: 8, Type: struct UStaticMeshComponent*
	}
} 
