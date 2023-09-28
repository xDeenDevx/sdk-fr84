// WidgetBlueprintGeneratedClass UI_Component_Tips.UI_Component_Tips_C
// Size: 0x434 (Inherited: 0x348)
struct UUI_Component_Tips_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Exit; // 0x350(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x358(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x360(0x08)
	struct UOverlay* Arrow_B; // 0x368(0x08)
	struct UOverlay* Arrow_L; // 0x370(0x08)
	struct UOverlay* Arrow_R; // 0x378(0x08)
	struct UImage* Img_Bg; // 0x380(0x08)
	struct UImage* Img_Light; // 0x388(0x08)
	struct UImage* Img_Light_2; // 0x390(0x08)
	struct UImage* Img_Mininum; // 0x398(0x08)
	struct USolarListView* List_Item; // 0x3a0(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_2; // 0x3a8(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_3; // 0x3b0(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_4; // 0x3b8(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_5; // 0x3c0(0x08)
	struct UHorizontalBox* Panel_Medal; // 0x3c8(0x08)
	struct USizeBox* SizeBox_2; // 0x3d0(0x08)
	struct USpacer* Spacer_390; // 0x3d8(0x08)
	struct USolarTextBlock* Txt_Details; // 0x3e0(0x08)
	struct USolarTextBlock* Txt_Num; // 0x3e8(0x08)
	struct USolarTextBlock* Txt_Title; // 0x3f0(0x08)
	struct UUI_Component_Btn_C* UI_Component_Btn; // 0x3f8(0x08)
	struct UUI_Component_Item_C* UI_Component_Item; // 0x400(0x08)
	struct UVerticalBox* VerticalBox_41; // 0x408(0x08)
	bool Left; // 0x410(0x01)
	bool Right; // 0x411(0x01)
	bool Btn; // 0x412(0x01)
	bool Num; // 0x413(0x01)
	bool Item; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	float Location; // 0x418(0x04)
	bool Title; // 0x41c(0x01)
	bool Medal; // 0x41d(0x01)
	bool Task; // 0x41e(0x01)
	bool Detail; // 0x41f(0x01)
	bool Bottom; // 0x420(0x01)
	enum class ESlateColorStylingMode NewVar_1; // 0x421(0x01)
	char pad_422[0x2]; // 0x422(0x02)
	struct FLinearColor NewVar_2; // 0x424(0x10)

	struct FString GetModuleName(); // Function UI_Component_Tips.UI_Component_Tips_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void BP_OnEntryReleased(); // Function UI_Component_Tips.UI_Component_Tips_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Tips.UI_Component_Tips_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Tips.UI_Component_Tips_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Tips.UI_Component_Tips_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Component_Tips.UI_Component_Tips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ChangeTipStatus(); // Function UI_Component_Tips.UI_Component_Tips_C.ChangeTipStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_Tips(int32_t EntryPoint); // Function UI_Component_Tips.UI_Component_Tips_C.ExecuteUbergraph_UI_Component_Tips // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

