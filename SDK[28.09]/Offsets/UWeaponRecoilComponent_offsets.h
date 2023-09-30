namespace offsets
{
	namespace UWeaponRecoilComponent
	{
			constexpr auto GameInstance = 0xb8; // Size: 8, Type: struct USolarGameInstanceBase*
			constexpr auto bHActive = 0xc0; // Size: 1, Type: bool
			constexpr auto bVActive = 0xc1; // Size: 1, Type: bool
			constexpr auto bRActive = 0xc2; // Size: 1, Type: bool
			constexpr auto MyWeaponActor = 0xc8; // Size: 8, Type: struct ASolarWeapon*
			constexpr auto WeaponConfig = 0xd0; // Size: 8, Type: struct USingleWeaponConfig*
			constexpr auto YawCurve = 0xd8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto PitchCurve = 0xe0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto RollCurve = 0xe8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ScopeRollCurve = 0xf0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ScopePitchCurve = 0xf8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto OriginalScopePitchKeys = 0x100; // Size: 16, Type: struct TArray<struct FRichCurveKey>
			constexpr auto CurrentAmmoConfig = 0x110; // Size: 8, Type: struct UAmmoConfig*
			constexpr auto YawCurveArray = 0x1e0; // Size: 16, Type: struct TArray<struct UCurveFloat*>
			constexpr auto PitchCurveArray = 0x1f0; // Size: 16, Type: struct TArray<struct UCurveFloat*>
			constexpr auto PitchEndCurve = 0x200; // Size: 8, Type: struct UCurveFloat*
			constexpr auto RollCurveArray = 0x208; // Size: 16, Type: struct TArray<struct UCurveFloat*>
			constexpr auto ScopeRollCurveArray = 0x218; // Size: 16, Type: struct TArray<struct UCurveFloat*>
	}
} 
