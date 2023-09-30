namespace offsets
{
	namespace UTextBlock
	{
			constexpr auto Text = 0x160; // Size: 24, Type: struct FText
			constexpr auto TextDelegate = 0x178; // Size: 16, Type: struct FDelegate
			constexpr auto ColorAndOpacity = 0x188; // Size: 40, Type: struct FSlateColor
			constexpr auto ColorAndOpacityDelegate = 0x1b0; // Size: 16, Type: struct FDelegate
			constexpr auto Font = 0x1c0; // Size: 96, Type: struct FSlateFontInfo
			constexpr auto StrikeBrush = 0x220; // Size: 152, Type: struct FSlateBrush
			constexpr auto ShadowOffset = 0x2b8; // Size: 8, Type: struct FVector2D
			constexpr auto ShadowColorAndOpacity = 0x2c0; // Size: 16, Type: struct FLinearColor
			constexpr auto ShadowColorAndOpacityDelegate = 0x2d0; // Size: 16, Type: struct FDelegate
			constexpr auto MinDesiredWidth = 0x2e0; // Size: 4, Type: float
			constexpr auto bWrapWithInvalidationPanel = 0x2e4; // Size: 1, Type: bool
			constexpr auto bAutoWrapText = 0x2e5; // Size: 1, Type: bool
			constexpr auto TextTransformPolicy = 0x2e6; // Size: 1, Type: enum class ETextTransformPolicy
			constexpr auto bSimpleTextMode = 0x2e7; // Size: 1, Type: bool
	}
} 
