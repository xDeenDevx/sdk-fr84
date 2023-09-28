// WidgetBlueprintGeneratedClass UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C
// Size: 0x3e1 (Inherited: 0x348)
struct UUI_Lobby_Social_Entrance_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UButton* Btn_Discord; // 0x350(0x08)
	struct UButton* Btn_Facebook; // 0x358(0x08)
	struct UButton* Btn_Instagram; // 0x360(0x08)
	struct UButton* Btn_LiveVideo; // 0x368(0x08)
	struct UButton* Btn_TikTok; // 0x370(0x08)
	struct UButton* Btn_YouTube; // 0x378(0x08)
	struct UCanvasPanel* Discord; // 0x380(0x08)
	struct UCanvasPanel* FACEBOOK; // 0x388(0x08)
	struct UCanvasPanel* Instagram; // 0x390(0x08)
	struct UCanvasPanel* Panel_LiveVideo; // 0x398(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x3a0(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General_49; // 0x3a8(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General_96; // 0x3b0(0x08)
	struct USolarRedHint_General_C* SolarRedHint_Instagram; // 0x3b8(0x08)
	struct USolarRedHint_General_C* SolarRedHint_TikTok; // 0x3c0(0x08)
	struct UCanvasPanel* TikTok; // 0x3c8(0x08)
	struct UUI_Lobby_Live_C* UI_Lobby_Live; // 0x3d0(0x08)
	struct UCanvasPanel* YouTube; // 0x3d8(0x08)
	bool isShowGuide; // 0x3e0(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void ShowGuide(bool ShowGuide); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ShowGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Lobby_Social_Entrance(int32_t EntryPoint); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ExecuteUbergraph_UI_Lobby_Social_Entrance // (Final|UbergraphFunction) // @ game+0x2649560
};

