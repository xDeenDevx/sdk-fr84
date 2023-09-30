// WidgetBlueprintGeneratedClass UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C
// Size: 0x378 (Inherited: 0x348)
struct UUI_Lobby_GameRecommend_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Arrow_Loop_Anim; // 0x350(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x358(0x08)
	struct UButton* Btn_GameRecommend; // 0x360(0x08)
	struct UImage* Img_Icon_GameMode; // 0x368(0x08)
	struct USolarTextBlock* Txt_GameRecommend; // 0x370(0x08)

	struct FString GetModuleName(); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Lobby_GameRecommend(int32_t EntryPoint); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.ExecuteUbergraph_UI_Lobby_GameRecommend // (Final|UbergraphFunction) // @ game+0x2649560
};

