// WidgetBlueprintGeneratedClass UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C
// Size: 0x4ac (Inherited: 0x4a0)
struct UUI_HUD_Notice_VICTORY_C : UUINoticeVictory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	int32_t CountDownTime; // 0x4a8(0x04)

	struct FString GetModuleName(); // Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.GetModuleName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void PreConstruct(bool IsDesignTime); // Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void CloseSelf(); // Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.CloseSelf // (BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void OnEndAnimFinish(); // Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.OnEndAnimFinish // (Event|Protected|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_HUD_Notice_VICTORY(int32_t EntryPoint); // Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.ExecuteUbergraph_UI_HUD_Notice_VICTORY // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d64c70
};

