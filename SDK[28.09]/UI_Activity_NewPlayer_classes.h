// WidgetBlueprintGeneratedClass UI_Activity_NewPlayer.UI_Activity_NewPlayer_C
// Size: 0x3f0 (Inherited: 0x348)
struct UUI_Activity_NewPlayer_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Appear_Anim; // 0x350(0x08)
	struct USolarButton* Btn_Cancel; // 0x358(0x08)
	struct UHorizontalBox* HorizontalBox_Items; // 0x360(0x08)
	struct UImage* Image_233; // 0x368(0x08)
	struct UImage* Img_Bg; // 0x370(0x08)
	struct UImage* Img_Exit; // 0x378(0x08)
	struct UImage* Img_Title01_BG; // 0x380(0x08)
	struct UCanvasPanel* Panel; // 0x388(0x08)
	struct USolarTextBlock* Txt_LeftTime; // 0x390(0x08)
	struct USolarTextBlock* Txt_Title01; // 0x398(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_2; // 0x3a0(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_3; // 0x3a8(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_4; // 0x3b0(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_5; // 0x3b8(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_6; // 0x3c0(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_7; // 0x3c8(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_8; // 0x3d0(0x08)
	struct UUI_Activity_NewPlayer_Item_C* UI_Activity_NewPlayer_Item_9; // 0x3d8(0x08)
	struct TArray<struct UUI_Activity_NewPlayer_Item_C*> NewPlayerRewardList; // 0x3e0(0x10)

	struct FString GetModuleName(); // Function UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Activity_NewPlayer(int32_t EntryPoint); // Function UI_Activity_NewPlayer.UI_Activity_NewPlayer_C.ExecuteUbergraph_UI_Activity_NewPlayer // (Final|UbergraphFunction) // @ game+0x2649560
};

