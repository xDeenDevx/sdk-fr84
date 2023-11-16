// WidgetBlueprintGeneratedClass UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C
// Size: 0x419 (Inherited: 0x400)
struct UUI_Lobby_Banner_Slot2_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Banner; // 0x408(0x08)
	struct UImage* Img; // 0x410(0x08)
	bool SelectType; // 0x418(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void BP_OnEntryReleased(); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void ChangeShowPanelView(); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.ChangeShowPanelView // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Banner_Slot2(int32_t EntryPoint); // Function UI_Lobby_Banner_Slot2.UI_Lobby_Banner_Slot2_C.ExecuteUbergraph_UI_Lobby_Banner_Slot2 // (Final|UbergraphFunction) // @ game+0x2d63a00
};

