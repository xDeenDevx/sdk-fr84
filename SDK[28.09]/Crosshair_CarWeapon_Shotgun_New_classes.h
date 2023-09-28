// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C
// Size: 0x514 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Shotgun_New_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Anim_Reload; // 0x490(0x08)
	struct UImage* bullet_l; // 0x498(0x08)
	struct UImage* bullet_r; // 0x4a0(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4a8(0x08)
	struct UCanvasPanel* Coredot; // 0x4b0(0x08)
	struct UCanvasPanel* panel_bottom; // 0x4b8(0x08)
	struct UCanvasPanel* Panel_Left; // 0x4c0(0x08)
	struct UCanvasPanel* Panel_Reload; // 0x4c8(0x08)
	struct UCanvasPanel* Panel_Right; // 0x4d0(0x08)
	struct UCanvasPanel* panel_top; // 0x4d8(0x08)
	struct UImage* ReticleDirection; // 0x4e0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4e8(0x08)
	struct UImage* SpreadImg_coredot_l; // 0x4f0(0x08)
	struct UImage* SpreadImg_coredot_l_2; // 0x4f8(0x08)
	struct UImage* SpreadImg_coredot_r; // 0x500(0x08)
	struct UImage* SpreadImg_coredot_r_2; // 0x508(0x08)
	int32_t LastAmmoCount; // 0x510(0x04)

	void ChangeAmmoCount(int32_t ReloadCount, int32_t AmmoCount); // Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ChangeAmmoCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst); // Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnAmmoChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnReloadStarted(float InReloadTime, int32_t InReservedAmmo); // Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadStarted // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo); // Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadFinished // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New(int32_t EntryPoint); // Function Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New // (Final|UbergraphFunction) // @ game+0x2649560
};

