// WidgetBlueprintGeneratedClass UI_Marquees.UI_Marquees_C
// Size: 0x420 (Inherited: 0x400)
struct UUI_Marquees_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* Img_Bg; // 0x408(0x08)
	struct UCanvasPanel* Panel_Marquees; // 0x410(0x08)
	struct USolarTextBlock* Txt_Marquees; // 0x418(0x08)

	void Construct(); // Function UI_Marquees.UI_Marquees_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void ReceiveTick(struct FGeometry& MyGeometry, float InDeltaTime); // Function UI_Marquees.UI_Marquees_C.ReceiveTick // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb6c980
	void OnSolarUIClosed(); // Function UI_Marquees.UI_Marquees_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	void OnSolarUIOpened(); // Function UI_Marquees.UI_Marquees_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	struct FString GetModuleName(); // Function UI_Marquees.UI_Marquees_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Marquees.UI_Marquees_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Marquees(int32_t EntryPoint); // Function UI_Marquees.UI_Marquees_C.ExecuteUbergraph_UI_Marquees // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d64c70
};

