// WidgetBlueprintGeneratedClass UI_Lobby_Recruit.UI_Lobby_Recruit_C
// Size: 0x466 (Inherited: 0x400)
struct UUI_Lobby_Recruit_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x408(0x08)
	struct UButton* Btn_Recruit; // 0x410(0x08)
	struct UButton* Btn_Recruit_2; // 0x418(0x08)
	struct UImage* Img_BG_Invite; // 0x420(0x08)
	struct UImage* Img_BG_Recruit; // 0x428(0x08)
	struct USizeBox* SizeBox_1; // 0x430(0x08)
	struct USolarTextBlock* Txt_Invite; // 0x438(0x08)
	struct USolarTextBlock* Txt_Invite1; // 0x440(0x08)
	struct USolarTextBlock* Txt_Invite2; // 0x448(0x08)
	struct USolarTextBlock* Txt_Recruit; // 0x450(0x08)
	bool Recruiting; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	int32_t Size W; // 0x45c(0x04)
	int32_t Size H; // 0x460(0x04)
	enum class E_Type_State_Desktop StateDesktopInvite; // 0x464(0x01)
	enum class E_Type_State_Desktop StateDesktopRecruit; // 0x465(0x01)

	void OnClicked_7D00C543458753F0EF26D39B2EA4F054(); // DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_7D00C543458753F0EF26D39B2EA4F054 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_5B1D9B6B402C98E79BC5F3AE3BE2B592(); // DelegateFunction UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnClicked_5B1D9B6B402C98E79BC5F3AE3BE2B592 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetSize(int32_t Size H, int32_t Size W); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetStateDesktop(enum class E_Type_State_Desktop StateDesktopInvite, enum class E_Type_State_Desktop StateDesktopRecruit); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.SetStateDesktop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Lobby_Recruit(int32_t EntryPoint); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ExecuteUbergraph_UI_Lobby_Recruit // (Final|UbergraphFunction) // @ game+0x2d63a00
};

