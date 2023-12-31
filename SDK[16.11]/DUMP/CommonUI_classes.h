// Class CommonUI.AnalogSlider
// Size: 0x780 (Inherited: 0x760)
struct UAnalogSlider : USlider {
	struct FMulticastInlineDelegate OnAnalogCapture; // 0x760(0x10)
	char pad_770[0x10]; // 0x770(0x10)
};

// Class CommonUI.CommonActionHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonActionHandlerInterface : UInterface {
};

// Class CommonUI.CommonActionWidget
// Size: 0x470 (Inherited: 0x138)
struct UCommonActionWidget : UWidget {
	struct FMulticastInlineDelegate OnInputMethodChanged; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)
	struct FSlateBrush ProgressMaterialBrush; // 0x150(0xe0)
	struct FName ProgressMaterialParam; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)
	struct FSlateBrush IconRimBrush; // 0x240(0xe0)
	struct TArray<struct FDataTableRowHandle> InputActions; // 0x320(0x10)
	char pad_330[0x8]; // 0x330(0x08)
	struct UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x338(0x08)
	char pad_340[0x130]; // 0x340(0x130)

	void SetInputActions(struct TArray<struct FDataTableRowHandle> NewInputActions); // Function CommonUI.CommonActionWidget.SetInputActions // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd730
	void SetInputAction(struct FDataTableRowHandle InputActionRow); // Function CommonUI.CommonActionWidget.SetInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd580
	void SetIconRimBrush(struct FSlateBrush InIconRimBrush); // Function CommonUI.CommonActionWidget.SetIconRimBrush // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd4d0
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	bool IsHeldAction(); // Function CommonUI.CommonActionWidget.IsHeldAction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd050
	struct FSlateBrush GetIcon(); // Function CommonUI.CommonActionWidget.GetIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc810
	struct FText GetDisplayText(); // Function CommonUI.CommonActionWidget.GetDisplayText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc770
};

// Class CommonUI.CommonUserWidget
// Size: 0x288 (Inherited: 0x260)
struct UCommonUserWidget : UUserWidget {
	bool bConsumePointerInput; // 0x260(0x01)
	char pad_261[0x27]; // 0x261(0x27)

	void SetConsumePointerInput(bool bInConsumePointerInput); // Function CommonUI.CommonUserWidget.SetConsumePointerInput // (Final|Native|Public|BlueprintCallable) // @ game+0xbe8310
};

// Class CommonUI.CommonActivatableWidget
// Size: 0x320 (Inherited: 0x288)
struct UCommonActivatableWidget : UCommonUserWidget {
	bool bAutoActivate; // 0x288(0x01)
	bool bIsBackHandler; // 0x289(0x01)
	bool bSupportsActivationFocus; // 0x28a(0x01)
	bool bIsModal; // 0x28b(0x01)
	bool bAutoRestoreFocus; // 0x28c(0x01)
	bool bSetVisibilityOnActivated; // 0x28d(0x01)
	enum class ESlateVisibility ActivatedVisibility; // 0x28e(0x01)
	bool bSetVisibilityOnDeactivated; // 0x28f(0x01)
	enum class ESlateVisibility DeactivatedVisibility; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate BP_OnWidgetActivated; // 0x298(0x10)
	struct FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x2a8(0x10)
	bool bIsActive; // 0x2b8(0x01)
	char pad_2B9[0x67]; // 0x2b9(0x67)

	bool IsActivated(); // Function CommonUI.CommonActivatableWidget.IsActivated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd030
	void DeactivateWidget(); // Function CommonUI.CommonActivatableWidget.DeactivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xbdc1d0
	bool BP_OnHandleBackAction(); // Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnDeactivated(); // Function CommonUI.CommonActivatableWidget.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnActivated(); // Function CommonUI.CommonActivatableWidget.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget // (Event|Protected|BlueprintEvent|Const) // @ game+0x2d656b0
	void ActivateWidget(); // Function CommonUI.CommonActivatableWidget.ActivateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xbdc0d0
};

// Class CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x238 (Inherited: 0x138)
struct UCommonActivatableWidgetContainerBase : UWidget {
	enum class ECommonSwitcherTransition TransitionType; // 0x138(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x139(0x01)
	char pad_13A[0x2]; // 0x13a(0x02)
	float TransitionDuration; // 0x13c(0x04)
	struct TArray<struct UCommonActivatableWidget*> WidgetList; // 0x140(0x10)
	struct UCommonActivatableWidget* DisplayedWidget; // 0x150(0x08)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x158(0x80)
	char pad_1D8[0x60]; // 0x1d8(0x60)

	void RemoveWidget(struct UCommonActivatableWidget* WidgetToRemove); // Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget // (Final|Native|Private|BlueprintCallable) // @ game+0xbdd210
	struct UCommonActivatableWidget* GetActiveWidget(); // Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc2c0
	void ClearWidgets(); // Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0xbdc1b0
	struct UCommonActivatableWidget* BP_AddWidget(struct UCommonActivatableWidget* ActivatableWidgetClass); // Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget // (Final|Native|Private|BlueprintCallable) // @ game+0xbdc0f0
};

// Class CommonUI.CommonActivatableWidgetStack
// Size: 0x248 (Inherited: 0x238)
struct UCommonActivatableWidgetStack : UCommonActivatableWidgetContainerBase {
	struct UCommonActivatableWidget* RootContentWidgetClass; // 0x238(0x08)
	struct UCommonActivatableWidget* RootContentWidget; // 0x240(0x08)
};

// Class CommonUI.CommonActivatableWidgetQueue
// Size: 0x238 (Inherited: 0x238)
struct UCommonActivatableWidgetQueue : UCommonActivatableWidgetContainerBase {
};

// Class CommonUI.CommonAnimatedSwitcher
// Size: 0x1c0 (Inherited: 0x168)
struct UCommonAnimatedSwitcher : UWidgetSwitcher {
	char pad_168[0x18]; // 0x168(0x18)
	enum class ECommonSwitcherTransition TransitionType; // 0x180(0x01)
	enum class ETransitionCurve TransitionCurveType; // 0x181(0x01)
	char pad_182[0x2]; // 0x182(0x02)
	float TransitionDuration; // 0x184(0x04)
	char pad_188[0x38]; // 0x188(0x38)

