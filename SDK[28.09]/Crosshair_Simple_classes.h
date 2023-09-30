// WidgetBlueprintGeneratedClass Crosshair_Simple.Crosshair_Simple_C
// Size: 0x338 (Inherited: 0x300)
struct UCrosshair_Simple_C : UCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* Simple_Anim; // 0x308(0x08)
	struct UImage* SpreadImg_coredot; // 0x310(0x08)
	struct UImage* SpreadImg_Downarrow; // 0x318(0x08)
	struct UImage* SpreadImg_Leftarrow; // 0x320(0x08)
	struct UImage* SpreadImg_Rightarrow; // 0x328(0x08)
	struct UImage* SpreadImg_uparrow; // 0x330(0x08)

	void InitializeCrosshairSpread(float Spread); // Function Crosshair_Simple.Crosshair_Simple_C.InitializeCrosshairSpread // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void SetCrosshairSprite(struct UPaperSprite* InSprite); // Function Crosshair_Simple.Crosshair_Simple_C.SetCrosshairSprite // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_Simple(int32_t EntryPoint); // Function Crosshair_Simple.Crosshair_Simple_C.ExecuteUbergraph_Crosshair_Simple // (Final|UbergraphFunction) // @ game+0x2649560
};

