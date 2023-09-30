namespace offsets
{
	namespace USimpleSpreadPattern
	{
			constexpr auto SpreadModifiers = 0x30; // Size: 16, Type: struct TArray<struct FWeaponAttributeParam>
			constexpr auto SpreadScaleIncreaseTime = 0x40; // Size: 4, Type: float
			constexpr auto SpreadScaleIncreaseCurve = 0x48; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SpreadScaleIncreases = 0xd0; // Size: 16, Type: struct TArray<struct FSpreadScaleIncrease>
			constexpr auto SpreadScaleDecreaseTimeCurve = 0xe0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SpreadScaleDecreaseRatioCurve = 0x168; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
