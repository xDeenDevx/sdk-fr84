namespace offsets
{
	namespace USolarTextBlock
	{
			constexpr auto bEnableLocText = 0x160; // Size: 1, Type: bool
			constexpr auto Text = 0x168; // Size: 24, Type: struct FText
			constexpr auto LocTextID = 0x180; // Size: 4, Type: int32_t
			constexpr auto PreviewLang = 0x184; // Size: 1, Type: enum class ESolarSupportLanguages
			constexpr auto bCapitalsLock = 0x185; // Size: 1, Type: bool
			constexpr auto CalcSize = 0x188; // Size: 8, Type: struct FVector2D
			constexpr auto TextDelegate = 0x190; // Size: 16, Type: struct FDelegate
			constexpr auto ColorAndOpacity = 0x1a0; // Size: 40, Type: struct FSlateColor
			constexpr auto ColorAndOpacityDelegate = 0x1c8; // Size: 16, Type: struct FDelegate
			constexpr auto Font = 0x1d8; // Size: 96, Type: struct FSlateFontInfo
			constexpr auto SpecialLangFont = 0x238; // Size: 24, Type: struct FSlateFontSizeForLang
			constexpr auto StrikeBrush = 0x250; // Size: 152, Type: struct FSlateBrush
			constexpr auto ShadowOffset = 0x2e8; // Size: 8, Type: struct FVector2D
			constexpr auto ShadowColorAndOpacity = 0x2f0; // Size: 16, Type: struct FLinearColor
			constexpr auto ShadowColorAndOpacityDelegate = 0x300; // Size: 16, Type: struct FDelegate
			constexpr auto MinDesiredWidth = 0x310; // Size: 4, Type: float
			constexpr auto bWrapWithInvalidationPanel = 0x314; // Size: 1, Type: bool
			constexpr auto bAutoWrapText = 0x315; // Size: 1, Type: bool
			constexpr auto bUsingAccurateScale = 0x316; // Size: 1, Type: bool
			constexpr auto bEnableCacheSize = 0x317; // Size: 1, Type: bool
			constexpr auto bSimpleTextMode = 0x318; // Size: 1, Type: bool
			constexpr auto bNeverResize = 0x319; // Size: 1, Type: bool
	}
} 