	void SetDisableTransitionAnimation(bool bDisableAnimation); // Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd320
	bool HasWidgets(); // Function CommonUI.CommonAnimatedSwitcher.HasWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd000
	void ActivatePreviousWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xbdc040
	void ActivateNextWidget(bool bCanWrap); // Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xbdbfb0
};

// Class CommonUI.CommonActivatableWidgetSwitcher
// Size: 0x1c0 (Inherited: 0x1c0)
struct UCommonActivatableWidgetSwitcher : UCommonAnimatedSwitcher {
};

// Class CommonUI.CommonBorderStyle
// Size: 0x110 (Inherited: 0x28)
struct UCommonBorderStyle : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FSlateBrush Background; // 0x30(0xe0)

	void GetBackgroundBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonBorderStyle.GetBackgroundBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc2f0
};

// Class CommonUI.CommonBorder
// Size: 0x320 (Inherited: 0x300)
struct UCommonBorder : UBorder {
	struct UCommonBorderStyle* Style; // 0x300(0x08)
	bool bReducePaddingBySafezone; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	struct FMargin MinimumPadding; // 0x30c(0x10)
	char pad_31C[0x4]; // 0x31c(0x04)

	void SetStyle(struct UCommonBorderStyle* InStyle); // Function CommonUI.CommonBorder.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xbddff0
};

// Class CommonUI.CommonBoundActionBar
// Size: 0x208 (Inherited: 0x1f8)
struct UCommonBoundActionBar : UDynamicEntryBoxBase {
	struct UCommonBoundActionButton* ActionButtonClass; // 0x1f8(0x08)
	bool bDisplayOwningPlayerActionsOnly; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd3b0
};

// Class CommonUI.CommonButtonBase
// Size: 0xfe0 (Inherited: 0x288)
struct UCommonButtonBase : UCommonUserWidget {
	int32_t MinWidth; // 0x288(0x04)
	int32_t MinHeight; // 0x28c(0x04)
	struct UCommonButtonStyle* Style; // 0x290(0x08)
	bool bHideInputAction; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct FSlateSound PressedSlateSoundOverride; // 0x2a0(0x18)
	struct FSlateSound HoveredSlateSoundOverride; // 0x2b8(0x18)
	char bApplyAlphaOnDisable : 1; // 0x2d0(0x01)
	char bSelectable : 1; // 0x2d0(0x01)
	char bShouldSelectUponReceivingFocus : 1; // 0x2d0(0x01)
	char bInteractableWhenSelected : 1; // 0x2d0(0x01)
	char bToggleable : 1; // 0x2d0(0x01)
	char bDisplayInputActionWhenNotInteractable : 1; // 0x2d0(0x01)
	char bHideInputActionWithKeyboard : 1; // 0x2d0(0x01)
	char bShouldUseFallbackDefaultInputAction : 1; // 0x2d0(0x01)
	char pad_2D1[0x1]; // 0x2d1(0x01)
	enum class EButtonClickMethod ClickMethod; // 0x2d2(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x2d3(0x01)
	enum class EButtonPressMethod PressMethod; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	int32_t InputPriority; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FDataTableRowHandle TriggeringInputAction; // 0x2e0(0x10)
	char pad_2F0[0x10]; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnSelectedChangedBase; // 0x300(0x10)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x310(0x10)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x320(0x10)
	struct FMulticastInlineDelegate OnButtonBaseHovered; // 0x330(0x10)
	struct FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x340(0x10)
	char pad_350[0x4]; // 0x350(0x04)
	bool bIsPersistentBinding; // 0x354(0x01)
	enum class ECommonInputMode InputModeOverride; // 0x355(0x01)
	char pad_356[0x32]; // 0x356(0x32)
	struct UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x388(0x08)
	struct FButtonStyle NormalStyle; // 0x390(0x3e0)
	struct FButtonStyle SelectedStyle; // 0x770(0x3e0)
	struct FButtonStyle DisabledStyle; // 0xb50(0x3e0)
	char bStopDoubleClickPropagation : 1; // 0xf30(0x01)
	char pad_F30_1 : 7; // 0xf30(0x01)
	char pad_F31[0x9f]; // 0xf31(0x9f)
	struct UCommonActionWidget* InputActionWidget; // 0xfd0(0x08)
	char pad_FD8[0x8]; // 0xfd8(0x08)

