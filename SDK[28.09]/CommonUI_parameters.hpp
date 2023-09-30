#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActionWidget.SetInputActions
struct UCommonActionWidget_SetInputActions_Params
{
public:
	TArray<struct FDataTableRowHandle>           NewInputActions;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActionWidget.SetInputAction
struct UCommonActionWidget_SetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonActionWidget.SetIconRimBrush
struct UCommonActionWidget_SetIconRimBrush_Params
{
public:
	struct FSlateBrush                           InIconRimBrush;                                    // 0x0(0x98)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActionWidget.IsHeldAction
struct UCommonActionWidget_IsHeldAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonActionWidget.GetIcon
struct UCommonActionWidget_GetIcon_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0x98)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonActionWidget.GetDisplayText
struct UCommonActionWidget_GetDisplayText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct UCommonUserWidget_SetConsumePointerInput_Params
{
public:
	bool                                         bInConsumePointerInput;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActivatableWidget.IsActivated
struct UCommonActivatableWidget_IsActivated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
struct UCommonActivatableWidget_BP_OnHandleBackAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
struct UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
struct UCommonActivatableWidgetContainerBase_RemoveWidget_Params
{
public:
	class UCommonActivatableWidget*              WidgetToRemove;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
struct UCommonActivatableWidgetContainerBase_GetActiveWidget_Params
{
public:
	class UCommonActivatableWidget*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
struct UCommonActivatableWidgetContainerBase_BP_AddWidget_Params
{
public:
	TSubclassOf<class UCommonActivatableWidget>  ActivatableWidgetClass;                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
struct UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params
{
public:
	bool                                         bDisableAnimation;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.HasWidgets
struct UCommonAnimatedSwitcher_HasWidgets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
struct UCommonAnimatedSwitcher_ActivatePreviousWidget_Params
{
public:
	bool                                         bCanWrap;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
struct UCommonAnimatedSwitcher_ActivateNextWidget_Params
{
public:
	bool                                         bCanWrap;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonBorder.SetStyle
struct UCommonBorder_SetStyle_Params
{
public:
	TSubclassOf<class UCommonBorderStyle>        InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
struct UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params
{
public:
	bool                                         bShouldOnlyDisplayOwningPlayerActions;             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.SetTriggeringInputAction
struct UCommonButtonBase_SetTriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.SetTriggeredInputAction
struct UCommonButtonBase_SetTriggeredInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetTouchMethod
struct UCommonButtonBase_SetTouchMethod_Params
{
public:
	enum class EButtonTouchMethod                InTouchMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetStyle
struct UCommonButtonBase_SetStyle_Params
{
public:
	TSubclassOf<class UCommonButtonStyle>        InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
struct UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params
{
public:
	bool                                         bInShouldUseFallbackDefaultInputAction;            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
struct UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params
{
public:
	bool                                         bInShouldSelectUponReceivingFocus;                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function CommonUI.CommonButtonBase.SetSelectedInternal
struct UCommonButtonBase_SetSelectedInternal_Params
{
public:
	bool                                         bInSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSound;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBroadCast;                                        // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetPressMethod
struct UCommonButtonBase_SetPressMethod_Params
{
public:
	enum class EButtonPressMethod                InPressMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetPressedSoundOverride
struct UCommonButtonBase_SetPressedSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetMinDimensions
struct UCommonButtonBase_SetMinDimensions_Params
{
public:
	int32                                        InMinWidth;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMinHeight;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsToggleable
struct UCommonButtonBase_SetIsToggleable_Params
{
public:
	bool                                         bInIsToggleable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsSelected
struct UCommonButtonBase_SetIsSelected_Params
{
public:
	bool                                         InSelected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveClickFeedback;                                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsSelectable
struct UCommonButtonBase_SetIsSelectable_Params
{
public:
	bool                                         bInIsSelectable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
struct UCommonButtonBase_SetIsInteractionEnabled_Params
{
public:
	bool                                         bInIsInteractionEnabled;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
struct UCommonButtonBase_SetIsInteractableWhenSelected_Params
{
public:
	bool                                         bInInteractableWhenSelected;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsFocusable
struct UCommonButtonBase_SetIsFocusable_Params
{
public:
	bool                                         bInIsFocusable;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
struct UCommonButtonBase_SetInputActionProgressMaterial_Params
{
public:
	struct FSlateBrush                           InProgressMaterialBrush;                           // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  InProgressMaterialParam;                           // 0x98(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
struct UCommonButtonBase_SetHoveredSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetClickMethod
struct UCommonButtonBase_SetClickMethod_Params
{
public:
	enum class EButtonClickMethod                InClickMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
struct UCommonButtonBase_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.OnInputMethodChanged
struct UCommonButtonBase_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonBase.OnActionProgress
struct UCommonButtonBase_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonBase.NativeOnActionProgress
struct UCommonButtonBase_NativeOnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.IsPressed
struct UCommonButtonBase_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.IsInteractionEnabled
struct UCommonButtonBase_IsInteractionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
struct UCommonButtonBase_HandleTriggeringActionCommited_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetStyle
struct UCommonButtonBase_GetStyle_Params
{
public:
	class UCommonButtonStyle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
struct UCommonButtonBase_GetSingleMaterialStyleMID_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
struct UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.GetSelected
struct UCommonButtonBase_GetSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.GetIsFocusable
struct UCommonButtonBase_GetIsFocusable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonButtonBase.GetInputAction
struct UCommonButtonBase_GetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
struct UCommonButtonBase_GetCurrentTextStyleClass_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentTextStyle
struct UCommonButtonBase_GetCurrentTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
struct UCommonButtonBase_GetCurrentCustomPadding_Params
{
public:
	struct FMargin                               OutCustomPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
struct UCommonButtonBase_GetCurrentButtonPadding_Params
{
public:
	struct FMargin                               OutButtonPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonButtonBase.DisableButtonWithReason
struct UCommonButtonBase_DisableButtonWithReason_Params
{
public:
	class FText                                  DisabledReason;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct UCommonButtonStyle_GetSelectedTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct UCommonButtonStyle_GetSelectedPressedBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct UCommonButtonStyle_GetSelectedBaseBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct UCommonButtonStyle_GetNormalTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct UCommonButtonStyle_GetNormalPressedBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct UCommonButtonStyle_GetNormalHoveredBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct UCommonButtonStyle_GetNormalBaseBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct UCommonButtonStyle_GetMaterialBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct UCommonButtonStyle_GetDisabledTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct UCommonButtonStyle_GetDisabledBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonStyle.GetCustomPadding
struct UCommonButtonStyle_GetCustomPadding_Params
{
public:
	struct FMargin                               OutCustomPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonStyle.GetButtonPadding
struct UCommonButtonStyle_GetButtonPadding_Params
{
public:
	struct FMargin                               OutButtonPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
struct UCommonButtonGroupBase_SetSelectionRequired_Params
{
public:
	bool                                         bRequireSelection;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
struct UCommonButtonGroupBase_SelectPreviousButton_Params
{
public:
	bool                                         bAllowWrap;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SelectNextButton
struct UCommonButtonGroupBase_SelectNextButton_Params
{
public:
	bool                                         bAllowWrap;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
struct UCommonButtonGroupBase_SelectButtonAtIndex_Params
{
public:
	int32                                        ButtonIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
struct UCommonButtonGroupBase_OnSelectionStateChangedBase_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
struct UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
struct UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
struct UCommonButtonGroupBase_OnButtonBaseUnhovered_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
struct UCommonButtonGroupBase_OnButtonBaseHovered_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.HasAnyButtons
struct UCommonButtonGroupBase_HasAnyButtons_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
struct UCommonButtonGroupBase_GetSelectedButtonIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
struct UCommonButtonGroupBase_GetSelectedButtonBase_Params
{
public:
	class UCommonButtonBase*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
struct UCommonButtonGroupBase_GetHoveredButtonIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetButtonCount
struct UCommonButtonGroupBase_GetButtonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
struct UCommonButtonGroupBase_GetButtonBaseAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroupBase.FindButtonIndex
struct UCommonButtonGroupBase_FindButtonIndex_Params
{
public:
	class UCommonButtonBase*                     ButtonToFind;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct UCommonTextBlock_SetWrapTextWidth_Params
{
public:
	int32                                        InWrapTextAt;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTextBlock.SetTextCase
struct UCommonTextBlock_SetTextCase_Params
{
public:
	bool                                         bUseAllCaps;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTextBlock.SetStyle
struct UCommonTextBlock_SetStyle_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
public:
	struct FTimespan                             InTimespan;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
public:
	struct FDateTime                             InDateTime;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAsCountdown;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InRefreshDelay;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
struct UCommonDateTimeTextBlock_SetCountDownCompletionText_Params
{
public:
	class FText                                  InCompletionText;                                  // 0x0(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
struct UCommonLazyImage_SetMaterialTextureParamName_Params
{
public:
	class FName                                  TextureParamName;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct UCommonLazyImage_SetBrushFromLazyTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             LazyTexture;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
{
public:
	TSoftObjectPtr<class UMaterialInterface>     LazyMaterial;                                      // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                LazyObject;                                        // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchTextureSize;                                 // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_949[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLazyImage.IsLoading
struct UCommonLazyImage_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CommonUI.CommonLazyWidget.SetLazyContent
struct UCommonLazyWidget_SetLazyContent_Params
{
public:
	TSoftClassPtr<class UUserWidget>             SoftWidget;                                        // 0x0(0x28)(ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLazyWidget.IsLoading
struct UCommonLazyWidget_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonLazyWidget.GetContent
struct UCommonLazyWidget_GetContent_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListView.SetEntrySpacing
struct UCommonListView_SetEntrySpacing_Params
{
public:
	float                                        InEntrySpacing;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
struct ULoadGuardSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.LoadGuardSlot.SetPadding
struct ULoadGuardSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
struct ULoadGuardSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonLoadGuard.SetLoadingText
struct UCommonLoadGuard_SetLoadingText_Params
{
public:
	class FText                                  InLoadingText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLoadGuard.SetIsLoading
struct UCommonLoadGuard_SetIsLoading_Params
{
public:
	bool                                         bInIsLoading;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLoadGuard.IsLoading
struct UCommonLoadGuard_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                InLazyAsset;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAssetLoaded;                                     // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonNumericTextBlock.SetNumericType
struct UCommonNumericTextBlock_SetNumericType_Params
{
public:
	enum class ECommonNumericType                InNumericType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct UCommonNumericTextBlock_SetCurrentValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastValue;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewValue;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HadCompleted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct UCommonNumericTextBlock_InterpolateToValue_Params
{
public:
	float                                        TargetValue;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumInterpolationDuration;                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumChangeRate;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutroOffset;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct UCommonNumericTextBlock_GetTargetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.SetSelectedItem
struct UCommonRotator_SetSelectedItem_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonRotator.PopulateTextLabels
struct UCommonRotator_PopulateTextLabels_Params
{
public:
	TArray<class FText>                          Labels;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonRotator.GetSelectedText
struct UCommonRotator_GetSelectedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.GetSelectedIndex
struct UCommonRotator_GetSelectedIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
struct UCommonRotator_BP_OnOptionsPopulated_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.BP_OnOptionSelected
struct UCommonRotator_BP_OnOptionSelected_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
struct UCommonTabListWidgetBase_SetTabVisibility_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  NewVisibility;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6A[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
struct UCommonTabListWidgetBase_SetTabInteractionEnabled_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6B[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
struct UCommonTabListWidgetBase_SetTabEnabled_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
struct UCommonTabListWidgetBase_SetListeningForInput_Params
{
public:
	bool                                         bShouldListen;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
struct UCommonTabListWidgetBase_SetLinkedSwitcher_Params
{
public:
	class UCommonAnimatedSwitcher*               CommonSwitcher;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SelectTabByID
struct UCommonTabListWidgetBase_SelectTabByID_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressClickFeedback;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A83[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.RemoveTab
struct UCommonTabListWidgetBase_RemoveTab_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A86[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.RegisterTab
struct UCommonTabListWidgetBase_RegisterTab_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButtonBase>         ButtonWidgetType;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ContentWidget;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
struct UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
struct UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
struct UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
struct UCommonTabListWidgetBase_HandleTabRemoval_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
struct UCommonTabListWidgetBase_HandleTabCreation_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
struct UCommonTabListWidgetBase_HandleTabButtonSelected_Params
{
public:
	class UCommonButtonBase*                     SelectedTabButton;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
struct UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
struct UCommonTabListWidgetBase_HandleNextTabInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
struct UCommonTabListWidgetBase_GetTabIdAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetTabCount
struct UCommonTabListWidgetBase_GetTabCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
struct UCommonTabListWidgetBase_GetTabButtonBaseByID_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
struct UCommonTabListWidgetBase_GetSelectedTabId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
struct UCommonTabListWidgetBase_GetLinkedSwitcher_Params
{
public:
	class UCommonAnimatedSwitcher*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetActiveTab
struct UCommonTabListWidgetBase_GetActiveTab_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
struct UCommonTabListWidgetBase_DisableTabWithReason_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Reason;                                            // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function CommonUI.CommonTextStyle.GetStrikeBrush
struct UCommonTextStyle_GetStrikeBrush_Params
{
public:
	struct FSlateBrush                           OutStrikeBrush;                                    // 0x0(0x98)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTextStyle.GetShadowOffset
struct UCommonTextStyle_GetShadowOffset_Params
{
public:
	struct FVector2D                             OutShadowOffset;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetShadowColor
struct UCommonTextStyle_GetShadowColor_Params
{
public:
	struct FLinearColor                          OutColor;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetMargin
struct UCommonTextStyle_GetMargin_Params
{
public:
	struct FMargin                               OutMargin;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct UCommonTextStyle_GetLineHeightPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function CommonUI.CommonTextStyle.GetFont
struct UCommonTextStyle_GetFont_Params
{
public:
	struct FSlateFontInfo                        OutFont;                                           // 0x0(0x60)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetColor
struct UCommonTextStyle_GetColor_Params
{
public:
	struct FLinearColor                          OutColor;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
public:
	class UWidget*                               StartingWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   Type;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
struct UCommonUISubsystemBase_GetInputActionButtonIcon_Params
{
public:
	struct FDataTableRowHandle                   InputActionRowHandle;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GamepadName;                                       // 0x14(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x20(0x98)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
struct UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
struct UCommonVisibilitySwitcher_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
struct UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params
{
public:
	bool                                         bAllowWrapping;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
struct UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
struct UCommonVisibilitySwitcher_GetActiveWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
struct UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params
{
public:
	bool                                         bAllowWrapping;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonVisibilityWidgetBase.GetRegisteredPlatforms
struct UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct UCommonWidgetCarousel_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B96[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct UCommonWidgetCarousel_BeginAutoScrolling_Params
{
public:
	float                                        ScrollInterval;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
struct UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params
{
public:
	class UCommonWidgetCarousel*                 CommonCarousel;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
struct UCommonWidgetCarouselNavBar_HandlePageChanged_Params
{
public:
	class UCommonWidgetCarousel*                 CommonCarousel;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
struct UCommonWidgetCarouselNavBar_HandleButtonClicked_Params
{
public:
	class UCommonButtonBase*                     AssociatedButton;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


