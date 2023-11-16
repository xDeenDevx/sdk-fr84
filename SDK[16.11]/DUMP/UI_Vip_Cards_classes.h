// WidgetBlueprintGeneratedClass UI_Vip_Cards.UI_Vip_Cards_C
// Size: 0x454 (Inherited: 0x400)
struct UUI_Vip_Cards_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Loop; // 0x408(0x08)
	struct UButton* Btn_Card; // 0x410(0x08)
	struct UImage* Img_Card; // 0x418(0x08)
	struct UImage* Img_Star; // 0x420(0x08)
	struct UImage* MI_Glow; // 0x428(0x08)
	struct UImage* MI_Glow_2; // 0x430(0x08)
	struct UImage* MI_Wipes; // 0x438(0x08)
	struct USizeBox* Size_Item; // 0x440(0x08)
	int32_t Type_Card; // 0x448(0x04)
	int32_t Size_W; // 0x44c(0x04)
	int32_t Size_H; // 0x450(0x04)

	void OnClicked_54240838452E1C52F14711B241FA562E(); // DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_54240838452E1C52F14711B241FA562E // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnClicked_4EB816C34B24B25DFCDA5EB6D30882D7(); // DelegateFunction UI_Vip_Cards.UI_Vip_Cards_C.OnClicked_4EB816C34B24B25DFCDA5EB6D30882D7 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	struct FString GetModuleName(); // Function UI_Vip_Cards.UI_Vip_Cards_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetCardType(int32_t CardType); // Function UI_Vip_Cards.UI_Vip_Cards_C.SetCardType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Vip_Cards.UI_Vip_Cards_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Vip_Cards(int32_t EntryPoint); // Function UI_Vip_Cards.UI_Vip_Cards_C.ExecuteUbergraph_UI_Vip_Cards // (Final|UbergraphFunction) // @ game+0x2d63a00
};

