// WidgetBlueprintGeneratedClass BP_HUD_BulletBase.BP_HUD_BulletBase_C
// Size: 0x268 (Inherited: 0x260)
struct UBP_HUD_BulletBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)

	void GetReloadBulletAnimation(struct UWidgetAnimation*& OutReloadAniamtion); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetReloadBulletAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void PlayReloadBulletAnimation(); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayReloadBulletAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetBulletVisible(bool InbVisilble); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ReloadFinish(int32_t InReservedAmmo, int32_t InMaxAmmo); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ReloadFinish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void SetBulletLightEffect(float InProgress); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletLightEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void GetBulletGaugeWidget(struct UUserWidget*& OutBulletGaugeWidget); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetBulletGaugeWidget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void UpdateBulletGaugeProgress(float InBulletGaugeProgress); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.UpdateBulletGaugeProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void GetUpdateBulletStateAnimation(struct UWidgetAnimation*& OutUpdateBulletStateAnimation); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetUpdateBulletStateAnimation // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void PlayUpdateBulletStateAnimation(bool InbReload); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayUpdateBulletStateAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnActiveCrosshair(struct UUserWidget* InActiveCrosshair); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnActiveCrosshair // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnChangeOverloadState(bool InbQuitState); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeOverloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeReloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnInsufficientAmmo(); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnInsufficientAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCharge // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateCoolDown(float InReloadProgress); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCoolDown // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateOverload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateReload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnReloadFinish // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_BP_HUD_BulletBase(int32_t EntryPoint); // Function BP_HUD_BulletBase.BP_HUD_BulletBase_C.ExecuteUbergraph_BP_HUD_BulletBase // (Final|UbergraphFunction) // @ game+0x2649560
};

