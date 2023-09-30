// WidgetBlueprintGeneratedClass UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C
// Size: 0x3d5 (Inherited: 0x348)
struct UUI_Lobby_TeamMember_Operation_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USolarButton* Btn_QuitTeam; // 0x350(0x08)
	struct USolarButton* Btn_ShowOperationPanel; // 0x358(0x08)
	struct UImage* Img_AppDeactivated_Mark; // 0x360(0x08)
	struct UImage* Img_Captain; // 0x368(0x08)
	struct UImage* Img_Captain_Bg; // 0x370(0x08)
	struct UImage* Img_MicroPhone_Mark; // 0x378(0x08)
	struct UOverlay* Img_Ready_Mark; // 0x380(0x08)
	struct UOverlay* Overlay_Vip; // 0x388(0x08)
	struct UCanvasPanel* Panel_Captain; // 0x390(0x08)
	struct USizeBox* SizeBox_Wave; // 0x398(0x08)
	struct USolarTextBlock* Text_NickName; // 0x3a0(0x08)
	struct UUI_Chat_Wave_C* UI_Chat_Wave; // 0x3a8(0x08)
	struct UUI_Component_Platform_C* UI_Component_Platform; // 0x3b0(0x08)
	struct UUI_Component_PlayerName_C* UI_Component_PlayerName; // 0x3b8(0x08)
	struct UUI_Rank_Icon_Small_C* UI_Rank_Icon_Small; // 0x3c0(0x08)
	struct UUI_Vip_Icon_Type_C* UI_Vip_Icon_Type; // 0x3c8(0x08)
	int32_t IndexInLobby; // 0x3d0(0x04)
	bool STEAM; // 0x3d4(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Lobby_TeamMember_Operation(int32_t EntryPoint); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.ExecuteUbergraph_UI_Lobby_TeamMember_Operation // (Final|UbergraphFunction) // @ game+0x2649560
};

