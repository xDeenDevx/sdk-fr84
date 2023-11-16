// WidgetBlueprintGeneratedClass UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C
// Size: 0x430 (Inherited: 0x400)
struct UUI_Lobby_GameRecommend_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Arrow_Loop_Anim; // 0x408(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x410(0x08)
	struct UButton* Btn_GameRecommend; // 0x418(0x08)
	struct UImage* Img_Icon_GameMode; // 0x420(0x08)
	struct USolarTextBlock* Txt_GameRecommend; // 0x428(0x08)

	void Destruct(); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Lobby_GameRecommend(int32_t EntryPoint); // Function UI_Lobby_GameRecommend.UI_Lobby_GameRecommend_C.ExecuteUbergraph_UI_Lobby_GameRecommend // (Final|UbergraphFunction) // @ game+0x2d63a00
};

