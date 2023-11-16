// WidgetBlueprintGeneratedClass UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C
// Size: 0x44a (Inherited: 0x400)
struct UUI_Lobby_Sanctuary_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Sanctuary; // 0x408(0x08)
	struct UBtn_Unlock_Anim_2_C* Btn_Unlock_Anim_2; // 0x410(0x08)
	struct UImage* Img_Arrow; // 0x418(0x08)
	struct UCanvasPanel* Panel_Sanctuary; // 0x420(0x08)
	struct UCanvasPanel* Panel_SanctuaryContent; // 0x428(0x08)
	struct UUI_Anim_Circle_1_C* Sanctuary_Matching; // 0x430(0x08)
	struct UHorizontalBox* Txt_Sanctuary; // 0x438(0x08)
	struct UOverlay* UI_Lobby_Sanctuary; // 0x440(0x08)
	bool Locked; // 0x448(0x01)
	bool Matching; // 0x449(0x01)

	void Destruct(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void BP_RefreshSanctuaryUI(bool bInLocked, bool bInMatching); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.BP_RefreshSanctuaryUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Lobby_Sanctuary(int32_t EntryPoint); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ExecuteUbergraph_UI_Lobby_Sanctuary // (Final|UbergraphFunction) // @ game+0x2d63a00
};

