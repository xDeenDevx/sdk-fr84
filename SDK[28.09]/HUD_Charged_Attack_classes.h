// WidgetBlueprintGeneratedClass HUD_Charged_Attack.HUD_Charged_Attack_C
// Size: 0x2b4 (Inherited: 0x260)
struct UHUD_Charged_Attack_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Bar_Yellow_Anim; // 0x268(0x08)
	struct UWidgetAnimation* Bar_Blue_Anim; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_121; // 0x280(0x08)
	struct UImage* Image_247; // 0x288(0x08)
	struct UImage* Img_BG_Light; // 0x290(0x08)
	struct UImage* Img_Light; // 0x298(0x08)
	struct UImage* Img_Light_2; // 0x2a0(0x08)
	struct UProgressBar* ProgressBar_Charge; // 0x2a8(0x08)
	int32_t LastChargeMode; // 0x2b0(0x04)

	void SetPercent(float InPercent, int32_t InChargeMode, bool InbFirstEnter); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.SetPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnActiveCrosshair(struct UUserWidget* InActiveCrosshair); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnActiveCrosshair // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnChangeOverloadState(bool InbQuitState); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeOverloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeReloadState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnInsufficientAmmo(); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnInsufficientAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnReloadFinish // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateAmmo // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateCoolDown(float InReloadProgress); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCoolDown // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateOverload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateReload // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCharge // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_HUD_Charged_Attack(int32_t EntryPoint); // Function HUD_Charged_Attack.HUD_Charged_Attack_C.ExecuteUbergraph_HUD_Charged_Attack // (Final|UbergraphFunction) // @ game+0x2649560
};

