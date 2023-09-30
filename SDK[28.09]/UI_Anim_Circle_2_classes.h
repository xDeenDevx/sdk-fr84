// WidgetBlueprintGeneratedClass UI_Anim_Circle_2.UI_Anim_Circle_1_C
// Size: 0x278 (Inherited: 0x260)
struct UUI_Anim_Circle_1_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Anim_Loading; // 0x268(0x08)
	struct UImage* Img_Loading; // 0x270(0x08)

	void Construct(); // Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void PlayLoadingAnim(); // Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.PlayLoadingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void StopLoadingAnim(); // Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.StopLoadingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Anim_Circle_2(int32_t EntryPoint); // Function UI_Anim_Circle_2.UI_Anim_Circle_1_C.ExecuteUbergraph_UI_Anim_Circle_2 // (Final|UbergraphFunction) // @ game+0x2649560
};

