// WidgetBlueprintGeneratedClass UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C
// Size: 0x5bc (Inherited: 0x348)
struct UUI_Lobby_SupplyBox_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Normal_Loop; // 0x350(0x08)
	struct UWidgetAnimation* Anim_Claim_Loop; // 0x358(0x08)
	struct UButton* Btn_SupplyBox; // 0x360(0x08)
	struct UImage* Img_Bg; // 0x368(0x08)
	struct UImage* Img_Box; // 0x370(0x08)
	struct UImage* Img_Glow; // 0x378(0x08)
	struct UImage* Img_Glow_Claim; // 0x380(0x08)
	struct UImage* Img_Star; // 0x388(0x08)
	struct UOverlay* Overlay_BarBg; // 0x390(0x08)
	struct UOverlay* Overlay_Claim; // 0x398(0x08)
	struct UProgressBar* ProgressBar_Num; // 0x3a0(0x08)
	struct USolarRichTextBlock* RichText_Progress; // 0x3a8(0x08)
	struct USlider* Slider_Num; // 0x3b0(0x08)
	struct UTickerWidget_C* TickerWidget; // 0x3b8(0x08)
	struct USolarTextBlock* Txt_Claimed; // 0x3c0(0x08)
	struct UTextBlock* Txt_ClaimedNum; // 0x3c8(0x08)
	bool Claim; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	int32_t State; // 0x3d4(0x04)
	struct UImage* Img_Bg_1_1; // 0x3d8(0x08)
	struct UImage* Img_Bg_3_1; // 0x3e0(0x08)
	struct FProgressBarStyle NewVar_1; // 0x3e8(0x1d0)
	float PreviewPercent; // 0x5b8(0x04)

	struct FString GetModuleName(); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetPercent(float Percent); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetState(int32_t State, bool Claim); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Lobby_SupplyBox(int32_t EntryPoint); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.ExecuteUbergraph_UI_Lobby_SupplyBox // (Final|UbergraphFunction) // @ game+0x2649560
};

