namespace offsets
{
	namespace USwitchEffectStaticMeshComponent
	{
			constexpr auto DissolveCurvePath = 0x600; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto DissolveMatPath = 0x628; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto FresnelCurvePath = 0x650; // Size: 40, Type: struct TSoftObjectPtr<UCurveVector>
			constexpr auto FresnelMatPath = 0x678; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto bIsShowSwitchParticleEffect = 0x6a0; // Size: 1, Type: bool
			constexpr auto SwitchParticleEffectPath = 0x6a8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto SwitchEffectInterval = 0x6d8; // Size: 4, Type: float
			constexpr auto SelfDelayShowSeconds = 0x6dc; // Size: 4, Type: float
			constexpr auto DissovleMeshComponent = 0x6e0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto DissovleMaterials = 0x6e8; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto FresnelMeshComponent = 0x6f8; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto FresnelMaterials = 0x700; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
	}
} 
