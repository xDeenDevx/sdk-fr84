// ScriptStruct S_Customize_Element.S_Customize_Element
// Size: 0x58 (Inherited: 0x00)
struct FS_Customize_Element {
	struct FString PanelConfigName_30_C8EA5888448C1065B4C67D8ED7184138; // 0x00(0x10)
	struct UCanvasPanel* PanelWidget_49_2577B04D4032F2C407CAA48E62966365; // 0x10(0x08)
	struct UWidget* DragWidget_32_625CBF2246B0278CD18809971563076C; // 0x18(0x08)
	struct UWidget* SelectedWidget_34_8DEE1E594AE75D45FD35AAA7EBB6FF14; // 0x20(0x08)
	int32_t NoticeId_45_FD5E6E5C45B1A0B2786E3B9107BABFFA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct UWidget*> SelectedHideWidgets_40_E56A7010459F7BE4121B739202DA1058; // 0x30(0x10)
	struct TArray<struct UWidget*> SelectedShowWidgets_41_3DB1ACF94FF26528168047A9A05881A1; // 0x40(0x10)
	struct UWidget* PanelDisableWidget_48_9C396A2343CA316E853BC7B06F9F2901; // 0x50(0x08)
};

