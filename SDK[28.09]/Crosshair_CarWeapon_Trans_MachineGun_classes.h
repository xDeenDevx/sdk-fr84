// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C
// Size: 0x528 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Trans_MachineGun_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* Anim_transform; // 0x490(0x08)
	struct UCanvasPanel* Container_SecondReticle; // 0x498(0x08)
	struct UCanvasPanel* Coredot; // 0x4a0(0x08)
	struct UImage* downarrow; // 0x4a8(0x08)
	struct UImage* img_flame; // 0x4b0(0x08)
	struct UImage* img_lb; // 0x4b8(0x08)
	struct UImage* img_lt; // 0x4c0(0x08)
	struct UImage* img_rb; // 0x4c8(0x08)
	struct UImage* img_rt; // 0x4d0(0x08)
	struct UImage* leftarrow; // 0x4d8(0x08)
	struct UCanvasPanel* panel_trans; // 0x4e0(0x08)
	struct UImage* ReticleDirection; // 0x4e8(0x08)
	struct UImage* rightarrow; // 0x4f0(0x08)
	struct UImage* SpreadImg_coredot; // 0x4f8(0x08)
	struct UImage* SpreadImg_Downarrow_2; // 0x500(0x08)
	struct UImage* SpreadImg_Leftarrow_2; // 0x508(0x08)
	struct UImage* SpreadImg_Rightarrow_2; // 0x510(0x08)
	struct UImage* SpreadImg_uparrow_2; // 0x518(0x08)
	struct UImage* uparrow; // 0x520(0x08)

	void SetWidgetResources(struct UCanvasPanel*& InSecondReticlePanel, struct UImage*& InReticleDirectionImage, struct UImage*& InRangedImage, struct USizeBox*& InAssistLockSizeBox, struct UCanvasPanel*& InChangeNewAssistLockPawnPanel, struct UCanvasPanel*& InEnterLockPawnPanel, struct UCanvasPanel*& InCanvas_Dynamic); // Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.SetWidgetResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void OnTransformerWeaponChanged(enum class ETransformerType InType); // Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.OnTransformerWeaponChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun(int32_t EntryPoint); // Function Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun // (Final|UbergraphFunction) // @ game+0x2649560
};

