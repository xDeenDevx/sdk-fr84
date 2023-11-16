// WidgetBlueprintGeneratedClass UI_Component_NationalFlag.UI_Component_NationalFlag_C
// Size: 0x44d (Inherited: 0x430)
struct UUI_Component_NationalFlag_C : UUIComponentNationalFlag {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct USizeBox* SizeBox_1; // 0x438(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Flag; // 0x440(0x08)
	float Size; // 0x448(0x04)
	enum class E_FlagType FlagType; // 0x44c(0x01)

	void SetDefaultNationalFlag(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetDefaultNationalFlag // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void Destruct(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void LoadClanFlagByUrl(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.LoadClanFlagByUrl // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	bool IsBroadCastMode(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.IsBroadCastMode // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	bool IsExclusiveFlagId(int32_t InFlagID); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.IsExclusiveFlagId // (Event|Protected|BlueprintEvent|Const) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void SetDefaultClanFlag(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetDefaultClanFlag // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetEmptyClan(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetEmptyClan // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetFlagType(enum class E_FlagType FlagType); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetFlagType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Set UI State(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Set UI State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void SetNationalFlagType(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetNationalFlagType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetClanFlagType(); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetClanFlagType // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_NationalFlag(int32_t EntryPoint); // Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.ExecuteUbergraph_UI_Component_NationalFlag // (Final|UbergraphFunction) // @ game+0x2d63a00
};

