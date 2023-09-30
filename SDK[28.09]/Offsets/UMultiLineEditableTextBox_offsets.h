namespace offsets
{
	namespace UMultiLineEditableTextBox
	{
			constexpr auto Text = 0x160; // Size: 24, Type: struct FText
			constexpr auto HintText = 0x178; // Size: 24, Type: struct FText
			constexpr auto HintTextDelegate = 0x190; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x1a0; // Size: 2256, Type: struct FEditableTextBoxStyle
			constexpr auto TextStyle = 0xa70; // Size: 680, Type: struct FTextBlockStyle
			constexpr auto bIsReadOnly = 0xd18; // Size: 1, Type: bool
			constexpr auto AllowContextMenu = 0xd19; // Size: 1, Type: bool
			constexpr auto VirtualKeyboardOptions = 0xd1a; // Size: 1, Type: struct FVirtualKeyboardOptions
			constexpr auto VirtualKeyboardDismissAction = 0xd1b; // Size: 1, Type: enum class EVirtualKeyboardDismissAction
			constexpr auto Style = 0xd20; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto Font = 0xd28; // Size: 96, Type: struct FSlateFontInfo
			constexpr auto ForegroundColor = 0xd88; // Size: 16, Type: struct FLinearColor
			constexpr auto BackgroundColor = 0xd98; // Size: 16, Type: struct FLinearColor
			constexpr auto ReadOnlyForegroundColor = 0xda8; // Size: 16, Type: struct FLinearColor
			constexpr auto OnTextChanged = 0xdb8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTextCommitted = 0xdc8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
