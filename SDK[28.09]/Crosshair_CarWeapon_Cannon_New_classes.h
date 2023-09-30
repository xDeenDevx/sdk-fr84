// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Cannon_New.Crosshair_CarWeapon_Cannon_New_C
// Size: 0x4b0 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Cannon_New_C : UVehicleWeaponCrossHairWidget {
	struct UWidgetAnimation* Anim_CD_Out; // 0x488(0x08)
	struct UWidgetAnimation* Anim_CD_Enter; // 0x490(0x08)
	struct UCanvasPanel* Canvas_Dynamic; // 0x498(0x08)
	struct UImage* ReticleDirection; // 0x4a0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4a8(0x08)

	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_Cannon_New.Crosshair_CarWeapon_Cannon_New_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

