// WidgetBlueprintGeneratedClass UI_Lobby_DownLoad.UI_Lobby_DownLoad_C
// Size: 0x471 (Inherited: 0x400)
struct UUI_Lobby_DownLoad_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_DownLoad_Loop; // 0x408(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x410(0x08)
	struct UUI_Component_Close_C* Btn_Close; // 0x418(0x08)
	struct USolarButton* Btn_Down_Load; // 0x420(0x08)
	struct USolarButton* Btn_Down_Normal; // 0x428(0x08)
	struct USolarImage* img_Mask; // 0x430(0x08)
	struct UListView* List_DownLoad; // 0x438(0x08)
	struct UCanvasPanel* Panel_Btn; // 0x440(0x08)
	struct UCanvasPanel* Panel_DownList; // 0x448(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x450(0x08)
	struct USolarTextBlock* Txt_Count; // 0x458(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Reddot; // 0x460(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_State; // 0x468(0x08)
	bool BOpened; // 0x470(0x01)

	void OnClicked_6284B5B54B0898CFD19878B1ACB0CF35(); // DelegateFunction UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnClicked_6284B5B54B0898CFD19878B1ACB0CF35 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnSolarUIClosed(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnInitializedCopy(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnInitializedCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void OnSolarUIOpened(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void OnOpenDownloadList(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnOpenDownloadList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnInitialized(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void CustomEvent_1(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_DownLoad(int32_t EntryPoint); // Function UI_Lobby_DownLoad.UI_Lobby_DownLoad_C.ExecuteUbergraph_UI_Lobby_DownLoad // (Final|UbergraphFunction) // @ game+0x2d63a00
};

