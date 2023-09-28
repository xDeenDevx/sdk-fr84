// WidgetBlueprintGeneratedClass UI_Lobby_DownLoad.UI_Lobby_DownLoad_C
// Size: 0x3a9 (Inherited: 0x348)
struct UUI_Lobby_DownLoad_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x350(0x08)
	struct UUI_Component_Close_C* Btn_Close; // 0x358(0x08)
	struct USolarButton* Btn_Down_Load; // 0x360(0x08)
	struct USolarButton* Btn_Down_Normal; // 0x368(0x08)
	struct USolarImage* img_Mask; // 0x370(0x08)
	struct UListView* List_DownLoad; // 0x378(0x08)
	struct UCanvasPanel* Panel_Btn; // 0x380(0x08)
	struct UCanvasPanel* Panel_DownList; // 0x388(0x08)
	struct UProgressBar* ProgressBar_Load; // 0x390(0x08)
	struct USolarTextBlock* Txt_Count; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_State; // 0x3a0(0x08)
	bool BOpened; // 0x3a8(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void OnOpenDownloadList(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnOpenDownloadList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnInitialized(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void CustomEvent_1(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Lobby_DownLoad(int32_t EntryPoint); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.ExecuteUbergraph_UI_Lobby_DownLoad // (Final|UbergraphFunction) // @ game+0x2649560
};

