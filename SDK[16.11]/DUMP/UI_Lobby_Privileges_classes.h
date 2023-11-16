// WidgetBlueprintGeneratedClass UI_Lobby_Privileges.UI_Lobby_Privileges_C
// Size: 0x448 (Inherited: 0x400)
struct UUI_Lobby_Privileges_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x408(0x08)
	struct USolarButton* Btn_Privileges; // 0x410(0x08)
	struct USizeBox* SizeBox; // 0x418(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x420(0x08)
	bool IsLobby; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	float X; // 0x42c(0x04)
	float Y; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FMulticastInlineDelegate OnBtnNetBarClicked; // 0x438(0x10)

	struct FString GetModuleName(); // Function UI_Lobby_Privileges.UI_Lobby_Privileges_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetPrivileges(); // Function UI_Lobby_Privileges.UI_Lobby_Privileges_C.SetPrivileges // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Privileges.UI_Lobby_Privileges_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BndEvt__Btn_Privileges_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Lobby_Privileges.UI_Lobby_Privileges_C.BndEvt__Btn_Privileges_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Privileges(int32_t EntryPoint); // Function UI_Lobby_Privileges.UI_Lobby_Privileges_C.ExecuteUbergraph_UI_Lobby_Privileges // (Final|UbergraphFunction) // @ game+0x2d63a00
	void OnBtnNetBarClicked__DelegateSignature(); // Function UI_Lobby_Privileges.UI_Lobby_Privileges_C.OnBtnNetBarClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

