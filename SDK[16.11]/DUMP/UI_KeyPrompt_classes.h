// WidgetBlueprintGeneratedClass UI_KeyPrompt.UI_KeyPrompt_C
// Size: 0x2b9 (Inherited: 0x260)
struct UUI_KeyPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* BtnKey; // 0x268(0x08)
	struct UOverlay* Overlay_2; // 0x270(0x08)
	struct USolarAdapterWidget* Panel_Shortcut; // 0x278(0x08)
	enum class E_KeyPromptStyle   ; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FString ActionName; // 0x288(0x10)
	enum class E_InputOperationType  �� ; // 0x298(0x01)
	bool bEnableBtn; // 0x299(0x01)
	bool bDisableEmpty; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)
	bool bEnableInputSettingHide; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	int32_t ActionDescLocID; // 0x2b4(0x04)
	bool bEnableHighResolution; // 0x2b8(0x01)

	void SetActionName(struct FString InActionName); // Function UI_KeyPrompt.UI_KeyPrompt_C.SetActionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void RefreshKeyPromptUI(); // Function UI_KeyPrompt.UI_KeyPrompt_C.RefreshKeyPromptUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void GetSplitActionName(struct FString SourceString, struct FString& NewParam); // Function UI_KeyPrompt.UI_KeyPrompt_C.GetSplitActionName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BuildOverrideActionDescParam(int32_t LocTextID, struct FWidgetOverrideParam& WidgetOverrideParam); // Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideActionDescParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BuildOverrideParams(struct TArray<struct FWidgetOverrideParam>& Array); // Function UI_KeyPrompt.UI_KeyPrompt_C.BuildOverrideParams // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetOperationType(enum class E_InputOperationType Type); // Function UI_KeyPrompt.UI_KeyPrompt_C.SetOperationType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_KeyPrompt.UI_KeyPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_KeyPrompt.UI_KeyPrompt_C.BndEvt__BtnKey_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_KeyPrompt(int32_t EntryPoint); // Function UI_KeyPrompt.UI_KeyPrompt_C.ExecuteUbergraph_UI_KeyPrompt // (Final|UbergraphFunction) // @ game+0x2d63a00
	void OnClicked__DelegateSignature(); // Function UI_KeyPrompt.UI_KeyPrompt_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

