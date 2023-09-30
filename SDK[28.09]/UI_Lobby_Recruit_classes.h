// WidgetBlueprintGeneratedClass UI_Lobby_Recruit.UI_Lobby_Recruit_C
// Size: 0x389 (Inherited: 0x348)
struct UUI_Lobby_Recruit_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x350(0x08)
	struct UButton* Btn_Recruit; // 0x358(0x08)
	struct UButton* Btn_Recruit_2; // 0x360(0x08)
	struct USolarTextBlock* Txt_Invite; // 0x368(0x08)
	struct USolarTextBlock* Txt_Invite1; // 0x370(0x08)
	struct USolarTextBlock* Txt_Invite2; // 0x378(0x08)
	struct USolarTextBlock* Txt_Recruit; // 0x380(0x08)
	bool Recruiting; // 0x388(0x01)

	struct FString GetModuleName(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_UI_Lobby_Recruit(int32_t EntryPoint); // Function UI_Lobby_Recruit.UI_Lobby_Recruit_C.ExecuteUbergraph_UI_Lobby_Recruit // (Final|UbergraphFunction) // @ game+0x2649560
};

