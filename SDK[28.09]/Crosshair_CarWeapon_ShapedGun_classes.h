// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C
// Size: 0x530 (Inherited: 0x488)
struct UCrosshair_CarWeapon_ShapedGun_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Anim_Charging; // 0x490(0x08)
	struct UProgressBar* ChargeBar_1_2; // 0x498(0x08)
	struct UProgressBar* ChargeBar_1_3; // 0x4a0(0x08)
	struct UProgressBar* ChargeBar_1_4; // 0x4a8(0x08)
	struct UProgressBar* ChargeBar_1_5; // 0x4b0(0x08)
	struct UProgressBar* ChargeBar_2_2; // 0x4b8(0x08)
	struct UProgressBar* ChargeBar_2_3; // 0x4c0(0x08)
	struct UProgressBar* ChargeBar_2_4; // 0x4c8(0x08)
	struct UProgressBar* ChargeBar_2_5; // 0x4d0(0x08)
	struct UCanvasPanel* Charging_2; // 0x4d8(0x08)
	struct UCanvasPanel* Charging_3; // 0x4e0(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4e8(0x08)
	struct UCanvasPanel* Coredot; // 0x4f0(0x08)
	struct UImage* ReloadImg; // 0x4f8(0x08)
	struct UImageTween_C* ReloadImg_Tween; // 0x500(0x08)
	struct UImage* ReticleDirection; // 0x508(0x08)
	struct UImage* SpreadImg_coredot; // 0x510(0x08)
	struct UCanvasPanel* SpreadImg_coredot_2; // 0x518(0x08)
	struct UCanvasPanel* SpreadImg_coredot_3; // 0x520(0x08)
	int32_t LastChargeMode; // 0x528(0x04)
	float AnimationReversTime; // 0x52c(0x04)

	void SetPrograssPrecent(float Percent, int32_t Index, struct UProgressBar* InProgressBar); // Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetPrograssPrecent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	struct UUserWidget* GetChargeWidget(); // Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.GetChargeWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.OnUpdateChargeProgress // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun(int32_t EntryPoint); // Function Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun // (Final|UbergraphFunction) // @ game+0x2649560
};

