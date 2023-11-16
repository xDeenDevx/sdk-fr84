// WidgetBlueprintGeneratedClass UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C
// Size: 0x4ac (Inherited: 0x400)
struct UUI_MicroPhoneOperation_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* BackBG; // 0x408(0x08)
	struct UImage* Img_TeamPos; // 0x410(0x08)
	struct UOverlay* Overlay_PosInTeam; // 0x418(0x08)
	struct USolarCheckBox* SolarCheckBox_Switch; // 0x420(0x08)
	struct FLinearColor Color1; // 0x428(0x10)
	struct FLinearColor Color2; // 0x438(0x10)
	struct FLinearColor Color3; // 0x448(0x10)
	struct FLinearColor Color4; // 0x458(0x10)
	struct FLinearColor ColorBG1; // 0x468(0x10)
	struct FLinearColor ColorBG2; // 0x478(0x10)
	struct FLinearColor ColorBG3; // 0x488(0x10)
	struct FLinearColor ColorBG4; // 0x498(0x10)
	int32_t OrderId; // 0x4a8(0x04)

	void OnCheckStateChanged_A0E4A5CC4C1FAE9F79344284CFF0C641(bool bIsChecked); // DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_A0E4A5CC4C1FAE9F79344284CFF0C641 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnCheckStateChanged_20AB84AE45823E83D8D479B139A6D8DF(bool bIsChecked); // DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_20AB84AE45823E83D8D479B139A6D8DF // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnCheckStateChanged_01AC925248690A802F3A2988481E9D2F(bool bIsChecked); // DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_01AC925248690A802F3A2988481E9D2F // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void OnCheckStateChanged_72CEEE54409339ED0A25D8A147ECBCDA(bool bIsChecked); // DelegateFunction UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.OnCheckStateChanged_72CEEE54409339ED0A25D8A147ECBCDA // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetOrder(int32_t OrderId); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.SetOrder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_MicroPhoneOperation_Item(int32_t EntryPoint); // Function UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C.ExecuteUbergraph_UI_MicroPhoneOperation_Item // (Final|UbergraphFunction) // @ game+0x2d63a00
};

