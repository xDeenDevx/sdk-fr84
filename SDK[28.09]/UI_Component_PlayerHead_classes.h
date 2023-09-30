// WidgetBlueprintGeneratedClass UI_Component_PlayerHead.UI_Component_PlayerHead_C
// Size: 0x40f (Inherited: 0x348)
struct UUI_Component_PlayerHead_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USolarButton* Btn_ShowCard; // 0x350(0x08)
	struct UCanvasPanel* Canvas_Frame; // 0x358(0x08)
	struct USolarImageURL* Img_Avatar; // 0x360(0x08)
	struct UImage* Img_AvatarFrame; // 0x368(0x08)
	struct UImage* Img_Bg; // 0x370(0x08)
	struct UImage* Img_BGLine; // 0x378(0x08)
	struct UImage* Img_Empty; // 0x380(0x08)
	struct UImage* Img_Gender; // 0x388(0x08)
	struct UImage* Img_Gender_Bg; // 0x390(0x08)
	struct UImage* Img_Social; // 0x398(0x08)
	struct UOverlay* Overlay_Normal; // 0x3a0(0x08)
	struct UCanvasPanel* Panel_FrameAnim; // 0x3a8(0x08)
	struct USizeBox* Size_2; // 0x3b0(0x08)
	struct USizeBox* Size_3; // 0x3b8(0x08)
	struct USizeBox* Size_Avatar; // 0x3c0(0x08)
	struct USizeBox* Size_Vip; // 0x3c8(0x08)
	struct UUI_Vip_Icon_Type_C* UI_Vip; // 0x3d0(0x08)
	bool ShowBusinessCardBtn; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3f0(0x10)
	bool IsNonuseFrame; // 0x400(0x01)
	bool Empty; // 0x401(0x01)
	enum class E_Type_Social Social; // 0x402(0x01)
	bool GenderOn; // 0x403(0x01)
	enum class E_Type_Gender Gender; // 0x404(0x01)
	char pad_405[0x3]; // 0x405(0x03)
	float Size; // 0x408(0x04)
	bool Vip; // 0x40c(0x01)
	bool IsExamine; // 0x40d(0x01)
	bool IsCustom; // 0x40e(0x01)

	struct FString GetModuleName(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetAvatarSize(bool IsCustom); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetDefaultSteamAvatar(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetDefaultSteamAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetVipType(char VipType); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetVipType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetAvatarState(bool IsCollapsed); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetAvatarIcon(int32_t InAvatarID); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetAvatarIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetEmptyState(bool IsEmpty); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetEmptyState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetPlayerGender(enum class E_Type_Gender Gender); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetPlayerGender // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetSocialIcon(enum class E_Type_Social Social); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.SetSocialIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Update(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.BndEvt__Btn_PlayerInfo_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_PlayerHead(int32_t EntryPoint); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.ExecuteUbergraph_UI_Component_PlayerHead // (Final|UbergraphFunction) // @ game+0x2649560
	void OnReleased__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnClicked__DelegateSignature(); // Function UI_Component_PlayerHead.UI_Component_PlayerHead_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

