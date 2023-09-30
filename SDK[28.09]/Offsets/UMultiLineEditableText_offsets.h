namespace offsets
{
	namespace UMultiLineEditableText
	{
			constexpr auto Text = 0x160; // Size: 24, Type: struct FText
			constexpr auto HintText = 0x178; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x190; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x1a0; // Size: 680, Type: struct FTextBlockStyle
			constexpr auto bIsReadOnly = 0x448; // Size: 1, Type: bool
			constexpr auto Font = 0x450; // Size: 96, Type: struct FSlateFontInfo
			constexpr auto SelectAllTextWhenFocused = 0x4b0; // Size: 1, Type: bool
			constexpr auto ClearTextSelectionOnFocusLoss = 0x4b1; // Size: 1, Type: bool
			constexpr auto RevertTextOnEscape = 0x4b2; // Size: 1, Type: bool
			constexpr auto ClearKeyboardFocusOnCommit = 0x4b3; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0x4b4; // Size: 1, Type: bool
			constexpr auto VirtualKeyboardOptions = 0x4b5; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardDismissAction = 0x4b6; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto OnTextChanged = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0x4c8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
