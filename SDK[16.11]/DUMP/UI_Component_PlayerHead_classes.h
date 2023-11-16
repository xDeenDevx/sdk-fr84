// WidgetBlueprintGeneratedClass UI_Component_PlayerHead.UI_Component_PlayerHead_C
// Size: 0x4cf (Inherited: 0x400)
struct UUI_Component_PlayerHead_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarButton* Btn_ShowCard; // 0x408(0x08)
	struct UCanvasPanel* Canvas_Frame; // 0x410(0x08)
	struct USolarImageURL* Img_Avatar; // 0x418(0x08)
	struct UImage* Img_AvatarFrame; // 0x420(0x08)
	struct UImage* Img_Bg; // 0x428(0x08)
	struct UImage* Img_BGLine; // 0x430(0x08)
	struct UImage* Img_Empty; // 0x438(0x08)
	struct UImage* Img_Gender; // 0x440(0x08)
	struct UImage* Img_Gender_Bg; // 0x448(0x08)
	struct UImage* Img_Hover; // 0x450(0x08)
	struct UImage* Img_Social; // 0x458(0x08)
	struct UOverlay* Overlay_Normal; // 0x460(0x08)
	struct UCanvasPanel* Panel_FrameAnim; // 0x468(0x08)
	struct USizeBox* Size_2; // 0x470(0x08)
	struct USizeBox* Size_3; // 0x478(0x08)
	struct USizeBox* Size_Avatar; // 0x480(0x08)
	struct USizeBox* Size_Vip; // 0x488(0x08)
	struct UUI_Vip_Icon_Type_C* UI_Vip; // 0x490(0x08)
	bool ShowBusinessCardBtn; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x4a0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x4b0(0x10)
	bool IsNonuseFrame; // 0x4c0(0x01)
	bool Empty; // 0x4c1(0x01)
	enum class E_Type_Social Social; // 0x4c2(0x01)
	bool GenderOn; // 0x4c3(0x01)
	enum class E_Type_Gender Gender; // 0x4c4(0x01)
	char pad_4C5[0x3]; // 0x4c5(0x03)
	float Size; // 0x4c8(0x04)
	bool Vip; // 0x4cc(0x01)
	enum class E_TabLobbyItemState StateHD; // 0x4cd(0x01)
	bool IsCustom; // 0x4ce(0x01)

	void OnURLDownloadFinish_F029FD524866FD70385234A79C74958F(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_F029FD524866FD70385234A79C74958F // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_178C7E194D15DFE6BFB7908DEC61B8C6(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_178C7E194D15DFE6BFB7908DEC61B8C6 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_EA3F259F4C01D636E771CC8DE99A6597(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_EA3F259F4C01D636E771CC8DE99A6597 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_561A8B294DA254AD4488B3BDFB94737F(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_561A8B294DA254AD4488B3BDFB94737F // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_5DEC02244E38D425FF40108A374CBF9C(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_5DEC02244E38D425FF40108A374CBF9C // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_5CBD9734475A8B1F3109BC99862240E5(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_5CBD9734475A8B1F3109BC99862240E5 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_D7DF23DB4AA3B428788808BA154BEE6F(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_D7DF23DB4AA3B428788808BA154BEE6F // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_9B94985B45856A1B5FF2CC9243178648(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_9B94985B45856A1B5FF2CC9243178648 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_ECCB1F96428DBB26BFE2219ABBF84458(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_ECCB1F96428DBB26BFE2219ABBF84458 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_36523DF743B3450498953A977C9A9206(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_36523DF743B3450498953A977C9A9206 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_E93F126F4027FF43E8B28E875B5979D6(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_E93F126F4027FF43E8B28E875B5979D6 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_737904BB4D29CB85DF5123A1CD1A6E79(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_737904BB4D29CB85DF5123A1CD1A6E79 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_0977A48742064FCDA9A28AA27B4A4B54(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_0977A48742064FCDA9A28AA27B4A4B54 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_DF3D688A4C716099980B62BC828133F7(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_DF3D688A4C716099980B62BC828133F7 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_E68E6CB24D488F123C0653B6EA30ED53(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_E68E6CB24D488F123C0653B6EA30ED53 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_CE3DA5F849F13CC0744D9B9648193CE0(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_CE3DA5F849F13CC0744D9B9648193CE0 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_1194EE074041E687DF89F4A71CBCEF63(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_1194EE074041E687DF89F4A71CBCEF63 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_7F831DBE4E25273DA86C4C8B0154C1DB(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_7F831DBE4E25273DA86C4C8B0154C1DB // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_E62A7F9C45461C38743DFAB00D223459(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_E62A7F9C45461C38743DFAB00D223459 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_296F07AB4F564E9450270A84DD6F13AC(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_296F07AB4F564E9450270A84DD6F13AC // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_5FDC1F1A4A65AE05386B0099818A9BE9(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_5FDC1F1A4A65AE05386B0099818A9BE9 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_5815FE7B41AE4BC3A73BBF99E346F2C9(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_5815FE7B41AE4BC3A73BBF99E346F2C9 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnURLDownloadFinish_55B7997742F08DBC6FEAE8AAA139BC53(bool bSuccess); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnURLDownloadFinish_55B7997742F08DBC6FEAE8AAA139BC53 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_D7A441D74A32A5B5948F5A833D297752(); // DelegateFunction UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked_D7A441D74A32A5B5948F5A833D297752 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void RefreshByPSCopy(struct ASolarPlayerState* ps, bool bWithoutGender); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.RefreshByPSCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetVipTypeCopy(char VipType); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetVipTypeCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetAvatarCopy(int32_t AvatarID, struct FString AvatarUrl); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Destruct(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void ForceShowFrameCopy(int32_t FrameID); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ForceShowFrameCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnSolarUIClosed(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void ForceShowFrame(int32_t FrameID); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ForceShowFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void RefreshByPS(struct ASolarPlayerState* ps, bool bWithoutGender); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.RefreshByPS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void SetAvatarSize(bool IsCustom); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetAvatar(int32_t AvatarID, struct FString AvatarUrl); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void SetStateHD(enum class E_TabLobbyItemState StateHD); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetStateHD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetDefaultSteamAvatar(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetDefaultSteamAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetVipType(char VipType); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetVipType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetAvatarState(bool IsCollapsed); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetAvatarIcon(int32_t InAvatarID); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetEmptyState(bool IsEmpty); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetEmptyState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetPlayerGender(enum class E_Type_Gender Gender); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetPlayerGender // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetSocialIcon(enum class E_Type_Social Social); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetSocialIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Update(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Component_PlayerHead(int32_t EntryPoint); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ExecuteUbergraph_UI_Component_PlayerHead // (Final|UbergraphFunction) // @ game+0x2d63a00
	void OnReleased__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnClicked__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

