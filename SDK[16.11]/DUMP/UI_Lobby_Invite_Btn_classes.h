// WidgetBlueprintGeneratedClass UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C
// Size: 0x422 (Inherited: 0x400)
struct UUI_Lobby_Invite_Btn_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Invite; // 0x408(0x08)
	struct UImage* Img_Bg_2; // 0x410(0x08)
	struct UOverlay* Overlay_Txt; // 0x418(0x08)
	bool IsDesktop; // 0x420(0x01)
	enum class E_Type_State_Desktop StateDesktop; // 0x421(0x01)

	void SetStateDesktop(bool IsDesktop, enum class E_Type_State_Desktop StateDesktop); // Function UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C.SetStateDesktop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Invite_Btn(int32_t EntryPoint); // Function UI_Lobby_Invite_Btn.UI_Lobby_Invite_Btn_C.ExecuteUbergraph_UI_Lobby_Invite_Btn // (Final|UbergraphFunction) // @ game+0x2d63a00
};

