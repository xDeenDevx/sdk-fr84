namespace offsets
{
	namespace UCommonTabListWidgetBase
	{
			constexpr auto OnTabSelected = 0x288; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTabButtonCreation = 0x298; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTabButtonRemoval = 0x2a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto NextTabInputActionData = 0x2b8; // Size: 16, Type: struct FDataTableRowHandle
			constexpr auto PreviousTabInputActionData = 0x2c8; // Size: 16, Type: struct FDataTableRowHandle
			constexpr auto bAutoListenForInput = 0x2d8; // Size: 1, Type: bool
			constexpr auto LinkedSwitcher = 0x2dc; // Size: 8, Type: struct TWeakObjectPtr<UCommonAnimatedSwitcher>
			constexpr auto TabButtonGroup = 0x2e8; // Size: 8, Type: struct UCommonButtonGroupBase*
			constexpr auto RegisteredTabsByID = 0x2f8; // Size: 80, Type: struct TMap<struct FName, struct FCommonRegisteredTabInfo>
	}
} 
