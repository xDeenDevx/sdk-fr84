// WidgetBlueprintGeneratedClass UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C
// Size: 0x754 (Inherited: 0x400)
struct UUI_Lobby_SupplyBox_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Normal_Loop; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Claim_Loop; // 0x410(0x08)
	struct UButton* Btn_SupplyBox; // 0x418(0x08)
	struct UImage* Img_Bg; // 0x420(0x08)
	struct UImage* Img_Box; // 0x428(0x08)
	struct UImage* Img_Glow; // 0x430(0x08)
	struct UImage* Img_Glow_Claim; // 0x438(0x08)
	struct UImage* Img_Star; // 0x440(0x08)
	struct UOverlay* Overlay_BarBg; // 0x448(0x08)
	struct UOverlay* Overlay_Claim; // 0x450(0x08)
	struct UProgressBar* ProgressBar_Num; // 0x458(0x08)
	struct USolarRichTextBlock* RichText_Progress; // 0x460(0x08)
	struct USlider* Slider_Num; // 0x468(0x08)
	struct UTickerWidget_C* TickerWidget; // 0x470(0x08)
	struct USolarTextBlock* Txt_Claimed; // 0x478(0x08)
	struct UTextBlock* Txt_ClaimedNum; // 0x480(0x08)
	bool Claim; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	int32_t State; // 0x48c(0x04)
	struct UImage* Img_Bg_1_1; // 0x490(0x08)
	struct UImage* Img_Bg_3_1; // 0x498(0x08)
	struct FProgressBarStyle NewVar_1; // 0x4a0(0x2b0)
	float PreviewPercent; // 0x750(0x04)

	void OnClicked_27158C944585CB6B19C9099936572270(); // DelegateFunction UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.OnClicked_27158C944585CB6B19C9099936572270 // (MulticastDelegate|Public|Delegate) // @ game+0xb5e720
	void Destruct(); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void Construct(); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	struct FString GetModuleName(); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void SetPercent(float Percent); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void SetState(int32_t State, bool Claim); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Lobby_SupplyBox(int32_t EntryPoint); // Function UI_Lobby_SupplyBox.UI_Lobby_SupplyBox_C.ExecuteUbergraph_UI_Lobby_SupplyBox // (Final|UbergraphFunction) // @ game+0x2d64c70
};

