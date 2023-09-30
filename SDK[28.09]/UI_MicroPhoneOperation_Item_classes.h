// WidgetBlueprintGeneratedClass UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C
// Size: 0x3f4 (Inherited: 0x348)
struct UUI_MicroPhoneOperation_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UImage* BackBG; // 0x350(0x08)
	struct UImage* Img_TeamPos; // 0x358(0x08)
	struct UOverlay* Overlay_PosInTeam; // 0x360(0x08)
	struct USolarCheckBox* SolarCheckBox_Switch; // 0x368(0x08)
	struct FLinearColor Color1; // 0x370(0x10)
	struct FLinearColor Color2; // 0x380(0x10)
	struct FLinearColor Color3; // 0x390(0x10)
	struct FLinearColor Color4; // 0x3a0(0x10)
	struct FLinearColor ColorBG1; // 0x3b0(0x10)
	struct FLinearColor ColorBG2; // 0x3c0(0x10)
	struct FLinearColor ColorBG3; // 0x3d0(0x10)
	struct FLinearColor ColorBG4; // 0x3e0(0x10)
	int32_t OrderId; // 0x3f0(0x04)

	struct FString GetModuleName(); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetOrder(int32_t OrderId); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.SetOrder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_MicroPhoneOperation_Item(int32_t EntryPoint); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.ExecuteUbergraph_UI_MicroPhoneOperation_Item // (Final|UbergraphFunction) // @ game+0x2649560
};

