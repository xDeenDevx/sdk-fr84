// WidgetBlueprintGeneratedClass UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C
// Size: 0x392 (Inherited: 0x348)
struct UUI_Lobby_Sanctuary_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UButton* Btn_Sanctuary; // 0x350(0x08)
	struct UBtn_Unlock_Anim_2_C* Btn_Unlock_Anim_2; // 0x358(0x08)
	struct UImage* Img_Arrow; // 0x360(0x08)
	struct UCanvasPanel* Panel_Sanctuary; // 0x368(0x08)
	struct UCanvasPanel* Panel_SanctuaryContent; // 0x370(0x08)
	struct UUI_Anim_Circle_1_C* Sanctuary_Matching; // 0x378(0x08)
	struct UHorizontalBox* Txt_Sanctuary; // 0x380(0x08)
	struct UOverlay* UI_Lobby_Sanctuary; // 0x388(0x08)
	bool Locked; // 0x390(0x01)
	bool Matching; // 0x391(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void BP_RefreshSanctuaryUI(bool bInLocked, bool bInMatching); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.BP_RefreshSanctuaryUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Lobby_Sanctuary(int32_t EntryPoint); // Function UI_Lobby_Sanctuary.UI_Lobby_Sanctuary_C.ExecuteUbergraph_UI_Lobby_Sanctuary // (Final|UbergraphFunction) // @ game+0x2649560
};

