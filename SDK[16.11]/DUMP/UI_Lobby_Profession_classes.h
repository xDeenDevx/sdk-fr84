// WidgetBlueprintGeneratedClass UI_Lobby_Profession.UI_Lobby_Profession_C
// Size: 0x440 (Inherited: 0x400)
struct UUI_Lobby_Profession_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarButton* Btn_Change; // 0x408(0x08)
	struct UImage* Img_Icon; // 0x410(0x08)
	struct UImage* img_iconBg; // 0x418(0x08)
	struct UImage* img_iconBorder; // 0x420(0x08)
	struct UImage* img_iconBorder_2; // 0x428(0x08)
	struct UOverlay* Overlay_2; // 0x430(0x08)
	bool Myself; // 0x438(0x01)
	enum class E_ProfessionType ProfessionType; // 0x439(0x01)
	char pad_43A[0x2]; // 0x43a(0x02)
	int32_t Index; // 0x43c(0x04)

	void OnClicked_31E1D1394CDD2467D03CF8872E73A35C(); // DelegateFunction UI_Lobby_Profession.UI_Lobby_Profession_C.OnClicked_31E1D1394CDD2467D03CF8872E73A35C // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_C8596E1A4AE38CD5C52C5790E94BFCAB(); // DelegateFunction UI_Lobby_Profession.UI_Lobby_Profession_C.OnClicked_C8596E1A4AE38CD5C52C5790E94BFCAB // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_B0FF232A4C89B50948EE57955B1F93F6(); // DelegateFunction UI_Lobby_Profession.UI_Lobby_Profession_C.OnClicked_B0FF232A4C89B50948EE57955B1F93F6 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_BC05FCF54B3B0C7514C812A3845EE02A(); // DelegateFunction UI_Lobby_Profession.UI_Lobby_Profession_C.OnClicked_BC05FCF54B3B0C7514C812A3845EE02A // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetSelection(char Index); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.SetSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void UpdateState(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Render(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.Render // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Profession(int32_t EntryPoint); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.ExecuteUbergraph_UI_Lobby_Profession // (Final|UbergraphFunction) // @ game+0x2d63a00
};

