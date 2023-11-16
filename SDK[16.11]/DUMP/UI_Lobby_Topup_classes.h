// WidgetBlueprintGeneratedClass UI_Lobby_Topup.UI_Lobby_Topup_C
// Size: 0x289 (Inherited: 0x260)
struct UUI_Lobby_Topup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x268(0x08)
	struct UParticleSystemWidget* ParticleSystemWidget_29; // 0x270(0x08)
	struct UScaleBox* ScaleBox_1; // 0x278(0x08)
	struct USolarTextBlock* SolarTextBlock_64; // 0x280(0x08)
	enum class E_Type_State_Desktop StateDesktop; // 0x288(0x01)

	void SetStateDesktop(enum class E_Type_State_Desktop StateDesktop); // Function UI_Lobby_Topup.UI_Lobby_Topup_C.SetStateDesktop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Lobby_Topup.UI_Lobby_Topup_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Lobby_Topup.UI_Lobby_Topup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Lobby_Topup(int32_t EntryPoint); // Function UI_Lobby_Topup.UI_Lobby_Topup_C.ExecuteUbergraph_UI_Lobby_Topup // (Final|UbergraphFunction) // @ game+0x2d63a00
};

