// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C
// Size: 0x4cc (Inherited: 0x488)
struct UCrosshair_CarWeapon_HoverTriangle_New_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Anim_Overheat; // 0x490(0x08)
	struct UWidgetAnimation* Anim_Shoot; // 0x498(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4a0(0x08)
	struct UCanvasPanel* Coredot; // 0x4a8(0x08)
	struct UImage* ReticleDirection; // 0x4b0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4b8(0x08)
	struct UImage* SpreadImg_coredot_2; // 0x4c0(0x08)
	int32_t FireCounter; // 0x4c8(0x04)

	struct UUserWidget* GetOverloadWidget(); // Function Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.GetOverloadWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	struct UUserWidget* GetAmmoWidget(); // Function Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.GetAmmoWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	struct UUserWidget* GetReloadWidget(); // Function Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.GetReloadWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnWeaponFired(); // Function Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.OnWeaponFired // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnOverloadStateChanged(bool bEnter); // Function Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.OnOverloadStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_CarWeapon_HoverTriangle_New(int32_t EntryPoint); // Function Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.ExecuteUbergraph_Crosshair_CarWeapon_HoverTriangle_New // (Final|UbergraphFunction) // @ game+0x2649560
};

