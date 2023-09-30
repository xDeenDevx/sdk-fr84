// WidgetBlueprintGeneratedClass UI_Vip_Cards.UI_Vip_Cards_C
// Size: 0x39c (Inherited: 0x348)
struct UUI_Vip_Cards_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x350(0x08)
	struct UButton* Btn_Card; // 0x358(0x08)
	struct UImage* Img_Card; // 0x360(0x08)
	struct UImage* Img_Star; // 0x368(0x08)
	struct UImage* MI_Glow; // 0x370(0x08)
	struct UImage* MI_Glow_2; // 0x378(0x08)
	struct UImage* MI_Wipes; // 0x380(0x08)
	struct USizeBox* Size_Item; // 0x388(0x08)
	int32_t Type_Card; // 0x390(0x04)
	int32_t Size_W; // 0x394(0x04)
	int32_t Size_H; // 0x398(0x04)

	struct FString GetModuleName(); // Function UI_Vip_Cards.UI_Vip_Cards_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetCardType(int32_t CardType); // Function UI_Vip_Cards.UI_Vip_Cards_C.SetCardType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Vip_Cards.UI_Vip_Cards_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Vip_Cards(int32_t EntryPoint); // Function UI_Vip_Cards.UI_Vip_Cards_C.ExecuteUbergraph_UI_Vip_Cards // (Final|UbergraphFunction) // @ game+0x2649560
};

