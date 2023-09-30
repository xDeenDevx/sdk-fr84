// WidgetBlueprintGeneratedClass TickerWidget.TickerWidget_C
// Size: 0x488 (Inherited: 0x348)
struct UTickerWidget_C : USolarUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct URichTextBlock* RichText; // 0x350(0x08)
	struct USizeBox* SizeBox; // 0x358(0x08)
	struct UCanvasPanel* TextPanel; // 0x360(0x08)
	struct FText Text; // 0x368(0x18)
	bool bEnableTickering; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	float LoopIntervalDuration; // 0x384(0x04)
	float AnimationSpeed; // 0x388(0x04)
	bool bCanTicker; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float OriTextWidth; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FText ShortenedText; // 0x398(0x18)
	struct FTimerHandle TimerHandle; // 0x3b0(0x08)
	bool bEnableLocText; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	int32_t LocTextID; // 0x3bc(0x04)
	bool bIsAnimationPlaying; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float TargetXVal; // 0x3c4(0x04)
	float DeltaTime; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct FTimerHandle TickerTimerHandle; // 0x3d0(0x08)
	struct FSlateFontInfo Font; // 0x3d8(0x60)
	struct FSlateColor TxtColor; // 0x438(0x28)
	struct FLinearColor ShadowColor; // 0x460(0x10)
	struct FVector2D ShadowOffset; // 0x470(0x08)
	struct FVector2D Size; // 0x478(0x08)
	float Direction; // 0x480(0x04)
	bool bAlwaysTickering; // 0x484(0x01)
	enum class ETextJustify Justification; // 0x485(0x01)
	bool bAlwaysKeepJustification; // 0x486(0x01)
	enum class ETextJustify NewVar_1; // 0x487(0x01)

	void UpdateText(); // Function TickerWidget.TickerWidget_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ApplyJustification(); // Function TickerWidget.TickerWidget_C.ApplyJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void CanTicker(); // Function TickerWidget.TickerWidget_C.CanTicker // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PlayerTickerAnimHelper(); // Function TickerWidget.TickerWidget_C.PlayerTickerAnimHelper // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetTextEditorLoc(); // Function TickerWidget.TickerWidget_C.SetTextEditorLoc // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void StopTickerAnimation(); // Function TickerWidget.TickerWidget_C.StopTickerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void PlayTickerAnimation(); // Function TickerWidget.TickerWidget_C.PlayTickerAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetText(struct FText InText); // Function TickerWidget.TickerWidget_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnSynchronizeProperties(); // Function TickerWidget.TickerWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x2649560
	void OnHide(); // Function TickerWidget.TickerWidget_C.OnHide // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void OnSolarUIClosed(); // Function TickerWidget.TickerWidget_C.OnSolarUIClosed // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TickerWidget.TickerWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void Construct(); // Function TickerWidget.TickerWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void PreConstruct(bool IsDesignTime); // Function TickerWidget.TickerWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2649560
	void CustomEvent_1(struct UObject* Publisher, struct UObject* Payload, struct TArray<struct FString>& MetaData); // Function TickerWidget.TickerWidget_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_TickerWidget(int32_t EntryPoint); // Function TickerWidget.TickerWidget_C.ExecuteUbergraph_TickerWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

