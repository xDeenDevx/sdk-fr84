// WidgetBlueprintGeneratedClass TickerWidget.TickerWidget_C
// Size: 0x540 (Inherited: 0x400)
struct UTickerWidget_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct URichTextBlock* RichText; // 0x408(0x08)
	struct USizeBox* SizeBox; // 0x410(0x08)
	struct UCanvasPanel* TextPanel; // 0x418(0x08)
	struct FText Text; // 0x420(0x18)
	bool bEnableTickering; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	float LoopIntervalDuration; // 0x43c(0x04)
	float AnimationSpeed; // 0x440(0x04)
	bool bCanTicker; // 0x444(0x01)
	char pad_445[0x3]; // 0x445(0x03)
	float OriTextWidth; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FText ShortenedText; // 0x450(0x18)
	struct FTimerHandle TimerHandle; // 0x468(0x08)
	bool bEnableLocText; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	int32_t LocTextID; // 0x474(0x04)
	bool bIsAnimationPlaying; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	float TargetXVal; // 0x47c(0x04)
	float DeltaTime; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct FTimerHandle TickerTimerHandle; // 0x488(0x08)
	struct FSlateFontInfo Font; // 0x490(0x60)
	struct FSlateColor TxtColor; // 0x4f0(0x28)
	struct FLinearColor ShadowColor; // 0x518(0x10)
	struct FVector2D ShadowOffset; // 0x528(0x08)
	struct FVector2D Size; // 0x530(0x08)
	float Direction; // 0x538(0x04)
	bool bAlwaysTickering; // 0x53c(0x01)
	enum class ETextJustify Justification; // 0x53d(0x01)
	bool bAlwaysKeepJustification; // 0x53e(0x01)
	enum class ETextJustify NewVar_1; // 0x53f(0x01)

	void UpdateText(); // Function TickerWidget.TickerWidget_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ApplyJustification(); // Function TickerWidget.TickerWidget_C.ApplyJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void CanTicker(); // Function TickerWidget.TickerWidget_C.CanTicker // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PlayerTickerAnimHelper(); // Function TickerWidget.TickerWidget_C.PlayerTickerAnimHelper // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetTextEditorLoc(); // Function TickerWidget.TickerWidget_C.SetTextEditorLoc // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void StopTickerAnimation(); // Function TickerWidget.TickerWidget_C.StopTickerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void PlayTickerAnimation(); // Function TickerWidget.TickerWidget_C.PlayTickerAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SetText(struct FText InText); // Function TickerWidget.TickerWidget_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void OnSynchronizeProperties(); // Function TickerWidget.TickerWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void PreConstruct(bool IsDesignTime); // Function TickerWidget.TickerWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void OnHide(); // Function TickerWidget.TickerWidget_C.OnHide // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void OnSolarUIClosed(); // Function TickerWidget.TickerWidget_C.OnSolarUIClosed // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TickerWidget.TickerWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void Construct(); // Function TickerWidget.TickerWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void OnLocalLangChangedEx(struct FString InLang); // Function TickerWidget.TickerWidget_C.OnLocalLangChangedEx // (Event|Protected|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_TickerWidget(int32_t EntryPoint); // Function TickerWidget.TickerWidget_C.ExecuteUbergraph_TickerWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

