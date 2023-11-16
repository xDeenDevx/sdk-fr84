// WidgetBlueprintGeneratedClass UI_Lobby_Battery.UI_Lobby_Battery_C
// Size: 0x600 (Inherited: 0x260)
struct UUI_Lobby_Battery_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Img_Charging; // 0x268(0x08)
	struct UProgressBar* ProgressBar_Battery; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
	struct FSlateBrush ProgressBarBgImage; // 0x280(0xe0)
	struct FSlateBrush ProgressBarMarqueeImage; // 0x360(0xe0)
	struct FSlateBrush ProgressBarFillNormal; // 0x440(0xe0)
	struct FSlateBrush ProgressBarFillCharging; // 0x520(0xe0)

	void ForceRefreshBatteryUI(); // Function UI_Lobby_Battery.UI_Lobby_Battery_C.ForceRefreshBatteryUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void RefreshBatteryUI(int32_t BatteryLevelNewParam, bool bCharging); // Function UI_Lobby_Battery.UI_Lobby_Battery_C.RefreshBatteryUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Battery.UI_Lobby_Battery_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_Battery.UI_Lobby_Battery_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void EventRefreshBatteryUI(); // Function UI_Lobby_Battery.UI_Lobby_Battery_C.EventRefreshBatteryUI // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Destruct(); // Function UI_Lobby_Battery.UI_Lobby_Battery_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Battery(int32_t EntryPoint); // Function UI_Lobby_Battery.UI_Lobby_Battery_C.ExecuteUbergraph_UI_Lobby_Battery // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

