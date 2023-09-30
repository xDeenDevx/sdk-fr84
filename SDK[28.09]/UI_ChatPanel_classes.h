// WidgetBlueprintGeneratedClass UI_ChatPanel.UI_ChatPanel_C
// Size: 0x380 (Inherited: 0x348)
struct UUI_ChatPanel_C : USolarUserWidget {
	struct UButton* Btn_Interaction; // 0x348(0x08)
	struct UWidgetSwitcher* Chat_Switcher; // 0x350(0x08)
	struct UImage* Img_message_bg03; // 0x358(0x08)
	struct URichTextBlock* Message; // 0x360(0x08)
	struct UTextBlock* UnreadMessageCount; // 0x368(0x08)
	struct UOverlay* UnreadMessageNotifyPanel; // 0x370(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ChatType; // 0x378(0x08)

	struct FString GetModuleName(); // Function UI_ChatPanel.UI_ChatPanel_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetMsgText(char ChatType, struct FString playerName, struct FString Msg, struct FString& OutputText); // Function UI_ChatPanel.UI_ChatPanel_C.SetMsgText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

