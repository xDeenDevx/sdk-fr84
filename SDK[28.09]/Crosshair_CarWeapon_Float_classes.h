// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C
// Size: 0x54e (Inherited: 0x488)
struct UCrosshair_CarWeapon_Float_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Normal_Anim; // 0x490(0x08)
	struct UWidgetAnimation* Aim_Anim; // 0x498(0x08)
	struct UWidgetAnimation* Overheat_Anim_Quit; // 0x4a0(0x08)
	struct UWidgetAnimation* Fullcharge_Anim; // 0x4a8(0x08)
	struct UWidgetAnimation* Overheat_Anim_Enter; // 0x4b0(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4b8(0x08)
	struct UCanvasPanel* Coredot; // 0x4c0(0x08)
	struct UImage* img_charge; // 0x4c8(0x08)
	struct UImage* Img_Circle; // 0x4d0(0x08)
	struct UImage* Img_Circle_2; // 0x4d8(0x08)
	struct UImage* Img_Glow; // 0x4e0(0x08)
	struct UImage* img_overload_cordot; // 0x4e8(0x08)
	struct UCanvasPanel* Panel_Aim; // 0x4f0(0x08)
	struct UCanvasPanel* panel_enlarge; // 0x4f8(0x08)
	struct UImage* ReticleDirection; // 0x500(0x08)
	struct UImage* SpreadImg_coredot; // 0x508(0x08)
	struct UImage* SpreadImg_coredot_3; // 0x510(0x08)
	struct UImage* SpreadImg_coredot_5; // 0x518(0x08)
	struct UWidgetSwitcher* wgs_enlarge; // 0x520(0x08)
	struct UWidgetSwitcher* wgs_overload; // 0x528(0x08)
	float ChargeProgress; // 0x530(0x04)
	bool IsChargingLast; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	struct FVector2D OriChargeSize; // 0x538(0x08)
	bool IsCharging; // 0x540(0x01)
	char pad_541[0x3]; // 0x541(0x03)
	struct FVector2D TempSize; // 0x544(0x08)
	bool IsOverloading; // 0x54c(0x01)
	bool bLockedEnemy; // 0x54d(0x01)

	void OnOverloadChanged(bool InOverload); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Set Charge Panel Size(); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Set Charge Panel Size // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetChargeProgress(); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetChargeProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateChargeProgress // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnOverloadStateChanged(bool bEnter); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnCrosshairInNormalState(); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnCrosshairInNormalState // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnUpdateAimState(bool InbLockEnemy); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateAimState // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_CarWeapon_Float(int32_t EntryPoint); // Function Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.ExecuteUbergraph_Crosshair_CarWeapon_Float // (Final|UbergraphFunction) // @ game+0x2649560
};

