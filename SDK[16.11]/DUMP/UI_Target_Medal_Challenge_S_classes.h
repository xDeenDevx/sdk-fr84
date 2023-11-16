// WidgetBlueprintGeneratedClass UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C
// Size: 0x419 (Inherited: 0x400)
struct UUI_Target_Medal_Challenge_S_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Medal; // 0x408(0x08)
	struct UImage* Img_Medal_Icon; // 0x410(0x08)
	bool IsLock; // 0x418(0x01)

	void Destruct(); // Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetStateIsLocked(bool IsLock); // Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.SetStateIsLocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Target_Medal_Challenge_S(int32_t EntryPoint); // Function UI_Target_Medal_Challenge_S.UI_Target_Medal_Challenge_S_C.ExecuteUbergraph_UI_Target_Medal_Challenge_S // (Final|UbergraphFunction) // @ game+0x2d63a00
};

