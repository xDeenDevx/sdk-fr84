// WidgetBlueprintGeneratedClass UI_Component_NationalFlag.UI_Component_NationalFlag_C
// Size: 0x395 (Inherited: 0x378)
struct UUI_Component_NationalFlag_C : UUIComponentNationalFlag {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct USizeBox* SizeBox_1; // 0x380(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Flag; // 0x388(0x08)
	float Size; // 0x390(0x04)
	enum class E_FlagType FlagType; // 0x394(0x01)

	struct FString GetModuleName(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetEmptyClan(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetEmptyClan // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetFlagType(enum class E_FlagType FlagType); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetFlagType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Set UI State(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Set UI State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void SetNationalFlagType(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetNationalFlagType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetClanFlagType(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetClanFlagType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_NationalFlag(int32_t EntryPoint); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.ExecuteUbergraph_UI_Component_NationalFlag // (Final|UbergraphFunction) // @ game+0x2649560
};

