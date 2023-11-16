// WidgetBlueprintGeneratedClass UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C
// Size: 0x439 (Inherited: 0x400)
struct UUI_Lobby_MatchRoom_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USolarButton* Btn_MatchRoom; // 0x408(0x08)
	struct UImage* Img_Matchroom_Tips_Arrow; // 0x410(0x08)
	struct UOverlay* Overlay_Matchroom_Tips; // 0x418(0x08)
	struct UCanvasPanel* Panel_MatchRoom; // 0x420(0x08)
	struct USolarImageURL* SolarImageURL_Icon; // 0x428(0x08)
	struct USolarRichTextBlock* SolarRichTextBlock_Stage; // 0x430(0x08)
	enum class E_Type_State_Desktop StateDesktop; // 0x438(0x01)

	void OnClicked_288193004F5360497EAA68A3D47C56F1(); // DelegateFunction UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C.OnClicked_288193004F5360497EAA68A3D47C56F1 // (MulticastDelegate|Public|Delegate) // @ game+0xb5e720
	void Destruct(); // Function UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void Construct(); // Function UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	void OnInitialized(); // Function UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	struct FString GetModuleName(); // Function UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Lobby_MatchRoom(int32_t EntryPoint); // Function UI_Lobby_MatchRoom.UI_Lobby_MatchRoom_C.ExecuteUbergraph_UI_Lobby_MatchRoom // (Final|UbergraphFunction) // @ game+0x2d64c70
};

