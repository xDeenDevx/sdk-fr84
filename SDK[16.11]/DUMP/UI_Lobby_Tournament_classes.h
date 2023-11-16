// WidgetBlueprintGeneratedClass UI_Lobby_Tournament.UI_Lobby_Tournament_C
// Size: 0x468 (Inherited: 0x400)
struct UUI_Lobby_Tournament_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Tournament; // 0x408(0x08)
	struct UHorizontalBox* HorizontalBox_Coin; // 0x410(0x08)
	struct UHorizontalBox* HorizontalBox_Diamond; // 0x418(0x08)
	struct UHorizontalBox* HorizontalBox_Dollar; // 0x420(0x08)
	struct UImage* Image_64; // 0x428(0x08)
	struct UOverlay* Overlay_Live; // 0x430(0x08)
	struct UCanvasPanel* Panel_Tournament_Content; // 0x438(0x08)
	struct USolarRedHint_General_C* RedHint_Tournament; // 0x440(0x08)
	struct URichTextBlock* STB_RewardCoinNum; // 0x448(0x08)
	struct URichTextBlock* STB_RewardDiamondNum; // 0x450(0x08)
	struct URichTextBlock* STB_RewardDollarNum; // 0x458(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Tournament; // 0x460(0x08)

	void OnClicked_824C0A934759606487B914BFED8C9436(); // DelegateFunction UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnClicked_824C0A934759606487B914BFED8C9436 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Tournament(int32_t EntryPoint); // Function UI_Lobby_Tournament.UI_Lobby_Tournament_C.ExecuteUbergraph_UI_Lobby_Tournament // (Final|UbergraphFunction) // @ game+0x2d63a00
};

