// WidgetBlueprintGeneratedClass UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C
// Size: 0x491 (Inherited: 0x400)
struct UUI_Lobby_Activity_All_Desktop_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Activity_Point; // 0x408(0x08)
	struct UButton* Btn_Clan_Join; // 0x410(0x08)
	struct UButton* Btn_Clan_Reward; // 0x418(0x08)
	struct UButton* Btn_Tournament_Reward; // 0x420(0x08)
	struct UUI_Component_NationalFlag_C* ClanFlag; // 0x428(0x08)
	struct UImage* Img_Activity_BG; // 0x430(0x08)
	struct UImage* Img_Activity_BG_Light; // 0x438(0x08)
	struct UImage* Img_Activity_BG_Light_2; // 0x440(0x08)
	struct UImage* Img_Activity_BG_Light_3; // 0x448(0x08)
	struct UImage* Img_Activity_BG_Light_4; // 0x450(0x08)
	struct UCanvasPanel* Panel_Activity_All; // 0x458(0x08)
	struct USolarRichTextBlock* SolarRichTextBlock_Team; // 0x460(0x08)
	struct UTickerWidget_C* TickerWidget_Join; // 0x468(0x08)
	struct UTickerWidget_C* TickerWidget_Reward; // 0x470(0x08)
	struct USolarRichTextBlock* Txt_Activity_Point; // 0x478(0x08)
	struct URichTextBlock* Txt_Tournament_Reward; // 0x480(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Activity; // 0x488(0x08)
	enum class E_TabLobbyItemState StateDesktop; // 0x490(0x01)

	void SetStateDesktop(enum class E_TabLobbyItemState StateHD); // Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.SetStateDesktop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Activity_All_Desktop(int32_t EntryPoint); // Function UI_Lobby_Activity_All_Desktop.UI_Lobby_Activity_All_Desktop_C.ExecuteUbergraph_UI_Lobby_Activity_All_Desktop // (Final|UbergraphFunction) // @ game+0x2d63a00
};

