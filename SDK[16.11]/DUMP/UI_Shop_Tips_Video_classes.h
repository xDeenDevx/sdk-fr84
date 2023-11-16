// WidgetBlueprintGeneratedClass UI_Shop_Tips_Video.UI_Shop_Tips_Video_C
// Size: 0x438 (Inherited: 0x400)
struct UUI_Shop_Tips_Video_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarButton* Btn_Play; // 0x408(0x08)
	struct UImage* Img_Video; // 0x410(0x08)
	struct USolarTextBlock* Txt_Special_effect; // 0x418(0x08)
	bool Is Special_Effect; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct FMulticastInlineDelegate OnBtnPlayVideoClicked; // 0x428(0x10)

	void SetSpecialEffect(bool Is Special_Effect); // Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.SetSpecialEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.BndEvt__Btn_Play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Shop_Tips_Video(int32_t EntryPoint); // Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.ExecuteUbergraph_UI_Shop_Tips_Video // (Final|UbergraphFunction) // @ game+0x2d63a00
	void OnBtnPlayVideoClicked__DelegateSignature(); // Function UI_Shop_Tips_Video.UI_Shop_Tips_Video_C.OnBtnPlayVideoClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

