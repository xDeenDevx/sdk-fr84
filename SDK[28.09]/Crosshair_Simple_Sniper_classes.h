// WidgetBlueprintGeneratedClass Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C
// Size: 0x330 (Inherited: 0x300)
struct UCrosshair_Simple_Sniper_C : UCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* Sniper_Anim; // 0x308(0x08)
	struct UImage* SpreadImg_coredot; // 0x310(0x08)
	struct UImage* SpreadImg_Leftarrow; // 0x318(0x08)
	struct UImage* SpreadImg_Rightarrow; // 0x320(0x08)
	struct UImage* SpreadImg_uparrow; // 0x328(0x08)

	void InitializeCrosshairSpread(float Spread); // Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.InitializeCrosshairSpread // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void SetCrosshairSprite(struct UPaperSprite* InSprite); // Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.SetCrosshairSprite // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_Simple_Sniper(int32_t EntryPoint); // Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.ExecuteUbergraph_Crosshair_Simple_Sniper // (Final|UbergraphFunction) // @ game+0x2649560
};

