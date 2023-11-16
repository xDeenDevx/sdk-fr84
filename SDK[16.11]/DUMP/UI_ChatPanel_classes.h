// WidgetBlueprintGeneratedClass UI_ChatPanel.UI_ChatPanel_C
// Size: 0x451 (Inherited: 0x400)
struct UUI_ChatPanel_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Interaction; // 0x408(0x08)
	struct UWidgetSwitcher* Chat_Switcher; // 0x410(0x08)
	struct UImage* Img_Message; // 0x418(0x08)
	struct UImage* Img_message_bg03; // 0x420(0x08)
	struct URichTextBlock* Message; // 0x428(0x08)
	struct UTextBlock* UnreadMessageCount; // 0x430(0x08)
	struct UOverlay* UnreadMessageNotifyPanel; // 0x438(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ChatType; // 0x440(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_RedHint; // 0x448(0x08)
	enum class E_Type_State_Desktop StateDesktop; // 0x450(0x01)

	void OnClicked_330F3D034C0200FD9AB9B18FF6A49C98(); // DelegateFunction UI_ChatPanel.UI_ChatPanel_C.OnClicked_330F3D034C0200FD9AB9B18FF6A49C98 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnInitialized(); // Function UI_ChatPanel.UI_ChatPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Destruct(); // Function UI_ChatPanel.UI_ChatPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_ChatPanel.UI_ChatPanel_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_ChatPanel.UI_ChatPanel_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_ChatPanel.UI_ChatPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_ChatPanel.UI_ChatPanel_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetStateDesktop(enum class E_Type_State_Desktop StateHD); // Function UI_ChatPanel.UI_ChatPanel_C.SetStateDesktop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetMsgText(char ChatType, struct FString playerName, struct FString Msg, struct FString& OutputText); // Function UI_ChatPanel.UI_ChatPanel_C.SetMsgText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_ChatPanel.UI_ChatPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_ChatPanel(int32_t EntryPoint); // Function UI_ChatPanel.UI_ChatPanel_C.ExecuteUbergraph_UI_ChatPanel // (Final|UbergraphFunction) // @ game+0x2d63a00
};

