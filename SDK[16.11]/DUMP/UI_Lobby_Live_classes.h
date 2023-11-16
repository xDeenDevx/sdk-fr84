// WidgetBlueprintGeneratedClass UI_Lobby_Live.UI_Lobby_Live_C
// Size: 0x279 (Inherited: 0x260)
struct UUI_Lobby_Live_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x268(0x08)
	struct USolarRedHint_General_C* SolarHintPoint_Red; // 0x270(0x08)
	bool HintPoint; // 0x278(0x01)

	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Live.UI_Lobby_Live_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void Construct(); // Function UI_Lobby_Live.UI_Lobby_Live_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Lobby_Live(int32_t EntryPoint); // Function UI_Lobby_Live.UI_Lobby_Live_C.ExecuteUbergraph_UI_Lobby_Live // (Final|UbergraphFunction) // @ game+0x2d64c70
};

