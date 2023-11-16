// WidgetBlueprintGeneratedClass UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C
// Size: 0x440 (Inherited: 0x400)
struct UUI_Target_Card_Medal_Item_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarButton* Btn_Press; // 0x408(0x08)
	struct UImage* Img_Bg; // 0x410(0x08)
	struct UImage* img_Medal; // 0x418(0x08)
	bool bLargeMedal; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct UObject* MedalIcon; // 0x428(0x08)
	bool bSmallMedal; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct UTexture2D* Medal; // 0x438(0x08)

	void BPCalLuaInitDataCopy(int32_t ID, int32_t Type, int32_t Level); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.BPCalLuaInitDataCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnInitialized(); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Destruct(); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void BPCalLuaInitData(int32_t ID, int32_t Type, int32_t Level); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.BPCalLuaInitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void SetSmallIcon(struct UTexture2D* NewParam, bool NewParam1); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetSmallIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetLargeIcon(struct UTexture2D* NewParam1, bool NewParam); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetLargeIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ChangeTargetCardMedalView(int32_t ID, int32_t Type, int32_t Level); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ChangeTargetCardMedalView // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Target_Card_Medal_Item(int32_t EntryPoint); // Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ExecuteUbergraph_UI_Target_Card_Medal_Item // (Final|UbergraphFunction) // @ game+0x2d63a00
};

