// WidgetBlueprintGeneratedClass UI_Component_Btn.UI_Component_Btn_C
// Size: 0x4f8 (Inherited: 0x408)
struct UUI_Component_Btn_C : UComponentButtonBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x410(0x08)
	struct UWidgetAnimation* Anim_Remind; // 0x418(0x08)
	struct UWidgetAnimation* Anim_Hold; // 0x420(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x428(0x08)
	struct USolarImage* Img_Btn; // 0x430(0x08)
	struct USolarImage* Img_Icon; // 0x438(0x08)
	struct USolarImage* img_Mask; // 0x440(0x08)
	struct USolarImage* Img_Shadow; // 0x448(0x08)
	struct UCanvasPanel* Panel_Press; // 0x450(0x08)
	struct UScaleBox* ScaleBox; // 0x458(0x08)
	struct USizeBox* Size_Btn; // 0x460(0x08)
	struct USizeBox* Size_Icon; // 0x468(0x08)
	struct USolarTextBlock* Text_Btn; // 0x470(0x08)
	struct UNamedSlot* WidgetSlot; // 0x478(0x08)
	enum class E_Type_Btn BtnType; // 0x480(0x01)
	enum class E_State_Btn BtnState; // 0x481(0x01)
	char pad_482[0x2]; // 0x482(0x02)
	struct FVector2D BtnSize; // 0x484(0x08)
	bool IsUseBtnImag; // 0x48c(0x01)
	bool IsUseText; // 0x48d(0x01)
	char pad_48E[0x2]; // 0x48e(0x02)
	struct FString Text; // 0x490(0x10)
	bool IsUseLocID; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	int32_t LocID; // 0x4a4(0x04)
	enum class ESolarSupportLanguages PreviewLang; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x4b0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x4c0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x4d0(0x10)
	bool IsIcon; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct UObject* Icon; // 0x4e8(0x08)
	struct FVector2D Icon_Size; // 0x4f0(0x08)

	void StopAnims(); // Function UI_Component_Btn.UI_Component_Btn_C.StopAnims // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void IsAvailable(bool& Availble); // Function UI_Component_Btn.UI_Component_Btn_C.IsAvailable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2d656b0
	void SetBtnTxt(struct FString NewParam); // Function UI_Component_Btn.UI_Component_Btn_C.SetBtnTxt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void SetBtnState(enum class E_State_Btn State); // Function UI_Component_Btn.UI_Component_Btn_C.SetBtnState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	struct FString GetLocalText(); // Function UI_Component_Btn.UI_Component_Btn_C.GetLocalText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2d656b0
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Btn.UI_Component_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void Update(bool IsDesignTime); // Function UI_Component_Btn.UI_Component_Btn_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void SetBtnText(struct FString  �� , enum class E_State_Btn  �� ); // Function UI_Component_Btn.UI_Component_Btn_C.SetBtnText // (BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d656b0
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d656b0
	void BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.BndEvt__OperateArea_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d656b0
	void OnLocalLangChangedEx(struct FString InLang); // Function UI_Component_Btn.UI_Component_Btn_C.OnLocalLangChangedEx // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_UI_Component_Btn(int32_t EntryPoint); // Function UI_Component_Btn.UI_Component_Btn_C.ExecuteUbergraph_UI_Component_Btn // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d656b0
	void OnReleased__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnClicked__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnPressed__DelegateSignature(); // Function UI_Component_Btn.UI_Component_Btn_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

