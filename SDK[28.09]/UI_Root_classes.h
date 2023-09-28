// WidgetBlueprintGeneratedClass UI_Root.UI_Root_C
// Size: 0x3d1 (Inherited: 0x348)
struct UUI_Root_C : USolarUIRoot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UCanvasPanel* BattleNoticeRoot; // 0x350(0x08)
	struct UCanvasPanel* BattleRoot; // 0x358(0x08)
	struct UCanvasPanel* BattleRootGuide; // 0x360(0x08)
	struct UCanvasPanel* BattleRootOverlay; // 0x368(0x08)
	struct UCanvasPanel* CommonRoot; // 0x370(0x08)
	struct UCanvasPanel* ExternalToolsRoot; // 0x378(0x08)
	struct UCanvasPanel* Guide; // 0x380(0x08)
	struct UCanvasPanel* Loading; // 0x388(0x08)
	struct UCanvasPanel* Map; // 0x390(0x08)
	struct UCanvasPanel* MiddleRoot; // 0x398(0x08)
	struct UCanvasPanel* NoticeRoot; // 0x3a0(0x08)
	struct UCanvasPanel* PopRoot; // 0x3a8(0x08)
	struct UCanvasPanel* Reconnecting; // 0x3b0(0x08)
	struct UCanvasPanel* TipsRoot; // 0x3b8(0x08)
	struct UCanvasPanel* UnderBattleRoot; // 0x3c0(0x08)
	float AdapterOffsetLeft; // 0x3c8(0x04)
	float AdapterOffsetRight; // 0x3cc(0x04)
	bool EnableAutoAdaptation; // 0x3d0(0x01)

	struct FString GetModuleName(); // Function UI_Root.UI_Root_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Root.UI_Root_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void CustomEvent_1(struct UObject* Publisher, struct UObject* Payload, struct TArray<struct FString>& MetaData); // Function UI_Root.UI_Root_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Root(int32_t EntryPoint); // Function UI_Root.UI_Root_C.ExecuteUbergraph_UI_Root // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

