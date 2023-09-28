// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C
// Size: 0x545 (Inherited: 0x488)
struct UCrosshair_CarWeapon_IronGun_New_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Anim_1; // 0x490(0x08)
	struct UWidgetAnimation* Anim_5; // 0x498(0x08)
	struct UWidgetAnimation* Anim_4; // 0x4a0(0x08)
	struct UWidgetAnimation* Anim_3; // 0x4a8(0x08)
	struct UWidgetAnimation* Anim_2; // 0x4b0(0x08)
	struct UWidgetAnimation* Anim_Fullcharge; // 0x4b8(0x08)
	struct UProgressBar* bar_crosshair_2; // 0x4c0(0x08)
	struct UProgressBar* bar_crosshair_3; // 0x4c8(0x08)
	struct UProgressBar* bar_crosshair_4; // 0x4d0(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4d8(0x08)
	struct UCanvasPanel* Coredot; // 0x4e0(0x08)
	struct UImage* Img_Glow; // 0x4e8(0x08)
	struct USolarImage* img_round_l; // 0x4f0(0x08)
	struct USolarImage* img_round_r; // 0x4f8(0x08)
	struct USolarImage* img_round_t; // 0x500(0x08)
	struct UImageTween_C* ReloadImg_Tween; // 0x508(0x08)
	struct UImage* ReticleDirection; // 0x510(0x08)
	struct UImage* SpreadImg_coredot; // 0x518(0x08)
	struct UCanvasPanel* SpreadImg_coredot_2; // 0x520(0x08)
	struct UCanvasPanel* SpreadImg_coredot_3; // 0x528(0x08)
	struct UCanvasPanel* SpreadImg_coredot_4; // 0x530(0x08)
	int32_t LastChargeMode; // 0x538(0x04)
	bool bChargeFull; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	float MinlPercent; // 0x540(0x04)
	bool bLockedEnemy; // 0x544(0x01)

	void ChangeProgressBarColor(struct UProgressBar* InProgressBar, struct FLinearColor InBackgroundColor, struct FLinearColor InFillImageColor); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ChangeProgressBarColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetPrograssPrecent(float Percent, int32_t Index, struct UProgressBar* InProgressBar); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetPrograssPrecent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	struct UUserWidget* GetChargeWidget(); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.GetChargeWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateChargeProgress // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnUpdateAimState(bool InbLockEnemy); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateAimState // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnPlayWeaponSpecialFire(enum class ECrossHairSpecialFireState InState, float PlayRate); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnPlayWeaponSpecialFire // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnCrosshairInNormalState(); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnCrosshairInNormalState // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New(int32_t EntryPoint); // Function Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New // (Final|UbergraphFunction) // @ game+0x2649560
};

