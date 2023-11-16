// WidgetBlueprintGeneratedClass UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C
// Size: 0x4b4 (Inherited: 0x4a0)
struct UUI_HUD_Notice_VICTORY_Desktop_C : UUINoticeVictory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UUI_KeyPrompt_C* UI_KeyPrompt_Back; // 0x4a8(0x08)
	int32_t CountDownTime; // 0x4b0(0x04)

	struct FString GetModuleName(); // Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.GetModuleName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void CloseSelf(); // Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.CloseSelf // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnEndAnimFinish(); // Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.OnEndAnimFinish // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop(int32_t EntryPoint); // Function UI_HUD_Notice_VICTORY_Desktop.UI_HUD_Notice_VICTORY_Desktop_C.ExecuteUbergraph_UI_HUD_Notice_VICTORY_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

