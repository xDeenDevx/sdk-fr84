// WidgetBlueprintGeneratedClass UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C
// Size: 0x418 (Inherited: 0x400)
struct UUI_Lobby_Banner_Slot_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarImageURL* ImageURL; // 0x408(0x08)
	struct UImage* Img_Default; // 0x410(0x08)

	struct FString GetModuleName(); // Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void BP_OnEntryReleased(); // Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d64c70
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d64c70
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d64c70
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Lobby_Banner_Slot(int32_t EntryPoint); // Function UI_Lobby_Banner_Slot.UI_Lobby_Banner_Slot_C.ExecuteUbergraph_UI_Lobby_Banner_Slot // (Final|UbergraphFunction) // @ game+0x2d64c70
};

