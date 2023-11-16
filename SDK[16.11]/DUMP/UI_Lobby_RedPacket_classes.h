// WidgetBlueprintGeneratedClass UI_Lobby_RedPacket.UI_Lobby_RedPacket_C
// Size: 0x428 (Inherited: 0x400)
struct UUI_Lobby_RedPacket_C : USolarUserWidget {
	struct UWidgetAnimation* Anim_Enter; // 0x400(0x08)
	struct UCanvasPanel* Panel_RedPacket; // 0x408(0x08)
	struct USolarTextBlock* Txt_Countdown; // 0x410(0x08)
	struct USolarTextBlock* Txt_Time; // 0x418(0x08)
	struct UUI_Component_Close_C* UI_Component_Close; // 0x420(0x08)

	void OnClicked_D3BDAF1C4F49FA5D682CC6A7F144CFCC(); // Function UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.OnClicked_D3BDAF1C4F49FA5D682CC6A7F144CFCC // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5f200
	void OnSolarUIClosed(); // Function UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	void Destruct(); // Function UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSolarUIOpened(); // Function UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Lobby_RedPacket.UI_Lobby_RedPacket_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
};

