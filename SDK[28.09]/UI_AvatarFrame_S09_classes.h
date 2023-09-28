// WidgetBlueprintGeneratedClass UI_AvatarFrame_S09.UI_AvatarFrame_S09_C
// Size: 0x380 (Inherited: 0x348)
struct UUI_AvatarFrame_S09_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x350(0x08)
	struct UParticleSystemWidget* ParticleSystemWidget_46; // 0x358(0x08)
	struct FMulticastInlineDelegate On Clicked; // 0x360(0x10)
	struct FMulticastInlineDelegate On Released; // 0x370(0x10)

	struct FString GetModuleName(); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.GetModuleName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void SetAvatarIcon(int32_t InAvatarID); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetAvatarIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetEmptyState(bool IsEmpty); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetEmptyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetPlayerGender(enum class E_Type_Gender Gender); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetPlayerGender // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetSocialIcon(enum class E_Type_Social Social); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.SetSocialIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Update(); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_AvatarFrame_S09(int32_t EntryPoint); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.ExecuteUbergraph_UI_AvatarFrame_S09 // (Final|UbergraphFunction) // @ game+0x2649560
	void On Released__DelegateSignature(); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.On Released__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void On Clicked__DelegateSignature(); // Function UI_AvatarFrame_S09.UI_AvatarFrame_S09_C.On Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