	void StopDoubleClickPropagation(); // Function CommonUI.CommonButtonBase.StopDoubleClickPropagation // (Final|Native|Protected|BlueprintCallable) // @ game+0xbde2d0
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeringInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbde230
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.SetTriggeredInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbde190
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function CommonUI.CommonButtonBase.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xbde110
	void SetStyle(struct UCommonButtonStyle* InStyle); // Function CommonUI.CommonButtonBase.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xbde080
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction // (Final|Native|Public|BlueprintCallable) // @ game+0xbddf60
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable) // @ game+0xbdded0
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadCast); // Function CommonUI.CommonButtonBase.SetSelectedInternal // (Final|Native|Protected|BlueprintCallable) // @ game+0xbddda0
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function CommonUI.CommonButtonBase.SetPressMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xbddc90
	void SetPressedSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetPressedSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xbddd10
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Function CommonUI.CommonButtonBase.SetMinDimensions // (Final|Native|Public|BlueprintCallable) // @ game+0xbddbc0
	void SetIsToggleable(bool bInIsToggleable); // Function CommonUI.CommonButtonBase.SetIsToggleable // (Final|Native|Public|BlueprintCallable) // @ game+0xbddb30
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Function CommonUI.CommonButtonBase.SetIsSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xbdda60
	void SetIsSelectable(bool bInIsSelectable); // Function CommonUI.CommonButtonBase.SetIsSelectable // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd9d0
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Function CommonUI.CommonButtonBase.SetIsInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd940
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd8b0
	void SetIsFocusable(bool bInIsFocusable); // Function CommonUI.CommonButtonBase.SetIsFocusable // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd820
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, struct FName& InProgressMaterialParam); // Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbdd620
	void SetHoveredSoundOverride(struct USoundBase* Sound); // Function CommonUI.CommonButtonBase.SetHoveredSoundOverride // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd440
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function CommonUI.CommonButtonBase.SetClickMethod // (Final|Native|Public|BlueprintCallable) // @ game+0xbdd2a0
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction); // Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x2d656b0
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function CommonUI.CommonButtonBase.OnInputMethodChanged // (Native|Protected) // @ game+0xbdd190
	void OnCurrentTextStyleChanged(); // Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnActionComplete(); // Function CommonUI.CommonButtonBase.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void NativeOnActionProgress(float HeldPercent); // Function CommonUI.CommonButtonBase.NativeOnActionProgress // (Native|Protected) // @ game+0xbdd100
	void NativeOnActionComplete(); // Function CommonUI.CommonButtonBase.NativeOnActionComplete // (Native|Protected) // @ game+0xbdd0e0
	bool IsPressed(); // Function CommonUI.CommonButtonBase.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd0b0
	bool IsInteractionEnabled(); // Function CommonUI.CommonButtonBase.IsInteractionEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdd080
	void HandleTriggeringActionCommited(bool& bPassThrough); // Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited // (Native|Protected|HasOutParms) // @ game+0xbdcf60
	void HandleFocusReceived(); // Function CommonUI.CommonButtonBase.HandleFocusReceived // (Native|Protected) // @ game+0xbdcf40
	void HandleButtonReleased(); // Function CommonUI.CommonButtonBase.HandleButtonReleased // (Final|Native|Protected) // @ game+0xbdcf20
	void HandleButtonPressed(); // Function CommonUI.CommonButtonBase.HandleButtonPressed // (Final|Native|Protected) // @ game+0xbdcf00
	void HandleButtonClicked(); // Function CommonUI.CommonButtonBase.HandleButtonClicked // (Final|Native|Protected) // @ game+0xbdcee0
	struct UCommonButtonStyle* GetStyle(); // Function CommonUI.CommonButtonBase.GetStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdceb0
	struct UMaterialInstanceDynamic* GetSingleMaterialStyleMID(); // Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdce80
	bool GetShouldSelectUponReceivingFocus(); // Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdce50
	bool GetSelected(); // Function CommonUI.CommonButtonBase.GetSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcbb0
	bool GetIsFocusable(); // Function CommonUI.CommonButtonBase.GetIsFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc910
	bool GetInputAction(struct FDataTableRowHandle& InputActionRow); // Function CommonUI.CommonButtonBase.GetInputAction // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc860
	struct UCommonTextStyle* GetCurrentTextStyleClass(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc5b0
	struct UCommonTextStyle* GetCurrentTextStyle(); // Function CommonUI.CommonButtonBase.GetCurrentTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc580
	void GetCurrentCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonBase.GetCurrentCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc4e0
	void GetCurrentButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonBase.GetCurrentButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc440
	void DisableButtonWithReason(struct FText& DisabledReason); // Function CommonUI.CommonButtonBase.DisableButtonWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbdc1f0
	void ClearSelection(); // Function CommonUI.CommonButtonBase.ClearSelection // (Final|Native|Public|BlueprintCallable) // @ game+0xbdc190
	void BP_OnUnhovered(); // Function CommonUI.CommonButtonBase.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnSelected(); // Function CommonUI.CommonButtonBase.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnHovered(); // Function CommonUI.CommonButtonBase.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnEnabled(); // Function CommonUI.CommonButtonBase.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnDoubleClicked(); // Function CommonUI.CommonButtonBase.BP_OnDoubleClicked // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnDisabled(); // Function CommonUI.CommonButtonBase.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnDeselected(); // Function CommonUI.CommonButtonBase.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnClicked(); // Function CommonUI.CommonButtonBase.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
};

// Class CommonUI.CommonBoundActionButton
// Size: 0xff0 (Inherited: 0xfe0)
struct UCommonBoundActionButton : UCommonButtonBase {
	struct UCommonTextBlock* Text_ActionName; // 0xfd8(0x08)
	char pad_FE8[0x8]; // 0xfe8(0x08)

	void OnUpdateInputAction(); // Function CommonUI.CommonBoundActionButton.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
};

// Class CommonUI.CommonButtonStyle
// Size: 0x830 (Inherited: 0x28)
struct UCommonButtonStyle : UObject {
	bool bSingleMaterial; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSlateBrush SingleMaterialBrush; // 0x30(0xe0)
	struct FSlateBrush NormalBase; // 0x110(0xe0)
	struct FSlateBrush NormalHovered; // 0x1f0(0xe0)
	struct FSlateBrush NormalPressed; // 0x2d0(0xe0)
	struct FSlateBrush SelectedBase; // 0x3b0(0xe0)
	struct FSlateBrush SelectedHovered; // 0x490(0xe0)
	struct FSlateBrush SelectedPressed; // 0x570(0xe0)
	struct FSlateBrush Disabled; // 0x650(0xe0)
	struct FMargin ButtonPadding; // 0x730(0x10)
	struct FMargin CustomPadding; // 0x740(0x10)
	int32_t MinWidth; // 0x750(0x04)
	int32_t MinHeight; // 0x754(0x04)
	struct UCommonTextStyle* NormalTextStyle; // 0x758(0x08)
	struct UCommonTextStyle* NormalHoveredTextStyle; // 0x760(0x08)
	struct UCommonTextStyle* SelectedTextStyle; // 0x768(0x08)
	struct UCommonTextStyle* SelectedHoveredTextStyle; // 0x770(0x08)
	struct UCommonTextStyle* DisabledTextStyle; // 0x778(0x08)
	struct FSlateSound PressedSlateSound; // 0x780(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x798(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound; // 0x7b8(0x20)
	struct FSlateSound HoveredSlateSound; // 0x7d8(0x18)
	struct FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x7f0(0x20)
	struct FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound; // 0x810(0x20)

