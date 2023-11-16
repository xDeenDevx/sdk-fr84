// WidgetBlueprintGeneratedClass UI_Component_Mouse.UI_Component_Mouse_C
// Size: 0x2a4 (Inherited: 0x260)
struct UUI_Component_Mouse_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* Direction; // 0x268(0x08)
	struct UImage* Img_Mouse; // 0x270(0x08)
	struct USizeBox* SizeBox_1; // 0x278(0x08)
	enum class E_Type_Mouse Mouse; // 0x280(0x01)
	bool HUD; // 0x281(0x01)
	char pad_282[0x6]; // 0x282(0x06)
	struct FString ActionName; // 0x288(0x10)
	bool bCustomRefresh; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FVector2D Size; // 0x29c(0x08)

	void Destruct(); // Function UI_Component_Mouse.UI_Component_Mouse_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void Construct(); // Function UI_Component_Mouse.UI_Component_Mouse_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void OnInitialized(); // Function UI_Component_Mouse.UI_Component_Mouse_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	struct FString GetModuleName(); // Function UI_Component_Mouse.UI_Component_Mouse_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void SetData(struct FKey KeySetting, enum class E_Type_Mouse& Type, bool& Succeed); // Function UI_Component_Mouse.UI_Component_Mouse_C.SetData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void UpdateImage(); // Function UI_Component_Mouse.UI_Component_Mouse_C.UpdateImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Mouse.UI_Component_Mouse_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Component_Mouse(int32_t EntryPoint); // Function UI_Component_Mouse.UI_Component_Mouse_C.ExecuteUbergraph_UI_Component_Mouse // (Final|UbergraphFunction) // @ game+0x2d64c70
};

