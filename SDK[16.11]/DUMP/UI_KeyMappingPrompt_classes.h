// WidgetBlueprintGeneratedClass UI_KeyMappingPrompt.UI_KeyMappingPrompt_C
// Size: 0x483 (Inherited: 0x400)
struct UUI_KeyMappingPrompt_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Press; // 0x408(0x08)
	struct UOverlay* Empty; // 0x410(0x08)
	struct UOverlay* EmptyDisable; // 0x418(0x08)
	struct UUI_Component_Gamepad_C* Gamepad; // 0x420(0x08)
	struct UHorizontalBox* HorizontalLayout; // 0x428(0x08)
	struct USizeBox* Icon; // 0x430(0x08)
	struct UImage* Img_Bg; // 0x438(0x08)
	struct UUI_Component_Keyboard_C* Keyboard; // 0x440(0x08)
	struct UWidgetSwitcher* KeySwitcher; // 0x448(0x08)
	struct UUI_Component_Mouse_C* Mouse; // 0x450(0x08)
	struct UOverlay* Overlay_Root; // 0x458(0x08)
	struct USolarTextBlock* Txt_Hold; // 0x460(0x08)
	struct UTextBlock* Txt_Key; // 0x468(0x08)
	struct USolarTextBlock* Txt_Shortcut; // 0x470(0x08)
	struct UVerticalBox* VerticalLayOut; // 0x478(0x08)
	enum class E_KeyPromptStyle Style; // 0x480(0x01)
	bool bDisableEmpty; // 0x481(0x01)
	bool bEnableInputSettingHide; // 0x482(0x01)

	void OnInputDeviceChanged_7F7F2A3A4ABE31D4820597AB6891078B(struct FInputDeviceProxy InputDeviceProxy); // DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_7F7F2A3A4ABE31D4820597AB6891078B // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnInputMappingUpdate_937DE854405A1B7AD7D5F888BC5488A0(); // DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_937DE854405A1B7AD7D5F888BC5488A0 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnInputDeviceChanged_F1C469704F9647D3480B2BB5836F82CB(struct FInputDeviceProxy InputDeviceProxy); // DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_F1C469704F9647D3480B2BB5836F82CB // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnInputMappingUpdate_8136090C4741A229C907E28829DB8B6F(); // DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_8136090C4741A229C907E28829DB8B6F // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnInputDeviceChanged_C6DF1C4E467F8455F23163BE762657C7(struct FInputDeviceProxy InputDeviceProxy); // DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputDeviceChanged_C6DF1C4E467F8455F23163BE762657C7 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnInputMappingUpdate_675A3EE34A0026558D165E919A0B430B(); // DelegateFunction UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInputMappingUpdate_675A3EE34A0026558D165E919A0B430B // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnChangeAdapterSlotWidgetParametersCopy(struct TArray<struct FWidgetOverrideParam>& Params); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParametersCopy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetEnableInputSettingHide(bool bEnable); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableInputSettingHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetOperationTypeImpl(enum class E_InputOperationType InType); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetOperationTypeImpl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void RefreshEmptyDisplay(bool bInEmpty); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.RefreshEmptyDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetEnableEmptyDispaly(bool bEnable); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetEnableEmptyDispaly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetStyle(enum class E_KeyPromptStyle Style); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnChangeAdapterSlotWidgetGameplayTag(struct FGameplayTag& InGameplayTag, struct TArray<struct FString>& MetaData); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetGameplayTag // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnChangeAdapterSlotWidgetParameters(struct TArray<struct FWidgetOverrideParam>& Params); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnChangeAdapterSlotWidgetParameters // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void OnLoadAdapterSlotWidgetFinished(); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.OnLoadAdapterSlotWidgetFinished // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_KeyMappingPrompt(int32_t EntryPoint); // Function UI_KeyMappingPrompt.UI_KeyMappingPrompt_C.ExecuteUbergraph_UI_KeyMappingPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

