namespace offsets
{
	namespace UWeaponShootConfig
	{
			constexpr auto bEnableNewSpread = 0x30; // Size: 1, Type: bool
			constexpr auto bEnableNewRecoil = 0x31; // Size: 1, Type: bool
			constexpr auto bEnableNewWeaponAnim = 0x32; // Size: 1, Type: bool
			constexpr auto bEnableNewCameraShake = 0x33; // Size: 1, Type: bool
			constexpr auto ShootOriginRange = 0x34; // Size: 4, Type: float
			constexpr auto StandardShootDistance = 0x38; // Size: 4, Type: float
			constexpr auto RotationPivot = 0x3c; // Size: 12, Type: struct FVector
			constexpr auto RotationPivotMap = 0x48; // Size: 80, Type: struct TMap<enum class EWeaponScopeType, struct FVector>
			constexpr auto BaseSpread = 0x98; // Size: 4, Type: float
			constexpr auto SpreadDistributionCurve = 0xa0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto AverageSpreadDistribution = 0x128; // Size: 4, Type: float
			constexpr auto VisualSpreadScaleCurve = 0x130; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto ModifiersByOwnerTag = 0x1b8; // Size: 16, Type: struct TArray<struct FWeaponAttributeModifiersByTag>
			constexpr auto SprayingRecoveryMode = 0x1c8; // Size: 1, Type: enum class ESprayingRecoveryMode
			constexpr auto SprayingRecoveryCurve = 0x1d0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SpreadPattern = 0x258; // Size: 8, Type: struct UWeaponSpreadPattern*
			constexpr auto RecoilPattern = 0x260; // Size: 8, Type: struct UWeaponRecoilPattern*
			constexpr auto TPPKickAnimBlendSpace = 0x268; // Size: 8, Type: struct UBlendSpace*
			constexpr auto TPPKickBlendSpaceMaxValue = 0x270; // Size: 12, Type: struct FVector
			constexpr auto TPPKickPattern = 0x280; // Size: 8, Type: struct UWeaponTPPKickPattern*
			constexpr auto RecoilHoriRecRangeWithCoScaleMap = 0x288; // Size: 80, Type: struct TMap<enum class EWeaponScopeType, float>
			constexpr auto GunKickPattern = 0x2d8; // Size: 8, Type: struct UWeaponGunKickPattern*
			constexpr auto GunKickScaleMap = 0x2e0; // Size: 80, Type: struct TMap<enum class EWeaponScopeType, struct FGunKickScale>
			constexpr auto bEnableEndShake = 0x330; // Size: 1, Type: bool
			constexpr auto bStopEndShakeOnShot = 0x331; // Size: 1, Type: bool
			constexpr auto EndShakeOffsetCurve = 0x338; // Size: 8, Type: struct UCurveVector*
			constexpr auto EndShakeRotationCurve = 0x340; // Size: 8, Type: struct UCurveVector*
			constexpr auto EndShakeScaleBySpeedCurve = 0x348; // Size: 8, Type: struct UCurveFloat*
			constexpr auto EndShakeScaleByVelocityCurve = 0x350; // Size: 8, Type: struct UCurveVector*
			constexpr auto SkewOffsetSmoothSpeed = 0x358; // Size: 4, Type: float
			constexpr auto SkewRotationSmoothSpeed = 0x35c; // Size: 4, Type: float
			constexpr auto SkewAdjustments = 0x360; // Size: 16, Type: struct TArray<struct FWeaponSkewAdjustment>
			constexpr auto DefaultCrossHairConfig = 0x370; // Size: 16, Type: struct FCrossHairShootConfig
			constexpr auto CrossHairConfigMap = 0x380; // Size: 80, Type: struct TMap<enum class EWeaponScopeType, struct FCrossHairShootConfig>
			constexpr auto ShakePatternOnShot = 0x3d0; // Size: 8, Type: struct UWeaponCameraShakePattern*
			constexpr auto ShakePatternOnScopeShot = 0x3d8; // Size: 8, Type: struct UWeaponCameraShakePattern*
			constexpr auto ShakeScaleMapOnScopeShot = 0x3e0; // Size: 80, Type: struct TMap<enum class EWeaponScopeType, float>
	}
} 