	struct UCommonTextStyle* GetSelectedTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdce20
	void GetSelectedPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcd70
	struct UCommonTextStyle* GetSelectedHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcd40
	void GetSelectedHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcc90
	void GetSelectedBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcbe0
	struct UCommonTextStyle* GetNormalTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcb80
	void GetNormalPressedBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalPressedBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcad0
	struct UCommonTextStyle* GetNormalHoveredTextStyle(); // Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdcaa0
	void GetNormalHoveredBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc9f0
	void GetNormalBaseBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetNormalBaseBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc940
	void GetMaterialBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetMaterialBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc2f0
	struct UCommonTextStyle* GetDisabledTextStyle(); // Function CommonUI.CommonButtonStyle.GetDisabledTextStyle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc740
	void GetDisabledBrush(struct FSlateBrush& Brush); // Function CommonUI.CommonButtonStyle.GetDisabledBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc690
	void GetCustomPadding(struct FMargin& OutCustomPadding); // Function CommonUI.CommonButtonStyle.GetCustomPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc5f0
	void GetButtonPadding(struct FMargin& OutButtonPadding); // Function CommonUI.CommonButtonStyle.GetButtonPadding // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbdc3a0
};

// Class CommonUI.CommonButtonInternalBase
// Size: 0x630 (Inherited: 0x5d0)
struct UCommonButtonInternalBase : UButton {
	char pad_5D0[0x8]; // 0x5d0(0x08)
	struct FMulticastInlineDelegate OnDoubleClicked; // 0x5d8(0x10)
	char pad_5E8[0x10]; // 0x5e8(0x10)
	int32_t MinWidth; // 0x5f8(0x04)
	int32_t MinHeight; // 0x5fc(0x04)
	bool bButtonEnabled; // 0x600(0x01)
	bool bInteractionEnabled; // 0x601(0x01)
	char pad_602[0x2e]; // 0x602(0x2e)
};

// Class CommonUI.CommonWidgetGroupBase
// Size: 0x28 (Inherited: 0x28)
struct UCommonWidgetGroupBase : UObject {

	void RemoveWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.RemoveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xbe8020
	void RemoveAll(); // Function CommonUI.CommonWidgetGroupBase.RemoveAll // (Final|Native|Public|BlueprintCallable) // @ game+0xbe8000
	void AddWidget(struct UWidget* InWidget); // Function CommonUI.CommonWidgetGroupBase.AddWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xbe73b0
};

// Class CommonUI.CommonButtonGroupBase
// Size: 0x110 (Inherited: 0x28)
struct UCommonButtonGroupBase : UCommonWidgetGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
	char pad_38[0x18]; // 0x38(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
	char pad_60[0x18]; // 0x60(0x18)
	struct FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
	char pad_88[0x18]; // 0x88(0x18)
	struct FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnSelectionCleared; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	bool bSelectionRequired; // 0xf0(0x01)
	char pad_F1[0x1f]; // 0xf1(0x1f)

	void SetSelectionRequired(bool bRequireSelection); // Function CommonUI.CommonButtonGroupBase.SetSelectionRequired // (Final|Native|Public|BlueprintCallable) // @ game+0xbe35f0
	void SelectPreviousButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectPreviousButton // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2880
	void SelectNextButton(bool bAllowWrap); // Function CommonUI.CommonButtonGroupBase.SelectNextButton // (Final|Native|Public|BlueprintCallable) // @ game+0xbe27f0
	void SelectButtonAtIndex(int32_t ButtonIndex); // Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2760
	void OnSelectionStateChangedBase(struct UCommonButtonBase* BaseButton, bool bIsSelected); // Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase // (Native|Protected) // @ game+0xbe2350
	void OnHandleButtonBaseDoubleClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked // (Native|Protected) // @ game+0xbe22a0
	void OnHandleButtonBaseClicked(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked // (Native|Protected) // @ game+0xbe2210
	void OnButtonBaseUnhovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered // (Native|Protected) // @ game+0xbe2180
	void OnButtonBaseHovered(struct UCommonButtonBase* BaseButton); // Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered // (Native|Protected) // @ game+0xbe20f0
	bool HasAnyButtons(); // Function CommonUI.CommonButtonGroupBase.HasAnyButtons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1e80
	int32_t GetSelectedButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1830
	struct UCommonButtonBase* GetSelectedButtonBase(); // Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1800
	int32_t GetHoveredButtonIndex(); // Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe17a0
	int32_t GetButtonCount(); // Function CommonUI.CommonButtonGroupBase.GetButtonCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1710
	struct UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index); // Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1670
	int32_t FindButtonIndex(struct UCommonButtonBase* ButtonToFind); // Function CommonUI.CommonButtonGroupBase.FindButtonIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe15b0
	void DeselectAll(); // Function CommonUI.CommonButtonGroupBase.DeselectAll // (Final|Native|Public|BlueprintCallable) // @ game+0xbe1480
};

// Class CommonUI.CommonCustomNavigation
// Size: 0x310 (Inherited: 0x300)
struct UCommonCustomNavigation : UBorder {
	struct FDelegate OnNavigationEvent; // 0x300(0x10)
};

// Class CommonUI.CommonTextBlock
// Size: 0x450 (Inherited: 0x420)
struct UCommonTextBlock : UTextBlock {
	struct UCommonTextStyle* Style; // 0x420(0x08)
	struct UCommonTextScrollStyle* ScrollStyle; // 0x428(0x08)
	bool bDisplayAllCaps; // 0x430(0x01)
	bool bAutoCollapseWithEmptyText; // 0x431(0x01)
	char pad_432[0x2]; // 0x432(0x02)
	float MobileFontSizeMultiplier; // 0x434(0x04)
	char pad_438[0x18]; // 0x438(0x18)

