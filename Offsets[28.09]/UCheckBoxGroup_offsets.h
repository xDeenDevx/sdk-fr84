namespace offsets
{
	namespace UCheckBoxGroup
	{
			constexpr auto OnStateChangedEvent = 0x160; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStateChangedEventEx = 0x170; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto RevertToCachedChild = 0x180; // Size: 8, Type: struct UCheckBox*
			constexpr auto LastCheckedChild = 0x188; // Size: 8, Type: struct UCheckBox*
			constexpr auto GroupRoot = 0x190; // Size: 8, Type: struct UPanelWidget*
			constexpr auto bAllowSwitchOff = 0x198; // Size: 1, Type: bool
			constexpr auto UseType = 0x199; // Size: 1, Type: enum class EUseType
			constexpr auto CheckBoxList = 0x1a0; // Size: 16, Type: struct TArray<struct UCheckBox*>
	}
} 
