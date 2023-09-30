namespace offsets
{
	namespace AVehicleWholeShieldGCNotify_Actor
	{
			constexpr auto TeammateWholeShieldMaterial = 0x2a0; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto NoTeammateWholeShieldMaterial = 0x2c8; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto StartShieldMaterialParam = 0x2f0; // Size: 8, Type: struct FName
			constexpr auto StartShieldCurve = 0x2f8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto ShieldMaterialChangeParam = 0x380; // Size: 8, Type: struct FName
			constexpr auto HighShieldChangeRateToMaterialValue = 0x388; // Size: 80, Type: struct TMap<float, float>
			constexpr auto LowShieldChangeRateToMaterialValue = 0x3d8; // Size: 80, Type: struct TMap<float, float>
			constexpr auto SphereParameterName = 0x428; // Size: 8, Type: struct FName
			constexpr auto HitLocaitonParameterName = 0x430; // Size: 8, Type: struct FName
			constexpr auto HitEffectDurationCurve = 0x438; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto TeammateBulletHitEffect = 0x4c0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto NoTeammateBulletHitEffect = 0x4e8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto BulletHitEffectScale = 0x510; // Size: 12, Type: struct FVector
	}
} 
