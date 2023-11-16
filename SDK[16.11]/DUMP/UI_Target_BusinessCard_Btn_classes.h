// WidgetBlueprintGeneratedClass UI_Target_BusinessCard_Btn.UI_Target_BusinessCard_Btn_C
// Size: 0x2a9 (Inherited: 0x260)
struct UUI_Target_BusinessCard_Btn_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USolarButton* Btn; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UImage* Img_Bg; // 0x278(0x08)
	struct UImage* Img_Border; // 0x280(0x08)
	struct UObject* Img; // 0x288(0x08)
	struct FVector2D Size; // 0x290(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x298(0x10)
	bool Focus; // 0x2a8(0x01)

	void SetBg(bool Focus); // Function UI_Target_BusinessCard_Btn.UI_Target_BusinessCard_Btn_C.SetBg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Target_BusinessCard_Btn.UI_Target_BusinessCard_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UI_Target_BusinessCard_Btn.UI_Target_BusinessCard_Btn_C.BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Target_BusinessCard_Btn(int32_t EntryPoint); // Function UI_Target_BusinessCard_Btn.UI_Target_BusinessCard_Btn_C.ExecuteUbergraph_UI_Target_BusinessCard_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
	void OnClicked__DelegateSignature(); // Function UI_Target_BusinessCard_Btn.UI_Target_BusinessCard_Btn_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

