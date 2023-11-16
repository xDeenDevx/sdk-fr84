// WidgetBlueprintGeneratedClass CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C
// Size: 0x4b0 (Inherited: 0x400)
struct UCommonTwiceConfirmWindowOneBtn_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Enter_Anim; // 0x408(0x08)
	struct UBackgroundBlur* BlurMask; // 0x410(0x08)
	struct UUI_Component_Close_C* CloseBtn; // 0x418(0x08)
	struct UUI_Component_Btn_C* ConfirmBtn; // 0x420(0x08)
	struct USolarTextBlock* ConfirmBtnText; // 0x428(0x08)
	struct UTextBlock* ConfirmText; // 0x430(0x08)
	struct UImage* ConfirmTextBG; // 0x438(0x08)
	struct USolarRichTextBlock* Context; // 0x440(0x08)
	struct UImage* Mask; // 0x448(0x08)
	struct USolarTextBlock* Title; // 0x450(0x08)
	struct UUI_Option_C* UI_Option; // 0x458(0x08)
	struct FSlateColor HiddenColor; // 0x460(0x28)
	struct FSlateColor VisibleColor; // 0x488(0x28)

	void OnClicked_D6691D7045FEDEFFBBEF9CBF3F1D16F8(); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.OnClicked_D6691D7045FEDEFFBBEF9CBF3F1D16F8 // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xb5be00
	struct FEventReply OnMouseButtonDownEvent_82D773CF43590B4B0D971682CB4BD73D(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.OnMouseButtonDownEvent_82D773CF43590B4B0D971682CB4BD73D // (Public|Delegate|HasOutParms) // @ game+0xb5be00
	void OnSolarUIOpened(); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6a060
	void OnBackKey(enum class EWidgetBackKeyType BackKeyType); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.OnBackKey // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6a060
	void OnSolarUIClosed(); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6a060
	struct FString GetModuleName(); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d656b0
	void Construct(); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_CommonTwiceConfirmWindowOneBtn(int32_t EntryPoint); // Function CommonTwiceConfirmWindowOneBtn.CommonTwiceConfirmWindowOneBtn_C.ExecuteUbergraph_CommonTwiceConfirmWindowOneBtn // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d656b0
};

