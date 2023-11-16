// WidgetBlueprintGeneratedClass UI_Lobby_Banner.UI_Lobby_Banner_C
// Size: 0x441 (Inherited: 0x400)
struct UUI_Lobby_Banner_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USizeBox* BannerSizeBox; // 0x408(0x08)
	struct UUI_Warehouse_DragPanel_C* DragPanel; // 0x410(0x08)
	struct USolarImageURL* Image_URL; // 0x418(0x08)
	struct UImage* Img_Hover; // 0x420(0x08)
	struct UCanvasPanel* Panel_Shortcut_HD; // 0x428(0x08)
	struct USolarListView* SolarListView_Banner; // 0x430(0x08)
	struct USolarListView* SolarListView_Image; // 0x438(0x08)
	enum class E_TabLobbyItemState StateHD; // 0x440(0x01)

	void OnURLDownloadFinish_02FE35C4428F98D3729458A51565DCB2(bool bSuccess); // DelegateFunction UI_Lobby_Banner.UI_Lobby_Banner_C.OnURLDownloadFinish_02FE35C4428F98D3729458A51565DCB2 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnSolarUIOpened(); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb6d460
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetStateHD(enum class E_TabLobbyItemState State); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.SetStateHD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d63a00
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Banner(int32_t EntryPoint); // Function UI_Lobby_Banner.UI_Lobby_Banner_C.ExecuteUbergraph_UI_Lobby_Banner // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

