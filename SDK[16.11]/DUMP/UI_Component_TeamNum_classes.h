// WidgetBlueprintGeneratedClass UI_Component_TeamNum.UI_Component_TeamNum_C
// Size: 0x478 (Inherited: 0x400)
struct UUI_Component_TeamNum_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarImage* Img_TeamNum; // 0x408(0x08)
	struct USizeBox* SizeBox_1; // 0x410(0x08)
	enum class E_Type_TeamNum TeamNum; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	int32_t Size; // 0x41c(0x04)
	struct FSlateColor DefaultColor; // 0x420(0x28)
	bool Selected; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FSlateColor DefaultColor_Seleted; // 0x450(0x28)

	void OnSolarUIOpened(); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnShow(); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnShow // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void Set Team Num(enum class E_Type_TeamNum Index); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.Set Team Num // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetSelected(bool Selected); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetColor(struct FLinearColor InColorAndOpacity); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetType(); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_TeamNum(int32_t EntryPoint); // Function UI_Component_TeamNum.UI_Component_TeamNum_C.ExecuteUbergraph_UI_Component_TeamNum // (Final|UbergraphFunction) // @ game+0x2d63a00
};

