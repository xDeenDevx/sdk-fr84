namespace offsets
{
	namespace UEditableRichTextBlock
	{
			constexpr auto OnTextChanged = 0x168; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0x178; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Text = 0x188; // Size: 24, Type: struct FText
			constexpr auto MinDesiredWidth = 0x1a0; // Size: 4, Type: float
			constexpr auto TextStyleSet = 0x1a8; // Size: 8, Type: struct UDataTable*
			constexpr auto DecoratorClasses = 0x1b0; // Size: 16, Type: struct TArray<USolarRichTextBlockDecorator*>
			constexpr auto bOverrideDefaultStyle = 0x1c0; // Size: 1, Type: bool
			constexpr auto DefaultTextStyleOverride = 0x1c8; // Size: 680, Type: struct FTextBlockStyle
			constexpr auto TextTransformPolicy = 0x470; // Size: 1, Type: enum class ETextTransformPolicy
			constexpr auto InstanceDecorators = 0x478; // Size: 16, Type: struct TArray<struct USolarRichTextBlockDecorator*>
			constexpr auto DefaultTextStyle = 0x488; // Size: 680, Type: struct FTextBlockStyle
			constexpr auto TextDelegate = 0x740; // Size: 16, Type: struct FDelegate
			constexpr auto bEnableLocalHintText = 0x750; // Size: 1, Type: bool
			constexpr auto bCapitalsLock = 0x751; // Size: 1, Type: bool
			constexpr auto PreviewLanguage = 0x752; // Size: 1, Type: enum class ESolarSupportLanguages
			constexpr auto LocalHintTextID = 0x754; // Size: 4, Type: int32_t
			constexpr auto HintText = 0x758; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x770; // Size: 16, Type: struct FDelegate
			constexpr auto CaretImage = 0x780; // Size: 152, Type: struct FSlateBrush
			constexpr auto BackgroundImageSelected = 0x818; // Size: 152, Type: struct FSlateBrush
			constexpr auto IsCaretMovedWhenGainFocus = 0x8b0; // Size: 1, Type: bool
			constexpr auto SelectAllTextWhenFocused = 0x8b1; // Size: 1, Type: bool
			constexpr auto RevertTextOnEscape = 0x8b2; // Size: 1, Type: bool
			constexpr auto ClearKeyboardFocusOnCommit = 0x8b3; // Size: 1, Type: bool
			constexpr auto SelectAllTextOnCommit = 0x8b4; // Size: 1, Type: bool
			constexpr auto IgnoreFocusChange = 0x8b5; // Size: 1, Type: bool
	}
} 
