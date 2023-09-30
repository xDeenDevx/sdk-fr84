// WidgetBlueprintGeneratedClass UI_Rank_Icon_Small.UI_Rank_Icon_Small_C
// Size: 0x39c (Inherited: 0x348)
struct UUI_Rank_Icon_Small_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UImage* Img_Rank; // 0x350(0x08)
	struct UImage* Img_Rank_Word; // 0x358(0x08)
	struct USizeBox* Size_Rank; // 0x360(0x08)
	struct USizeBox* Size_Txt; // 0x368(0x08)
	struct USolarTextBlock* TextBlock_StarNum; // 0x370(0x08)
	struct USolarTextBlock* Txt_LegendRank; // 0x378(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Detail; // 0x380(0x08)
	int32_t LevelID; // 0x388(0x04)
	bool STAR; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	int32_t IconSize; // 0x390(0x04)
	struct FVector2D TxtSize; // 0x394(0x08)

	struct FString GetModuleName(); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void FormatViewJustIcon(int32_t LevelID); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	void SetStar(bool STAR); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetStar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void FormatView(int32_t LevelID); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	void PreConstruct(bool IsDesignTime); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetRankIconView(int32_t Param); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetRankIconView // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Rank_Icon_Small(int32_t EntryPoint); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.ExecuteUbergraph_UI_Rank_Icon_Small // (Final|UbergraphFunction) // @ game+0x2649560
};

