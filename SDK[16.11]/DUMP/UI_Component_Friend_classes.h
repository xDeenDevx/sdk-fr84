// WidgetBlueprintGeneratedClass UI_Component_Friend.UI_Component_Friend_C
// Size: 0x5f0 (Inherited: 0x400)
struct UUI_Component_Friend_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_Follow; // 0x408(0x08)
	struct UButton* Btn_Followed; // 0x410(0x08)
	struct UButton* Btn_Following; // 0x418(0x08)
	struct UButton* Btn_Friend; // 0x420(0x08)
	struct UCanvasPanel* CanvasPanel_3; // 0x428(0x08)
	struct UImage* Img_Bg; // 0x430(0x08)
	struct UImage* Img_Follow; // 0x438(0x08)
	struct UImage* Img_Followed; // 0x440(0x08)
	struct UImage* Img_Following; // 0x448(0x08)
	struct UImage* Img_Friend; // 0x450(0x08)
	struct UOverlay* Overlay_Follow; // 0x458(0x08)
	struct UOverlay* Overlay_Followed; // 0x460(0x08)
	struct UOverlay* Overlay_Following; // 0x468(0x08)
	struct UOverlay* Overlay_Friend; // 0x470(0x08)
	struct USizeBox* SizeBox_3; // 0x478(0x08)
	struct USolarTextBlock* Txt_Follow; // 0x480(0x08)
	struct USolarTextBlock* Txt_Followed; // 0x488(0x08)
	struct USolarTextBlock* Txt_Following; // 0x490(0x08)
	struct USolarTextBlock* Txt_Friend; // 0x498(0x08)
	enum class E_Type_Friends Type_Friend; // 0x4a0(0x01)
	bool Btn_BG; // 0x4a1(0x01)
	bool Text; // 0x4a2(0x01)
	char pad_4A3[0x5]; // 0x4a3(0x05)
	struct FSlateColor FollowColor; // 0x4a8(0x28)
	struct FSlateColor FollowingColor; // 0x4d0(0x28)
	struct FSlateColor FollowedColor; // 0x4f8(0x28)
	struct FSlateColor FriendColor; // 0x520(0x28)
	int32_t Size; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct FSlateColor FollowBG; // 0x550(0x28)
	struct FSlateColor FollowingBG; // 0x578(0x28)
	struct FSlateColor FollowedBG; // 0x5a0(0x28)
	struct FSlateColor FriendBG; // 0x5c8(0x28)

	void Destruct(); // Function UI_Component_Friend.UI_Component_Friend_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnInitialized(); // Function UI_Component_Friend.UI_Component_Friend_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void InitWidgetCopy(struct FString InPlayerID, bool InIsBotAI); // Function UI_Component_Friend.UI_Component_Friend_C.InitWidgetCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function UI_Component_Friend.UI_Component_Friend_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	struct FString GetModuleName(); // Function UI_Component_Friend.UI_Component_Friend_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void InitWidget(struct FString InPlayerID, bool InIsBotAI); // Function UI_Component_Friend.UI_Component_Friend_C.InitWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void SetTypeFriend(); // Function UI_Component_Friend.UI_Component_Friend_C.SetTypeFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function UI_Component_Friend.UI_Component_Friend_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_UI_Component_Friend(int32_t EntryPoint); // Function UI_Component_Friend.UI_Component_Friend_C.ExecuteUbergraph_UI_Component_Friend // (Final|UbergraphFunction) // @ game+0x2d63a00
};

