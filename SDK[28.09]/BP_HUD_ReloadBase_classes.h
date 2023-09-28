// WidgetBlueprintGeneratedClass BP_HUD_ReloadBase.BP_HUD_ReloadBase_C
// Size: 0x268 (Inherited: 0x260)
struct UBP_HUD_ReloadBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)

	void SetSpeedUpBuff(bool bHaveBuff); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.SetSpeedUpBuff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void StopReloadAnimation(); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.StopReloadAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void GetReloadAnimation(struct UWidgetAnimation*& OutReloadAnimation); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.GetReloadAnimation // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2649560
	void PlayReloadAnimation(); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.PlayReloadAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnActiveCrosshair(struct UUserWidget* InActiveCrosshair); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnActiveCrosshair // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnChangeOverloadState(bool InbQuitState); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeOverloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnInsufficientAmmo(); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnInsufficientAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnReloadFinish // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCharge // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateCoolDown(float InReloadProgress); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCoolDown // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateOverload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateReload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeReloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_BP_HUD_ReloadBase(int32_t EntryPoint); // Function BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.ExecuteUbergraph_BP_HUD_ReloadBase // (Final|UbergraphFunction) // @ game+0x2649560
};