	void SetWrapTextWidth(int32_t InWrapTextAt); // Function CommonUI.CommonTextBlock.SetWrapTextWidth // (Final|Native|Public|BlueprintCallable) // @ game+0xbe8550
	void SetTextCase(bool bUseAllCaps); // Function CommonUI.CommonTextBlock.SetTextCase // (Final|Native|Public|BlueprintCallable) // @ game+0xbe84c0
	void SetStyle(struct UCommonTextStyle* InStyle); // Function CommonUI.CommonTextBlock.SetStyle // (Final|Native|Public|BlueprintCallable) // @ game+0xbe8430
	void ResetScrollState(); // Function CommonUI.CommonTextBlock.ResetScrollState // (Final|Native|Public|BlueprintCallable) // @ game+0xbe80b0
};

// Class CommonUI.CommonDateTimeTextBlock
// Size: 0x490 (Inherited: 0x450)
struct UCommonDateTimeTextBlock : UCommonTextBlock {
	char pad_450[0x40]; // 0x450(0x40)

	void SetTimespanValue(struct FTimespan InTimespan); // Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xbe38f0
	void SetDateTimeValue(struct FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xbe2e20
	void SetCountDownCompletionText(struct FText InCompletionText); // Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2cc0
	struct FDateTime GetDateTime(); // Function CommonUI.CommonDateTimeTextBlock.GetDateTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1760
};

// Class CommonUI.CommonGameViewportClient
// Size: 0x370 (Inherited: 0x330)
struct UCommonGameViewportClient : UGameViewportClient {
	char pad_330[0x40]; // 0x330(0x40)
};

// Class CommonUI.CommonHierarchicalScrollBox
// Size: 0xd40 (Inherited: 0xd40)
struct UCommonHierarchicalScrollBox : UScrollBox {
};

// Class CommonUI.CommonLazyImage
// Size: 0x3c0 (Inherited: 0x2a0)
struct UCommonLazyImage : UImage {
	struct FSlateBrush LoadingBackgroundBrush; // 0x2a0(0xe0)
	struct FName MaterialTextureParamName; // 0x380(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x388(0x10)
	char pad_398[0x28]; // 0x398(0x28)

	void SetMaterialTextureParamName(struct FName TextureParamName); // Function CommonUI.CommonLazyImage.SetMaterialTextureParamName // (Final|Native|Public|BlueprintCallable) // @ game+0xbe33c0
	void SetBrushFromLazyTexture(struct TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbe2bb0
	void SetBrushFromLazyMaterial(struct TSoftObjectPtr<UMaterialInterface>& LazyMaterial); // Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbe2af0
	void SetBrushFromLazyDisplayAsset(struct TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize); // Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbe29e0
	bool IsLoading(); // Function CommonUI.CommonLazyImage.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe2040
};

// Class CommonUI.CommonLazyWidget
// Size: 0x2a0 (Inherited: 0x138)
struct UCommonLazyWidget : UWidget {
	char pad_138[0x8]; // 0x138(0x08)
	struct FSlateBrush LoadingBackgroundBrush; // 0x140(0xe0)
	struct UUserWidget* Content; // 0x220(0x08)
	char pad_228[0x28]; // 0x228(0x28)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x250(0x10)
	char pad_260[0x40]; // 0x260(0x40)

	void SetLazyContent(struct TSoftClassPtr<UObject> SoftWidget); // Function CommonUI.CommonLazyWidget.SetLazyContent // (Final|Native|Public|BlueprintCallable) // @ game+0xbe30c0
	bool IsLoading(); // Function CommonUI.CommonLazyWidget.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe2070
	struct UUserWidget* GetContent(); // Function CommonUI.CommonLazyWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1740
};

// Class CommonUI.CommonListView
// Size: 0xbf0 (Inherited: 0xbf0)
struct UCommonListView : UListView {

	void SetEntrySpacing(float InEntrySpacing); // Function CommonUI.CommonListView.SetEntrySpacing // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2f30
};

// Class CommonUI.LoadGuardSlot
// Size: 0x60 (Inherited: 0x38)
struct ULoadGuardSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x01)
	char pad_4A[0x16]; // 0x4a(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function CommonUI.LoadGuardSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xbe3970
	void SetPadding(struct FMargin InPadding); // Function CommonUI.LoadGuardSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // @ game+0xbe34d0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function CommonUI.LoadGuardSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2fb0
};

// Class CommonUI.CommonLoadGuard
// Size: 0x2c0 (Inherited: 0x150)
struct UCommonLoadGuard : UContentWidget {
	struct FSlateBrush LoadingBackgroundBrush; // 0x150(0xe0)
	enum class EHorizontalAlignment ThrobberAlignment; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	struct FMargin ThrobberPadding; // 0x234(0x10)
	char pad_244[0x4]; // 0x244(0x04)
	struct FText LoadingText; // 0x248(0x18)
	struct UCommonTextStyle* TextStyle; // 0x260(0x08)
	struct FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x268(0x10)
	struct FSoftObjectPath SpinnerMaterialPath; // 0x278(0x18)
	char pad_290[0x30]; // 0x290(0x30)

	void SetLoadingText(struct FText& InLoadingText); // Function CommonUI.CommonLoadGuard.SetLoadingText // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbe32f0
	void SetIsLoading(bool bInIsLoading); // Function CommonUI.CommonLoadGuard.SetIsLoading // (Final|Native|Public|BlueprintCallable) // @ game+0xbe3030
	void OnAssetLoaded__DelegateSignature(struct UObject* Object); // DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature // (Public|Delegate) // @ game+0x2d656b0
	bool IsLoading(); // Function CommonUI.CommonLoadGuard.IsLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe20a0
	void BP_GuardAndLoadAsset(struct TSoftObjectPtr<UObject>& InLazyAsset, struct FDelegate& OnAssetLoaded); // Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0xbe1350
};

// Class CommonUI.CommonNumericTextBlock
// Size: 0x4f0 (Inherited: 0x450)
struct UCommonNumericTextBlock : UCommonTextBlock {
	struct FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x448(0x10)
	struct FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x458(0x10)
	struct FMulticastInlineDelegate OnOutroEvent; // 0x468(0x10)
	struct FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x478(0x10)
	float CurrentNumericValue; // 0x488(0x04)
	enum class ECommonNumericType NumericType; // 0x48c(0x01)
	struct FCommonNumberFormattingOptions FormattingSpecification; // 0x490(0x14)
	float EaseOutInterpolationExponent; // 0x4a4(0x04)
	float InterpolationUpdateInterval; // 0x4a8(0x04)
	float PostInterpolationShrinkDuration; // 0x4ac(0x04)
	bool PerformSizeInterpolation; // 0x4b0(0x01)
	bool IsPercentage; // 0x4b1(0x01)
	char pad_4B7[0x39]; // 0x4b7(0x39)

