// WidgetBlueprintGeneratedClass UI_Lobby_RandomPack.UI_Lobby_RandomPack_C
// Size: 0x448 (Inherited: 0x400)
struct UUI_Lobby_RandomPack_C : USolarUserWidget {
	struct UWidgetAnimation* Enter_Anim; // 0x400(0x08)
	struct USolarButton* Btn_RandomPack; // 0x408(0x08)
	struct UCanvasPanel* Bubble; // 0x410(0x08)
	struct UHorizontalBox* Bubble_ToBeClaimed; // 0x418(0x08)
	struct UImage* Img_XELB; // 0x420(0x08)
	struct UCanvasPanel* Panel_VX; // 0x428(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x430(0x08)
	struct UTickerWidget_C* Txt_Reminder; // 0x438(0x08)
	struct UTickerWidget_C* Txt_ToBeClaimed; // 0x440(0x08)

	void OnClicked_FA46997843DDCA2D86989BB6BA49B2D9(); // DelegateFunction UI_Lobby_RandomPack.UI_Lobby_RandomPack_C.OnClicked_FA46997843DDCA2D86989BB6BA49B2D9 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnSolarUIClosed(); // Function UI_Lobby_RandomPack.UI_Lobby_RandomPack_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Lobby_RandomPack.UI_Lobby_RandomPack_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Lobby_RandomPack.UI_Lobby_RandomPack_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_RandomPack.UI_Lobby_RandomPack_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
};

