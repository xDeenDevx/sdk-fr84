namespace offsets
{
	namespace UCommonButtonBase
	{
			constexpr auto MinWidth = 0x288; // Size: 4, Type: int32_t
			constexpr auto MinHeight = 0x28c; // Size: 4, Type: int32_t
			constexpr auto Style = 0x290; // Size: 8, Type: UCommonButtonStyle*
			constexpr auto bHideInputAction = 0x298; // Size: 1, Type: bool
			constexpr auto PressedSlateSoundOverride = 0x2a0; // Size: 24, Type: struct FSlateSound
			constexpr auto HoveredSlateSoundOverride = 0x2b8; // Size: 24, Type: struct FSlateSound
			constexpr auto bApplyAlphaOnDisable = 0x2d0; // Size: 1, Type: char
			constexpr auto bSelectable = 0x2d0; // Size: 1, Type: char
			constexpr auto bShouldSelectUponReceivingFocus = 0x2d0; // Size: 1, Type: char
			constexpr auto bInteractableWhenSelected = 0x2d0; // Size: 1, Type: char
			constexpr auto bToggleable = 0x2d0; // Size: 1, Type: char
			constexpr auto bDisplayInputActionWhenNotInteractable = 0x2d0; // Size: 1, Type: char
			constexpr auto bHideInputActionWithKeyboard = 0x2d0; // Size: 1, Type: char
			constexpr auto bShouldUseFallbackDefaultInputAction = 0x2d0; // Size: 1, Type: char
			constexpr auto ClickMethod = 0x2d2; // Size: 1, Type: enum class EButtonClickMethod
			constexpr auto TouchMethod = 0x2d3; // Size: 1, Type: enum class EButtonTouchMethod
			constexpr auto PressMethod = 0x2d4; // Size: 1, Type: enum class EButtonPressMethod
			constexpr auto InputPriority = 0x2d8; // Size: 4, Type: int32_t
			constexpr auto TriggeringInputAction = 0x2e0; // Size: 16, Type: struct FDataTableRowHandle
			constexpr auto OnSelectedChangedBase = 0x300; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnButtonBaseClicked = 0x310; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnButtonBaseDoubleClicked = 0x320; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnButtonBaseHovered = 0x330; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnButtonBaseUnhovered = 0x340; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bIsPersistentBinding = 0x354; // Size: 1, Type: bool
			constexpr auto InputModeOverride = 0x355; // Size: 1, Type: enum class ECommonInputMode
			constexpr auto SingleMaterialStyleMID = 0x388; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto NormalStyle = 0x390; // Size: 696, Type: struct FButtonStyle
			constexpr auto SelectedStyle = 0x648; // Size: 696, Type: struct FButtonStyle
			constexpr auto DisabledStyle = 0x900; // Size: 696, Type: struct FButtonStyle
			constexpr auto bStopDoubleClickPropagation = 0xbb8; // Size: 1, Type: char
			constexpr auto InputActionWidget = 0xc58; // Size: 8, Type: struct UCommonActionWidget*
	}
} 