	void SetNumericType(enum class ECommonNumericType InNumericType); // Function CommonUI.CommonNumericTextBlock.SetNumericType // (Final|Native|Public|BlueprintCallable) // @ game+0xbe3450
	void SetCurrentValue(float NewValue); // Function CommonUI.CommonNumericTextBlock.SetCurrentValue // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2da0
	void OnOutro__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	void OnInterpolationUpdated__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	void OnInterpolationStarted__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	void OnInterpolationEnded__DelegateSignature(struct UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	bool IsInterpolatingNumericValue(); // Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe2010
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Function CommonUI.CommonNumericTextBlock.InterpolateToValue // (Final|Native|Public|BlueprintCallable) // @ game+0xbe1eb0
	float GetTargetValue(); // Function CommonUI.CommonNumericTextBlock.GetTargetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1ac0
};

// Class CommonUI.CommonPoolableWidgetInterface
// Size: 0x28 (Inherited: 0x28)
struct UCommonPoolableWidgetInterface : UInterface {

	void OnReleaseToPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool // (Native|Event|Protected|BlueprintEvent) // @ game+0xbe2330
	void OnAcquireFromPool(); // Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool // (Native|Event|Protected|BlueprintEvent) // @ game+0xbe20d0
};

// Class CommonUI.CommonRichTextBlock
// Size: 0xae0 (Inherited: 0xaa0)
struct UCommonRichTextBlock : URichTextBlock {
	enum class ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0xaa0(0x01)
	bool bTintInlineIcon; // 0xaa1(0x01)
	char pad_AA2[0x6]; // 0xaa2(0x06)
	struct UCommonTextStyle* DefaultTextStyleOverrideClass; // 0xaa8(0x08)
	float MobileTextBlockScale; // 0xab0(0x04)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct UCommonTextScrollStyle* ScrollStyle; // 0xab8(0x08)
	bool bDisplayAllCaps; // 0xac0(0x01)
	char pad_AC1[0x1f]; // 0xac1(0x1f)
};

// Class CommonUI.CommonRotator
// Size: 0x1030 (Inherited: 0xfe0)
struct UCommonRotator : UCommonButtonBase {
	char pad_FE0[0x8]; // 0xfe0(0x08)
	struct FMulticastInlineDelegate OnRotated; // 0xfe8(0x10)
	char pad_FF8[0x18]; // 0xff8(0x18)
	struct UCommonTextBlock* MyText; // 0x1010(0x08)
	char pad_1018[0x18]; // 0x1018(0x18)

	void ShiftTextRight(); // Function CommonUI.CommonRotator.ShiftTextRight // (Final|Native|Public|BlueprintCallable) // @ game+0xbe3a10
	void ShiftTextLeft(); // Function CommonUI.CommonRotator.ShiftTextLeft // (Final|Native|Public|BlueprintCallable) // @ game+0xbe39f0
	void SetSelectedItem(int32_t InValue); // Function CommonUI.CommonRotator.SetSelectedItem // (Native|Public|BlueprintCallable) // @ game+0xbe3560
	void PopulateTextLabels(struct TArray<struct FText> Labels); // Function CommonUI.CommonRotator.PopulateTextLabels // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2420
	struct FText GetSelectedText(); // Function CommonUI.CommonRotator.GetSelectedText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe18c0
	int32_t GetSelectedIndex(); // Function CommonUI.CommonRotator.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1860
	void BP_OnOptionsPopulated(int32_t count); // Function CommonUI.CommonRotator.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BP_OnOptionSelected(int32_t Index); // Function CommonUI.CommonRotator.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
};

// Class CommonUI.CommonTabListWidgetBase
// Size: 0x358 (Inherited: 0x288)
struct UCommonTabListWidgetBase : UCommonUserWidget {
	struct FMulticastInlineDelegate OnTabSelected; // 0x288(0x10)
	struct FMulticastInlineDelegate OnTabButtonCreation; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoval; // 0x2a8(0x10)
	struct FDataTableRowHandle NextTabInputActionData; // 0x2b8(0x10)
	struct FDataTableRowHandle PreviousTabInputActionData; // 0x2c8(0x10)
	bool bAutoListenForInput; // 0x2d8(0x01)
	char pad_2D9[0x3]; // 0x2d9(0x03)
	struct TWeakObjectPtr<struct UCommonAnimatedSwitcher> LinkedSwitcher; // 0x2dc(0x08)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UCommonButtonGroupBase* TabButtonGroup; // 0x2e8(0x08)
	char pad_2F0[0x8]; // 0x2f0(0x08)
	struct TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x2f8(0x50)
	char pad_348[0x10]; // 0x348(0x10)

