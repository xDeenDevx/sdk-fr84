// WidgetBlueprintGeneratedClass HUD_OverLoad.HUD_Overload_C
// Size: 0x335 (Inherited: 0x260)
struct UHUD_Overload_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Overheat_Anim; // 0x268(0x08)
	struct UImage* Img_Disable; // 0x270(0x08)
	struct UImage* Img_Disable_2; // 0x278(0x08)
	struct UImage* img_overload; // 0x280(0x08)
	struct UImage* img_overload_bg; // 0x288(0x08)
	struct UImage* img_overload_Glow; // 0x290(0x08)
	struct UCanvasPanel* OverloadWarning; // 0x298(0x08)
	struct FVector2D OverloadImgMaxSize; // 0x2a0(0x08)
	float AnimImgRatio; // 0x2a8(0x04)
	float OverloadProgress; // 0x2ac(0x04)
	struct UUserWidget* ParentWidget; // 0x2b0(0x08)
	struct UCurveLinearColor* ColorCurve; // 0x2b8(0x08)
	struct FVector2D ShadowSize; // 0x2c0(0x08)
	float ImgMaxParmValue; // 0x2c8(0x04)
	float ImgParmOffset; // 0x2cc(0x04)
	struct FLinearColor NewVar_1; // 0x2d0(0x10)
	struct TMap<struct UUserWidget*, struct FVector2D> CrosshairScaleMapping; // 0x2e0(0x50)
	float NewVar_2; // 0x330(0x04)
	bool AlwaysShowOverload; // 0x334(0x01)

	void PlayOverloadAnima(bool InOverload); // Function HUD_OverLoad.HUD_Overload_C.PlayOverloadAnima // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void SetCoolDownProgress(); // Function HUD_OverLoad.HUD_Overload_C.SetCoolDownProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void SetOverLoadImageSize(float InProgress); // Function HUD_OverLoad.HUD_Overload_C.SetOverLoadImageSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup); // Function HUD_OverLoad.HUD_Overload_C.OnChangeReloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnInsufficientAmmo(); // Function HUD_OverLoad.HUD_Overload_C.OnInsufficientAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // Function HUD_OverLoad.HUD_Overload_C.OnReloadFinish // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst); // Function HUD_OverLoad.HUD_Overload_C.OnUpdateAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress); // Function HUD_OverLoad.HUD_Overload_C.OnUpdateCharge // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateCoolDown(float InReloadProgress); // Function HUD_OverLoad.HUD_Overload_C.OnUpdateCoolDown // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo); // Function HUD_OverLoad.HUD_Overload_C.OnUpdateReload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void PreConstruct(bool IsDesignTime); // Function HUD_OverLoad.HUD_Overload_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void Construct(); // Function HUD_OverLoad.HUD_Overload_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState); // Function HUD_OverLoad.HUD_Overload_C.OnUpdateOverload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnChangeOverloadState(bool InbQuitState); // Function HUD_OverLoad.HUD_Overload_C.OnChangeOverloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnActiveCrosshair(struct UUserWidget* InActiveCrosshair); // Function HUD_OverLoad.HUD_Overload_C.OnActiveCrosshair // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_HUD_Overload(int32_t EntryPoint); // Function HUD_OverLoad.HUD_Overload_C.ExecuteUbergraph_HUD_Overload // (Final|UbergraphFunction) // @ game+0x2d656b0
};

