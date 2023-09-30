namespace offsets
{
	namespace URichTextBlock
	{
			constexpr auto Text = 0x160; // Size: 24, Type: struct FText
			constexpr auto TextStyleSet = 0x178; // Size: 8, Type: struct UDataTable*
			constexpr auto DecoratorClasses = 0x180; // Size: 16, Type: struct TArray<URichTextBlockDecorator*>
			constexpr auto bOverrideDefaultStyle = 0x190; // Size: 1, Type: bool
			constexpr auto DefaultTextStyleOverride = 0x198; // Size: 680, Type: struct FTextBlockStyle
			constexpr auto MinDesiredWidth = 0x440; // Size: 4, Type: float
			constexpr auto TextTransformPolicy = 0x444; // Size: 1, Type: enum class ETextTransformPolicy
			constexpr auto DefaultTextStyle = 0x448; // Size: 680, Type: struct FTextBlockStyle
			constexpr auto InstanceDecorators = 0x6f0; // Size: 16, Type: struct TArray<struct URichTextBlockDecorator*>
	}
} 
