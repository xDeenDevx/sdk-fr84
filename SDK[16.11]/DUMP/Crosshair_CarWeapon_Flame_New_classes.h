// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C
// Size: 0x4e9 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Flame_New_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Overheat_Anim_Quit; // 0x490(0x08)
	struct UWidgetAnimation* Overheat_Anim_Enter; // 0x498(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4a0(0x08)
	struct UCanvasPanel* Coredot; // 0x4a8(0x08)
	struct UImage* img_normal; // 0x4b0(0x08)
	struct UImage* img_overload; // 0x4b8(0x08)
	struct UImage* Img_Overload_vx; // 0x4c0(0x08)
	struct UCanvasPanel* panel_overload; // 0x4c8(0x08)
	struct UImage* ReticleDirection; // 0x4d0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4d8(0x08)
	struct UWidgetSwitcher* wgs_status; // 0x4e0(0x08)
	bool IsOverloading; // 0x4e8(0x01)

	void OnOverloadChanged(bool InOverload); // Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnOverloadStateChanged(bool bEnter); // Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnCrosshairInNormalState(); // Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnCrosshairInNormalState // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_Crosshair_CarWeapon_Flame_New(int32_t EntryPoint); // Function Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Flame_New // (Final|UbergraphFunction) // @ game+0x2d656b0
};

