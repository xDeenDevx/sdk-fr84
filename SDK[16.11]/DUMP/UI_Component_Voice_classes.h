// WidgetBlueprintGeneratedClass UI_Component_Voice.UI_Component_Voice_C
// Size: 0x42c (Inherited: 0x400)
struct UUI_Component_Voice_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Sel; // 0x408(0x08)
	struct UImage* Img_Voice; // 0x410(0x08)
	struct USolarTextBlock* Txt_Point; // 0x418(0x08)
	struct USolarTextBlock* Txt_Voice; // 0x420(0x08)
	float UseCD; // 0x428(0x04)

	struct FString GetModuleName(); // Function UI_Component_Voice.UI_Component_Voice_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void BP_OnEntryReleased(); // Function UI_Component_Voice.UI_Component_Voice_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Voice.UI_Component_Voice_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Voice.UI_Component_Voice_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Component_Voice.UI_Component_Voice_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnQualityChanged(enum class ESolarItemQualityType Quality); // Function UI_Component_Voice.UI_Component_Voice_C.OnQualityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Voice(int32_t EntryPoint); // Function UI_Component_Voice.UI_Component_Voice_C.ExecuteUbergraph_UI_Component_Voice // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

