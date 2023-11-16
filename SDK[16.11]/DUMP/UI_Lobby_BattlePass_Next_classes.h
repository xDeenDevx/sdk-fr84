// WidgetBlueprintGeneratedClass UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C
// Size: 0x4bb (Inherited: 0x400)
struct UUI_Lobby_BattlePass_Next_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Upgrade; // 0x410(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x418(0x08)
	struct UWidgetAnimation* Anim_Max_Upgrade; // 0x420(0x08)
	struct UButton* Btn_BattlePass; // 0x428(0x08)
	struct UImage* Img_Arrow_Glow; // 0x430(0x08)
	struct UImage* Img_Arrow_Glow_2; // 0x438(0x08)
	struct UImage* Img_Arrow_Glow_3; // 0x440(0x08)
	struct UImage* Img_BG_Light; // 0x448(0x08)
	struct UImage* Img_BPBG; // 0x450(0x08)
	struct UImage* img_Hero; // 0x458(0x08)
	struct UImage* img_Hero_3; // 0x460(0x08)
	struct UImage* Img_Icon; // 0x468(0x08)
	struct UImage* Img_Weapon; // 0x470(0x08)
	struct UProgressBar* Level_Progress; // 0x478(0x08)
	struct UCanvasPanel* Panel_BattlePass; // 0x480(0x08)
	struct UScaleBox* Scale_BattlePass; // 0x488(0x08)
	struct UScaleBox* ScaleBox_Type; // 0x490(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General_2; // 0x498(0x08)
	struct USolarTextBlock* Txt_BattlePass; // 0x4a0(0x08)
	struct UTextBlock* Txt_Battlepass_Level; // 0x4a8(0x08)
	struct USolarTextBlock* Txt_Type; // 0x4b0(0x08)
	bool isMax; // 0x4b8(0x01)
	bool isUpdate; // 0x4b9(0x01)
	bool isClaim; // 0x4ba(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetClaimable(bool NewParam); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetClaimable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetUpdate(bool NewParam); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetLevel(bool NewParam); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.SetLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BattlePassStateChange_Event(); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.BattlePassStateChange_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BattlePassPlayUpgradeAnimation(); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.BattlePassPlayUpgradeAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_BattlePass_Next(int32_t EntryPoint); // Function UI_Lobby_BattlePass_Next.UI_Lobby_BattlePass_Next_C.ExecuteUbergraph_UI_Lobby_BattlePass_Next // (Final|UbergraphFunction) // @ game+0x2d63a00
};

