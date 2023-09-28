// WidgetBlueprintGeneratedClass UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C
// Size: 0x380 (Inherited: 0x348)
struct UUI_Lobby_Mainmenu_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UButton* Btn_Garage_2; // 0x350(0x08)
	struct UButton* Btn_Warehouse; // 0x358(0x08)
	struct UButton* Btn_Weapons; // 0x360(0x08)
	struct USolarRedHint_General_C* HintPoint_Garage; // 0x368(0x08)
	struct USolarRedHint_General_C* HintPoint_Weapon; // 0x370(0x08)
	struct USolarRedHint_General_C* RedHint_Warehouse; // 0x378(0x08)

	struct FString GetModuleName(); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Lobby_Mainmenu(int32_t EntryPoint); // Function UI_Lobby_Mainmenu.UI_Lobby_Mainmenu_C.ExecuteUbergraph_UI_Lobby_Mainmenu // (Final|UbergraphFunction) // @ game+0x2649560
};

