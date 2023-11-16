// WidgetBlueprintGeneratedClass UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C
// Size: 0x551 (Inherited: 0x400)
struct UUI_Lobby_TeamInvite_Mini_Popup_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x408(0x08)
	struct USolarButton* Btn_Join_Common; // 0x410(0x08)
	struct UButton* Btn_Player; // 0x418(0x08)
	struct UButton* Btn_Player_3; // 0x420(0x08)
	struct UHorizontalBox* HorizentalBox_Spectator; // 0x428(0x08)
	struct UHorizontalBox* HorizontalBox_CreateRoom_Invitation; // 0x430(0x08)
	struct UHorizontalBox* HorizontalBox_Home_Invitation; // 0x438(0x08)
	struct UHorizontalBox* HorizontalBox_Player; // 0x440(0x08)
	struct UHorizontalBox* HorizontalBox_Skydiving_Invitation; // 0x448(0x08)
	struct UHorizontalBox* HorizontalBox_Skydiving_Transfer; // 0x450(0x08)
	struct UHorizontalBox* HorizontalBox_Team_Application; // 0x458(0x08)
	struct UHorizontalBox* HorizontalBox_Team_Invitation; // 0x460(0x08)
	struct UImage* Img_Btn_Join; // 0x468(0x08)
	struct UImage* Img_GameMode_Icon; // 0x470(0x08)
	struct UImage* Img_Join_Common_Light; // 0x478(0x08)
	struct UImage* Img_Team_Num; // 0x480(0x08)
	struct UImage* Img_Title_BG_2; // 0x488(0x08)
	struct UOverlay* Overlay_Avatar; // 0x490(0x08)
	struct UOverlay* Overlay_Avatar_3; // 0x498(0x08)
	struct UCanvasPanel* Panel_Info_CreateRoom_Invitation; // 0x4a0(0x08)
	struct UCanvasPanel* Panel_Info_Invitation; // 0x4a8(0x08)
	struct UCanvasPanel* Panel_Pop_Common; // 0x4b0(0x08)
	struct UProgressBar* ProgressBar_CountDown; // 0x4b8(0x08)
	struct UOverlay* SizeBox_Team_Num; // 0x4c0(0x08)
	struct UTickerWidget_C* Text_NickName; // 0x4c8(0x08)
	struct USolarTextBlock* Txt_Capacity; // 0x4d0(0x08)
	struct USolarTextBlock* Txt_GameMode; // 0x4d8(0x08)
	struct USolarTextBlock* Txt_Home; // 0x4e0(0x08)
	struct USolarTextBlock* Txt_Invitation; // 0x4e8(0x08)
	struct USolarTextBlock* Txt_Join_Common; // 0x4f0(0x08)
	struct UTextBlock* Txt_OBCurr; // 0x4f8(0x08)
	struct USolarTextBlock* Txt_OBTotal; // 0x500(0x08)
	struct UTextBlock* Txt_Player; // 0x508(0x08)
	struct USolarTextBlock* Txt_PlayerIn; // 0x510(0x08)
	struct USolarTextBlock* Txt_Room_Name; // 0x518(0x08)
	struct USolarTextBlock* Txt_Skydiving; // 0x520(0x08)
	struct USolarTextBlock* Txt_Skydiving_2; // 0x528(0x08)
	struct UUI_Component_Close_C* UI_Component_Close; // 0x530(0x08)
	struct UUI_Component_PlayerHead_C* UI_Component_PlayerHead_2; // 0x538(0x08)
	struct UUI_Component_PlayerHead_C* UI_Component_PlayerHead_3; // 0x540(0x08)
	enum class T_Type_Invitation Pop_Type; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	int32_t Player; // 0x54c(0x04)
	bool IsNeedShow; // 0x550(0x01)

	void OnClicked_018D883C490B1676A84C95BD1A81B45A(); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.OnClicked_018D883C490B1676A84C95BD1A81B45A // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5f200
	void OnClicked_F21460E14CA5BF10B26A4284C63C6C24(); // DelegateFunction UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.OnClicked_F21460E14CA5BF10B26A4284C63C6C24 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetPlayer(int32_t Num); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.SetPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetType(enum class T_Type_Invitation Pop_Type); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup(int32_t EntryPoint); // Function UI_Lobby_TeamInvite_MIni_Popup.UI_Lobby_TeamInvite_Mini_Popup_C.ExecuteUbergraph_UI_Lobby_TeamInvite_Mini_Popup // (Final|UbergraphFunction) // @ game+0x2d63a00
};

