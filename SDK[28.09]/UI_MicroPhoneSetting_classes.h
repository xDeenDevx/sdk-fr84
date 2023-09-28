// WidgetBlueprintGeneratedClass UI_MicroPhoneSetting.UI_MicroPhoneSetting_C
// Size: 0x458 (Inherited: 0x348)
struct UUI_MicroPhoneSetting_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro1; // 0x350(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro2; // 0x358(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro3; // 0x360(0x08)
	struct UUI_MicroPhoneOperation_Item_C* Micro4; // 0x368(0x08)
	struct USolarCheckBox* Microphone_AllOpen; // 0x370(0x08)
	struct USolarCheckBox* Microphone_MuteAll; // 0x378(0x08)
	struct USolarCheckBox* Microphone_TeamOpen; // 0x380(0x08)
	struct UCheckBoxGroup* MicroPhoneType; // 0x388(0x08)
	struct UWidgetSwitcher* OperatorSwitcher; // 0x390(0x08)
	struct UVerticalBox* PartnerList; // 0x398(0x08)
	struct USolarCheckBox* Speaker_AllOpen; // 0x3a0(0x08)
	struct USolarCheckBox* Speaker_MuteAll; // 0x3a8(0x08)
	struct USolarCheckBox* Speaker_TeamOpen; // 0x3b0(0x08)
	struct UCheckBoxGroup* SpeakerPanelType; // 0x3b8(0x08)
	struct UImage* TabMicroPhoneImg; // 0x3c0(0x08)
	struct USolarTextBlock* TabMicroPhoneText; // 0x3c8(0x08)
	struct UImage* TabSpeakerImg; // 0x3d0(0x08)
	struct USolarTextBlock* TabSpeakerText; // 0x3d8(0x08)
	struct TMap<int32_t, struct UUI_MicroPhoneOperation_Item_C*> PlayerChatMap; // 0x3e0(0x50)
	struct UObject* ImgClose; // 0x430(0x08)
	struct UObject* SpeakImgOn; // 0x438(0x08)
	struct UObject* SpeakImgOff; // 0x440(0x08)
	struct UObject* MicroImgOn; // 0x448(0x08)
	struct UObject* MicroImgOff; // 0x450(0x08)

	struct FString GetModuleName(); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_UI_MicroPhoneSetting(int32_t EntryPoint); // Function UI_MicroPhoneSetting.UI_MicroPhoneSetting_C.ExecuteUbergraph_UI_MicroPhoneSetting // (Final|UbergraphFunction) // @ game+0x2649560
};

