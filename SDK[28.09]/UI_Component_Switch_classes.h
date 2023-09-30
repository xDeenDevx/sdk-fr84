// WidgetBlueprintGeneratedClass UI_Component_Switch.UI_Component_Switch_C
// Size: 0x2e9 (Inherited: 0x260)
struct UUI_Component_Switch_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Anim_SwitchCycle; // 0x268(0x08)
	struct UWidgetAnimation* Anim_Switch; // 0x270(0x08)
	struct UImage* Img_Line; // 0x278(0x08)
	struct UImage* Img_Switch; // 0x280(0x08)
	struct USizeBox* Size; // 0x288(0x08)
	struct USizeBox* SizeBox_1; // 0x290(0x08)
	struct USolarTextBlock* Text_Universal; // 0x298(0x08)
	struct UButton* TouchArea; // 0x2a0(0x08)
	bool IsCircleType; // 0x2a8(0x01)
	bool Switch_On; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	struct FVector2D TouchSize; // 0x2ac(0x08)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FMulticastInlineDelegate OnStateChanged; // 0x2b8(0x10)
	struct FVector2D SwitchSize; // 0x2c8(0x08)
	bool bCustomClicked; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FMulticastInlineDelegate OnSwitchClicked; // 0x2d8(0x10)
	bool Text; // 0x2e8(0x01)

	void SetType(bool IsCircleType); // Function UI_Component_Switch.UI_Component_Switch_C.SetType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void InitValue(bool InValue); // Function UI_Component_Switch.UI_Component_Switch_C.InitValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetValue(bool InValue, bool CallChangeEvent, bool PlayAnimation); // Function UI_Component_Switch.UI_Component_Switch_C.SetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Switch.UI_Component_Switch_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void BndEvt__TouchArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UI_Component_Switch.UI_Component_Switch_C.BndEvt__TouchArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_Component_Switch(int32_t EntryPoint); // Function UI_Component_Switch.UI_Component_Switch_C.ExecuteUbergraph_UI_Component_Switch // (Final|UbergraphFunction) // @ game+0x2649560
	void OnSwitchClicked__DelegateSignature(); // Function UI_Component_Switch.UI_Component_Switch_C.OnSwitchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnStateChanged__DelegateSignature(bool NewValue); // Function UI_Component_Switch.UI_Component_Switch_C.OnStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
};

