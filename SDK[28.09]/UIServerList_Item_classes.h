// WidgetBlueprintGeneratedClass UIServerList_Item.UIServerList_Item_C
// Size: 0x360 (Inherited: 0x348)
struct UUIServerList_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UImage* Img_Selected; // 0x350(0x08)
	struct USolarTextBlock* Txt_ServerName; // 0x358(0x08)

	struct FString GetModuleName(); // Function UIServerList_Item.UIServerList_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void BP_OnEntryReleased(); // Function UIServerList_Item.UIServerList_Item_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UIServerList_Item.UIServerList_Item_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UIServerList_Item.UIServerList_Item_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UIServerList_Item.UIServerList_Item_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UIServerList_Item(int32_t EntryPoint); // Function UIServerList_Item.UIServerList_Item_C.ExecuteUbergraph_UIServerList_Item // (Final|UbergraphFunction) // @ game+0x2649560
};

