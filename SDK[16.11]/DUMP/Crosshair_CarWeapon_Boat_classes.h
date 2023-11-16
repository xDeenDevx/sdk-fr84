// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C
// Size: 0x520 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Boat_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Anim_Charging; // 0x490(0x08)
	struct UWidgetAnimation* Anim_Cooldown; // 0x498(0x08)
	struct UImage* Bullet_2; // 0x4a0(0x08)
	struct UImage* Bullet_3; // 0x4a8(0x08)
	struct UImage* Bullet_4; // 0x4b0(0x08)
	struct UImage* Bullet_5; // 0x4b8(0x08)
	struct UImage* Bullet_6; // 0x4c0(0x08)
	struct UImage* Bullet_7; // 0x4c8(0x08)
	struct UImage* Bullet_8; // 0x4d0(0x08)
	struct UImage* Bullet_9; // 0x4d8(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x4e0(0x08)
	struct UCanvasPanel* Coredot; // 0x4e8(0x08)
	struct UImage* ReticleDirection; // 0x4f0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4f8(0x08)
	int32_t PreBurstCount; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct TArray<struct UImage*> BulletImages; // 0x508(0x10)
	bool IsCoolDown; // 0x518(0x01)
	bool IsPreCharging; // 0x519(0x01)
	char pad_51A[0x2]; // 0x51a(0x02)
	float AnimationReversTime; // 0x51c(0x04)

	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // Function Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.OnUpdateChargeProgress // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnInitialized(); // Function Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateCoolDownProgress(float InCoolDownProgress); // Function Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.OnUpdateCoolDownProgress // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_Crosshair_CarWeapon_Boat(int32_t EntryPoint); // Function Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.ExecuteUbergraph_Crosshair_CarWeapon_Boat // (Final|UbergraphFunction) // @ game+0x2d656b0
};

