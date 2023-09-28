// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Rocket.Crosshair_CarWeapon_Rocket_C
// Size: 0x4d0 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Rocket_C : UVehicleWeaponCrossHairWidget {
	struct UCanvasPanel* Container_SecondReticle; // 0x488(0x08)
	struct UCanvasPanel* Coredot; // 0x490(0x08)
	struct UImage* ForbidImg; // 0x498(0x08)
	struct UHUD_Overload_C* HUD_Overload; // 0x4a0(0x08)
	struct UHUD_Reload_C* HUD_Reload; // 0x4a8(0x08)
	struct UImage* ReticleDirection; // 0x4b0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4b8(0x08)
	struct UImage* SpreadImg_coredot_2; // 0x4c0(0x08)
	struct UImage* SpreadImg_coredot_3; // 0x4c8(0x08)

	struct UUserWidget* GetOverloadWidget(); // Function Crosshair_CarWeapon_Rocket.Crosshair_CarWeapon_Rocket_C.GetOverloadWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_Rocket.Crosshair_CarWeapon_Rocket_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

