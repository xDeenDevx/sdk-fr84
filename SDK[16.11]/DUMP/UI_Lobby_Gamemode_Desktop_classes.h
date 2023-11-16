// WidgetBlueprintGeneratedClass UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C
// Size: 0x451 (Inherited: 0x400)
struct UUI_Lobby_Gamemode_Desktop_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_GameMode; // 0x408(0x08)
	struct UImage* Img_Gamemode_BG; // 0x410(0x08)
	struct USolarTextBlock* Txt_GameMap_Desktop; // 0x418(0x08)
	struct USolarTextBlock* Txt_Mode_Desktop; // 0x420(0x08)
	struct UTextBlock* Txt_Team_Num_Desktop; // 0x428(0x08)
	struct UUI_Component_TeamNum_C* UI_Component_TeamNum; // 0x430(0x08)
	enum class E_Type_State_Desktop StateDesktop; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x440(0x10)
	enum class E_Type_TeamNum NumMoed; // 0x450(0x01)

	void SetGameModeInfo(struct FString ModeName, struct FString GroupName, int32_t Num); // Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.SetGameModeInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetStateDesktop(enum class E_Type_State_Desktop StateDesktop); // Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.SetStateDesktop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn_Gamemode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.BndEvt__Btn_Gamemode_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Gamemode_Desktop(int32_t EntryPoint); // Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.ExecuteUbergraph_UI_Lobby_Gamemode_Desktop // (Final|UbergraphFunction) // @ game+0x2d63a00
	void OnClicked__DelegateSignature(); // Function UI_Lobby_Gamemode_Desktop.UI_Lobby_Gamemode_Desktop_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

