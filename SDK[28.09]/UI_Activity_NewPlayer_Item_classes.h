// WidgetBlueprintGeneratedClass UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C
// Size: 0x412 (Inherited: 0x348)
struct UUI_Activity_NewPlayer_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Set_Loop_Anim; // 0x350(0x08)
	struct UImage* check; // 0x358(0x08)
	struct UButton* ClickBtn; // 0x360(0x08)
	struct UTextBlock* count; // 0x368(0x08)
	struct UImage* Image_TrialTag; // 0x370(0x08)
	struct UImage* Img_Bg; // 0x378(0x08)
	struct UImage* Img_BGBlack; // 0x380(0x08)
	struct UImage* Img_CanGet; // 0x388(0x08)
	struct UImage* Img_Check_Bg; // 0x390(0x08)
	struct UImage* Img_Day_NormalBG; // 0x398(0x08)
	struct UImage* Img_Day_NormalBG_2; // 0x3a0(0x08)
	struct UImage* Img_Item; // 0x3a8(0x08)
	struct UImage* Img_Item_Quaitly_Light; // 0x3b0(0x08)
	struct UImage* Img_Item_Quaitly_Line; // 0x3b8(0x08)
	struct UImage* Img_Quaitly_BG; // 0x3c0(0x08)
	struct URetainerBox* Item_Normal; // 0x3c8(0x08)
	struct UOverlay* Overlay_CanGet; // 0x3d0(0x08)
	struct UOverlay* Overlay_NormalDate; // 0x3d8(0x08)
	struct UOverlay* Overlay_NormalDate_2; // 0x3e0(0x08)
	struct UOverlay* Panel_Get; // 0x3e8(0x08)
	struct UWidgetSwitcher* Switcher_ItemStatus; // 0x3f0(0x08)
	struct USolarTextBlock* Txt_Day_Normal; // 0x3f8(0x08)
	struct USolarTextBlock* Txt_Day_Normal_2; // 0x400(0x08)
	struct USolarTextBlock* Txt_Day_Normal_3; // 0x408(0x08)
	enum class ESigninItemState State; // 0x410(0x01)
	bool bPlayAnim; // 0x411(0x01)

	struct FString GetModuleName(); // Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void CanGetItem(int32_t NumLoopsToPlay); // Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.CanGetItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetSigninState(enum class ESigninItemState State); // Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.SetSigninState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Activity_NewPlayer_Item(int32_t EntryPoint); // Function UI_Activity_NewPlayer_Item.UI_Activity_NewPlayer_Item_C.ExecuteUbergraph_UI_Activity_NewPlayer_Item // (Final|UbergraphFunction) // @ game+0x2649560
};

