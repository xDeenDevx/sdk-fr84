// WidgetBlueprintGeneratedClass UI_Component_Tips.UI_Component_Tips_C
// Size: 0x4f5 (Inherited: 0x400)
struct UUI_Component_Tips_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Exit; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x410(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x418(0x08)
	struct UOverlay* Arrow_B; // 0x420(0x08)
	struct UOverlay* Arrow_L; // 0x428(0x08)
	struct UOverlay* Arrow_R; // 0x430(0x08)
	struct UImage* Img_Bg; // 0x438(0x08)
	struct UImage* Img_Light; // 0x440(0x08)
	struct UImage* Img_Light_2; // 0x448(0x08)
	struct UImage* Img_Mininum; // 0x450(0x08)
	struct USolarListView* List_Item; // 0x458(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_2; // 0x460(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_3; // 0x468(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_4; // 0x470(0x08)
	struct UUI_Target_Medal_Challenge_S_C* Medal_5; // 0x478(0x08)
	struct UHorizontalBox* Panel_Medal; // 0x480(0x08)
	struct USizeBox* SizeBox_2; // 0x488(0x08)
	struct USpacer* Spacer_390; // 0x490(0x08)
	struct USolarTextBlock* Txt_Details; // 0x498(0x08)
	struct USolarTextBlock* Txt_Num; // 0x4a0(0x08)
	struct USolarTextBlock* Txt_Title; // 0x4a8(0x08)
	struct UUI_Component_Btn_C* UI_Component_Btn; // 0x4b0(0x08)
	struct UUI_Component_Item_C* UI_Component_Item; // 0x4b8(0x08)
	struct UUI_Shop_Tips_Video_C* UI_Shop_Tips_Video; // 0x4c0(0x08)
	struct UVerticalBox* VerticalBox_41; // 0x4c8(0x08)
	bool Left; // 0x4d0(0x01)
	bool Right; // 0x4d1(0x01)
	bool Btn; // 0x4d2(0x01)
	bool Num; // 0x4d3(0x01)
	bool Item; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	float Location; // 0x4d8(0x04)
	bool Title; // 0x4dc(0x01)
	bool Medal; // 0x4dd(0x01)
	bool Task; // 0x4de(0x01)
	bool Detail; // 0x4df(0x01)
	bool Bottom; // 0x4e0(0x01)
	enum class ESlateColorStylingMode NewVar_1; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	struct FLinearColor NewVar_2; // 0x4e4(0x10)
	bool IsHaveVideo; // 0x4f4(0x01)

	void OnInitialized(); // Function UI_Component_Tips.UI_Component_Tips_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Component_Tips.UI_Component_Tips_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetBtnVideo(bool NewParam); // Function UI_Component_Tips.UI_Component_Tips_C.SetBtnVideo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnEntryReleased(); // Function UI_Component_Tips.UI_Component_Tips_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UI_Component_Tips.UI_Component_Tips_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UI_Component_Tips.UI_Component_Tips_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Tips.UI_Component_Tips_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Component_Tips.UI_Component_Tips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ChangeTipStatus(); // Function UI_Component_Tips.UI_Component_Tips_C.ChangeTipStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__UI_Shop_Tips_Video_K2Node_ComponentBoundEvent_0_OnBtnPlayVideoClicked__DelegateSignature(); // Function UI_Component_Tips.UI_Component_Tips_C.BndEvt__UI_Shop_Tips_Video_K2Node_ComponentBoundEvent_0_OnBtnPlayVideoClicked__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Tips(int32_t EntryPoint); // Function UI_Component_Tips.UI_Component_Tips_C.ExecuteUbergraph_UI_Component_Tips // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

