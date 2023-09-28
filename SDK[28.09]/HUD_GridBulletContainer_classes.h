// WidgetBlueprintGeneratedClass HUD_GridBulletContainer.HUD_GridBulletContainer_C
// Size: 0x650 (Inherited: 0x438)
struct UHUD_GridBulletContainer_C : UGridBulletContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UImage* bg_BulletEmpty; // 0x440(0x08)
	struct UImage* bg_BulletEmptyShine; // 0x448(0x08)
	struct UImage* bg_BulletGrid; // 0x450(0x08)
	struct UImage* Img_LightAll; // 0x458(0x08)
	int32_t CurrentBulletForDebug; // 0x460(0x04)
	int32_t MaxBulletForDebug; // 0x464(0x04)
	struct FProgressBarStyle NewVar_1; // 0x468(0x1d0)
	bool IsMaxAmmoChanged; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct TArray<struct UWidget*> DivisorWidgetArray; // 0x640(0x10)

	void ReceiveUpdateMaxAmmoEvent(int32_t InMaxAmmo); // Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ReceiveUpdateMaxAmmoEvent // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_HUD_GridBulletContainer(int32_t EntryPoint); // Function HUD_GridBulletContainer.HUD_GridBulletContainer_C.ExecuteUbergraph_HUD_GridBulletContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

