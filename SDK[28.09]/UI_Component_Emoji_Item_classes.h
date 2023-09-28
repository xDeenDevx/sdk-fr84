// WidgetBlueprintGeneratedClass UI_Component_Emoji_Item.UI_Component_Emoji_Item_C
// Size: 0x384 (Inherited: 0x348)
struct UUI_Component_Emoji_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UButton* Btn_Use; // 0x350(0x08)
	struct UImage* Item_BG; // 0x358(0x08)
	struct UImage* Item_BG_Empty; // 0x360(0x08)
	struct UImage* Item_icon; // 0x368(0x08)
	struct UWidgetSwitcher* Switcher; // 0x370(0x08)
	enum class E_Item_Quality Quality; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	float EmojiUseCD; // 0x37c(0x04)
	float ValidEmojiUseDistance; // 0x380(0x04)

	struct FString GetModuleName(); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetQuality(enum class E_Item_Quality Quality); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.SetQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void BP_OnEntryReleased(); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_Emoji_Item(int32_t EntryPoint); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.ExecuteUbergraph_UI_Component_Emoji_Item // (Final|UbergraphFunction) // @ game+0x2649560
};

