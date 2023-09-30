namespace offsets
{
	namespace USolarRichTextBlock
	{
			constexpr auto bEnableLocText = 0x160; // Size: 1, Type: bool
			constexpr auto Text = 0x168; // Size: 24, Type: struct FText
			constexpr auto LocTextID = 0x180; // Size: 4, Type: int32_t
			constexpr auto PreviewLang = 0x184; // Size: 1, Type: enum class ESolarSupportLanguages
			constexpr auto TextStyleSet = 0x188; // Size: 8, Type: struct UDataTable*
			constexpr auto DecoratorClasses = 0x190; // Size: 16, Type: struct TArray<URichTextBlockDecorator*>
			constexpr auto bOverrideDefaultStyle = 0x1a0; // Size: 1, Type: bool
			constexpr auto DefaultTextStyleOverride = 0x1a8; // Size: 680, Type: struct FTextBlockStyle
			constexpr auto MinDesiredWidth = 0x450; // Size: 4, Type: float
			constexpr auto bUsingAccurateScale = 0x454; // Size: 1, Type: bool
			constexpr auto InstanceDecorators = 0x700; // Size: 16, Type: struct TArray<struct URichTextBlockDecorator*>
	}
} 
