// WidgetBlueprintGeneratedClass UI_Component_Item.UI_Component_Item_C
// Size: 0x50d (Inherited: 0x400)
struct UUI_Component_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x408(0x08)
	struct UWidgetAnimation* Puzzle_Unlock_Anim; // 0x410(0x08)
	struct UWidgetAnimation* Sold_Anim; // 0x418(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x420(0x08)
	struct UWidgetAnimation* Receive_Anim; // 0x428(0x08)
	struct UButton* Btn_Item; // 0x430(0x08)
	struct UImage* Image_TrialTag; // 0x438(0x08)
	struct UImage* Img_Bg; // 0x440(0x08)
	struct UImage* Img_BG_Light; // 0x448(0x08)
	struct UImage* Img_BG_NoQuality; // 0x450(0x08)
	struct UImage* img_Equiped; // 0x458(0x08)
	struct UImage* Img_Icon; // 0x460(0x08)
	struct UImage* Img_Light_Bg; // 0x468(0x08)
	struct UImage* Img_Light_Lines; // 0x470(0x08)
	struct UImage* Img_Light_Wipes; // 0x478(0x08)
	struct UImage* Img_Light_Wipes_2; // 0x480(0x08)
	struct UImage* Img_Loop_Light; // 0x488(0x08)
	struct UImage* Img_Puzzle; // 0x490(0x08)
	struct UImage* Img_Selected; // 0x498(0x08)
	struct UImage* Img_Sold_Mask; // 0x4a0(0x08)
	struct UCanvasPanel* Panel_Claim; // 0x4a8(0x08)
	struct UOverlay* Received; // 0x4b0(0x08)
	struct USizeBox* Size_Item; // 0x4b8(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x4c0(0x08)
	struct UWidgetSwitcher* Switcher_Item; // 0x4c8(0x08)
	struct USolarRichTextBlock* Txt_ChatBubble; // 0x4d0(0x08)
	struct USolarTextBlock* Txt_Number; // 0x4d8(0x08)
	struct USolarTextBlock* Txt_Owned; // 0x4e0(0x08)
	struct UUI_Component_Item_VoiceSlot_C* UI_Component_Item_VideoSlot; // 0x4e8(0x08)
	struct UOverlay* Unlock; // 0x4f0(0x08)
	enum class E_Type_Item ItemState; // 0x4f8(0x01)
	char pad_4F9[0x3]; // 0x4f9(0x03)
	int32_t   ; // 0x4fc(0x04)
	enum class E_Item_Quality Quality; // 0x500(0x01)
	bool Select; // 0x501(0x01)
	bool Experience; // 0x502(0x01)
	bool Num; // 0x503(0x01)
	bool Puzzle; // 0x504(0x01)
	bool Equiped; // 0x505(0x01)
	bool RedHint; // 0x506(0x01)
	char pad_507[0x1]; // 0x507(0x01)
	int32_t Txt_Size; // 0x508(0x04)
	bool NoQuality; // 0x50c(0x01)

	void PlayEnterAnim(); // Function UI_Component_Item.UI_Component_Item_C.PlayEnterAnim // (Event|Public|BlueprintEvent) // @ game+0xb6d460
	void BP_OnItemSelectionChangedCopy(bool bIsSelected); // Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChangedCopy // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnListItemObjectSetCopy(struct UObject* ListItemObject); // Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSetCopy // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Component_Item.UI_Component_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void BP_OnEntryReleased(); // Function UI_Component_Item.UI_Component_Item_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Item.UI_Component_Item_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Item.UI_Component_Item_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Component_Item.UI_Component_Item_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Item.UI_Component_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ChangItemState(); // Function UI_Component_Item.UI_Component_Item_C.ChangItemState // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PlayReceiveAnimEvent(); // Function UI_Component_Item.UI_Component_Item_C.PlayReceiveAnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void StopReceiveAnimEvent(); // Function UI_Component_Item.UI_Component_Item_C.StopReceiveAnimEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Item(int32_t EntryPoint); // Function UI_Component_Item.UI_Component_Item_C.ExecuteUbergraph_UI_Component_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

