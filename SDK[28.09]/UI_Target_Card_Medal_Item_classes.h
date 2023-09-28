// WidgetBlueprintGeneratedClass UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C
// Size: 0x388 (Inherited: 0x348)
struct UUI_Target_Card_Medal_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USolarButton* Btn_Press; // 0x350(0x08)
	struct UImage* Img_Bg; // 0x358(0x08)
	struct UImage* img_Medal; // 0x360(0x08)
	bool bLargeMedal; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct UObject* MedalIcon; // 0x370(0x08)
	bool bSmallMedal; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UTexture2D* Medal; // 0x380(0x08)

	struct FString GetModuleName(); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void BPCalLuaInitData(int32_t ID, int32_t Type, int32_t Level); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.BPCalLuaInitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	void SetSmallIcon(struct UTexture2D* NewParam, bool NewParam1); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetSmallIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetLargeIcon(struct UTexture2D* NewParam1, bool NewParam); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetLargeIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ChangeTargetCardMedalView(int32_t ID, int32_t Type, int32_t Level); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ChangeTargetCardMedalView // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Target_Card_Medal_Item(int32_t EntryPoint); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ExecuteUbergraph_UI_Target_Card_Medal_Item // (Final|UbergraphFunction) // @ game+0x2649560
};

