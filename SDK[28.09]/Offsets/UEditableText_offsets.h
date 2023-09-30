namespace offsets
{
	namespace UEditableText
	{
			constexpr auto Text = 0x138; // Size: 24, Type: struct FText
			constexpr auto TextDelegate = 0x150; // Size: 16, Type: struct FDelegate
			constexpr auto HintText = 0x160; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x178; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x188; // Size: 600, Type: struct FEditableTextStyle
			constexpr auto Style = 0x3e0; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto BackgroundImageSelected = 0x3e8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto BackgroundImageComposing = 0x3f0; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto CaretImage = 0x3f8; // Size: 8, Type: struct USlateBrushAsset*
			constexpr auto Font = 0x400; // Size: 96, Type: struct FSlateFontInfo
			constexpr auto ColorAndOpacity = 0x460; // Size: 40, Type: struct FSlateColor
			constexpr auto IsReadOnly = 0x488; // Size: 1, Type: bool
			constexpr auto IsPassword = 0x489; // Size: 1, Type: bool
			constexpr auto MinimumDesiredWidth = 0x48c; // Size: 4, Type: float
			constexpr auto IsCaretMovedWhenGainFocus = 0x490; // Size: 1, Type: bool
			constexpr auto SelectAllTextWhenFocused = 0x491; // Size: 1, Type: bool
			constexpr auto RevertTextOnEscape = 0x492; // Size: 1, Type: bool
			constexpr auto ClearKeyboardFocusOnCommit = 0x493; // Size: 1, Type: bool
			constexpr auto SelectAllTextOnCommit = 0x494; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0x495; // Size: 1, Type: bool
			constexpr auto KeyboardType = 0x496; // Size: 1, Type: enum class EVirtualKeyboardType
			constexpr auto VirtualKeyboardOptions = 0x497; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardTrigger = 0x498; // Size: 1, Type: enum class EVirtualKeyboardTrigger
			constexpr auto VirtualKeyboardDismissAction = 0x499; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto Justification = 0x49a; // Size: 1, Type: enum class ETextJustify
			constexpr auto ShapedTextOptions = 0x49b; // Size: 3, Type: struct FShapedTextOptions
			constexpr auto OnTextChanged = 0x4a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0x4b0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
