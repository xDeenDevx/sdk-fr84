// WidgetBlueprintGeneratedClass UI_Component_Keyboard.UI_Component_Keyboard_C
// Size: 0x320 (Inherited: 0x2a0)
struct UUI_Component_Keyboard_C : USolarComponentKeyWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UImage* Img_Bg; // 0x2a8(0x08)
	struct UImage* Img_Bg_2; // 0x2b0(0x08)
	struct UImage* Img_Bg_Frame; // 0x2b8(0x08)
	struct UImage* Img_Bg_Frame_2; // 0x2c0(0x08)
	struct USolarImage* Img_PlusIcon; // 0x2c8(0x08)
	struct UWidgetSwitcher* KeyAndMouseSwitcher; // 0x2d0(0x08)
	struct UUI_Component_Mouse_C* Mouse; // 0x2d8(0x08)
	struct USizeBox* SizeBox_1; // 0x2e0(0x08)
	struct USizeBox* SizeBox_2; // 0x2e8(0x08)
	struct UTextBlock* Txt_Key; // 0x2f0(0x08)
	struct UTextBlock* Txt_Key_2; // 0x2f8(0x08)
	bool Red; // 0x300(0x01)
	bool Yellow; // 0x301(0x01)
	char pad_302[0x2]; // 0x302(0x02)
	int32_t Font_Size; // 0x304(0x04)
	struct FVector2D BG_Size; // 0x308(0x08)
	bool bCustomRefresh; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UTextBlock* NewVar_1; // 0x318(0x08)

	void Destruct(); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void BP_RefreshKeyboardUI(struct UTextBlock* InTxtKey, struct UImage* InImgBg, struct USizeBox* InSizeBox); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.BP_RefreshKeyboardUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Component_Keyboard(int32_t EntryPoint); // Function UI_Component_Keyboard.UI_Component_Keyboard_C.ExecuteUbergraph_UI_Component_Keyboard // (Final|UbergraphFunction) // @ game+0x2d63a00
};

