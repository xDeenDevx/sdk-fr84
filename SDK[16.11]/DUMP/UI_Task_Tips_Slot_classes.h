// WidgetBlueprintGeneratedClass UI_Task_Tips_Slot.UI_Task_Tips_Slot_C
// Size: 0x418 (Inherited: 0x400)
struct UUI_Task_Tips_Slot_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* Img_Item; // 0x408(0x08)
	struct USolarTextBlock* Txt_Item; // 0x410(0x08)

	struct FString GetModuleName(); // Function UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void BP_OnEntryReleased(); // Function UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Task_Tips_Slot(int32_t EntryPoint); // Function UI_Task_Tips_Slot.UI_Task_Tips_Slot_C.ExecuteUbergraph_UI_Task_Tips_Slot // (Final|UbergraphFunction) // @ game+0x2d63a00
};

