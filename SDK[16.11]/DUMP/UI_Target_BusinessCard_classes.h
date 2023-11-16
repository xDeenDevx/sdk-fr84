// WidgetBlueprintGeneratedClass UI_Target_BusinessCard.UI_Target_BusinessCard_C
// Size: 0x5d1 (Inherited: 0x400)
struct UUI_Target_BusinessCard_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Exit; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x410(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_Chat; // 0x418(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_Clan; // 0x420(0x08)
	struct UButton* Btn_Close; // 0x428(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_Edit; // 0x430(0x08)
	struct UButton* Btn_EditRemarkName; // 0x438(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_Info; // 0x440(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_Invite; // 0x448(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_KickOut; // 0x450(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_Promote; // 0x458(0x08)
	struct UUI_Target_BusinessCard_Btn_C* Btn_Report; // 0x460(0x08)
	struct UButton* Btn_Title_Edit; // 0x468(0x08)
	struct UButton* Btn_Title_GoSet; // 0x470(0x08)
	struct UImage* Img_Bg; // 0x478(0x08)
	struct UImage* Img_BgWhole; // 0x480(0x08)
	struct UImage* Img_LvlBg; // 0x488(0x08)
	struct UImage* Img_LvlBgLight; // 0x490(0x08)
	struct UImage* Img_LvlBgLight_2; // 0x498(0x08)
	struct UImage* img_RankBg; // 0x4a0(0x08)
	struct UCanvasPanel* Panel; // 0x4a8(0x08)
	struct USizeBox* Panel_AddFriend; // 0x4b0(0x08)
	struct UOverlay* Panel_EditName; // 0x4b8(0x08)
	struct UCanvasPanel* Panel_Info_2; // 0x4c0(0x08)
	struct UVerticalBox* Panel_Operate; // 0x4c8(0x08)
	struct UUI_Component_PlayerHead_C* PlayerHead; // 0x4d0(0x08)
	struct UScaleBox* ScaleBox_Card; // 0x4d8(0x08)
	struct UScaleBox* ScaleBox_CardFrame; // 0x4e0(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x4e8(0x08)
	struct UWidgetSwitcher* Switch_TopCharacter_2; // 0x4f0(0x08)
	struct UWidgetSwitcher* Switch_TopCharacter_3; // 0x4f8(0x08)
	struct UWidgetSwitcher* Switch_TopCharacter_4; // 0x500(0x08)
	struct USolarTextBlock* Txt_Lvl_Head; // 0x508(0x08)
	struct USolarTextBlock* Txt_Lvl_Tail; // 0x510(0x08)
	struct USolarTextBlock* Txt_PlayerLevel; // 0x518(0x08)
	struct USolarTextBlock* Txt_Rank; // 0x520(0x08)
	struct USolarTextBlock* Txt_RemarkName; // 0x528(0x08)
	struct UUI_Component_Friend_C* UI_AddFriend; // 0x530(0x08)
	struct UUI_Component_NationalFlag_C* UI_Component_NationalFlag; // 0x538(0x08)
	struct UUI_Component_Platform_C* UI_Component_Platform; // 0x540(0x08)
	struct UUI_Component_PlayerName_C* UI_Component_PlayerName; // 0x548(0x08)
	struct UUI_PlayerInfo_Title_C* UI_PlayerInfo_Title; // 0x550(0x08)
	struct UUI_Rank_Icon_Small_C* UI_Rank_Icon_Small; // 0x558(0x08)
	struct UUI_Target_BusinessCard_HeroRank_C* UI_Target_BusinessCard_HeroRank_2; // 0x560(0x08)
	struct UUI_Target_BusinessCard_HeroRank_C* UI_Target_BusinessCard_HeroRank_3; // 0x568(0x08)
	struct UUI_Target_BusinessCard_HeroRank_C* UI_Target_BusinessCard_HeroRank_4; // 0x570(0x08)
	struct UUI_Target_BusinessCard_HeroRankEmpty_C* UI_Target_BusinessCard_HeroRankEmpty; // 0x578(0x08)
	struct UUI_Target_BusinessCard_HeroRankEmpty_C* UI_Target_BusinessCard_HeroRankEmpty_2; // 0x580(0x08)
	struct UUI_Target_BusinessCard_HeroRankEmpty_C* UI_Target_BusinessCard_HeroRankEmpty_3; // 0x588(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_CardFrame; // 0x590(0x08)
	struct UObject* Background; // 0x598(0x08)
	struct TArray<struct UObject*> TeamBackground; // 0x5a0(0x10)
	int32_t HeroLevel; // 0x5b0(0x04)
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct UObject* Background_Rank; // 0x5b8(0x08)
	struct TArray<struct UObject*> TeamBackgroundRank; // 0x5c0(0x10)
	bool bFramePreview; // 0x5d0(0x01)

	void Construct(); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnBackKey(enum class EWidgetBackKeyType BackKeyType); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.OnBackKey // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void Destruct(); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetIsCardFrame(bool IsCardFrame); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.SetIsCardFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetRankLegendStatus(int32_t LegendStatus); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.SetRankLegendStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Target_BusinessCard(int32_t EntryPoint); // Function UI_Target_BusinessCard.UI_Target_BusinessCard_C.ExecuteUbergraph_UI_Target_BusinessCard // (Final|UbergraphFunction) // @ game+0x2d63a00
};