	void SetTabVisibility(struct FName TabNameID, enum class ESlateVisibility NewVisibility); // Function CommonUI.CommonTabListWidgetBase.SetTabVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0xbe3820
	void SetTabInteractionEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xbe3750
	void SetTabEnabled(struct FName TabNameID, bool bEnable); // Function CommonUI.CommonTabListWidgetBase.SetTabEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xbe3680
	void SetListeningForInput(bool bShouldListen); // Function CommonUI.CommonTabListWidgetBase.SetListeningForInput // (Native|Public|BlueprintCallable) // @ game+0xbe3260
	void SetLinkedSwitcher(struct UCommonAnimatedSwitcher* CommonSwitcher); // Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher // (Native|Public|BlueprintCallable) // @ game+0xbe31d0
	bool SelectTabByID(struct FName TabNameID, bool bSuppressClickFeedback); // Function CommonUI.CommonTabListWidgetBase.SelectTabByID // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2910
	bool RemoveTab(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.RemoveTab // (Final|Native|Public|BlueprintCallable) // @ game+0xbe26c0
	void RemoveAllTabs(); // Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs // (Final|Native|Public|BlueprintCallable) // @ game+0xbe26a0
	bool RegisterTab(struct FName TabNameID, struct UCommonButtonBase* ButtonWidgetType, struct UWidget* ContentWidget); // Function CommonUI.CommonTabListWidgetBase.RegisterTab // (Final|Native|Public|BlueprintCallable) // @ game+0xbe2590
	void OnTabSelected__DelegateSignature(struct FName TabId); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	void OnTabButtonRemoval__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	void OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x2d656b0
	void HandleTabRemoval(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval // (Native|Event|Protected|BlueprintEvent) // @ game+0xbe1db0
	void HandleTabCreation(struct FName TabNameID, struct UCommonButtonBase* TabButton); // Function CommonUI.CommonTabListWidgetBase.HandleTabCreation // (Native|Event|Protected|BlueprintEvent) // @ game+0xbe1ce0
	void HandleTabButtonSelected(struct UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected // (Final|Native|Protected) // @ game+0xbe1c10
	void HandlePreviousTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0xbe1b80
	void HandlePreLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void HandlePostLinkedSwitcherChanged_BP(); // Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void HandleNextTabInputAction(bool& bPassThrough); // Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction // (Final|Native|Protected|HasOutParms) // @ game+0xbe1af0
	struct FName GetTabIdAtIndex(int32_t Index); // Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1a30
	int32_t GetTabCount(); // Function CommonUI.CommonTabListWidgetBase.GetTabCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1a00
	struct UCommonButtonBase* GetTabButtonBaseByID(struct FName TabNameID); // Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID // (Final|Native|Protected|BlueprintCallable) // @ game+0xbe1960
	struct FName GetSelectedTabId(); // Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1880
	struct UCommonAnimatedSwitcher* GetLinkedSwitcher(); // Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe17d0
	struct FName GetActiveTab(); // Function CommonUI.CommonTabListWidgetBase.GetActiveTab // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe1650
	void DisableTabWithReason(struct FName TabNameID, struct FText& reason); // Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xbe14a0
};

// Class CommonUI.CommonTextStyle
// Size: 0x1c0 (Inherited: 0x28)
struct UCommonTextStyle : UObject {
	struct FSlateFontInfo Font; // 0x28(0x60)
	struct FLinearColor Color; // 0x88(0x10)
	bool bUsesDropShadow; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FVector2D ShadowOffset; // 0x9c(0x08)
	struct FLinearColor ShadowColor; // 0xa4(0x10)
	struct FMargin Margin; // 0xb4(0x10)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FSlateBrush StrikeBrush; // 0xd0(0xe0)
	float LineHeightPercentage; // 0x1b0(0x04)
	char pad_1B4[0xc]; // 0x1b4(0x0c)

	void GetStrikeBrush(struct FSlateBrush& OutStrikeBrush); // Function CommonUI.CommonTextStyle.GetStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7c40
	void GetShadowOffset(struct FVector2D& OutShadowOffset); // Function CommonUI.CommonTextStyle.GetShadowOffset // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7bb0
	void GetShadowColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetShadowColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7b20
	void GetMargin(struct FMargin& OutMargin); // Function CommonUI.CommonTextStyle.GetMargin // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe79f0
	float GetLineHeightPercentage(); // Function CommonUI.CommonTextStyle.GetLineHeightPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe79c0
	void GetFont(struct FSlateFontInfo& OutFont); // Function CommonUI.CommonTextStyle.GetFont // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7770
	void GetColor(struct FLinearColor& OutColor); // Function CommonUI.CommonTextStyle.GetColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe76e0
};

// Class CommonUI.CommonTextScrollStyle
// Size: 0x40 (Inherited: 0x28)
struct UCommonTextScrollStyle : UObject {
	float Speed; // 0x28(0x04)
	float StartDelay; // 0x2c(0x04)
	float EndDelay; // 0x30(0x04)
	float FadeInDelay; // 0x34(0x04)
	float FadeOutDelay; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class CommonUI.CommonTileView
// Size: 0xc10 (Inherited: 0xc10)
struct UCommonTileView : UTileView {
};

// Class CommonUI.CommonTreeView
// Size: 0xc50 (Inherited: 0xc50)
struct UCommonTreeView : UTreeView {
};

// Class CommonUI.CommonUIActionRouterBase
// Size: 0x100 (Inherited: 0x30)
struct UCommonUIActionRouterBase : ULocalPlayerSubsystem {
	char pad_30[0xd0]; // 0x30(0xd0)
};

// Class CommonUI.CommonUIEditorSettings
// Size: 0xa8 (Inherited: 0x28)
struct UCommonUIEditorSettings : UObject {
	struct TSoftClassPtr<UObject> TemplateTextStyle; // 0x28(0x28)
	struct TSoftClassPtr<UObject> TemplateButtonStyle; // 0x50(0x28)
	struct TSoftClassPtr<UObject> TemplateBorderStyle; // 0x78(0x28)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class CommonUI.CommonUIInputSettings
// Size: 0x78 (Inherited: 0x28)
struct UCommonUIInputSettings : UObject {
	bool bLinkCursorToGamepadFocus; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t UIActionProcessingPriority; // 0x2c(0x04)
	struct TArray<struct FUIInputAction> InputActions; // 0x30(0x10)
	struct TArray<struct FUIInputAction> ActionOverrides; // 0x40(0x10)
	struct FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x28)
};

// Class CommonUI.CommonUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UCommonUILibrary : UBlueprintFunctionLibrary {

	struct UWidget* FindParentWidgetOfType(struct UWidget* StartingWidget, struct UWidget* Type); // Function CommonUI.CommonUILibrary.FindParentWidgetOfType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbe7590
};

// Class CommonUI.CommonUIRichTextData
// Size: 0x30 (Inherited: 0x28)
struct UCommonUIRichTextData : UObject {
	struct UDataTable* InlineIconSet; // 0x28(0x08)
};

// Class CommonUI.CommonUISettings
// Size: 0x1b0 (Inherited: 0x28)
struct UCommonUISettings : UObject {
	bool bAutoLoadData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UObject> DefaultImageResourceObject; // 0x30(0x28)
	struct TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial; // 0x58(0x28)
	struct TSoftClassPtr<UObject> DefaultRichTextDataClass; // 0x80(0x28)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UObject* DefaultImageResourceObjectInstance; // 0xb0(0x08)
	struct UMaterialInterface* DefaultThrobberMaterialInstance; // 0xb8(0x08)
	struct FSlateBrush DefaultThrobberBrush; // 0xc0(0xe0)
	struct UCommonUIRichTextData* RichTextDataInstance; // 0x1a0(0x08)
	char pad_1A8[0x8]; // 0x1a8(0x08)
};

// Class CommonUI.CommonUISubsystemBase
// Size: 0x40 (Inherited: 0x30)
struct UCommonUISubsystemBase : UGameInstanceSubsystem {
	char pad_30[0x10]; // 0x30(0x10)

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, struct FName& GamepadName); // Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7840
};

// Class CommonUI.CommonVideoPlayer
// Size: 0x2a0 (Inherited: 0x138)
struct UCommonVideoPlayer : UWidget {
	struct UMediaSource* Video; // 0x138(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x140(0x08)
	struct UMediaTexture* MediaTexture; // 0x148(0x08)
	struct UMaterial* VideoMaterial; // 0x150(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0x158(0x08)
	struct FSlateBrush VideoBrush; // 0x160(0xe0)
	char pad_240[0x60]; // 0x240(0x60)
};

// Class CommonUI.CommonVisibilitySwitcher
// Size: 0x188 (Inherited: 0x160)
struct UCommonVisibilitySwitcher : UOverlay {
	enum class ESlateVisibility ShownVisibility; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	int32_t ActiveWidgetIndex; // 0x164(0x04)
	bool bAutoActivateSlot; // 0x168(0x01)
	bool bActivateFirstSlotOnAdding; // 0x169(0x01)
	char pad_16A[0x1e]; // 0x16a(0x1e)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xbe81f0
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget // (Final|Native|Public|BlueprintCallable) // @ game+0xbe80d0
	void IncrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xbe7f30
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7690
	struct UWidget* GetActiveWidget(); // Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7660
	void DecrementActiveWidgetIndex(bool bAllowWrapping); // Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex // (Final|Native|Public|BlueprintCallable) // @ game+0xbe74e0
	void DeactivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0xbe74c0
	void ActivateVisibleSlot(); // Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot // (Final|Native|Public|BlueprintCallable) // @ game+0xbe7390
};

// Class CommonUI.CommonVisibilitySwitcherSlot
// Size: 0x68 (Inherited: 0x58)
struct UCommonVisibilitySwitcherSlot : UOverlaySlot {
	char pad_58[0x10]; // 0x58(0x10)
};

// Class CommonUI.CommonVisibilityWidgetBase
// Size: 0x380 (Inherited: 0x320)
struct UCommonVisibilityWidgetBase : UCommonBorder {
	struct TMap<struct FName, bool> VisibilityControls; // 0x320(0x50)
	bool bShowForGamepad; // 0x370(0x01)
	bool bShowForMouseAndKeyboard; // 0x371(0x01)
	bool bShowForTouch; // 0x372(0x01)
	enum class ESlateVisibility VisibleType; // 0x373(0x01)
	enum class ESlateVisibility HiddenType; // 0x374(0x01)
	char pad_375[0xb]; // 0x375(0x0b)

	struct TArray<struct FName> GetRegisteredPlatforms(); // Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms // (Final|Native|Static|Protected) // @ game+0xbe7a90
};

// Class CommonUI.CommonVisualAttachment
// Size: 0x1a0 (Inherited: 0x188)
struct UCommonVisualAttachment : USizeBox {
	struct FVector2D ContentAnchor; // 0x188(0x08)
	char pad_190[0x10]; // 0x190(0x10)
};

// Class CommonUI.CommonWidgetCarousel
// Size: 0x190 (Inherited: 0x150)
struct UCommonWidgetCarousel : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x158(0x10)
	char pad_168[0x28]; // 0x168(0x28)

	void SetActiveWidgetIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // @ game+0xbe8280
	void SetActiveWidget(struct UWidget* Widget); // Function CommonUI.CommonWidgetCarousel.SetActiveWidget // (Native|Public|BlueprintCallable) // @ game+0xbe8160
	void PreviousPage(); // Function CommonUI.CommonWidgetCarousel.PreviousPage // (Final|Native|Public|BlueprintCallable) // @ game+0xbe7fe0
	void NextPage(); // Function CommonUI.CommonWidgetCarousel.NextPage // (Final|Native|Public|BlueprintCallable) // @ game+0xbe7fc0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe7cf0
	int32_t GetActiveWidgetIndex(); // Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xbe76b0
	void EndAutoScrolling(); // Function CommonUI.CommonWidgetCarousel.EndAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0xbe7570
	void BeginAutoScrolling(float ScrollInterval); // Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0xbe7440
};

// Class CommonUI.CommonWidgetCarouselNavBar
// Size: 0x180 (Inherited: 0x138)
struct UCommonWidgetCarouselNavBar : UWidget {
	struct UCommonButtonBase* ButtonWidgetType; // 0x138(0x08)
	struct FMargin ButtonPadding; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)
	struct UCommonWidgetCarousel* LinkedCarousel; // 0x160(0x08)
	struct UCommonButtonGroupBase* ButtonGroup; // 0x168(0x08)
	struct TArray<struct UCommonButtonBase*> Buttons; // 0x170(0x10)

	void SetLinkedCarousel(struct UCommonWidgetCarousel* CommonCarousel); // Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel // (Final|Native|Public|BlueprintCallable) // @ game+0xbe83a0
	void HandlePageChanged(struct UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged // (Final|Native|Protected) // @ game+0xbe7e60
	void HandleButtonClicked(struct UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked // (Final|Native|Protected) // @ game+0xbe7d90
};

