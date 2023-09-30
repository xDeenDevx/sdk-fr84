namespace offsets
{
	namespace UCommonActivatableWidget
	{
			constexpr auto bAutoActivate = 0x288; // Size: 1, Type: bool
			constexpr auto bIsBackHandler = 0x289; // Size: 1, Type: bool
			constexpr auto bSupportsActivationFocus = 0x28a; // Size: 1, Type: bool
			constexpr auto bIsModal = 0x28b; // Size: 1, Type: bool
			constexpr auto bAutoRestoreFocus = 0x28c; // Size: 1, Type: bool
			constexpr auto bSetVisibilityOnActivated = 0x28d; // Size: 1, Type: bool
			constexpr auto ActivatedVisibility = 0x28e; // Size: 1, Type: enum class ESlateVisibility
			constexpr auto bSetVisibilityOnDeactivated = 0x28f; // Size: 1, Type: bool
			constexpr auto DeactivatedVisibility = 0x290; // Size: 1, Type: enum class ESlateVisibility
			constexpr auto BP_OnWidgetActivated = 0x298; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto BP_OnWidgetDeactivated = 0x2a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bIsActive = 0x2b8; // Size: 1, Type: bool
	}
} 
