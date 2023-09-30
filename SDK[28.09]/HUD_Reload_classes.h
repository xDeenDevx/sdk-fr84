// WidgetBlueprintGeneratedClass HUD_Reload.HUD_Reload_C
// Size: 0x299 (Inherited: 0x268)
struct UHUD_Reload_C : UBP_HUD_ReloadBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Anim_Reload_Buff; // 0x270(0x08)
	struct UWidgetAnimation* Anim_Reload; // 0x278(0x08)
	struct UImage* Img_Bullet; // 0x280(0x08)
	struct UImage* Img_Reload; // 0x288(0x08)
	struct USolarTextBlock* Txt_QuickReload; // 0x290(0x08)
	enum class E_PassiveBuff Passive; // 0x298(0x01)

	void SetSpeedUpBuff(bool bHaveBuff); // Function HUD_Reload.HUD_Reload_C.SetSpeedUpBuff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetPassive(enum class E_PassiveBuff Passive); // Function HUD_Reload.HUD_Reload_C.SetPassive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void GetReloadAnimation(struct UWidgetAnimation*& OutReloadAnimation); // Function HUD_Reload.HUD_Reload_C.GetReloadAnimation // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function HUD_Reload.HUD_Reload_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_HUD_Reload(int32_t EntryPoint); // Function HUD_Reload.HUD_Reload_C.ExecuteUbergraph_HUD_Reload // (Final|UbergraphFunction) // @ game+0x2649560
};

