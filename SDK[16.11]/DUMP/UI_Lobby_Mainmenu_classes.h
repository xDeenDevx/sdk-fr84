// WidgetBlueprintGeneratedClass UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C
// Size: 0x438 (Inherited: 0x400)
struct UUI_Lobby_Mainmenu_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Garage_2; // 0x408(0x08)
	struct UButton* Btn_Warehouse; // 0x410(0x08)
	struct UButton* Btn_Weapons; // 0x418(0x08)
	struct USolarRedHint_General_C* HintPoint_Garage; // 0x420(0x08)
	struct USolarRedHint_General_C* HintPoint_Weapon; // 0x428(0x08)
	struct USolarRedHint_General_C* RedHint_Warehouse; // 0x430(0x08)

	void OnClicked_DF0F5776438E4D180B1F188E524A50EC(); // DelegateFunction UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnClicked_DF0F5776438E4D180B1F188E524A50EC // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_39A0FB2440B4E02762F08F91B9BBBE61(); // DelegateFunction UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnClicked_39A0FB2440B4E02762F08F91B9BBBE61 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_CAFC0F7046F400B0FBC18294BC709F0D(); // DelegateFunction UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnClicked_CAFC0F7046F400B0FBC18294BC709F0D // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Mainmenu(int32_t EntryPoint); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.ExecuteUbergraph_UI_Lobby_Mainmenu // (Final|UbergraphFunction) // @ game+0x2d63a00
};

