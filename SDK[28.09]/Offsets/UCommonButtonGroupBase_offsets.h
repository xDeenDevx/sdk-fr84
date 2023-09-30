namespace offsets
{
	namespace UCommonButtonGroupBase
	{
			constexpr auto OnSelectedButtonBaseChanged = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHoveredButtonBaseChanged = 0x50; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnButtonBaseClicked = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnButtonBaseDoubleClicked = 0xa0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSelectionCleared = 0xc8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bSelectionRequired = 0xf0; // Size: 1, Type: bool
	}
} 
