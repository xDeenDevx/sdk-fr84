// WidgetBlueprintGeneratedClass Crosshair_AssaultRifle.Crosshair_AssaultRifle_C
// Size: 0x338 (Inherited: 0x300)
struct UCrosshair_AssaultRifle_C : UCrossHairWidget {
	struct UImage* ForbidImg; // 0x300(0x08)
	struct UHUD_Reload_C* HUD_Reload; // 0x308(0x08)
	struct UImage* SpreadImg_coredot; // 0x310(0x08)
	struct UImage* SpreadImg_Downarrow; // 0x318(0x08)
	struct UImage* SpreadImg_Leftarrow; // 0x320(0x08)
	struct UImage* SpreadImg_Rightarrow; // 0x328(0x08)
	struct UImage* SpreadImg_uparrow; // 0x330(0x08)

	struct UUserWidget* GetAmmoWidget(); // Function Crosshair_AssaultRifle.Crosshair_AssaultRifle_C.GetAmmoWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	struct UUserWidget* GetReloadWidget(); // Function Crosshair_AssaultRifle.Crosshair_AssaultRifle_C.GetReloadWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

