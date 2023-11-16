// WidgetBlueprintGeneratedClass UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C
// Size: 0x499 (Inherited: 0x400)
struct UUI_Lobby_Social_Entrance_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Discord; // 0x408(0x08)
	struct UButton* Btn_Facebook; // 0x410(0x08)
	struct UButton* Btn_Instagram; // 0x418(0x08)
	struct UButton* Btn_LiveVideo; // 0x420(0x08)
	struct UButton* Btn_TikTok; // 0x428(0x08)
	struct UButton* Btn_YouTube; // 0x430(0x08)
	struct UCanvasPanel* Discord; // 0x438(0x08)
	struct UCanvasPanel* FACEBOOK; // 0x440(0x08)
	struct UCanvasPanel* Instagram; // 0x448(0x08)
	struct UCanvasPanel* Panel_LiveVideo; // 0x450(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x458(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General_49; // 0x460(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General_96; // 0x468(0x08)
	struct USolarRedHint_General_C* SolarRedHint_Instagram; // 0x470(0x08)
	struct USolarRedHint_General_C* SolarRedHint_TikTok; // 0x478(0x08)
	struct UCanvasPanel* TikTok; // 0x480(0x08)
	struct UUI_Lobby_Live_C* UI_Lobby_Live; // 0x488(0x08)
	struct UCanvasPanel* YouTube; // 0x490(0x08)
	bool isShowGuide; // 0x498(0x01)

	void OnClicked_C2CAB48247CACBED242443A15F31EF88(); // DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_C2CAB48247CACBED242443A15F31EF88 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_AFC550374D020F8751730C9CDA410BFD(); // DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_AFC550374D020F8751730C9CDA410BFD // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_C0B85C654BBEC80473865393FC61848A(); // DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_C0B85C654BBEC80473865393FC61848A // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_F91FC7B04D43D9421A0B67A6F595F332(); // DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_F91FC7B04D43D9421A0B67A6F595F332 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_F3669E2546C077BEC070DAB0F64683AB(); // DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_F3669E2546C077BEC070DAB0F64683AB // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_4434E72147F856C8AB77FAB9B21B9463(); // DelegateFunction UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnClicked_4434E72147F856C8AB77FAB9B21B9463 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnSolarUIClosed(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void Destruct(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void ShowGuide(bool ShowGuide); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ShowGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Lobby_Social_Entrance(int32_t EntryPoint); // Function UI_Lobby_Social_Entrance.UI_Lobby_Social_Entrance_C.ExecuteUbergraph_UI_Lobby_Social_Entrance // (Final|UbergraphFunction) // @ game+0x2d63a00
};

