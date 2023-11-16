// WidgetBlueprintGeneratedClass UI_Component_Proficiency.UI_Component_Proficiency_C
// Size: 0x281 (Inherited: 0x260)
struct UUI_Component_Proficiency_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Img_ProficiencyIcon; // 0x268(0x08)
	struct USizeBox* SizeBox_1; // 0x270(0x08)
	float Size; // 0x278(0x04)
	int32_t Lvl; // 0x27c(0x04)
	bool S; // 0x280(0x01)

	void SetLvl(int32_t Lvl, bool S); // Function UI_Component_Proficiency.UI_Component_Proficiency_C.SetLvl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetSize(float Size); // Function UI_Component_Proficiency.UI_Component_Proficiency_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Proficiency.UI_Component_Proficiency_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Proficiency(int32_t EntryPoint); // Function UI_Component_Proficiency.UI_Component_Proficiency_C.ExecuteUbergraph_UI_Component_Proficiency // (Final|UbergraphFunction) // @ game+0x2d63a00
};

