// WidgetBlueprintGeneratedClass SolarRedHint_General.SolarRedHint_General_C
// Size: 0x36b (Inherited: 0x348)
struct USolarRedHint_General_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UImage* Img_HintPoint; // 0x350(0x08)
	struct UTextBlock* Text_HintNum; // 0x358(0x08)
	int64_t HintKey; // 0x360(0x08)
	enum class ERedHintPath HintPath; // 0x368(0x01)
	bool IsAutoRefresh; // 0x369(0x01)
	enum class E_Type_RedHint Type; // 0x36a(0x01)

	struct FString GetModuleName(); // Function SolarRedHint_General.SolarRedHint_General_C.GetModuleName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2649560
	void OnSetHintDataComplete(); // Function SolarRedHint_General.SolarRedHint_General_C.OnSetHintDataComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xb43660
	void SetStyle(enum class E_Type_RedHint Type); // Function SolarRedHint_General.SolarRedHint_General_C.SetStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetHintData(int64_t Key, enum class ERedHintPath Path, bool bAutoRefresh, enum class E_Type_RedHint Type); // Function SolarRedHint_General.SolarRedHint_General_C.SetHintData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function SolarRedHint_General.SolarRedHint_General_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function SolarRedHint_General.SolarRedHint_General_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xb43660
	void ExecuteUbergraph_SolarRedHint_General(int32_t EntryPoint); // Function SolarRedHint_General.SolarRedHint_General_C.ExecuteUbergraph_SolarRedHint_General // (Final|UbergraphFunction) // @ game+0x2649560
};

