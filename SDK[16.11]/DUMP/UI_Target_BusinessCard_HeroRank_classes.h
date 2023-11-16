// WidgetBlueprintGeneratedClass UI_Target_BusinessCard_HeroRank.UI_Target_BusinessCard_HeroRank_C
// Size: 0x2c6 (Inherited: 0x260)
struct UUI_Target_BusinessCard_HeroRank_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* icon_HeroRank; // 0x268(0x08)
	struct UImage* Img_Bg; // 0x270(0x08)
	struct UImage* img_Bg_01; // 0x278(0x08)
	struct UImage* Img_BG_02; // 0x280(0x08)
	struct UImage* Img_Bg_04; // 0x288(0x08)
	struct UImage* Img_HeroBg; // 0x290(0x08)
	struct UImage* Img_HeroHead; // 0x298(0x08)
	struct UCanvasPanel* Panel_HeroFighting; // 0x2a0(0x08)
	struct UUI_Component_Proficiency_C* Proficiency; // 0x2a8(0x08)
	struct USolarTextBlock* Txt_HeroRank; // 0x2b0(0x08)
	struct UUI_Component_Ranking_C* UI_Component_Ranking; // 0x2b8(0x08)
	int32_t HeroScore; // 0x2c0(0x04)
	enum class E_RankingType HeroFighting; // 0x2c4(0x01)
	bool ShowHeroFightingTitle; // 0x2c5(0x01)

	struct FString GetModuleName(); // Function UI_Target_BusinessCard_HeroRank.UI_Target_BusinessCard_HeroRank_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetHeroScore(int32_t HeroScore, bool ShowHeroFightingTitle, enum class E_RankingType RankingType); // Function UI_Target_BusinessCard_HeroRank.UI_Target_BusinessCard_HeroRank_C.SetHeroScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Target_BusinessCard_HeroRank.UI_Target_BusinessCard_HeroRank_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Target_BusinessCard_HeroRank(int32_t EntryPoint); // Function UI_Target_BusinessCard_HeroRank.UI_Target_BusinessCard_HeroRank_C.ExecuteUbergraph_UI_Target_BusinessCard_HeroRank // (Final|UbergraphFunction) // @ game+0x2d63a00
};

