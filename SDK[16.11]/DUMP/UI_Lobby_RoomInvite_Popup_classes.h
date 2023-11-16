// WidgetBlueprintGeneratedClass UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C
// Size: 0x633 (Inherited: 0x400)
struct UUI_Lobby_RoomInvite_Popup_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Exit; // 0x410(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x418(0x08)
	struct USolarButton* Btn_Join_Common; // 0x420(0x08)
	struct USolarButton* Btn_Join_League; // 0x428(0x08)
	struct USolarButton* Btn_Joining; // 0x430(0x08)
	struct UButton* Btn_Player; // 0x438(0x08)
	struct UButton* Btn_Player_2; // 0x440(0x08)
	struct USolarButton* Btn_Watch; // 0x448(0x08)
	struct UHorizontalBox* HorizentalBox_Match; // 0x450(0x08)
	struct UHorizontalBox* HorizentalBox_Spectator; // 0x458(0x08)
	struct UHorizontalBox* HorizontalBox_Join; // 0x460(0x08)
	struct UHorizontalBox* HorizontalBox_Joining_2; // 0x468(0x08)
	struct UHorizontalBox* HorizontalBox_League; // 0x470(0x08)
	struct UHorizontalBox* HorizontalBox_Player; // 0x478(0x08)
	struct UHorizontalBox* HorizontalBox_Title_Common; // 0x480(0x08)
	struct UHorizontalBox* HorizontalBox_Title_Common_2; // 0x488(0x08)
	struct UHorizontalBox* HorizontalBox_Title_League; // 0x490(0x08)
	struct UHorizontalBox* HorizontalBox_Watch; // 0x498(0x08)
	struct UImage* Img_BG_Light; // 0x4a0(0x08)
	struct UImage* Img_BG_Light_01; // 0x4a8(0x08)
	struct UImage* Img_Btn_Join; // 0x4b0(0x08)
	struct UImage* Img_Btn_Join_2; // 0x4b8(0x08)
	struct UImage* Img_Btn_Joining_Close; // 0x4c0(0x08)
	struct UImage* Img_Btn_Watch; // 0x4c8(0x08)
	struct UImage* Img_Division; // 0x4d0(0x08)
	struct UImage* Img_Join_Common_Light; // 0x4d8(0x08)
	struct UImage* Img_Join_Light; // 0x4e0(0x08)
	struct USolarImageURL* Img_League_Icon; // 0x4e8(0x08)
	struct UImage* Img_Title_BG; // 0x4f0(0x08)
	struct UImage* Img_Title_BG_2; // 0x4f8(0x08)
	struct UImage* Img_Watch_Light; // 0x500(0x08)
	struct UOverlay* Overlay_Avatar; // 0x508(0x08)
	struct UOverlay* Overlay_Avatar_2; // 0x510(0x08)
	struct UOverlay* Overlay_Cup; // 0x518(0x08)
	struct UCanvasPanel* Panel_Info_CreateRoom; // 0x520(0x08)
	struct UCanvasPanel* Panel_Info_Invitation; // 0x528(0x08)
	struct UCanvasPanel* Panel_Pop_Common; // 0x530(0x08)
	struct UCanvasPanel* Panel_Pop_League; // 0x538(0x08)
	struct USolarRichTextBlock* RichTxt_LvlRequired; // 0x540(0x08)
	struct USolarTextBlock* Txt_Capacity; // 0x548(0x08)
	struct USolarTextBlock* Txt_Clan_Quantity; // 0x550(0x08)
	struct USolarTextBlock* Txt_GameMode; // 0x558(0x08)
	struct USolarTextBlock* Txt_GameMode_2; // 0x560(0x08)
	struct USolarTextBlock* Txt_Invitation; // 0x568(0x08)
	struct USolarTextBlock* Txt_Join; // 0x570(0x08)
	struct USolarTextBlock* Txt_Join_Common; // 0x578(0x08)
	struct USolarTextBlock* Txt_Joining; // 0x580(0x08)
	struct USolarTextBlock* Txt_League_Name; // 0x588(0x08)
	struct USolarTextBlock* Txt_Map; // 0x590(0x08)
	struct USolarTextBlock* Txt_Map_2; // 0x598(0x08)
	struct USolarTextBlock* Txt_Map_3; // 0x5a0(0x08)
	struct USolarTextBlock* Txt_Mode; // 0x5a8(0x08)
	struct USolarTextBlock* Txt_Number; // 0x5b0(0x08)
	struct UTextBlock* Txt_OBCurr; // 0x5b8(0x08)
	struct UTextBlock* Txt_OBCurr_2; // 0x5c0(0x08)
	struct UTextBlock* Txt_OBCurr_4; // 0x5c8(0x08)
	struct USolarTextBlock* Txt_OBTotal; // 0x5d0(0x08)
	struct USolarTextBlock* Txt_PlayerIn; // 0x5d8(0x08)
	struct UTextBlock* Txt_PlayerName; // 0x5e0(0x08)
	struct USolarTextBlock* Txt_Progress_Des; // 0x5e8(0x08)
	struct USolarTextBlock* Txt_Progress_Time; // 0x5f0(0x08)
	struct USolarTextBlock* Txt_RoomName; // 0x5f8(0x08)
	struct USolarTextBlock* Txt_Watch; // 0x600(0x08)
	struct UUI_Component_Close_C* UI_Component_Close; // 0x608(0x08)
	struct UUI_Component_Platform_C* UI_Component_Platform; // 0x610(0x08)
	struct UUI_Component_PlayerHead_C* UI_Component_PlayerHead; // 0x618(0x08)
	struct UUI_Component_PlayerHead_C* UI_Component_PlayerHead_2; // 0x620(0x08)
	struct UVerticalBox* VerticalBox_League; // 0x628(0x08)
	enum class E_Type_CreateRoom_Gender Gender; // 0x630(0x01)
	enum class T_Type_System_Push Pop_Type; // 0x631(0x01)
	enum class T_Type_Button Btn_Type; // 0x632(0x01)

	void Delegate_5168F3584F6616930799F69763CC1E33(); // DelegateFunction UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.Delegate_5168F3584F6616930799F69763CC1E33 // (Public|Delegate) // @ game+0xb5f200
	void OnClicked_C0A08BAF49552D2FF912EBB442451C63(); // DelegateFunction UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.OnClicked_C0A08BAF49552D2FF912EBB442451C63 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_C5BD6CEA4A8B056E5DD75E8D1DBA0375(); // DelegateFunction UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.OnClicked_C5BD6CEA4A8B056E5DD75E8D1DBA0375 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_CBE1D5044734A876DF78A894A5871FEC(); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.OnClicked_CBE1D5044734A876DF78A894A5871FEC // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5f200
	void Construct(); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Destruct(); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void Update_Btn(enum class T_Type_Button NewParam); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.Update_Btn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetType(enum class T_Type_System_Push NewParam); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.SetType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_RoomInvite_Popup(int32_t EntryPoint); // Function UI_Lobby_RoomInvite_Popup.UI_Lobby_RoomInvite_Popup_C.ExecuteUbergraph_UI_Lobby_RoomInvite_Popup // (Final|UbergraphFunction) // @ game+0x2d63a00
};
