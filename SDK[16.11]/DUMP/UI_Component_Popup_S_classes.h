// WidgetBlueprintGeneratedClass UI_Component_Popup_S.UI_Component_Popup_S_C
// Size: 0x540 (Inherited: 0x450)
struct UUI_Component_Popup_S_C : USolarPanelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* Exit_Anim; // 0x458(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x460(0x08)
	struct UBackgroundBlur* BlurMask; // 0x468(0x08)
	struct UUI_Component_Btn_C* Btn1; // 0x470(0x08)
	struct UUI_Component_Btn_C* Btn2; // 0x478(0x08)
	struct UUI_Component_Close_C* Btn_Close; // 0x480(0x08)
	struct UNamedSlot* Content; // 0x488(0x08)
	struct URichTextBlock* Context; // 0x490(0x08)
	struct UImage* Mask; // 0x498(0x08)
	struct UCanvasPanel* Panel_Content; // 0x4a0(0x08)
	struct UCanvasPanel* Panel_Popup; // 0x4a8(0x08)
	struct USolarTextBlock* Title; // 0x4b0(0x08)
	bool IsOnlyBG; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct FText TitleText; // 0x4c0(0x18)
	int32_t TitleLocID; // 0x4d8(0x04)
	enum class ESolarSupportLanguages TitlePreviewLang; // 0x4dc(0x01)
	char pad_4DD[0x3]; // 0x4dd(0x03)
	struct FSlateFontSizeForLang TitleSpecialLang; // 0x4e0(0x18)
	bool Use Btn1; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	int32_t Btn1_LocID; // 0x4fc(0x04)
	bool Use Btn2; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	int32_t Btn2_LocID; // 0x504(0x04)
	bool Use Close; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct FMulticastInlineDelegate OnClickedBtnClose; // 0x510(0x10)
	struct FMulticastInlineDelegate OnClickedBtnFrist; // 0x520(0x10)
	struct FMulticastInlineDelegate OnClickedBtnSecond; // 0x530(0x10)

	void HideBtns(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.HideBtns // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Set Btn(bool Btn1_On, int32_t Btn1, int32_t Btn2, bool Btn2_On); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.Set Btn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetClose(bool Use Close); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.SetClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Set Detials(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.Set Detials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Set Title(int32_t Title Loc ID); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.Set Title // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.BndEvt__Btn2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Popup_S(int32_t EntryPoint); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.ExecuteUbergraph_UI_Component_Popup_S // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
	void OnClickedBtnSecond__DelegateSignature(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.OnClickedBtnSecond__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnClickedBtnFrist__DelegateSignature(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.OnClickedBtnFrist__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnClickedBtnClose__DelegateSignature(); // Function UI_Component_Popup_S.UI_Component_Popup_S_C.OnClickedBtnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

