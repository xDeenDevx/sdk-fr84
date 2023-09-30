/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CommonUI.

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0020 (0x000598 - 0x0005B8)
class UAnalogSlider : public USlider
{ 
public:
	FMulticastInlineDelegate                           OnAnalogCapture;                                            // 0x0598   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x05A8   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonActionHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x0248 (0x000138 - 0x000380)
class UCommonActionWidget : public UWidget
{ 
public:
	FMulticastInlineDelegate                           OnInputMethodChanged;                                       // 0x0138   (0x0010)  
	FSlateBrush                                        ProgressMaterialBrush;                                      // 0x0148   (0x0098)  
	FName                                              ProgressMaterialParam;                                      // 0x01E0   (0x0008)  
	FSlateBrush                                        IconRimBrush;                                               // 0x01E8   (0x0098)  
	TArray<FDataTableRowHandle>                        InputActions;                                               // 0x0280   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0290   (0x0008)  MISSED
	UMaterialInstanceDynamic*                          ProgressDynamicMaterial;                                    // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x02A0   (0x00E0)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0xbb7cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0xbb7a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0xbb7890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	bool IsHeldAction();                                                                                                     // [0xbb7410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	FSlateBrush GetIcon();                                                                                                   // [0xbb64a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	FText GetDisplayText();                                                                                                  // [0xbb6400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0028 (0x000260 - 0x000288)
class UCommonUserWidget : public UUserWidget
{ 
public:
	bool                                               bConsumePointerInput;                                       // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_6[0x27];                                      // 0x0261   (0x0027)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0xbc2150] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0098 (0x000288 - 0x000320)
class UCommonActivatableWidget : public UCommonUserWidget
{ 
public:
	bool                                               bAutoActivate;                                              // 0x0288   (0x0001)  
	bool                                               bIsBackHandler;                                             // 0x0289   (0x0001)  
	bool                                               bSupportsActivationFocus;                                   // 0x028A   (0x0001)  
	bool                                               bIsModal;                                                   // 0x028B   (0x0001)  
	bool                                               bAutoRestoreFocus;                                          // 0x028C   (0x0001)  
	bool                                               bSetVisibilityOnActivated;                                  // 0x028D   (0x0001)  
	ESlateVisibility                                   ActivatedVisibility;                                        // 0x028E   (0x0001)  
	bool                                               bSetVisibilityOnDeactivated;                                // 0x028F   (0x0001)  
	ESlateVisibility                                   DeactivatedVisibility;                                      // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	FMulticastInlineDelegate                           BP_OnWidgetActivated;                                       // 0x0298   (0x0010)  
	FMulticastInlineDelegate                           BP_OnWidgetDeactivated;                                     // 0x02A8   (0x0010)  
	bool                                               bIsActive;                                                  // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x67];                                      // 0x02B9   (0x0067)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	bool IsActivated();                                                                                                      // [0xbb73f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	void DeactivateWidget();                                                                                                 // [0xbb5ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	bool BP_OnHandleBackAction();                                                                                            // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	void BP_OnDeactivated();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	void BP_OnActivated();                                                                                                   // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	UWidget* BP_GetDesiredFocusTarget();                                                                                     // [0x2649560] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	void ActivateWidget();                                                                                                   // [0xbb5ba0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x0100 (0x000138 - 0x000238)
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
public:
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0138   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0139   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x013A   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x013C   (0x0004)  
	TArray<UCommonActivatableWidget*>                  WidgetList;                                                 // 0x0140   (0x0010)  
	UCommonActivatableWidget*                          DisplayedWidget;                                            // 0x0150   (0x0008)  
	FUserWidgetPool                                    GeneratedWidgetsPool;                                       // 0x0158   (0x0080)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x01D8   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	void RemoveWidget(UCommonActivatableWidget* WidgetToRemove);                                                             // [0xbb75d0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	UCommonActivatableWidget* GetActiveWidget();                                                                             // [0xbb5d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	void ClearWidgets();                                                                                                     // [0xbb5c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	UCommonActivatableWidget* BP_AddWidget(UClass* ActivatableWidgetClass);                                                  // [0xbb5bc0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x0010 (0x000238 - 0x000248)
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{ 
public:
	UClass*                                            RootContentWidgetClass;                                     // 0x0238   (0x0008)  
	UCommonActivatableWidget*                          RootContentWidget;                                          // 0x0240   (0x0008)  
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x0000 (0x000238 - 0x000238)
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{ 
public:
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0058 (0x000168 - 0x0001C0)
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0168   (0x0018)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0180   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0182   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x0184   (0x0004)  
	unsigned char                                      UnknownData02_6[0x38];                                      // 0x0188   (0x0038)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	void SetDisableTransitionAnimation(bool bDisableAnimation);                                                              // [0xbb76e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	bool HasWidgets();                                                                                                       // [0xbb73c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0xbb5b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	void ActivateNextWidget(bool bCanWrap);                                                                                  // [0xbb5a80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{ 
public:
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UCommonBorderStyle : public UObject
{ 
public:
	FSlateBrush                                        Background;                                                 // 0x0028   (0x0098)  


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0xbb5dc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class UCommonBorder : public UBorder
{ 
public:
	UClass*                                            Style;                                                      // 0x02B0   (0x0008)  
	bool                                               bReducePaddingBySafezone;                                   // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02B9   (0x0003)  MISSED
	FMargin                                            MinimumPadding;                                             // 0x02BC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	void SetStyle(UClass* InStyle);                                                                                          // [0xbb8590] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
public:
	UClass*                                            ActionButtonClass;                                          // 0x01F8   (0x0008)  
	bool                                               bDisplayOwningPlayerActionsOnly;                            // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0201   (0x0007)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                      // [0xbb7770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x09D8 (0x000288 - 0x000C60)
class UCommonButtonBase : public UCommonUserWidget
{ 
public:
	int32_t                                            MinWidth;                                                   // 0x0288   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x028C   (0x0004)  
	UClass*                                            Style;                                                      // 0x0290   (0x0008)  
	bool                                               bHideInputAction;                                           // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x02A0   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x02B8   (0x0018)  
	bool                                               bApplyAlphaOnDisable;                                       // 0x02D0:0 (0x0001)  
	bool                                               bSelectable;                                                // 0x02D0:1 (0x0001)  
	bool                                               bShouldSelectUponReceivingFocus;                            // 0x02D0:2 (0x0001)  
	bool                                               bInteractableWhenSelected;                                  // 0x02D0:3 (0x0001)  
	bool                                               bToggleable;                                                // 0x02D0:4 (0x0001)  
	bool                                               bDisplayInputActionWhenNotInteractable;                     // 0x02D0:5 (0x0001)  
	bool                                               bHideInputActionWithKeyboard;                               // 0x02D0:6 (0x0001)  
	bool                                               bShouldUseFallbackDefaultInputAction;                       // 0x02D0:7 (0x0001)  
	unsigned char                                      UnknownData01_4[0x1];                                       // 0x02D1   (0x0001)  MISSED
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x02D2   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x02D3   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02D5   (0x0003)  MISSED
	int32_t                                            InputPriority;                                              // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x02DC   (0x0004)  MISSED
	FDataTableRowHandle                                TriggeringInputAction;                                      // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData04_5[0x10];                                      // 0x02F0   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnSelectedChangedBase;                                      // 0x0300   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseClicked;                                        // 0x0310   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseDoubleClicked;                                  // 0x0320   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseHovered;                                        // 0x0330   (0x0010)  
	FMulticastInlineDelegate                           OnButtonBaseUnhovered;                                      // 0x0340   (0x0010)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x0350   (0x0004)  MISSED
	bool                                               bIsPersistentBinding;                                       // 0x0354   (0x0001)  
	ECommonInputMode                                   InputModeOverride;                                          // 0x0355   (0x0001)  
	unsigned char                                      UnknownData06_5[0x32];                                      // 0x0356   (0x0032)  MISSED
	UMaterialInstanceDynamic*                          SingleMaterialStyleMID;                                     // 0x0388   (0x0008)  
	FButtonStyle                                       NormalStyle;                                                // 0x0390   (0x02B8)  
	FButtonStyle                                       SelectedStyle;                                              // 0x0648   (0x02B8)  
	FButtonStyle                                       DisabledStyle;                                              // 0x0900   (0x02B8)  
	bool                                               bStopDoubleClickPropagation;                                // 0x0BB8:0 (0x0001)  
	unsigned char                                      UnknownData07_4[0x9F];                                      // 0x0BB9   (0x009F)  MISSED
	UCommonActionWidget*                               InputActionWidget;                                          // 0x0C58   (0x0008)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	void StopDoubleClickPropagation();                                                                                       // [0xbb8870] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                      // [0xbb87d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                       // [0xbb8730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0xbb86b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	void SetStyle(UClass* InStyle);                                                                                          // [0xbb8620] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                                // [0xbb8500] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0xbb8470] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadCast);                                           // [0xbb8340] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0xbb8230] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	void SetPressedSoundOverride(USoundBase* Sound);                                                                         // [0xbb82b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0xbb8160] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	void SetIsToggleable(bool bInIsToggleable);                                                                              // [0xbb80d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0xbb8000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	void SetIsSelectable(bool bInIsSelectable);                                                                              // [0xbb7f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0xbb7ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                    // [0xbb7e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	void SetIsFocusable(bool bInIsFocusable);                                                                                // [0xbb7dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0xbb7ae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	void SetHoveredSoundOverride(USoundBase* Sound);                                                                         // [0xbb7800] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0xbb7660] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x2649560] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0xbb7550] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	void OnCurrentTextStyleChanged();                                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	void OnActionProgress(float HeldPercent);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	void OnActionComplete();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	void NativeOnActionProgress(float HeldPercent);                                                                          // [0xbb74c0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	void NativeOnActionComplete();                                                                                           // [0xbb74a0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	bool IsPressed();                                                                                                        // [0xbb7470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	bool IsInteractionEnabled();                                                                                             // [0xbb7440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0xbb7320] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	void HandleFocusReceived();                                                                                              // [0xbb7300] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	void HandleButtonReleased();                                                                                             // [0xbb72e0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	void HandleButtonPressed();                                                                                              // [0xbb72c0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	void HandleButtonClicked();                                                                                              // [0xbb72a0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	UCommonButtonStyle* GetStyle();                                                                                          // [0xbb7270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                                   // [0xbb7240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	bool GetShouldSelectUponReceivingFocus();                                                                                // [0xbb7210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	bool GetSelected();                                                                                                      // [0xbb6cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	bool GetIsFocusable();                                                                                                   // [0xbb6600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0xbb6550] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	UClass* GetCurrentTextStyleClass();                                                                                      // [0xbb6160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	UCommonTextStyle* GetCurrentTextStyle();                                                                                 // [0xbb6130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0xbb6090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0xbb5ff0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0xbb5cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	void ClearSelection();                                                                                                   // [0xbb5c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	void BP_OnUnhovered();                                                                                                   // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	void BP_OnSelected();                                                                                                    // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	void BP_OnHovered();                                                                                                     // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	void BP_OnEnabled();                                                                                                     // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	void BP_OnDoubleClicked();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	void BP_OnDisabled();                                                                                                    // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	void BP_OnDeselected();                                                                                                  // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	void BP_OnClicked();                                                                                                     // [0x2649560] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x0010 (0x000C60 - 0x000C70)
class UCommonBoundActionButton : public UCommonButtonBase
{ 
public:
	UCommonTextBlock*                                  Text_ActionName;                                            // 0x0C60   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0C68   (0x0008)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	void OnUpdateInputAction();                                                                                              // [0x2649560] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x05C8 (0x000028 - 0x0005F0)
class UCommonButtonStyle : public UObject
{ 
public:
	bool                                               bSingleMaterial;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSlateBrush                                        SingleMaterialBrush;                                        // 0x0030   (0x0098)  
	FSlateBrush                                        NormalBase;                                                 // 0x00C8   (0x0098)  
	FSlateBrush                                        NormalHovered;                                              // 0x0160   (0x0098)  
	FSlateBrush                                        NormalPressed;                                              // 0x01F8   (0x0098)  
	FSlateBrush                                        SelectedBase;                                               // 0x0290   (0x0098)  
	FSlateBrush                                        SelectedHovered;                                            // 0x0328   (0x0098)  
	FSlateBrush                                        SelectedPressed;                                            // 0x03C0   (0x0098)  
	FSlateBrush                                        Disabled;                                                   // 0x0458   (0x0098)  
	FMargin                                            ButtonPadding;                                              // 0x04F0   (0x0010)  
	FMargin                                            CustomPadding;                                              // 0x0500   (0x0010)  
	int32_t                                            MinWidth;                                                   // 0x0510   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x0514   (0x0004)  
	UClass*                                            NormalTextStyle;                                            // 0x0518   (0x0008)  
	UClass*                                            NormalHoveredTextStyle;                                     // 0x0520   (0x0008)  
	UClass*                                            SelectedTextStyle;                                          // 0x0528   (0x0008)  
	UClass*                                            SelectedHoveredTextStyle;                                   // 0x0530   (0x0008)  
	UClass*                                            DisabledTextStyle;                                          // 0x0538   (0x0008)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0540   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedPressedSlateSound;                                  // 0x0558   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               DisabledPressedSlateSound;                                  // 0x0578   (0x0020)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0598   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedHoveredSlateSound;                                  // 0x05B0   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               DisabledHoveredSlateSound;                                  // 0x05D0   (0x0020)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	UCommonTextStyle* GetSelectedTextStyle();                                                                                // [0xbb71e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0xbb7050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                         // [0xbb7020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0xbb6e90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0xbb6d00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	UCommonTextStyle* GetNormalTextStyle();                                                                                  // [0xbb6ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0xbb6b10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	UCommonTextStyle* GetNormalHoveredTextStyle();                                                                           // [0xbb6ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0xbb6950] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0xbb67c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0xbb6630] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	UCommonTextStyle* GetDisabledTextStyle();                                                                                // [0xbb63d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0xbb6240] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0xbb61a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0xbb5f50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x0060 (0x000498 - 0x0004F8)
class UCommonButtonInternalBase : public UButton
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0498   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnDoubleClicked;                                            // 0x04A8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x04B8   (0x0010)  MISSED
	int32_t                                            MinWidth;                                                   // 0x04C8   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x04CC   (0x0004)  
	bool                                               bButtonEnabled;                                             // 0x04D0   (0x0001)  
	bool                                               bInteractionEnabled;                                        // 0x04D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x26];                                      // 0x04D2   (0x0026)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonWidgetGroupBase : public UObject
{ 
public:
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x00E8 (0x000028 - 0x000110)
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{ 
public:
	FMulticastInlineDelegate                           OnSelectedButtonBaseChanged;                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0038   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnHoveredButtonBaseChanged;                                 // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0060   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnButtonBaseClicked;                                        // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_5[0x18];                                      // 0x0088   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnButtonBaseDoubleClicked;                                  // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x00B0   (0x0018)  MISSED
	FMulticastInlineDelegate                           OnSelectionCleared;                                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData04_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               bSelectionRequired;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1F];                                      // 0x00F1   (0x001F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired
	void SetSelectionRequired(bool bRequireSelection);                                                                       // [0xbbd870] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	void SelectPreviousButton(bool bAllowWrap);                                                                              // [0xbbcb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	void SelectNextButton(bool bAllowWrap);                                                                                  // [0xbbca70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	void SelectButtonAtIndex(int32_t ButtonIndex);                                                                           // [0xbbc9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	void OnSelectionStateChangedBase(UCommonButtonBase* BaseButton, bool bIsSelected);                                       // [0xbbc5d0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	void OnHandleButtonBaseDoubleClicked(UCommonButtonBase* BaseButton);                                                     // [0xbbc520] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	void OnHandleButtonBaseClicked(UCommonButtonBase* BaseButton);                                                           // [0xbbc490] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	void OnButtonBaseUnhovered(UCommonButtonBase* BaseButton);                                                               // [0xbbc400] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	void OnButtonBaseHovered(UCommonButtonBase* BaseButton);                                                                 // [0xbbc370] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	bool HasAnyButtons();                                                                                                    // [0xbbc100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	int32_t GetSelectedButtonIndex();                                                                                        // [0xbbbab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	UCommonButtonBase* GetSelectedButtonBase();                                                                              // [0xbbba80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	int32_t GetHoveredButtonIndex();                                                                                         // [0xbbba20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	int32_t GetButtonCount();                                                                                                // [0xbbb990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                                  // [0xbbb8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	int32_t FindButtonIndex(UCommonButtonBase* ButtonToFind);                                                                // [0xbbb830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	void DeselectAll();                                                                                                      // [0xbbb700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0010 (0x0002B0 - 0x0002C0)
class UCommonCustomNavigation : public UBorder
{ 
public:
	FDelegateProperty                                  OnNavigationEvent;                                          // 0x02B0   (0x0010)  
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0028 (0x0002F8 - 0x000320)
class UCommonTextBlock : public UTextBlock
{ 
public:
	UClass*                                            Style;                                                      // 0x02F8   (0x0008)  
	UClass*                                            ScrollStyle;                                                // 0x0300   (0x0008)  
	bool                                               bDisplayAllCaps;                                            // 0x0308   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x0309   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x030A   (0x0002)  MISSED
	float                                              MobileFontSizeMultiplier;                                   // 0x030C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0310   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0xbc2390] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	void SetTextCase(bool bUseAllCaps);                                                                                      // [0xbc2300] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	void SetStyle(UClass* InStyle);                                                                                          // [0xbc2270] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	void ResetScrollState();                                                                                                 // [0xbc1ef0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0040 (0x000320 - 0x000360)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0320   (0x0040)  MISSED
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x0040 (0x000330 - 0x000370)
class UCommonGameViewportClient : public UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0330   (0x0040)  MISSED
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0000 (0x000980 - 0x000980)
class UCommonHierarchicalScrollBox : public UScrollBox
{ 
public:
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x00D8 (0x000250 - 0x000328)
class UCommonLazyImage : public UImage
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0250   (0x0098)  
	FName                                              MaterialTextureParamName;                                   // 0x02E8   (0x0008)  
	FMulticastInlineDelegate                           BP_OnLoadingStateChanged;                                   // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0300   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	void SetMaterialTextureParamName(FName TextureParamName);                                                                // [0xbbd640] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                                 // [0xbbce30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                        // [0xbbcd70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                         // [0xbbcc60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	bool IsLoading();                                                                                                        // [0xbbc2c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0118 (0x000138 - 0x000250)
class UCommonLazyWidget : public UWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0138   (0x0098)  
	UUserWidget*                                       Content;                                                    // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x01D8   (0x0028)  MISSED
	FMulticastInlineDelegate                           BP_OnLoadingStateChanged;                                   // 0x0200   (0x0010)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0210   (0x0040)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	void SetLazyContent(TWeakObjectPtr<UClass*> SoftWidget);                                                                 // [0xbbd340] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	bool IsLoading();                                                                                                        // [0xbbc2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	UUserWidget* GetContent();                                                                                               // [0xbbb9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0000 (0x000950 - 0x000950)
class UCommonListView : public UListView
{ 
public:
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class ULoadGuardSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0xbbdbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	void SetPadding(FMargin InPadding);                                                                                      // [0xbbd750] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0xbbd230] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0120 (0x000150 - 0x000270)
class UCommonLoadGuard : public UContentWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0150   (0x0098)  
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                          // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01E9   (0x0003)  MISSED
	FMargin                                            ThrobberPadding;                                            // 0x01EC   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	FText                                              LoadingText;                                                // 0x0200   (0x0018)  
	UClass*                                            TextStyle;                                                  // 0x0218   (0x0008)  
	FMulticastInlineDelegate                           BP_OnLoadingStateChanged;                                   // 0x0220   (0x0010)  
	FSoftObjectPath                                    SpinnerMaterialPath;                                        // 0x0230   (0x0018)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0248   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	void SetLoadingText(FText& InLoadingText);                                                                               // [0xbbd570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	void SetIsLoading(bool bInIsLoading);                                                                                    // [0xbbd2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	void OnAssetLoaded__DelegateSignature(UObject* Object);                                                                  // [0x2649560] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	bool IsLoading();                                                                                                        // [0xbbc320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                      // [0xbbb5d0] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x00A0 (0x000320 - 0x0003C0)
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
public:
	FMulticastInlineDelegate                           OnInterpolationStartedEvent;                                // 0x0320   (0x0010)  
	FMulticastInlineDelegate                           OnInterpolationUpdatedEvent;                                // 0x0330   (0x0010)  
	FMulticastInlineDelegate                           OnOutroEvent;                                               // 0x0340   (0x0010)  
	FMulticastInlineDelegate                           OnInterpolationEndedEvent;                                  // 0x0350   (0x0010)  
	float                                              CurrentNumericValue;                                        // 0x0360   (0x0004)  
	ECommonNumericType                                 NumericType;                                                // 0x0364   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0365   (0x0003)  MISSED
	FCommonNumberFormattingOptions                     FormattingSpecification;                                    // 0x0368   (0x0014)  
	float                                              EaseOutInterpolationExponent;                               // 0x037C   (0x0004)  
	float                                              InterpolationUpdateInterval;                                // 0x0380   (0x0004)  
	float                                              PostInterpolationShrinkDuration;                            // 0x0384   (0x0004)  
	bool                                               PerformSizeInterpolation;                                   // 0x0388   (0x0001)  
	bool                                               IsPercentage;                                               // 0x0389   (0x0001)  
	unsigned char                                      UnknownData01_6[0x36];                                      // 0x038A   (0x0036)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0xbbd6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	void SetCurrentValue(float NewValue);                                                                                    // [0xbbd020] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	void OnOutro__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock);                                              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	void OnInterpolationUpdated__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	void OnInterpolationStarted__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock);                               // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	void OnInterpolationEnded__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);              // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	bool IsInterpolatingNumericValue();                                                                                      // [0xbbc290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0xbbc130] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	float GetTargetValue();                                                                                                  // [0xbbbd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonPoolableWidgetInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0038 (0x000720 - 0x000758)
class UCommonRichTextBlock : public URichTextBlock
{ 
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                      // 0x0720   (0x0001)  
	bool                                               bTintInlineIcon;                                            // 0x0721   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0722   (0x0006)  MISSED
	UClass*                                            DefaultTextStyleOverrideClass;                              // 0x0728   (0x0008)  
	float                                              MobileTextBlockScale;                                       // 0x0730   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0734   (0x0004)  MISSED
	UClass*                                            ScrollStyle;                                                // 0x0738   (0x0008)  
	bool                                               bDisplayAllCaps;                                            // 0x0740   (0x0001)  
	unsigned char                                      UnknownData02_6[0x17];                                      // 0x0741   (0x0017)  MISSED
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0058 (0x000C60 - 0x000CB8)
class UCommonRotator : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0C60   (0x0010)  MISSED
	FMulticastInlineDelegate                           OnRotated;                                                  // 0x0C70   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0C80   (0x0018)  MISSED
	UCommonTextBlock*                                  MyText;                                                     // 0x0C98   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0CA0   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	void ShiftTextRight();                                                                                                   // [0xbbdc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	void ShiftTextLeft();                                                                                                    // [0xbbdc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	void SetSelectedItem(int32_t InValue);                                                                                   // [0xbbd7e0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0xbbc6a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	FText GetSelectedText();                                                                                                 // [0xbbbb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	int32_t GetSelectedIndex();                                                                                              // [0xbbbae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	void BP_OnOptionsPopulated(int32_t count);                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	void BP_OnOptionSelected(int32_t Index);                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x00D0 (0x000288 - 0x000358)
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
public:
	FMulticastInlineDelegate                           OnTabSelected;                                              // 0x0288   (0x0010)  
	FMulticastInlineDelegate                           OnTabButtonCreation;                                        // 0x0298   (0x0010)  
	FMulticastInlineDelegate                           OnTabButtonRemoval;                                         // 0x02A8   (0x0010)  
	FDataTableRowHandle                                NextTabInputActionData;                                     // 0x02B8   (0x0010)  
	FDataTableRowHandle                                PreviousTabInputActionData;                                 // 0x02C8   (0x0010)  
	bool                                               bAutoListenForInput;                                        // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02D9   (0x0003)  MISSED
	TWeakObjectPtr<UCommonAnimatedSwitcher*>           LinkedSwitcher;                                             // 0x02DC   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	UCommonButtonGroupBase*                            TabButtonGroup;                                             // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x02F0   (0x0008)  MISSED
	TMap<FName, FCommonRegisteredTabInfo>              RegisteredTabsByID;                                         // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0348   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0xbbdaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0xbbd9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0xbbd900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	void SetListeningForInput(bool bShouldListen);                                                                           // [0xbbd4e0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	void SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher);                                                         // [0xbbd450] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0xbbcb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	bool RemoveTab(FName TabNameID);                                                                                         // [0xbbc940] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	void RemoveAllTabs();                                                                                                    // [0xbbc920] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	bool RegisterTab(FName TabNameID, UClass* ButtonWidgetType, UWidget* ContentWidget);                                     // [0xbbc810] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	void OnTabSelected__DelegateSignature(FName TabId);                                                                      // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	void OnTabButtonRemoval__DelegateSignature(FName TabId, UCommonButtonBase* TabButton);                                   // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	void OnTabButtonCreation__DelegateSignature(FName TabId, UCommonButtonBase* TabButton);                                  // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	void HandleTabRemoval(FName TabNameID, UCommonButtonBase* TabButton);                                                    // [0xbbc030] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton);                                                   // [0xbbbf60] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	void HandleTabButtonSelected(UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                                 // [0xbbbe90] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0xbbbe00] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0xbbbd70] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0xbbbcb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	int32_t GetTabCount();                                                                                                   // [0xbbbc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                                // [0xbbbbe0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	FName GetSelectedTabId();                                                                                                // [0xbbbb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                            // [0xbbba50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	FName GetActiveTab();                                                                                                    // [0xbbb8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	void DisableTabWithReason(FName TabNameID, FText& reason);                                                               // [0xbbb720] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x0140 (0x000028 - 0x000168)
class UCommonTextStyle : public UObject
{ 
public:
	FSlateFontInfo                                     Font;                                                       // 0x0028   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0088   (0x0010)  
	bool                                               bUsesDropShadow;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	FVector2D                                          ShadowOffset;                                               // 0x009C   (0x0008)  
	FLinearColor                                       ShadowColor;                                                // 0x00A4   (0x0010)  
	FMargin                                            Margin;                                                     // 0x00B4   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x00C8   (0x0098)  
	float                                              LineHeightPercentage;                                       // 0x0160   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0164   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush
	void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                        // [0xbb67c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0xbc1aa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	void GetShadowColor(FLinearColor& OutColor);                                                                             // [0xbc1a10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	void GetMargin(FMargin& OutMargin);                                                                                      // [0xbc18e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	float GetLineHeightPercentage();                                                                                         // [0xbc18b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0xbc1600] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	void GetColor(FLinearColor& OutColor);                                                                                   // [0xbc1570] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonTextScrollStyle : public UObject
{ 
public:
	float                                              Speed;                                                      // 0x0028   (0x0004)  
	float                                              StartDelay;                                                 // 0x002C   (0x0004)  
	float                                              EndDelay;                                                   // 0x0030   (0x0004)  
	float                                              FadeInDelay;                                                // 0x0034   (0x0004)  
	float                                              FadeOutDelay;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0000 (0x000970 - 0x000970)
class UCommonTileView : public UTileView
{ 
public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0000 (0x0009A8 - 0x0009A8)
class UCommonTreeView : public UTreeView
{ 
public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x00D0 (0x000030 - 0x000100)
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x0030   (0x00D0)  MISSED
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UCommonUIEditorSettings : public UObject
{ 
public:
	TWeakObjectPtr<UClass*>                            TemplateTextStyle;                                          // 0x0028   (0x0028)  
	TWeakObjectPtr<UClass*>                            TemplateButtonStyle;                                        // 0x0050   (0x0028)  
	TWeakObjectPtr<UClass*>                            TemplateBorderStyle;                                        // 0x0078   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputSettings : public UObject
{ 
public:
	bool                                               bLinkCursorToGamepadFocus;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            UIActionProcessingPriority;                                 // 0x002C   (0x0004)  
	TArray<FUIInputAction>                             InputActions;                                               // 0x0030   (0x0010)  
	TArray<FUIInputAction>                             ActionOverrides;                                            // 0x0040   (0x0010)  
	FCommonAnalogCursorSettings                        AnalogCursorSettings;                                       // 0x0050   (0x0028)  
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonUIRichTextData : public UObject
{ 
public:
	UDataTable*                                        InlineIconSet;                                              // 0x0028   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x0138 (0x000028 - 0x000160)
class UCommonUISettings : public UObject
{ 
public:
	bool                                               bAutoLoadData;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TWeakObjectPtr<UObject*>                           DefaultImageResourceObject;                                 // 0x0030   (0x0028)  
	TWeakObjectPtr<UMaterialInterface*>                DefaultThrobberMaterial;                                    // 0x0058   (0x0028)  
	TWeakObjectPtr<UClass*>                            DefaultRichTextDataClass;                                   // 0x0080   (0x0028)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	UObject*                                           DefaultImageResourceObjectInstance;                         // 0x00B0   (0x0008)  
	UMaterialInterface*                                DefaultThrobberMaterialInstance;                            // 0x00B8   (0x0008)  
	FSlateBrush                                        DefaultThrobberBrush;                                       // 0x00C0   (0x0098)  
	UCommonUIRichTextData*                             RichTextDataInstance;                                       // 0x0158   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x0120 (0x000138 - 0x000258)
class UCommonVideoPlayer : public UWidget
{ 
public:
	UMediaSource*                                      Video;                                                      // 0x0138   (0x0008)  
	UMediaPlayer*                                      MediaPlayer;                                                // 0x0140   (0x0008)  
	UMediaTexture*                                     MediaTexture;                                               // 0x0148   (0x0008)  
	UMaterial*                                         VideoMaterial;                                              // 0x0150   (0x0008)  
	UMediaSoundComponent*                              SoundComponent;                                             // 0x0158   (0x0008)  
	FSlateBrush                                        VideoBrush;                                                 // 0x0160   (0x0098)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x01F8   (0x0060)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0028 (0x000160 - 0x000188)
class UCommonVisibilitySwitcher : public UOverlay
{ 
public:
	ESlateVisibility                                   ShownVisibility;                                            // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0161   (0x0003)  MISSED
	int32_t                                            ActiveWidgetIndex;                                          // 0x0164   (0x0004)  
	bool                                               bAutoActivateSlot;                                          // 0x0168   (0x0001)  
	bool                                               bActivateFirstSlotOnAdding;                                 // 0x0169   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1E];                                      // 0x016A   (0x001E)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	void SetActiveWidgetIndex(int32_t Index);                                                                                // [0xbc2030] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	void SetActiveWidget(UWidget* Widget);                                                                                   // [0xbc1f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0xbc1d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	int32_t GetActiveWidgetIndex();                                                                                          // [0xbc1520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	UWidget* GetActiveWidget();                                                                                              // [0xbc14f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0xbc1370] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	void DeactivateVisibleSlot();                                                                                            // [0xbc1350] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	void ActivateVisibleSlot();                                                                                              // [0xbc1220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0010 (0x000058 - 0x000068)
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilityWidgetBase
/// Size: 0x0058 (0x0002D0 - 0x000328)
class UCommonVisibilityWidgetBase : public UCommonBorder
{ 
public:
	TMap<FName, bool>                                  VisibilityControls;                                         // 0x02D0   (0x0050)  
	bool                                               bShowForGamepad;                                            // 0x0320   (0x0001)  
	bool                                               bShowForMouseAndKeyboard;                                   // 0x0321   (0x0001)  
	bool                                               bShowForTouch;                                              // 0x0322   (0x0001)  
	ESlateVisibility                                   VisibleType;                                                // 0x0323   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x0324   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0325   (0x0003)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms
	TArray<FName> GetRegisteredPlatforms();                                                                                  // [0xbc1980] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0018 (0x000188 - 0x0001A0)
class UCommonVisualAttachment : public USizeBox
{ 
public:
	FVector2D                                          ContentAnchor;                                              // 0x0188   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0190   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0040 (0x000150 - 0x000190)
class UCommonWidgetCarousel : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	FMulticastInlineDelegate                           OnCurrentPageIndexChanged;                                  // 0x0158   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0168   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	void SetActiveWidgetIndex(int32_t Index);                                                                                // [0xbc20c0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	void SetActiveWidget(UWidget* Widget);                                                                                   // [0xbc1fa0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	void PreviousPage();                                                                                                     // [0xbc1e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	void NextPage();                                                                                                         // [0xbc1e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	UWidget* GetWidgetAtIndex(int32_t Index);                                                                                // [0xbc1b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	int32_t GetActiveWidgetIndex();                                                                                          // [0xbc1540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	void EndAutoScrolling();                                                                                                 // [0xbc1400] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	void BeginAutoScrolling(float ScrollInterval);                                                                           // [0xbc12d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0048 (0x000138 - 0x000180)
class UCommonWidgetCarouselNavBar : public UWidget
{ 
public:
	UClass*                                            ButtonWidgetType;                                           // 0x0138   (0x0008)  
	FMargin                                            ButtonPadding;                                              // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0150   (0x0010)  MISSED
	UCommonWidgetCarousel*                             LinkedCarousel;                                             // 0x0160   (0x0008)  
	UCommonButtonGroupBase*                            ButtonGroup;                                                // 0x0168   (0x0008)  
	TArray<UCommonButtonBase*>                         Buttons;                                                    // 0x0170   (0x0010)  


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	void SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel);                                                           // [0xbc21e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	void HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                                        // [0xbc1ca0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	void HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                      // [0xbc1bd0] Final|Native|Protected 
};

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCommonNumberFormattingOptions
{ 
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                               // 0x0000   (0x0001)  
	bool                                               UseGrouping;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinimumIntegralDigits;                                      // 0x0004   (0x0004)  
	int32_t                                            MaximumIntegralDigits;                                      // 0x0008   (0x0004)  
	int32_t                                            MinimumFractionalDigits;                                    // 0x000C   (0x0004)  
	int32_t                                            MaximumFractionalDigits;                                    // 0x0010   (0x0004)  
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCommonRegisteredTabInfo
{ 
	int32_t                                            TabIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UCommonButtonBase*                                 TabButton;                                                  // 0x0008   (0x0008)  
	UWidget*                                           ContentInstance;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCommonInputActionHandlerData
{ 
	FDataTableRowHandle                                InputActionRow;                                             // 0x0000   (0x0010)  
	EInputActionState                                  State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCommonButtonStyleOptionalSlateSound
{ 
	bool                                               bHasSound;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSlateSound                                        Sound;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCommonAnalogCursorSettings
{ 
	int32_t                                            PreprocessorPriority;                                       // 0x0000   (0x0004)  
	bool                                               bEnableCursorAcceleration;                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              CursorAcceleration;                                         // 0x0008   (0x0004)  
	float                                              CursorMaxSpeed;                                             // 0x000C   (0x0004)  
	float                                              CursorDeadZone;                                             // 0x0010   (0x0004)  
	float                                              CursorRadius;                                               // 0x0014   (0x0004)  
	float                                              HoverSlowdownFactor;                                        // 0x0018   (0x0004)  
	float                                              ScrollDeadZone;                                             // 0x001C   (0x0004)  
	float                                              ScrollUpdatePeriod;                                         // 0x0020   (0x0004)  
	float                                              ScrollMultiplier;                                           // 0x0024   (0x0004)  
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0030 (0x000000 - 0x000030)
struct FUIInputAction
{ 
	FUIActionTag                                       ActionTag;                                                  // 0x0000   (0x0008)  
	FText                                              DefaultDisplayName;                                         // 0x0008   (0x0018)  
	TArray<FUIActionKeyMapping>                        KeyMappings;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0020 (0x000000 - 0x000020)
struct FUIActionKeyMapping
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	float                                              HoldTime;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x0000 (0x000008 - 0x000008)
struct FUITag : FGameplayTag
{ 
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x0000 (0x000008 - 0x000008)
struct FUIActionTag : FUITag
{ 
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRichTextIconData : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	TWeakObjectPtr<UObject*>                           ResourceObject;                                             // 0x0020   (0x0028)  
	FVector2D                                          ImageSize;                                                  // 0x0048   (0x0008)  
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x02A8 (0x000008 - 0x0002B0)
struct FCommonInputActionDataBase : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	FText                                              HoldDisplayName;                                            // 0x0020   (0x0018)  
	FCommonInputTypeInfo                               KeyboardInputTypeInfo;                                      // 0x0038   (0x00B8)  
	FCommonInputTypeInfo                               DefaultGamepadInputTypeInfo;                                // 0x00F0   (0x00B8)  
	TMap<FName, FCommonInputTypeInfo>                  GamepadInputOverrides;                                      // 0x01A8   (0x0050)  
	FCommonInputTypeInfo                               TouchInputTypeInfo;                                         // 0x01F8   (0x00B8)  
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FCommonInputTypeInfo
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	EInputActionState                                  OverrrideState;                                             // 0x0018   (0x0001)  
	bool                                               bActionRequiresHold;                                        // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HoldTime;                                                   // 0x001C   (0x0004)  
	FSlateBrush                                        OverrideBrush;                                              // 0x0020   (0x0098)  
};

/// Enum /Script/CommonUI.ECommonNumericType
/// Size: 0x05
enum ECommonNumericType : uint8_t
{
	ECommonNumericType__Number                                                       = 0,
	ECommonNumericType__Percentage                                                   = 1,
	ECommonNumericType__Seconds                                                      = 2,
	ECommonNumericType__Distance                                                     = 3,
	ECommonNumericType__ECommonNumericType_MAX                                       = 4
};

/// Enum /Script/CommonUI.ECommonInputMode
/// Size: 0x04
enum ECommonInputMode : uint8_t
{
	ECommonInputMode__Menu                                                           = 0,
	ECommonInputMode__Game                                                           = 1,
	ECommonInputMode__All                                                            = 2,
	ECommonInputMode__MAX                                                            = 3
};

/// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
/// Size: 0x04
enum ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly                                         = 0,
	ERichTextInlineIconDisplayMode__TextOnly                                         = 1,
	ERichTextInlineIconDisplayMode__IconAndText                                      = 2,
	ERichTextInlineIconDisplayMode__MAX                                              = 3
};

/// Enum /Script/CommonUI.EInputActionState
/// Size: 0x05
enum EInputActionState : uint8_t
{
	EInputActionState__Enabled                                                       = 0,
	EInputActionState__Disabled                                                      = 1,
	EInputActionState__Hidden                                                        = 2,
	EInputActionState__HiddenAndDisabled                                             = 3,
	EInputActionState__EInputActionState_MAX                                         = 4
};

/// Enum /Script/CommonUI.ETransitionCurve
/// Size: 0x08
enum ETransitionCurve : uint8_t
{
	ETransitionCurve__Linear                                                         = 0,
	ETransitionCurve__QuadIn                                                         = 1,
	ETransitionCurve__QuadOut                                                        = 2,
	ETransitionCurve__QuadInOut                                                      = 3,
	ETransitionCurve__CubicIn                                                        = 4,
	ETransitionCurve__CubicOut                                                       = 5,
	ETransitionCurve__CubicInOut                                                     = 6,
	ETransitionCurve__ETransitionCurve_MAX                                           = 7
};

/// Enum /Script/CommonUI.ECommonSwitcherTransition
/// Size: 0x05
enum ECommonSwitcherTransition : uint8_t
{
	ECommonSwitcherTransition__FadeOnly                                              = 0,
	ECommonSwitcherTransition__Horizontal                                            = 1,
	ECommonSwitcherTransition__Vertical                                              = 2,
	ECommonSwitcherTransition__Zoom                                                  = 3,
	ECommonSwitcherTransition__ECommonSwitcherTransition_MAX                         = 4
};

