namespace offsets
{
	namespace UBackgroundBlur
	{
			constexpr auto Padding = 0x150; // Size: 16, Type: struct FMargin
			constexpr auto HorizontalAlignment = 0x160; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto VerticalAlignment = 0x161; // Size: 1, Type: enum class EVerticalAlignment
			constexpr auto bBlurOnce = 0x162; // Size: 1, Type: bool
			constexpr auto bBlurState = 0x163; // Size: 1, Type: bool
			constexpr auto bApplyAlphaToBlur = 0x164; // Size: 1, Type: bool
			constexpr auto BlurStrength = 0x168; // Size: 4, Type: float
			constexpr auto bOverrideAutoRadiusCalculation = 0x16c; // Size: 1, Type: bool
			constexpr auto BlurRadius = 0x170; // Size: 4, Type: int32_t
			constexpr auto LowQualityFallbackBrush = 0x178; // Size: 152, Type: struct FSlateBrush
	}
} 
