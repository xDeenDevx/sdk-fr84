// WidgetBlueprintGeneratedClass UI_Lobby_Profession.UI_Lobby_Profession_C
// Size: 0x388 (Inherited: 0x348)
struct UUI_Lobby_Profession_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USolarButton* Btn_Change; // 0x350(0x08)
	struct UImage* Img_Icon; // 0x358(0x08)
	struct UImage* img_iconBg; // 0x360(0x08)
	struct UImage* img_iconBorder; // 0x368(0x08)
	struct UImage* img_iconBorder_2; // 0x370(0x08)
	struct UOverlay* Overlay_2; // 0x378(0x08)
	bool Myself; // 0x380(0x01)
	enum class E_ProfessionType ProfessionType; // 0x381(0x01)
	char pad_382[0x2]; // 0x382(0x02)
	int32_t Index; // 0x384(0x04)

	struct FString GetModuleName(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetSelection(char Index); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.SetSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void UpdateState(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void Render(); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.Render // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Lobby_Profession(int32_t EntryPoint); // Function UI_Lobby_Profession.UI_Lobby_Profession_C.ExecuteUbergraph_UI_Lobby_Profession // (Final|UbergraphFunction) // @ game+0x2649560
};

