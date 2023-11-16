// WidgetBlueprintGeneratedClass UI_Rank_Icon_Small.UI_Rank_Icon_Small_C
// Size: 0x454 (Inherited: 0x400)
struct UUI_Rank_Icon_Small_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* Img_Rank; // 0x408(0x08)
	struct UImage* Img_Rank_Word; // 0x410(0x08)
	struct USizeBox* Size_Rank; // 0x418(0x08)
	struct USizeBox* Size_Txt; // 0x420(0x08)
	struct USolarTextBlock* TextBlock_StarNum; // 0x428(0x08)
	struct USolarTextBlock* Txt_LegendRank; // 0x430(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Detail; // 0x438(0x08)
	int32_t LevelID; // 0x440(0x04)
	bool Star; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	int32_t IconSize; // 0x448(0x04)
	struct FVector2D TxtSize; // 0x44c(0x08)

	void FormatViewJustIconCopy(int32_t LevelID); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIconCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void FormatViewCopy(int32_t LevelID); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void OnSolarUIClosed(); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	void OnInitialized(); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void OnSolarUIOpened(); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	struct FString GetModuleName(); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void FormatViewJustIcon(int32_t LevelID); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatViewJustIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6c980
	void SetStar(bool Star); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetStar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void FormatView(int32_t LevelID); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.FormatView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6c980
	void PreConstruct(bool IsDesignTime); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void SetRankIconView(int32_t Param); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.SetRankIconView // (BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Rank_Icon_Small(int32_t EntryPoint); // Function UI_Rank_Icon_Small.UI_Rank_Icon_Small_C.ExecuteUbergraph_UI_Rank_Icon_Small // (Final|UbergraphFunction) // @ game+0x2d64c70
};

