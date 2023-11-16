// WidgetBlueprintGeneratedClass UI_AvatarFrame_PH.UI_AvatarFrame_PH_C
// Size: 0x430 (Inherited: 0x400)
struct UUI_AvatarFrame_PH_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Loop_Anim; // 0x408(0x08)
	struct FMulticastInlineDelegate On Clicked; // 0x410(0x10)
	struct FMulticastInlineDelegate On Released; // 0x420(0x10)

	struct FString GetModuleName(); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.GetModuleName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void SetAvatarIcon(int32_t InAvatarID); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetAvatarIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetEmptyState(bool IsEmpty); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetEmptyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetPlayerGender(enum class E_Type_Gender Gender); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetPlayerGender // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetSocialIcon(enum class E_Type_Social Social); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.SetSocialIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Update(); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_AvatarFrame_PH(int32_t EntryPoint); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.ExecuteUbergraph_UI_AvatarFrame_PH // (Final|UbergraphFunction) // @ game+0x2d63a00
	void On Released__DelegateSignature(); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.On Released__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void On Clicked__DelegateSignature(); // Function UI_AvatarFrame_PH.UI_AvatarFrame_PH_C.On Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

