// WidgetBlueprintGeneratedClass UI_Component_Ranking.UI_Component_Ranking_C
// Size: 0x46c (Inherited: 0x400)
struct UUI_Component_Ranking_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x408(0x08)
	struct UImage* Img_Glow; // 0x410(0x08)
	struct UImage* Img_Glow_2; // 0x418(0x08)
	struct UImage* Img_RankingBg; // 0x420(0x08)
	struct UImage* Img_Star; // 0x428(0x08)
	struct UImage* img_Top3; // 0x430(0x08)
	struct UImage* Img_Wipes; // 0x438(0x08)
	struct UImage* Img_Wipes_2; // 0x440(0x08)
	struct UImage* Img_Wipes_3; // 0x448(0x08)
	struct USizeBox* SizeBox_69; // 0x450(0x08)
	struct USolarTextBlock* Txt_Ranking; // 0x458(0x08)
	enum class E_RankingType RankingType; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	struct FVector2D Size; // 0x464(0x08)

	void OnDeinitialize(); // Function UI_Component_Ranking.UI_Component_Ranking_C.OnDeinitialize // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Component_Ranking.UI_Component_Ranking_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Component_Ranking.UI_Component_Ranking_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void Set Size(struct FVector2D Size); // Function UI_Component_Ranking.UI_Component_Ranking_C.Set Size // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetRankingState(enum class E_RankingType RankingType); // Function UI_Component_Ranking.UI_Component_Ranking_C.SetRankingState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Ranking.UI_Component_Ranking_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Ranking(int32_t EntryPoint); // Function UI_Component_Ranking.UI_Component_Ranking_C.ExecuteUbergraph_UI_Component_Ranking // (Final|UbergraphFunction) // @ game+0x2d63a00
};

