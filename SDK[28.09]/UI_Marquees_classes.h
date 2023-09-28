// WidgetBlueprintGeneratedClass UI_Marquees.UI_Marquees_C
// Size: 0x368 (Inherited: 0x348)
struct UUI_Marquees_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UImage* Img_Bg; // 0x350(0x08)
	struct UCanvasPanel* Panel_Marquees; // 0x358(0x08)
	struct USolarTextBlock* Txt_Marquees; // 0x360(0x08)

	struct FString GetModuleName(); // Function UI_Marquees.UI_Marquees_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Marquees.UI_Marquees_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Marquees(int32_t EntryPoint); // Function UI_Marquees.UI_Marquees_C.ExecuteUbergraph_UI_Marquees // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

