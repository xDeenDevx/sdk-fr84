// WidgetBlueprintGeneratedClass HUD_GridBulletContainer.HUD_GridBulletContainer_C
// Size: 0x7e8 (Inherited: 0x4f0)
struct UHUD_GridBulletContainer_C : UGridBulletContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UImage* bg_BulletEmpty; // 0x4f8(0x08)
	struct UImage* bg_BulletEmptyShine; // 0x500(0x08)
	struct UImage* bg_BulletGrid; // 0x508(0x08)
	struct UImage* Img_LightAll; // 0x510(0x08)
	int32_t CurrentBulletForDebug; // 0x518(0x04)
	int32_t MaxBulletForDebug; // 0x51c(0x04)
	struct FProgressBarStyle NewVar_1; // 0x520(0x2b0)
	bool IsMaxAmmoChanged; // 0x7d0(0x01)
	char pad_7D1[0x7]; // 0x7d1(0x07)
	struct TArray<struct UWidget*> DivisorWidgetArray; // 0x7d8(0x10)

	void ReceiveUpdateMaxAmmoEvent(int32_t InMaxAmmo); // Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ReceiveUpdateMaxAmmoEvent // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void Construct(); // Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_HUD_GridBulletContainer(int32_t EntryPoint); // Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ExecuteUbergraph_HUD_GridBulletContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d656b0
};

