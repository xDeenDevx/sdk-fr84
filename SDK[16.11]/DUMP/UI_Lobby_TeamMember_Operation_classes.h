// WidgetBlueprintGeneratedClass UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C
// Size: 0x4a0 (Inherited: 0x400)
struct UUI_Lobby_TeamMember_Operation_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarButton* Btn_QuitTeam; // 0x408(0x08)
	struct USolarButton* Btn_ShowOperationPanel; // 0x410(0x08)
	struct UImage* Img_AppDeactivated_Mark; // 0x418(0x08)
	struct UImage* Img_BusinessCard_Hover; // 0x420(0x08)
	struct UImage* Img_Captain; // 0x428(0x08)
	struct UImage* Img_Captain_Bg; // 0x430(0x08)
	struct UImage* Img_MicroPhone_Mark; // 0x438(0x08)
	struct UImage* Img_QuitTeam_Hover; // 0x440(0x08)
	struct UOverlay* Img_Ready_Mark; // 0x448(0x08)
	struct UOverlay* Overlay_Vip; // 0x450(0x08)
	struct UCanvasPanel* Panel_Captain; // 0x458(0x08)
	struct USizeBox* SizeBox_Wave; // 0x460(0x08)
	struct USolarTextBlock* Text_NickName; // 0x468(0x08)
	struct UUI_Chat_Wave_C* UI_Chat_Wave; // 0x470(0x08)
	struct UUI_Component_Platform_C* UI_Component_Platform; // 0x478(0x08)
	struct UUI_Component_PlayerName_C* UI_Component_PlayerName; // 0x480(0x08)
	struct UUI_Rank_Icon_Small_C* UI_Rank_Icon_Small; // 0x488(0x08)
	struct UUI_Vip_Icon_Type_C* UI_Vip_Icon_Type; // 0x490(0x08)
	int32_t IndexInLobby; // 0x498(0x04)
	bool STEAM; // 0x49c(0x01)
	enum class E_Type_State_Desktop StatePlayernameHD; // 0x49d(0x01)
	enum class E_Type_State_Desktop StateQuitHD; // 0x49e(0x01)
	bool IsHD; // 0x49f(0x01)

	void OnClicked_7CD773284D1BFE202EBB6AB7185A67EC(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_7CD773284D1BFE202EBB6AB7185A67EC // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_742B7259457B98B4BFF0A5AA7D642C2E(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_742B7259457B98B4BFF0A5AA7D642C2E // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_72315D5740FB81A92CA7DFB017EA2E85(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_72315D5740FB81A92CA7DFB017EA2E85 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_471F59B74CF6D8BEC6A039B72051DEAB(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_471F59B74CF6D8BEC6A039B72051DEAB // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_EF4D647E4EB8D145C1DC4DB332D0E3E6(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_EF4D647E4EB8D145C1DC4DB332D0E3E6 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_04292706401A5B2222664F895D39FA37(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_04292706401A5B2222664F895D39FA37 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_9DC96EF74DD36917060081AFA082D6E0(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_9DC96EF74DD36917060081AFA082D6E0 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_FD4EDF4849D628C9F93A94B090DF744D(); // DelegateFunction UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnClicked_FD4EDF4849D628C9F93A94B090DF744D // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnInitialized(); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Destruct(); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetHD(bool IsHD); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.SetHD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetStateQuitHD(enum class E_Type_State_Desktop StateQuitHD); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.SetStateQuitHD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetStatePlayernameHD(enum class E_Type_State_Desktop StatePlayernameHD); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.SetStatePlayernameHD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Lobby_TeamMember_Operation(int32_t EntryPoint); // Function UI_Lobby_TeamMember_Operation.UI_Lobby_TeamMember_Operation_C.ExecuteUbergraph_UI_Lobby_TeamMember_Operation // (Final|UbergraphFunction) // @ game+0x2d63a00
};

