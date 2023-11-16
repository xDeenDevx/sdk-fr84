// WidgetBlueprintGeneratedClass UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C
// Size: 0x549 (Inherited: 0x400)
struct UUI_Lobby_TeamInvite_Popup_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* RightToLeft_Anim; // 0x408(0x08)
	struct USolarButton* Btn_Join_Common; // 0x410(0x08)
	struct UButton* Btn_Player; // 0x418(0x08)
	struct UButton* Btn_Player_3; // 0x420(0x08)
	struct UHorizontalBox* HorizentalBox_Spectator; // 0x428(0x08)
	struct UHorizontalBox* HorizontalBox_CreateRoom_Invitation; // 0x430(0x08)
	struct UHorizontalBox* HorizontalBox_Home_Invitation; // 0x438(0x08)
	struct UHorizontalBox* HorizontalBox_Player; // 0x440(0x08)
	struct UHorizontalBox* HorizontalBox_Team_Application; // 0x448(0x08)
	struct UImage* Img_Btn_Join; // 0x450(0x08)
	struct UImage* Img_GameMode_Icon; // 0x458(0x08)
	struct UImage* Img_GameMode_Icon_3; // 0x460(0x08)
	struct UImage* Img_Join_Common_Light; // 0x468(0x08)
	struct UImage* Img_Title_BG_2; // 0x470(0x08)
	struct UOverlay* Overlay_Avatar; // 0x478(0x08)
	struct UOverlay* Overlay_Avatar_3; // 0x480(0x08)
	struct UCanvasPanel* Panel_Info_CreateRoom_Invitation; // 0x488(0x08)
	struct UCanvasPanel* Panel_Info_Invitation; // 0x490(0x08)
	struct UCanvasPanel* Panel_Pop_Common; // 0x498(0x08)
	struct UProgressBar* ProgressBar_CountDown; // 0x4a0(0x08)
	struct USolarRichTextBlock* RichTxt_LvlRequired; // 0x4a8(0x08)
	struct UScaleBox* ScaleBox_Match; // 0x4b0(0x08)
	struct USolarTextBlock* Text_RemarkName; // 0x4b8(0x08)
	struct USolarTextBlock* Txt_Capacity; // 0x4c0(0x08)
	struct USolarTextBlock* Txt_GameMode_2; // 0x4c8(0x08)
	struct USolarTextBlock* Txt_GameMode_3; // 0x4d0(0x08)
	struct USolarTextBlock* Txt_Home; // 0x4d8(0x08)
	struct USolarTextBlock* Txt_Invitation; // 0x4e0(0x08)
	struct USolarTextBlock* Txt_Join_Common; // 0x4e8(0x08)
	struct USolarTextBlock* Txt_Map; // 0x4f0(0x08)
	struct USolarTextBlock* Txt_Map_2; // 0x4f8(0x08)
	struct UTextBlock* Txt_OBCurr; // 0x500(0x08)
	struct USolarTextBlock* Txt_OBTotal; // 0x508(0x08)
	struct USolarTextBlock* Txt_PlayerIn; // 0x510(0x08)
	struct USolarTextBlock* Txt_Team_Invitation_Info; // 0x518(0x08)
	struct USolarTextBlock* Txt_Team_Invitation_Info_2; // 0x520(0x08)
	struct UUI_Component_Close_C* UI_Component_Close; // 0x528(0x08)
	struct UUI_Component_PlayerHead_C* UI_Component_PlayerHead_2; // 0x530(0x08)
	struct UUI_Component_PlayerHead_C* UI_Component_PlayerHead_3; // 0x538(0x08)
	struct UUI_Component_PlayerName_C* UI_Component_PlayerName; // 0x540(0x08)
	enum class T_Type_Invitation Pop_Type; // 0x548(0x01)

	void OnClicked_DEA3991C47222C332009DC819FA1B310(); // Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.OnClicked_DEA3991C47222C332009DC819FA1B310 // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5f200
	void OnClicked_625DF6F942F9BA5FEE64DCB01B8DEDE1(); // DelegateFunction UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.OnClicked_625DF6F942F9BA5FEE64DCB01B8DEDE1 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetType(enum class T_Type_Invitation Pop_Type); // Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_TeamInvite_Popup(int32_t EntryPoint); // Function UI_Lobby_TeamInvite_Popup.UI_Lobby_TeamInvite_Popup_C.ExecuteUbergraph_UI_Lobby_TeamInvite_Popup // (Final|UbergraphFunction) // @ game+0x2d63a00
};

