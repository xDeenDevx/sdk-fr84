// WidgetBlueprintGeneratedClass UI_Component_Close.UI_Component_Close_C
// Size: 0x394 (Inherited: 0x348)
struct UUI_Component_Close_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USolarButton* Btn_Close; // 0x350(0x08)
	struct UImage* Img_Close_Nml; // 0x358(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x360(0x10)
	bool Black; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FMulticastInlineDelegate OnPressed; // 0x378(0x10)
	bool White; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	struct FVector2D Icon_Size; // 0x38c(0x08)

	struct FString GetModuleName(); // Function UI_Component_Close.UI_Component_Close_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Close.UI_Component_Close_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Component_Close.UI_Component_Close_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function UI_Component_Close.UI_Component_Close_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_Close(int32_t EntryPoint); // Function UI_Component_Close.UI_Component_Close_C.ExecuteUbergraph_UI_Component_Close // (Final|UbergraphFunction) // @ game+0x2649560
	void OnPressed__DelegateSignature(); // Function UI_Component_Close.UI_Component_Close_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnClicked__DelegateSignature(); // Function UI_Component_Close.UI_Component_Close_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

