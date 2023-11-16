// WidgetBlueprintGeneratedClass UI_Reconnecting.UI_Reconnecting_C
// Size: 0x464 (Inherited: 0x400)
struct UUI_Reconnecting_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* BG_Loop; // 0x408(0x08)
	struct UUI_Component_Btn_C* Btn_Cancel; // 0x410(0x08)
	struct UUI_Component_Btn_C* Btn_Exit; // 0x418(0x08)
	struct UUI_Component_Btn_C* Btn_Retry; // 0x420(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x428(0x08)
	struct UCanvasPanel* Panel_Reconnent; // 0x430(0x08)
	struct USpacer* Spacer_89; // 0x438(0x08)
	struct USolarTextBlock* Text_TryTimes; // 0x440(0x08)
	struct USolarTextBlock* Txt_Fail; // 0x448(0x08)
	struct USolarTextBlock* Txt_Retry; // 0x450(0x08)
	struct UUI_Component_Popup_S_C* UI_Component_Popup_S; // 0x458(0x08)
	int32_t State; // 0x460(0x04)

	void OnClicked_3EF5E2DF4235289057633AA76C11F271(); // Function UI_Reconnecting.UI_Reconnecting_C.OnClicked_3EF5E2DF4235289057633AA76C11F271 // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5f200
	void OnClicked_42D3FD13472FC3B74BB9E98659C6D146(); // Function UI_Reconnecting.UI_Reconnecting_C.OnClicked_42D3FD13472FC3B74BB9E98659C6D146 // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5f200
	void OnClicked_9185E1934BD3269C5D9C739F5FEF2F26(); // Function UI_Reconnecting.UI_Reconnecting_C.OnClicked_9185E1934BD3269C5D9C739F5FEF2F26 // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5f200
	void OnSolarUIClosed(); // Function UI_Reconnecting.UI_Reconnecting_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Reconnecting.UI_Reconnecting_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Reconnecting.UI_Reconnecting_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetUIState(int32_t State); // Function UI_Reconnecting.UI_Reconnecting_C.SetUIState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Reconnecting.UI_Reconnecting_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Reconnecting.UI_Reconnecting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Reconnecting(int32_t EntryPoint); // Function UI_Reconnecting.UI_Reconnecting_C.ExecuteUbergraph_UI_Reconnecting // (Final|UbergraphFunction) // @ game+0x2d63a00
};

