namespace offsets
{
	namespace UTextRenderComponent
	{
			constexpr auto Text = 0x540; // Size: 24, Type: struct FText
			constexpr auto TextMaterial = 0x558; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bFullyExpandedUV = 0x560; // Size: 1, Type: bool
			constexpr auto Font = 0x568; // Size: 8, Type: struct UFont*
			constexpr auto HorizontalAlignment = 0x570; // Size: 1, Type: enum class EHorizTextAligment
			constexpr auto VerticalAlignment = 0x571; // Size: 1, Type: enum class EVerticalTextAligment
			constexpr auto TextRenderColor = 0x574; // Size: 4, Type: struct FColor
			constexpr auto XScale = 0x578; // Size: 4, Type: float
			constexpr auto YScale = 0x57c; // Size: 4, Type: float
			constexpr auto WorldSize = 0x580; // Size: 4, Type: float
			constexpr auto InvDefaultSize = 0x584; // Size: 4, Type: float
			constexpr auto HorizSpacingAdjust = 0x588; // Size: 4, Type: float
			constexpr auto VertSpacingAdjust = 0x58c; // Size: 4, Type: float
			constexpr auto bAlwaysRenderAsText = 0x590; // Size: 1, Type: char
	}
} 
