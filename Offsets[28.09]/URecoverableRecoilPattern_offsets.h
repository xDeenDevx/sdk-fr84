namespace offsets
{
	namespace URecoverableRecoilPattern
	{
			constexpr auto bLimitMaxOffset = 0x38; // Size: 1, Type: bool
			constexpr auto MaxOffset = 0x3c; // Size: 12, Type: struct FVector
			constexpr auto bLimitRecoveryStopOffset = 0x48; // Size: 1, Type: bool
			constexpr auto RecoveryStopOffset = 0x4c; // Size: 12, Type: struct FVector
			constexpr auto IncreaseTime = 0x58; // Size: 4, Type: float
			constexpr auto IncreaseCurve = 0x60; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto OffsetGenerator = 0xe8; // Size: 24, Type: struct FWeaponRecoilVectorGenerator
			constexpr auto DecreaseTimeCurve = 0x100; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto DecreaseRatioCurve = 0x188; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
