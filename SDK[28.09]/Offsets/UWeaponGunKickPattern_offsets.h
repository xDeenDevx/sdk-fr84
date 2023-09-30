namespace offsets
{
	namespace UWeaponGunKickPattern
	{
			constexpr auto SprayingOffset = 0x38; // Size: 24, Type: struct FValueCurveBySprayingTime
			constexpr auto SprayingRotation = 0x50; // Size: 24, Type: struct FValueCurveBySprayingTime
			constexpr auto SprayingRestartSmoothTime = 0x68; // Size: 4, Type: float
			constexpr auto SprayingRecoveryTime = 0x6c; // Size: 4, Type: float
			constexpr auto SprayingRecoveryRatioCurve = 0x70; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto IncreaseTime = 0xf8; // Size: 4, Type: float
			constexpr auto IncreaseCurve = 0x100; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto MaxOffset = 0x188; // Size: 12, Type: struct FVector
			constexpr auto OffsetGenerator = 0x198; // Size: 24, Type: struct FWeaponRecoilVectorGenerator
			constexpr auto MaxRotation = 0x1b0; // Size: 12, Type: struct FRotator
			constexpr auto RotationGenerator = 0x1c0; // Size: 24, Type: struct FWeaponRecoilRotatorGenerator
			constexpr auto DecreaseTime = 0x1d8; // Size: 4, Type: float
			constexpr auto DecreaseRatioCurve = 0x1e0; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
