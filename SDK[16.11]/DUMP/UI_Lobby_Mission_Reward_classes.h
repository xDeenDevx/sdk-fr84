// WidgetBlueprintGeneratedClass UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C
// Size: 0x428 (Inherited: 0x400)
struct UUI_Lobby_Mission_Reward_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Enter; // 0x408(0x08)
	struct UButton* Btn_MissionReward; // 0x410(0x08)
	struct UImage* Img_Icon; // 0x418(0x08)
	struct USolarTextBlock* Txt_GameRecommend; // 0x420(0x08)

	void OnClicked_73FC3DD24620B513EBAAA38FB3ED6950(); // DelegateFunction UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.OnClicked_73FC3DD24620B513EBAAA38FB3ED6950 // (MulticastDelegate|Public|Delegate) // @ game+0xb5f200
	void Destruct(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIClosed(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_UI_Lobby_Mission_Reward(int32_t EntryPoint); // Function UI_Lobby_Mission_Reward.UI_Lobby_Mission_Reward_C.ExecuteUbergraph_UI_Lobby_Mission_Reward // (Final|UbergraphFunction) // @ game+0x2d63a00
};

