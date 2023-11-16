// WidgetBlueprintGeneratedClass UI_Currency_Bar.UI_Currency_Bar_C
// Size: 0x51a (Inherited: 0x400)
struct UUI_Currency_Bar_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UButton* Btn_charge; // 0x408(0x08)
	struct UButton* Btn_Currency; // 0x410(0x08)
	struct UImage* Image_bg; // 0x418(0x08)
	struct UImage* img_charge; // 0x420(0x08)
	struct UImage* Img_Currency; // 0x428(0x08)
	struct UImage* Img_Currency_2; // 0x430(0x08)
	struct UImage* Img_Currency_3; // 0x438(0x08)
	struct UImage* Img_Currency_01; // 0x440(0x08)
	struct UImage* Img_Currency_02; // 0x448(0x08)
	struct UImage* Img_Diamond_Hover; // 0x450(0x08)
	struct UImage* Img_Vip_Hover; // 0x458(0x08)
	struct UImage* Line_3; // 0x460(0x08)
	struct UImage* Line_4; // 0x468(0x08)
	struct UImage* Line_5; // 0x470(0x08)
	struct UImage* Line_6; // 0x478(0x08)
	struct UImage* Line_7; // 0x480(0x08)
	struct UOverlay* Overlay_Vip; // 0x488(0x08)
	struct UCanvasPanel* Panel_Currency_01; // 0x490(0x08)
	struct UCanvasPanel* Panel_Currency_02; // 0x498(0x08)
	struct UCanvasPanel* Panel_Currency_03; // 0x4a0(0x08)
	struct UCanvasPanel* Panel_Currency_04; // 0x4a8(0x08)
	struct UCanvasPanel* Panel_CustomServer; // 0x4b0(0x08)
	struct UCanvasPanel* Panel_Root; // 0x4b8(0x08)
	struct USolarButton* SolarBtn_BG; // 0x4c0(0x08)
	struct USolarButton* SolarBtn_BG_2; // 0x4c8(0x08)
	struct USolarButton* SolarBtn_BG_3; // 0x4d0(0x08)
	struct USolarButton* SolarBtn_BG_4; // 0x4d8(0x08)
	struct USolarRedHint_General_C* SolarRedHint_General; // 0x4e0(0x08)
	struct UTextBlock* Txt_Number; // 0x4e8(0x08)
	struct UTextBlock* Txt_Number_2; // 0x4f0(0x08)
	struct UTextBlock* Txt_Number_3; // 0x4f8(0x08)
	struct UTextBlock* Txt_Number_01; // 0x500(0x08)
	struct UTextBlock* Txt_Number_02; // 0x508(0x08)
	struct UUI_Vip_Cards_C* UI_Vip_Cards; // 0x510(0x08)
	enum class E_Type_State_Desktop StateDesktopDiamond; // 0x518(0x01)
	enum class E_Type_State_Desktop StateDesktopVip; // 0x519(0x01)

	void OnClicked_161026394C19B05A192C62875064A920(); // DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_161026394C19B05A192C62875064A920 // (MulticastDelegate|Public|Delegate) // @ game+0xb5e720
	void OnClicked_F759F3CF415148E96F6095BA3E88A7A9(); // DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_F759F3CF415148E96F6095BA3E88A7A9 // (MulticastDelegate|Public|Delegate) // @ game+0xb5e720
	void OnClicked_EDFDC9B24443F7C990AF5298A1BE0A6E(); // DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_EDFDC9B24443F7C990AF5298A1BE0A6E // (MulticastDelegate|Public|Delegate) // @ game+0xb5e720
	void OnClicked_D70605DB424C17044A52AC8546B87A8B(); // DelegateFunction UI_Currency_Bar.UI_Currency_Bar_C.OnClicked_D70605DB424C17044A52AC8546B87A8B // (MulticastDelegate|Public|Delegate) // @ game+0xb5e720
	void OnSolarUIClosed(); // Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIClosed // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	void OnSolarUIOpened(); // Function UI_Currency_Bar.UI_Currency_Bar_C.OnSolarUIOpened // (Native|Event|Protected|BlueprintEvent) // @ game+0xb6c980
	void Construct(); // Function UI_Currency_Bar.UI_Currency_Bar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6c980
	struct FString GetModuleName(); // Function UI_Currency_Bar.UI_Currency_Bar_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d64c70
	void SetStateDesktop(enum class E_Type_State_Desktop StateDesktopDiamond, enum class E_Type_State_Desktop StateDesktopVip); // Function UI_Currency_Bar.UI_Currency_Bar_C.SetStateDesktop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d64c70
	void PreConstruct(bool IsDesignTime); // Function UI_Currency_Bar.UI_Currency_Bar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d64c70
	void ExecuteUbergraph_UI_Currency_Bar(int32_t EntryPoint); // Function UI_Currency_Bar.UI_Currency_Bar_C.ExecuteUbergraph_UI_Currency_Bar // (Final|UbergraphFunction) // @ game+0x2d64c70
};

