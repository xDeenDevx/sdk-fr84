namespace offsets
{
	namespace USolarWeaponAT_FireLaser
	{
			constexpr auto LaserMaxTime = 0xe0; // Size: 4, Type: float
			constexpr auto DamageCount = 0xe4; // Size: 4, Type: int32_t
			constexpr auto VehicleBlockEffect = 0xe8; // Size: 8, Type: UGameplayEffect*
			constexpr auto LaserAttackCurve = 0xf0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto LaserEffectParticle = 0xf8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto LaserEffectCurve = 0x100; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ExplodeEffectParticle = 0x108; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ExplodeEffectTransform = 0x110; // Size: 48, Type: struct FTransform
			constexpr auto DecalsEffectParticle = 0x140; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DecalEffectTransform = 0x150; // Size: 48, Type: struct FTransform
			constexpr auto UpdateExplodeInterval = 0x180; // Size: 4, Type: float
			constexpr auto UpdateSimInterval = 0x184; // Size: 4, Type: float
			constexpr auto LaserEffectFadeSpeed = 0x188; // Size: 4, Type: float
			constexpr auto MaxFadingLifeTime = 0x18c; // Size: 4, Type: float
			constexpr auto UIAnimLength = 0x190; // Size: 4, Type: float
			constexpr auto LaserFireSound = 0x198; // Size: 16, Type: struct FString
			constexpr auto LaserStopSound = 0x1a8; // Size: 16, Type: struct FString
			constexpr auto LaserBigSound = 0x1b8; // Size: 16, Type: struct FString
			constexpr auto LaserImpactFireSound = 0x1c8; // Size: 16, Type: struct FString
			constexpr auto LaserImpactStopSound = 0x1d8; // Size: 16, Type: struct FString
			constexpr auto LaserImpactBigSound = 0x1e8; // Size: 16, Type: struct FString
			constexpr auto bShowLaserDamageDebug = 0x1f8; // Size: 1, Type: bool
			constexpr auto BeamLifeTimeParamName = 0x1fc; // Size: 8, Type: struct FName
			constexpr auto BeamSizeParamName = 0x204; // Size: 8, Type: struct FName
	}
} 
