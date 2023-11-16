// WidgetBlueprintGeneratedClass UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C
// Size: 0x440 (Inherited: 0x400)
struct UUI_Lobby_PlayerInfo_C : USolarUserWidget {
	struct UButton* Btn_PlayerInfo; // 0x400(0x08)
	struct UCanvasPanel* Panel_PlayerInformation; // 0x408(0x08)
	struct UProgressBar* ProgressBar_PlayerExp; // 0x410(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General_4; // 0x418(0x08)
	struct UTextBlock* Txt_PlayerLevel; // 0x420(0x08)
	struct UUI_Component_NationalFlag_C* UI_Component_NationalFlag; // 0x428(0x08)
	struct UUI_Component_PlayerHead_C* UI_Component_PlayerHead; // 0x430(0x08)
	struct UUI_Component_PlayerName_C* UI_Component_PlayerName; // 0x438(0x08)

	void OnClicked_ADCFED3D464D4D112FB261B1C5B1F2CE(); // DelegateFunction UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C.OnClicked_ADCFED3D464D4D112FB261B1C5B1F2CE // (MulticastDelegate|Public|Delegate) // @ game+0xb5e720
	void Destruct(); // Function UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void OnSolarUIClosed(); // Function UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	void OnSolarUIOpened(); // Function UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	void Construct(); // Function UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	struct FString GetModuleName(); // Function UI_Lobby_PlayerInfo.UI_Lobby_PlayerInfo_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
};

