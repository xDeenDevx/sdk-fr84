// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C
// Size: 0x569 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Sroll05_Missile_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UProgressBar* Bullet; // 0x490(0x08)
	struct UProgressBar* Bullet_2; // 0x498(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4a0(0x08)
	struct UCanvasPanel* Coredot; // 0x4a8(0x08)
	struct UCanvasPanel* Panel_Clip; // 0x4b0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4b8(0x08)
	struct UCanvasPanel* SpreadImg_coredot_2; // 0x4c0(0x08)
	struct UCanvasPanel* SpreadImg_coredot_3; // 0x4c8(0x08)
	struct UCanvasPanel* SpreadImg_coredot_4; // 0x4d0(0x08)
	struct UCanvasPanel* SpreadImg_coredot_5; // 0x4d8(0x08)
	struct UCanvasPanel* SpreadImg_coredot_6; // 0x4e0(0x08)
	struct UCanvasPanel* SpreadImg_coredot_7; // 0x4e8(0x08)
	struct UCanvasPanel* SpreadImg_coredot_8; // 0x4f0(0x08)
	struct UCanvasPanel* SpreadImg_coredot_9; // 0x4f8(0x08)
	struct UCanvasPanel* SpreadImg_coredot_10; // 0x500(0x08)
	struct UCanvasPanel* SpreadImg_coredot_11; // 0x508(0x08)
	struct UCanvasPanel* SpreadImg_coredot_12; // 0x510(0x08)
	struct UCanvasPanel* SpreadImg_coredot_13; // 0x518(0x08)
	struct UCanvasPanel* SpreadImg_coredot_14; // 0x520(0x08)
	struct UCanvasPanel* SpreadImg_coredot_15; // 0x528(0x08)
	struct UCanvasPanel* SpreadImg_coredot_16; // 0x530(0x08)
	struct UCanvasPanel* SpreadImg_coredot_17; // 0x538(0x08)
	struct UCanvasPanel* SpreadImg_coredot_18; // 0x540(0x08)
	struct UCanvasPanel* SpreadImg_coredot_19; // 0x548(0x08)
	struct UCanvasPanel* SpreadImg_coredot_20; // 0x550(0x08)
	struct UCanvasPanel* SpreadImg_coredot_21; // 0x558(0x08)
	float PitchRotScale; // 0x560(0x04)
	int32_t LastAmmoCount; // 0x564(0x04)
	bool bShowClip; // 0x568(0x01)

	void ChangeAmmoCount(int32_t AmmoCount); // Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ChangeAmmoCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst); // Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnAmmoChanged // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateVehicleRotationPitch(float InPitch); // Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateVehicleRotationPitch // (Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo); // Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnReloadFinished // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateReloadProgress(float InReloadProgress, int32_t InReservedAmmo, int32_t InMaxAmmo); // Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.OnUpdateReloadProgress // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile(int32_t EntryPoint); // Function Crosshair_CarWeapon_Sroll05_Missile.Crosshair_CarWeapon_Sroll05_Missile_C.ExecuteUbergraph_Crosshair_CarWeapon_Sroll05_Missile // (Final|UbergraphFunction) // @ game+0x2d656b0
};

