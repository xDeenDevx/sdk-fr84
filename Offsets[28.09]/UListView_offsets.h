namespace offsets
{
	namespace UListView
	{
			constexpr auto Orientation = 0x888; // Size: 1, Type: enum class EOrientation
			constexpr auto SelectionMode = 0x889; // Size: 1, Type: enum class ESelectionMode
			constexpr auto ConsumeMouseWheel = 0x88a; // Size: 1, Type: enum class EConsumeMouseWheel
			constexpr auto bClearSelectionOnClick = 0x88b; // Size: 1, Type: bool
			constexpr auto bIsFocusable = 0x88c; // Size: 1, Type: bool
			constexpr auto EntrySpacing = 0x890; // Size: 4, Type: float
			constexpr auto bReturnFocusToSelection = 0x894; // Size: 1, Type: bool
			constexpr auto ListItemStartPosOffset = 0x898; // Size: 4, Type: float
			constexpr auto ListItems = 0x8a0; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto EnableDelayAdd = 0x8c0; // Size: 1, Type: bool
			constexpr auto DelayAddInterval = 0x8c4; // Size: 4, Type: float
			constexpr auto NumInPanel = 0x8c8; // Size: 4, Type: int32_t
			constexpr auto DelayAddedListItems = 0x8d0; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto DelayAddAnimFlag = 0x8e0; // Size: 1, Type: bool
			constexpr auto BP_OnEntryInitialized = 0x8e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemClicked = 0x8f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemDoubleClicked = 0x908; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemIsHoveredChanged = 0x918; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemSelectionChanged = 0x928; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnItemScrolledIntoView = 0x938; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
