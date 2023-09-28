// WidgetBlueprintGeneratedClass Crosshair_Simple_En.Crosshair_Simple_En_C
// Size: 0x351 (Inherited: 0x300)
struct UCrosshair_Simple_En_C : UCrossHairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* Simple_EN_Anim; // 0x308(0x08)
	struct UImage* ForbidImg; // 0x310(0x08)
	struct UHUD_Bullet_Simple_C* HUD_Bullet_Simple; // 0x318(0x08)
	struct UHUD_Reload_C* HUD_Reload; // 0x320(0x08)
	struct UImage* SpreadImg_coredot; // 0x328(0x08)
	struct UImage* SpreadImg_Downarrow; // 0x330(0x08)
	struct UImage* SpreadImg_Leftarrow; // 0x338(0x08)
	struct UImage* SpreadImg_Rightarrow; // 0x340(0x08)
	struct UImage* SpreadImg_uparrow; // 0x348(0x08)
	enum class E_UI_Bullet_Type  �� ; // 0x350(0x01)

	struct UUserWidget* GetReloadWidget(); // Function Crosshair_Simple_En.Crosshair_Simple_En_C.GetReloadWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	struct UUserWidget* GetAmmoWidget(); // Function Crosshair_Simple_En.Crosshair_Simple_En_C.GetAmmoWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Update(); // Function Crosshair_Simple_En.Crosshair_Simple_En_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function Crosshair_Simple_En.Crosshair_Simple_En_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Crosshair_Simple_En(int32_t EntryPoint); // Function Crosshair_Simple_En.Crosshair_Simple_En_C.ExecuteUbergraph_Crosshair_Simple_En // (Final|UbergraphFunction) // @ game+0x2649560
};

