// WidgetBlueprintGeneratedClass SolarRedHint_General.SolarRedHint_General_C
// Size: 0x423 (Inherited: 0x400)
struct USolarRedHint_General_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UImage* Img_HintPoint; // 0x408(0x08)
	struct UTextBlock* Text_HintNum; // 0x410(0x08)
	int64_t HintKey; // 0x418(0x08)
	enum class ERedHintPath HintPath; // 0x420(0x01)
	bool IsAutoRefresh; // 0x421(0x01)
	enum class E_Type_RedHint Type; // 0x422(0x01)

	void Destruct(); // Function SolarRedHint_General.SolarRedHint_General_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void OnSetHintDataCompleteCopy(); // Function SolarRedHint_General.SolarRedHint_General_C.OnSetHintDataCompleteCopy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnInitialized(); // Function SolarRedHint_General.SolarRedHint_General_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ConstructCopy(); // Function SolarRedHint_General.SolarRedHint_General_C.ConstructCopy // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	struct FString GetModuleName(); // Function SolarRedHint_General.SolarRedHint_General_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void OnSetHintDataComplete(); // Function SolarRedHint_General.SolarRedHint_General_C.OnSetHintDataComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb6d460
	void SetStyle(enum class E_Type_RedHint Type); // Function SolarRedHint_General.SolarRedHint_General_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetHintData(int64_t Key, enum class ERedHintPath Path, bool bAutoRefresh, enum class E_Type_RedHint Type); // Function SolarRedHint_General.SolarRedHint_General_C.SetHintData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function SolarRedHint_General.SolarRedHint_General_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function SolarRedHint_General.SolarRedHint_General_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb6d460
	void ExecuteUbergraph_SolarRedHint_General(int32_t EntryPoint); // Function SolarRedHint_General.SolarRedHint_General_C.ExecuteUbergraph_SolarRedHint_General // (Final|UbergraphFunction) // @ game+0x2d63a00
};

