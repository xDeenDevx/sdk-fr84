// WidgetBlueprintGeneratedClass UI_Update.UI_Update_C
// Size: 0x558 (Inherited: 0x400)
struct UUI_Update_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x408(0x08)
	struct UButton* Btn_AgeLimit; // 0x410(0x08)
	struct UButton* Btn_Fix; // 0x418(0x08)
	struct USolarButton* btn_link; // 0x420(0x08)
	struct USolarButton* btn_new; // 0x428(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x430(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x438(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x440(0x08)
	struct UImage* icon_link; // 0x448(0x08)
	struct UImage* Image_173; // 0x450(0x08)
	struct UImage* Img_Bg_Update; // 0x458(0x08)
	struct UImage* img_light_link; // 0x460(0x08)
	struct UImage* Img_Logo; // 0x468(0x08)
	struct UImage* img_Mask; // 0x470(0x08)
	struct UCanvasPanel* Panel_Load; // 0x478(0x08)
	struct USizeBox* Panel_ServerList; // 0x480(0x08)
	struct UProgressBar* ProgressBar_Download; // 0x488(0x08)
	struct UButton* StartGame; // 0x490(0x08)
	struct USolarTextBlock* StartGameText; // 0x498(0x08)
	struct USolarTextBlock* text_link; // 0x4a0(0x08)
	struct USolarTextBlock* text_new; // 0x4a8(0x08)
	struct USolarTextBlock* text_or; // 0x4b0(0x08)
	struct UTileView* TileView_ServerList; // 0x4b8(0x08)
	struct USolarTextBlock* Txt_GameInfo_CN; // 0x4c0(0x08)
	struct UTextBlock* Txt_LatestBuildNumber; // 0x4c8(0x08)
	struct USolarTextBlock* Txt_Loading_2; // 0x4d0(0x08)
	struct UTextBlock* Txt_SourceBuildNumber; // 0x4d8(0x08)
	struct USolarTextBlock* Txt_Speed; // 0x4e0(0x08)
	struct USolarTextBlock* Txt_Tips_2; // 0x4e8(0x08)
	struct UUI_UpdateLoadingBase_C* UpdateLoadingBase; // 0x4f0(0x08)
	struct UWidgetSwitcher* wgs_start; // 0x4f8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x500(0x08)
	struct FSlateColor Color_hoverd; // 0x508(0x28)
	struct FSlateColor Color_default; // 0x530(0x28)

	void OnBackdoorFaild_6BF6FC7948BFB1DBE458B0A466077E0E(enum class EDownloadTaskError ErrorReason, int32_t ReturnCode); // DelegateFunction UI_Update.UI_Update_C.OnBackdoorFaild_6BF6FC7948BFB1DBE458B0A466077E0E // (Public|Delegate) // @ game+0xb5be00
	void OnBackdoorComplete_49DA73BA4AF94A1FFDA254B7024F21CC(struct FString BackdoorString); // DelegateFunction UI_Update.UI_Update_C.OnBackdoorComplete_49DA73BA4AF94A1FFDA254B7024F21CC // (Public|Delegate) // @ game+0xb5be00
	void OnAnnouncementGetFail_8F15532B4AB243F94B19F48895B7EE1E(enum class ELoginAnnouncement AnnounceType, enum class EDownloadTaskError ErrorReason, int32_t ReturnCode); // DelegateFunction UI_Update.UI_Update_C.OnAnnouncementGetFail_8F15532B4AB243F94B19F48895B7EE1E // (Public|Delegate) // @ game+0xb5be00
	void OnAnnouncementGet_58E23CAE4B5BD0E5E485CDBB01DFF637(enum class ELoginAnnouncement AnnounceType, struct FString Title, struct FString Content, struct FString Update, struct FString Exit); // DelegateFunction UI_Update.UI_Update_C.OnAnnouncementGet_58E23CAE4B5BD0E5E485CDBB01DFF637 // (Public|Delegate) // @ game+0xb5be00
	void OnCDNDownloadFailed_4EEE673B4053C9A29565FB9E5F700AF5(int32_t ErrorStep, struct FString ErrorReason, int32_t ReturnCode, struct FString URL); // DelegateFunction UI_Update.UI_Update_C.OnCDNDownloadFailed_4EEE673B4053C9A29565FB9E5F700AF5 // (Public|Delegate) // @ game+0xb5be00
	void OnPatchFailed_EE905C9A4CBE62BD7290DFBDD6CDE5F6(int32_t ErrorReason, int32_t ReturnCode, struct FString URL); // DelegateFunction UI_Update.UI_Update_C.OnPatchFailed_EE905C9A4CBE62BD7290DFBDD6CDE5F6 // (Public|Delegate) // @ game+0xb5be00
	void OnPatchComplete_01DEF4FC477093EF716D208D92D9EFC2(); // DelegateFunction UI_Update.UI_Update_C.OnPatchComplete_01DEF4FC477093EF716D208D92D9EFC2 // (Public|Delegate) // @ game+0xb5be00
	void OnPatchPrompt_8814C5694A5B06960C06A6958C449F9C(uint32_t DownloadSize, int32_t FileNum); // DelegateFunction UI_Update.UI_Update_C.OnPatchPrompt_8814C5694A5B06960C06A6958C449F9C // (Public|Delegate) // @ game+0xb5be00
	void OnLoginFailed_8F7C50B847B3BF85449C80960137E878(enum class ELLHSDKLoginType LoginType, int32_t ErrorCode); // DelegateFunction UI_Update.UI_Update_C.OnLoginFailed_8F7C50B847B3BF85449C80960137E878 // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	void OnClicked_4622E1D34F108F5ABD9C29A590DBBC0C(); // DelegateFunction UI_Update.UI_Update_C.OnClicked_4622E1D34F108F5ABD9C29A590DBBC0C // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	void OnReleased_B7B6689F42D249FB9683D3800DBB63FF(); // DelegateFunction UI_Update.UI_Update_C.OnReleased_B7B6689F42D249FB9683D3800DBB63FF // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	void OnAssetManagerPreloadCompleted_7A1F581B42126FC85D3958BC1B11E707(); // DelegateFunction UI_Update.UI_Update_C.OnAssetManagerPreloadCompleted_7A1F581B42126FC85D3958BC1B11E707 // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	void OnHandleLuaException_71E025E04936B805AE309790F3D0823C(struct FString ErrorMsg, struct FString StaceTrace); // DelegateFunction UI_Update.UI_Update_C.OnHandleLuaException_71E025E04936B805AE309790F3D0823C // (MulticastDelegate|Public|Delegate) // @ game+0xb5be00
	void ConnectGateExecCopy(); // Function UI_Update.UI_Update_C.ConnectGateExecCopy // (BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnSolarUIClosed(); // Function UI_Update.UI_Update_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6a060
	void Destruct(); // Function UI_Update.UI_Update_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6a060
	void OnSolarUIOpened(); // Function UI_Update.UI_Update_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6a060
	void ReceiveTick(struct FGeometry& MyGeometry, float InDeltaTime); // Function UI_Update.UI_Update_C.ReceiveTick // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xb6a060
	struct FString GetModuleName(); // Function UI_Update.UI_Update_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d656b0
	void OnVideoReady(); // Function UI_Update.UI_Update_C.OnVideoReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void InitMedia(bool& Result); // Function UI_Update.UI_Update_C.InitMedia // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void FinishLoadLobby(int32_t Type); // Function UI_Update.UI_Update_C.FinishLoadLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void PreConstruct(bool IsDesignTime); // Function UI_Update.UI_Update_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UI_Update.UI_Update_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveShow(); // Function UI_Update.UI_Update_C.ReceiveShow // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ConnectGateExec(); // Function UI_Update.UI_Update_C.ConnectGateExec // (BlueprintCallable|BlueprintEvent) // @ game+0xb6a060
	void ReceiveHide(); // Function UI_Update.UI_Update_C.ReceiveHide // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d656b0
	void BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UI_Update.UI_Update_C.BndEvt__btn_link_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_UI_Update(int32_t EntryPoint); // Function UI_Update.UI_Update_C.ExecuteUbergraph_UI_Update // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d656b0
};

