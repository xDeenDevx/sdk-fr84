// WidgetBlueprintGeneratedClass UI_Component_Gamepad.UI_Component_Gamepad_C
// Size: 0x464 (Inherited: 0x400)
struct UUI_Component_Gamepad_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* img_DoubleClick; // 0x408(0x08)
	struct UImage* img_Hold; // 0x410(0x08)
	struct UImage* Img_MainKey; // 0x418(0x08)
	struct UImage* Img_ModifierKey; // 0x420(0x08)
	struct USolarImage* Img_PlusIcon; // 0x428(0x08)
	struct UOverlay* Overlay_Normal; // 0x430(0x08)
	struct USizeBox* SizeBox_MainKey; // 0x438(0x08)
	struct USizeBox* SizeBox_ModifierKey; // 0x440(0x08)
	bool bCustomRefresh; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FString ActionName; // 0x450(0x10)
	float Size; // 0x460(0x04)

	void Destruct(); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetMainKeySelection(); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeySelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetMainKeyNormal(); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeyNormal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void GetGamepadIconByKey(struct FKey InKey, struct UPaperSprite*& GamepadIcon); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetGamepadIconByKey // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetData(struct FKey ModifierKey, struct FKey MainKey); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Gamepad(int32_t EntryPoint); // Function UI_Component_Gamepad.UI_Component_Gamepad_C.ExecuteUbergraph_UI_Component_Gamepad // (Final|UbergraphFunction) // @ game+0x2d63a00
};

