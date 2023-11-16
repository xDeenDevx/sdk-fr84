// WidgetBlueprintGeneratedClass UI_PlayerInfo_Title.UI_PlayerInfo_Title_C
// Size: 0x486 (Inherited: 0x400)
struct UUI_PlayerInfo_Title_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x410(0x08)
	struct UButton* Btn_Title_Edit; // 0x418(0x08)
	struct UButton* Btn_Title_GoSet; // 0x420(0x08)
	struct UImage* Img_Bg; // 0x428(0x08)
	struct UImage* Img_Bg_2; // 0x430(0x08)
	struct UImage* Img_Bg_3; // 0x438(0x08)
	struct UImage* Img_Wipes_Enter; // 0x440(0x08)
	struct UImage* Img_Wipes_Loop; // 0x448(0x08)
	struct UUI_Component_Ranking_C* Ranking; // 0x450(0x08)
	struct UScaleBox* ScaleBox_1; // 0x458(0x08)
	struct USizeBox* SizeBox_2; // 0x460(0x08)
	struct USolarTextBlock* Txt_Title; // 0x468(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Title; // 0x470(0x08)
	enum class E_RankingType LocationType; // 0x478(0x01)
	bool IsHaveBG; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	struct FVector2D RankSize; // 0x47c(0x08)
	bool IsHaveTitle; // 0x484(0x01)
	bool IsSelf; // 0x485(0x01)

	void OnInitialized(); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void PlayEnterAnim(); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.PlayEnterAnim // (Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnDeinitialize(); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.OnDeinitialize // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetSelf(bool IsSelf); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.SetSelf // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetPosition(); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.SetPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetTitleColor(enum class E_RankingType Index); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.SetTitleColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnEntryReleased(); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_PlayerInfo_Title(int32_t EntryPoint); // Function UI_PlayerInfo_Title.UI_PlayerInfo_Title_C.ExecuteUbergraph_UI_PlayerInfo_Title // (Final|UbergraphFunction) // @ game+0x2d63a00
};

