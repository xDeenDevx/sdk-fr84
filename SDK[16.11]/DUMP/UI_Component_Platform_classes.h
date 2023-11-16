// WidgetBlueprintGeneratedClass UI_Component_Platform.UI_Component_Platform_C
// Size: 0x420 (Inherited: 0x400)
struct UUI_Component_Platform_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* Img_Icon; // 0x408(0x08)
	struct USizeBox* Size_Icon; // 0x410(0x08)
	enum class E_Platform E_Platform; // 0x418(0x01)
	bool UseIcon; // 0x419(0x01)
	char pad_41A[0x2]; // 0x41a(0x02)
	int32_t IconSize; // 0x41c(0x04)

	void SetBlendPlatform(bool UseIcon); // Function UI_Component_Platform.UI_Component_Platform_C.SetBlendPlatform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetSizeState(enum class E_Platform Platform); // Function UI_Component_Platform.UI_Component_Platform_C.SetSizeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Platform.UI_Component_Platform_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Platform(int32_t EntryPoint); // Function UI_Component_Platform.UI_Component_Platform_C.ExecuteUbergraph_UI_Component_Platform // (Final|UbergraphFunction) // @ game+0x2d63a00
};

