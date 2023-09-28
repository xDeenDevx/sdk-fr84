// WidgetBlueprintGeneratedClass UI_Component_Btn.UI_Component_Btn_C
// Size: 0x438 (Inherited: 0x350)
struct UUI_Component_Btn_C : UComponentButtonBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UWidgetAnimation* Anim_Remind; // 0x358(0x08)
	struct UWidgetAnimation* Anim_Hold; // 0x360(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x368(0x08)
	struct USolarImage* Img_Btn; // 0x370(0x08)
	struct USolarImage* Img_Icon; // 0x378(0x08)
	struct USolarImage* img_Mask; // 0x380(0x08)
	struct USolarImage* Img_Shadow; // 0x388(0x08)
	struct UCanvasPanel* Panel_Press; // 0x390(0x08)
	struct UScaleBox* ScaleBox; // 0x398(0x08)
	struct USizeBox* Size_Btn; // 0x3a0(0x08)
	struct USizeBox* Size_Icon; // 0x3a8(0x08)
	struct USolarTextBlock* Text_Btn; // 0x3b0(0x08)
	struct UNamedSlot* WidgetSlot; // 0x3b8(0x08)
	enum class E_Type_Btn BtnType; // 0x3c0(0x01)
	enum class E_State_Btn BtnState; // 0x3c1(0x01)
	char pad_3C2[0x2]; // 0x3c2(0x02)
	struct FVector2D BtnSize; // 0x3c4(0x08)
	bool IsUseBtnImag; // 0x3cc(0x01)
	bool IsUseText; // 0x3cd(0x01)
	char pad_3CE[0x2]; // 0x3ce(0x02)
	struct FString Text; // 0x3d0(0x10)
	bool IsUseLocID; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	int32_t LocID; // 0x3e4(0x04)
	enum class ESolarSupportLanguages PreviewLang; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x400(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x410(0x10)
	bool IsIcon; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UObject* Icon; // 0x428(0x08)
	struct FVector2D Icon_Size; // 0x430(0x08)

	void IsAvailable(bool& Availble); // Function UI_Component_Btn.UI_Component_Btn_C.IsAvailable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void SetBtnTxt(struct FString NewParam); // Function UI_Component_Btn.UI_Component_Btn_C.SetBtnTxt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetBtnState(enum class E_State_Btn State); // Function UI_Component_Btn.UI_Component_Btn_C.SetBtnState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	struct FString GetLocalText(); // Function UI_Component_Btn.UI_Component_Btn_C.GetLocalText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Btn.UI_Component_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Component_Btn.UI_Component_Btn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Update(bool IsDesignTime); // Function UI_Component_Btn.UI_Component_Btn_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetBtnText(struct FString  �� , enum class E_State_Btn  �� ); // Function UI_Component_Btn.UI_Component_Btn_C.SetBtnText // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void OnLocLangChanged(struct UObject* Publisher, struct UObject* Payload, struct TArray<struct FString>& MetaData); // Function UI_Component_Btn.UI_Component_Btn_C.OnLocLangChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_Btn(int32_t EntryPoint); // Function UI_Component_Btn.UI_Component_Btn_C.ExecuteUbergraph_UI_Component_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
	void OnReleased__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnClicked__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnPressed__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

