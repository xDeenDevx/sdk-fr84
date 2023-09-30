namespace offsets
{
	namespace UWeaponTPPKickPattern
	{
			constexpr auto MaxOffset = 0x38; // Size: 12, Type: struct FVector
			constexpr auto IncreaseTime = 0x44; // Size: 4, Type: float
			constexpr auto IncreaseCurve = 0x48; // Size: 8, Type: struct UCurveVector*
			constexpr auto OffsetGenerator = 0x50; // Size: 24, Type: struct FWeaponRecoilVectorGenerator
			constexpr auto DecreaseTime = 0x68; // Size: 4, Type: float
			constexpr auto DecreaseRatioCurve = 0x70; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto DecreaseOffsetCurve = 0xf8; // Size: 8, Type: struct UCurveVector*
			constexpr auto DecreaseOffsetGenerator = 0x100; // Size: 24, Type: struct FWeaponRecoilVectorGenerator
	}
} 
