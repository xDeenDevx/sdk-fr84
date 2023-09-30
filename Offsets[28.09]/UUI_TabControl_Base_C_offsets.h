namespace offsets
{
	namespace UUI_TabControl_Base_C
	{
			constexpr auto UberGraphFrame = 0x348; // Size: 8, Type: struct FPointerToUberGraphFrame
			constexpr auto Style = 0x350; // Size: 1, Type: enum class E_TabStyle
			constexpr auto BindSwitcher = 0x358; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto DefaultSelection = 0x360; // Size: 16, Type: struct FString
			constexpr auto QueryItem_base = 0x370; // Size: 80, Type: struct TMap<struct FString, struct FS_TabItem>
			constexpr auto QueryItem = 0x3c0; // Size: 80, Type: struct TMap<struct FString, struct UBP_TabItemObj_C*>
			constexpr auto OnActiveTabChanged = 0x410; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BindList = 0x420; // Size: 8, Type: struct UListView*
			constexpr auto ItemDefaultSize = 0x428; // Size: 8, Type: struct FVector2D
			constexpr auto PresetItems = 0x430; // Size: 16, Type: struct TArray<struct FS_TabItem>
			constexpr auto Items = 0x440; // Size: 16, Type: struct TArray<struct FS_TabItem>
			constexpr auto CurrentSelection = 0x450; // Size: 16, Type: struct FString
			constexpr auto IsDisableScroll = 0x460; // Size: 1, Type: bool
	}
} 
