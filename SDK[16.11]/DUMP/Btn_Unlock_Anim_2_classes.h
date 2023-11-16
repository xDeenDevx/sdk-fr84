// WidgetBlueprintGeneratedClass Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C
// Size: 0x438 (Inherited: 0x400)
struct UBtn_Unlock_Anim_1_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Anim_Unlock; // 0x408(0x08)
	struct UButton* Btn_Locked; // 0x410(0x08)
	struct FMulticastInlineDelegate OnAnimStarted; // 0x418(0x10)
	struct FMulticastInlineDelegate OnAnimEnded; // 0x428(0x10)

	void SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_2(); // Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C.SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_1(); // Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C.SequenceEvent__ENTRYPOINTBtn_Unlock_Anim_1_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnAnimStart(); // Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C.OnAnimStart // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnAnimEnd(); // Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C.OnAnimEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_Btn_Unlock_Anim_2(int32_t EntryPoint); // Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C.ExecuteUbergraph_Btn_Unlock_Anim_2 // (Final|UbergraphFunction) // @ game+0x2d63a00
	void OnAnimEnded__DelegateSignature(); // Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C.OnAnimEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnAnimStarted__DelegateSignature(); // Function Btn_Unlock_Anim_2.Btn_Unlock_Anim_1_C.OnAnimStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
};

