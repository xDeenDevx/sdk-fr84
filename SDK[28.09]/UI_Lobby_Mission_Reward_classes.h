// WidgetBlueprintGeneratedClass UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C
// Size: 0x370 (Inherited: 0x348)
struct UUI_Lobby_Mission_Reward_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x350(0x08)
	struct UButton* Btn_MissionReward; // 0x358(0x08)
	struct UImage* Img_Icon; // 0x360(0x08)
	struct USolarTextBlock* Txt_GameRecommend; // 0x368(0x08)

	struct FString GetModuleName(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Lobby_Mission_Reward(int32_t EntryPoint); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.ExecuteUbergraph_UI_Lobby_Mission_Reward // (Final|UbergraphFunction) // @ game+0x2649560
};

