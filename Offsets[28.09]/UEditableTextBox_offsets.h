namespace offsets
{
	namespace UEditableTextBox
	{
			constexpr auto Text = 0x138; // Size: 24, Type: struct FText
			constexpr auto TextDelegate = 0x150; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x160; // Size: 2256, Type: struct FEditableTextBoxStyle
			constexpr auto Style = 0xa30; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto HintText = 0xa38; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0xa50; // Size: 16, Type: struct FDelegate
			constexpr auto Font = 0xa60; // Size: 96, Type: struct FSlateFontInfo
			constexpr auto ForegroundColor = 0xac0; // Size: 16, Type: struct FLinearColor
			constexpr auto BackgroundColor = 0xad0; // Size: 16, Type: struct FLinearColor
			constexpr auto ReadOnlyForegroundColor = 0xae0; // Size: 16, Type: struct FLinearColor
			constexpr auto IsReadOnly = 0xaf0; // Size: 1, Type: bool
			constexpr auto IsPassword = 0xaf1; // Size: 1, Type: bool
			constexpr auto MinimumDesiredWidth = 0xaf4; // Size: 4, Type: float
			constexpr auto Padding = 0xaf8; // Size: 16, Type: struct FMargin
			constexpr auto IsCaretMovedWhenGainFocus = 0xb08; // Size: 1, Type: bool
			constexpr auto SelectAllTextWhenFocused = 0xb09; // Size: 1, Type: bool
			constexpr auto RevertTextOnEscape = 0xb0a; // Size: 1, Type: bool
			constexpr auto ClearKeyboardFocusOnCommit = 0xb0b; // Size: 1, Type: bool
			constexpr auto SelectAllTextOnCommit = 0xb0c; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0xb0d; // Size: 1, Type: bool
			constexpr auto KeyboardType = 0xb0e; // Size: 1, Type: enum class EVirtualKeyboardType
			constexpr auto VirtualKeyboardOptions = 0xb0f; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardTrigger = 0xb10; // Size: 1, Type: enum class EVirtualKeyboardTrigger
			constexpr auto VirtualKeyboardDismissAction = 0xb11; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto Justification = 0xb12; // Size: 1, Type: enum class ETextJustify
			constexpr auto ShapedTextOptions = 0xb13; // Size: 3, Type: struct FShapedTextOptions
			constexpr auto OnTextChanged = 0xb18; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0xb28; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
