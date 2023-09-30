// WidgetBlueprintGeneratedClass HUD_Bullet_Simple.HUD_Bullet_Simple_C
// Size: 0x291 (Inherited: 0x268)
struct UHUD_Bullet_Simple_C : UBP_HUD_BulletBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* Buttle_Light_Anim; // 0x270(0x08)
	struct UGaugeImage_C* AmmoGauge; // 0x278(0x08)
	struct UImage* AmmoGauge_BG; // 0x280(0x08)
	struct UHUD_Bullet_Simple_Light_C* HUD_Bullet_Simple_Light; // 0x288(0x08)
	enum class E_UI_Bullet_Type  �� ; // 0x290(0x01)

	void ReloadFinish(int32_t InReservedAmmo, int32_t InMaxAmmo); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.ReloadFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetBulletLightEffect(float InProgress); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.SetBulletLightEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void GetBulletGaugeWidget(struct UUserWidget*& OutBulletGaugeWidget); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.GetBulletGaugeWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void BP_OnEntryReleased(); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_HUD_Bullet_Simple(int32_t EntryPoint); // Function HUD_Bullet_Simple.HUD_Bullet_Simple_C.ExecuteUbergraph_HUD_Bullet_Simple // (Final|UbergraphFunction) // @ game+0x2649560
};

