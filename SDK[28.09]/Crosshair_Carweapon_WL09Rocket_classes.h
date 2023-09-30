// WidgetBlueprintGeneratedClass Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C
// Size: 0x548 (Inherited: 0x488)
struct UCrosshair_Carweapon_WL09Rocket_C : UVehicleWeaponCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UCanvasPanel* Coredot; // 0x490(0x08)
	struct UImage* Img_Bullet_2; // 0x498(0x08)
	struct UImage* Img_Bullet_3; // 0x4a0(0x08)
	struct UImage* Img_Bullet_4; // 0x4a8(0x08)
	struct UImage* Img_Bullet_5; // 0x4b0(0x08)
	struct UImage* Img_Bullet_6; // 0x4b8(0x08)
	struct UImage* Img_Bullet_7; // 0x4c0(0x08)
	struct UImage* Img_Bullet_8; // 0x4c8(0x08)
	struct UImage* Img_Bullet_9; // 0x4d0(0x08)
	struct UImage* Img_Bullet_10; // 0x4d8(0x08)
	struct UImage* Img_Bullet_11; // 0x4e0(0x08)
	struct UImage* Img_Bullet_12; // 0x4e8(0x08)
	struct UImage* Img_Bullet_13; // 0x4f0(0x08)
	struct UImage* Img_Bullet_14; // 0x4f8(0x08)
	struct UImage* Img_Bullet_15; // 0x500(0x08)
	struct UImage* Img_Bullet_16; // 0x508(0x08)
	struct UImage* Img_Bullet_17; // 0x510(0x08)
	struct UCanvasPanel* Panel_Reload; // 0x518(0x08)
	struct UImage* SpreadImg_coredot; // 0x520(0x08)
	struct USolarTextBlock* Txt_Distance; // 0x528(0x08)
	int32_t LastRservedAmmo; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct TArray<struct UImage*> BulletImage; // 0x538(0x10)

	void OnAmmoCounterChanged(int32_t Counter); // Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoCounterChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst); // Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnUpdateReloadProgress(float InReloadProgress, int32_t InReservedAmmo, int32_t InMaxAmmo); // Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateReloadProgress // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnInitialized(); // Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo); // Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnReloadFinished // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnUpdateAimTargetDistance(float InDistance); // Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateAimTargetDistance // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket(int32_t EntryPoint); // Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

