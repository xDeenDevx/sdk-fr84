// WidgetBlueprintGeneratedClass UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C
// Size: 0x3b8 (Inherited: 0x358)
struct UUI_Lobby_DownLoad_Slot_C : USolarItemCardViewWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct USolarButton* Btn_Down; // 0x360(0x08)
	struct USolarButton* Btn_Downing; // 0x368(0x08)
	struct USolarButton* Btn_Pause; // 0x370(0x08)
	struct USolarImage* Img_Line; // 0x378(0x08)
	struct UOverlay* Overlay_Finish; // 0x380(0x08)
	struct UProgressBar* ProgressBar_Download; // 0x388(0x08)
	struct USolarTextBlock* Text_Title; // 0x390(0x08)
	struct USolarTextBlock* Txt_Numb; // 0x398(0x08)
	struct USolarTextBlock* Txt_Speed; // 0x3a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Btn; // 0x3a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Text; // 0x3b0(0x08)

	struct FString GetModuleName(); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetLineState(bool IsHide); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.SetLineState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void DownStatusChanged(enum class ESolarItemDownloadType NewParam); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.DownStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void BP_OnEntryReleased(); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void BndEvt__Btn_Downing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.BndEvt__Btn_Downing_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Lobby_DownLoad_Slot(int32_t EntryPoint); // Function UI_Lobby_DownLoad_Slot.UI_Lobby_DownLoad_Slot_C.ExecuteUbergraph_UI_Lobby_DownLoad_Slot // (Final|UbergraphFunction) // @ game+0x2649560
};

