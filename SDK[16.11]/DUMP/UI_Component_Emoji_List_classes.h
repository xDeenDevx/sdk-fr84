// WidgetBlueprintGeneratedClass UI_Component_Emoji_List.UI_Component_Emoji_List_C
// Size: 0x450 (Inherited: 0x400)
struct UUI_Component_Emoji_List_C : USolarUserWidget {
	struct UWidgetAnimation* Anim_Exit; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x408(0x08)
	struct USolarCheckButton* Btn_Action; // 0x410(0x08)
	struct USolarCheckButton* Btn_Emoji; // 0x418(0x08)
	struct USolarCheckButton* Btn_Voice; // 0x420(0x08)
	struct UTileView* List_Emoji; // 0x428(0x08)
	struct UListView* ListView_Voice; // 0x430(0x08)
	struct UCanvasPanel* Panel_Tab; // 0x438(0x08)
	struct USolarCheckButtonGroup* Tab; // 0x440(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Content; // 0x448(0x08)

	void OnStateChangedEvent_48465F794156ADA3ADAC84922F5D5684(int32_t InLastButtonIndex); // DelegateFunction UI_Component_Emoji_List.UI_Component_Emoji_List_C.OnStateChangedEvent_48465F794156ADA3ADAC84922F5D5684 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Component_Emoji_List.UI_Component_Emoji_List_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
};

