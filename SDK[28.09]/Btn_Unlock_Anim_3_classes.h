// WidgetBlueprintGeneratedClass Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C
// Size: 0x380 (Inherited: 0x348)
struct UBtn_Unlock_Anim_2_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Anim_Unlock; // 0x350(0x08)
	struct UButton* Btn_Locked; // 0x358(0x08)
	struct FMulticastInlineDelegate OnAnimStarted; // 0x360(0x10)
	struct FMulticastInlineDelegate OnAnimEnded; // 0x370(0x10)

	void OnAnimStart(); // Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimStart // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnAnimEnd(); // Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Btn_Unlock_Anim_3(int32_t EntryPoint); // Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.ExecuteUbergraph_Btn_Unlock_Anim_3 // (Final|UbergraphFunction) // @ game+0x2649560
	void OnAnimEnded__DelegateSignature(); // Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnAnimStarted__DelegateSignature(); // Function Btn_Unlock_Anim_3.Btn_Unlock_Anim_2_C.OnAnimStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

