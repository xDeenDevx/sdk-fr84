// WidgetBlueprintGeneratedClass UI_Component_Emoji_Item.UI_Component_Emoji_Item_C
// Size: 0x43c (Inherited: 0x400)
struct UUI_Component_Emoji_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Use; // 0x408(0x08)
	struct UImage* Item_BG; // 0x410(0x08)
	struct UImage* Item_BG_Empty; // 0x418(0x08)
	struct UImage* Item_icon; // 0x420(0x08)
	struct UWidgetSwitcher* Switcher; // 0x428(0x08)
	enum class E_Item_Quality Quality; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	float EmojiUseCD; // 0x434(0x04)
	float ValidEmojiUseDistance; // 0x438(0x04)

	struct FString GetModuleName(); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetQuality(enum class E_Item_Quality Quality); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.SetQuality // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnEntryReleased(); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Emoji_Item(int32_t EntryPoint); // Function UI_Component_Emoji_Item.UI_Component_Emoji_Item_C.ExecuteUbergraph_UI_Component_Emoji_Item // (Final|UbergraphFunction) // @ game+0x2d63a00
};

