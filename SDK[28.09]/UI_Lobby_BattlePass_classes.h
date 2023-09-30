// WidgetBlueprintGeneratedClass UI_Lobby_BattlePass.UI_Lobby_BattlePass_C
// Size: 0x3fb (Inherited: 0x348)
struct UUI_Lobby_BattlePass_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x350(0x08)
	struct UWidgetAnimation* Anim_Upgrade; // 0x358(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x360(0x08)
	struct UWidgetAnimation* Anim_Max_Upgrade; // 0x368(0x08)
	struct UButton* Btn_BattlePass; // 0x370(0x08)
	struct UImage* Img_Arrow_Glow; // 0x378(0x08)
	struct UImage* Img_Arrow_Glow_2; // 0x380(0x08)
	struct UImage* Img_Arrow_Glow_3; // 0x388(0x08)
	struct UImage* Img_BG_Light; // 0x390(0x08)
	struct UImage* Img_BPBG; // 0x398(0x08)
	struct UImage* img_Hero; // 0x3a0(0x08)
	struct UImage* Img_Icon; // 0x3a8(0x08)
	struct UImage* Img_Weapon; // 0x3b0(0x08)
	struct UProgressBar* Level_Progress; // 0x3b8(0x08)
	struct UCanvasPanel* Panel_BattlePass; // 0x3c0(0x08)
	struct UScaleBox* Scale_BattlePass; // 0x3c8(0x08)
	struct UScaleBox* ScaleBox_Type; // 0x3d0(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General_2; // 0x3d8(0x08)
	struct USolarTextBlock* Txt_BattlePass; // 0x3e0(0x08)
	struct UTextBlock* Txt_Battlepass_Level; // 0x3e8(0x08)
	struct USolarTextBlock* Txt_Type; // 0x3f0(0x08)
	bool isMax; // 0x3f8(0x01)
	bool isUpdate; // 0x3f9(0x01)
	bool isClaim; // 0x3fa(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetClaimable(bool Claimable); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetClaimable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetUpdate(bool Update); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetLevel(bool Max); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.SetLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void BattlePassStateChange_Event(); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.BattlePassStateChange_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void BattlePassPlayUpgradeAnimation(); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.BattlePassPlayUpgradeAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Lobby_BattlePass(int32_t EntryPoint); // Function UI_Lobby_BattlePass.UI_Lobby_BattlePass_C.ExecuteUbergraph_UI_Lobby_BattlePass // (Final|UbergraphFunction) // @ game+0x2649560
};

