// WidgetBlueprintGeneratedClass Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C
// Size: 0x4b9 (Inherited: 0x488)
struct UCrosshair_CarWeapon_Gatling_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UCanvasPanel* Coredot; // 0x490(0x08)
	struct UCanvasPanel* SpreadCanvasPanel; // 0x498(0x08)
	struct UImage* SpreadImg_coredot; // 0x4a0(0x08)
	struct UImage* SpreadImg_Leftarrow_2; // 0x4a8(0x08)
	struct UImage* SpreadImg_Rightarrow_2; // 0x4b0(0x08)
	bool NewlyControlled; // 0x4b8(0x01)

	void CalculateRotAngle(float DeltaTime, float InSpeed, bool bFire, float& OutAngle); // Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.CalculateRotAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateGatlingRoll(float DeltaTmie, float InRollSpeedInterp, bool bWantFire); // Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnUpdateGatlingRoll // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void OnCrosshairInNormalState(); // Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnCrosshairInNormalState // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_Crosshair_CarWeapon_Gatling(int32_t EntryPoint); // Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.ExecuteUbergraph_Crosshair_CarWeapon_Gatling // (Final|UbergraphFunction) // @ game+0x2d656b0
};

