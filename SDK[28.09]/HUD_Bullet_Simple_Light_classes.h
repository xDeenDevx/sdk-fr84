// WidgetBlueprintGeneratedClass HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C
// Size: 0x271 (Inherited: 0x260)
struct UHUD_Bullet_Simple_Light_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Gauge_Anim; // 0x268(0x08)
	enum class E_UI_Bullet_Type  �� ; // 0x270(0x01)

	void BP_OnEntryReleased(); // Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_HUD_Bullet_Simple_Light(int32_t EntryPoint); // Function HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.ExecuteUbergraph_HUD_Bullet_Simple_Light // (Final|UbergraphFunction) // @ game+0x2649560
};

