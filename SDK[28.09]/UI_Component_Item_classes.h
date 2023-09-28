// WidgetBlueprintGeneratedClass UI_Component_Item.UI_Component_Item_C
// Size: 0x43d (Inherited: 0x348)
struct UUI_Component_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x350(0x08)
	struct UWidgetAnimation* Puzzle_Unlock_Anim; // 0x358(0x08)
	struct UWidgetAnimation* Sold_Anim; // 0x360(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x368(0x08)
	struct UWidgetAnimation* Receive_Anim; // 0x370(0x08)
	struct UButton* Btn_Item; // 0x378(0x08)
	struct UImage* Image_TrialTag; // 0x380(0x08)
	struct UImage* Img_Bg; // 0x388(0x08)
	struct UImage* Img_BG_Light; // 0x390(0x08)
	struct UImage* Img_BG_NoQuality; // 0x398(0x08)
	struct UImage* img_Equiped; // 0x3a0(0x08)
	struct UImage* Img_Icon; // 0x3a8(0x08)
	struct UImage* Img_Light_Bg; // 0x3b0(0x08)
	struct UImage* Img_Light_Lines; // 0x3b8(0x08)
	struct UImage* Img_Light_Wipes; // 0x3c0(0x08)
	struct UImage* Img_Light_Wipes_2; // 0x3c8(0x08)
	struct UImage* Img_Loop_Light; // 0x3d0(0x08)
	struct UImage* Img_Puzzle; // 0x3d8(0x08)
	struct UImage* Img_Selected; // 0x3e0(0x08)
	struct UImage* Img_Sold_Mask; // 0x3e8(0x08)
	struct UCanvasPanel* Panel_Claim; // 0x3f0(0x08)
	struct UOverlay* Received; // 0x3f8(0x08)
	struct USizeBox* Size_Item; // 0x400(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x408(0x08)
	struct USolarTextBlock* Txt_Number; // 0x410(0x08)
	struct USolarTextBlock* Txt_Owned; // 0x418(0x08)
	struct UOverlay* Unlock; // 0x420(0x08)
	enum class E_Type_Item ItemState; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	int32_t   ; // 0x42c(0x04)
	enum class E_Item_Quality Quality; // 0x430(0x01)
	bool Select; // 0x431(0x01)
	bool Experience; // 0x432(0x01)
	bool Num; // 0x433(0x01)
	bool Puzzle; // 0x434(0x01)
	bool Equiped; // 0x435(0x01)
	bool RedHint; // 0x436(0x01)
	char pad_437[0x1]; // 0x437(0x01)
	int32_t Txt_Size; // 0x438(0x04)
	bool NoQuality; // 0x43c(0x01)

	struct FString GetModuleName(); // Function UI_Component_Item.UI_Component_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void BP_OnEntryReleased(); // Function UI_Component_Item.UI_Component_Item_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Item.UI_Component_Item_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xb43660
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xb43660
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Item.UI_Component_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ChangItemState(); // Function UI_Component_Item.UI_Component_Item_C.ChangItemState // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PlayReceiveAnimEvent(); // Function UI_Component_Item.UI_Component_Item_C.PlayReceiveAnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void StopReceiveAnimEvent(); // Function UI_Component_Item.UI_Component_Item_C.StopReceiveAnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_Item(int32_t EntryPoint); // Function UI_Component_Item.UI_Component_Item_C.ExecuteUbergraph_UI_Component_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

