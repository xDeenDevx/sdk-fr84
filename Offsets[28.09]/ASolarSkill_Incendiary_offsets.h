namespace offsets
{
	namespace ASolarSkill_Incendiary
	{
			constexpr auto FireDecalSize = 0x558; // Size: 12, Type: struct FVector
			constexpr auto FireParticle = 0x568; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto FireDecalMaterial = 0x590; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto BuffParticle = 0x5b8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto BuffAttachPointName = 0x5e0; // Size: 8, Type: struct FName
			constexpr auto DelayDestroyTime = 0x5e8; // Size: 4, Type: float
			constexpr auto FireEffectCountMax = 0x5ec; // Size: 4, Type: int32_t
			constexpr auto BurnRamainTime = 0x5f0; // Size: 4, Type: float
			constexpr auto DetectableObjectTypes = 0x5f8; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto FireDecalFadeOutName = 0x608; // Size: 8, Type: struct FName
			constexpr auto bTeammateDamage = 0x610; // Size: 1, Type: bool
			constexpr auto bOnlyOne = 0x611; // Size: 1, Type: bool
			constexpr auto FireParticleSystemComponents = 0x618; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto FireDecalComponent = 0x628; // Size: 8, Type: struct UDecalComponent*
			constexpr auto IncendiaryMesh = 0x630; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto AkComponent = 0x638; // Size: 8, Type: struct UAkComponent*
			constexpr auto bInBuring = 0x640; // Size: 1, Type: bool
			constexpr auto CurrentFireEffectCount = 0x644; // Size: 4, Type: int32_t
			constexpr auto FireDecalDynamicMaterial = 0x650; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto FireDecalFadeOutTimer = 0x658; // Size: 4, Type: float
			constexpr auto BurnRadius = 0x65c; // Size: 4, Type: float
			constexpr auto BurnHeight = 0x660; // Size: 4, Type: float
			constexpr auto QueryObjectTypeArray = 0x668; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto ClassTypeDamageValueMap = 0x678; // Size: 80, Type: struct TMap<AActor*, float>
			constexpr auto DamageTimeInternal = 0x6c8; // Size: 4, Type: float
	}
} 
