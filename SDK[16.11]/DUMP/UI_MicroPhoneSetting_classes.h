// WidgetBlueprintGeneratedClass UI_MicroPhoneSetting.UI_MicroPhoneSetting_C
// Size: 0x510 (Inherited: 0x400)
struct UUI_MicroPhoneSetting_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro1; // 0x408(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro2; // 0x410(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro3; // 0x418(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro4; // 0x420(0x08)
	struct USolarCheckBox* Microphone_AllOpen; // 0x428(0x08)
	struct USolarCheckBox* Microphone_MuteAll; // 0x430(0x08)
	struct USolarCheckBox* Microphone_TeamOpen; // 0x438(0x08)
	struct UCheckBoxGroup* MicroPhoneType; // 0x440(0x08)
	struct UWidgetSwitcher* OperatorSwitcher; // 0x448(0x08)
	struct UVerticalBox* PartnerList; // 0x450(0x08)
	struct USolarCheckBox* Speaker_AllOpen; // 0x458(0x08)
	struct USolarCheckBox* Speaker_MuteAll; // 0x460(0x08)
	struct USolarCheckBox* Speaker_TeamOpen; // 0x468(0x08)
	struct UCheckBoxGroup* SpeakerPanelType; // 0x470(0x08)
	struct UImage* TabMicroPhoneImg; // 0x478(0x08)
	struct USolarTextBlock* TabMicroPhoneText; // 0x480(0x08)
	struct UImage* TabSpeakerImg; // 0x488(0x08)
	struct USolarTextBlock* TabSpeakerText; // 0x490(0x08)
	struct TMap<int32_t, struct UUI_MicroPhoneOperation_Item_C*> PlayerChatMap; // 0x498(0x50)
	struct UObject* ImgClose; // 0x4e8(0x08)
	struct UObject* SpeakImgOn; // 0x4f0(0x08)
	struct UObject* SpeakImgOff; // 0x4f8(0x08)
	struct UObject* MicroImgOn; // 0x500(0x08)
	struct UObject* MicroImgOff; // 0x508(0x08)

	struct FEventReply OnMouseButtonDownEvent_EFBB57CF45C5365FF8F81492BE9D90D7(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_EFBB57CF45C5365FF8F81492BE9D90D7 // (Public|Delegate|HasOutParms) // @ game+0xb5f200
	struct FEventReply OnMouseButtonDownEvent_6EB5783742BEE2766018C8BFF8E05438(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnMouseButtonDownEvent_6EB5783742BEE2766018C8BFF8E05438 // (Public|Delegate|HasOutParms) // @ game+0xb5f200
	void OnStateChangedEvent_D45E733649C843F0E08AED89CE778A02(struct TArray<struct UCheckBox*>& ChildChangedArray, int32_t CheckedChildIndex); // DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_D45E733649C843F0E08AED89CE778A02 // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xb5f200
	void OnStateChangedEvent_BD0E786449345893B09AC2818921A111(struct TArray<struct UCheckBox*>& ChildChangedArray, int32_t CheckedChildIndex); // DelegateFunction UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.OnStateChangedEvent_BD0E786449345893B09AC2818921A111 // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xb5f200
	void Destruct(); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void Construct(); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_MicroPhoneSetting(int32_t EntryPoint); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.ExecuteUbergraph_UI_MicroPhoneSetting // (Final|UbergraphFunction) // @ game+0x2d63a00
};

