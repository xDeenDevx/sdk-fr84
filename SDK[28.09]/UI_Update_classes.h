// WidgetBlueprintGeneratedClass UI_Update.UI_Update_C
// Size: 0x480 (Inherited: 0x348)
struct UUI_Update_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x350(0x08)
	struct UButton* Btn_Fix; // 0x358(0x08)
	struct USolarButton* btn_link; // 0x360(0x08)
	struct USolarButton* btn_new; // 0x368(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x370(0x08)
	struct UImage* icon_link; // 0x378(0x08)
	struct UImage* Image_173; // 0x380(0x08)
	struct UImage* Img_Bg_Update; // 0x388(0x08)
	struct UImage* img_light_link; // 0x390(0x08)
	struct UImage* Img_Logo; // 0x398(0x08)
	struct UImage* img_Mask; // 0x3a0(0x08)
	struct UCanvasPanel* Panel_Load; // 0x3a8(0x08)
	struct USizeBox* Panel_ServerList; // 0x3b0(0x08)
	struct UProgressBar* ProgressBar_Download; // 0x3b8(0x08)
	struct UButton* StartGame; // 0x3c0(0x08)
	struct USolarTextBlock* StartGameText; // 0x3c8(0x08)
	struct USolarTextBlock* text_link; // 0x3d0(0x08)
	struct USolarTextBlock* text_new; // 0x3d8(0x08)
	struct USolarTextBlock* text_or; // 0x3e0(0x08)
	struct UTileView* TileView_ServerList; // 0x3e8(0x08)
	struct UTextBlock* Txt_LatestBuildNumber; // 0x3f0(0x08)
	struct USolarTextBlock* Txt_Loading_2; // 0x3f8(0x08)
	struct UTextBlock* Txt_SourceBuildNumber; // 0x400(0x08)
	struct USolarTextBlock* Txt_Speed; // 0x408(0x08)
	struct USolarTextBlock* Txt_Tips_2; // 0x410(0x08)
	struct UUI_UpdateLoadingBase_C* UpdateLoadingBase; // 0x418(0x08)
	struct UWidgetSwitcher* wgs_start; // 0x420(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x428(0x08)
	struct FSlateColor Color_hoverd; // 0x430(0x28)
	struct FSlateColor Color_default; // 0x458(0x28)

	struct FString GetModuleName(); // Function UI_Update.UI_Update_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void OnVideoReady(); // Function UI_Update.UI_Update_C.OnVideoReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void InitMedia(bool& Result); // Function UI_Update.UI_Update_C.InitMedia // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void FinishLoadLobby(int32_t Type); // Function UI_Update.UI_Update_C.FinishLoadLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Update.UI_Update_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Update.UI_Update_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ReceiveShow(); // Function UI_Update.UI_Update_C.ReceiveShow // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ConnectGateExec(); // Function UI_Update.UI_Update_C.ConnectGateExec // (BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	void ReceiveHide(); // Function UI_Update.UI_Update_C.ReceiveHide // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Update(int32_t EntryPoint); // Function UI_Update.UI_Update_C.ExecuteUbergraph_UI_Update // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

