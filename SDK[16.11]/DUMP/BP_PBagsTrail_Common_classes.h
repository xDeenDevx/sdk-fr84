// BlueprintGeneratedClass BP_PBagsTrail_Common.BP_PBagsTrail_Common_C
// Size: 0x2c0 (Inherited: 0x280)
struct ABP_PBagsTrail_Common_C : ASolarBackpackSFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UParticleSystemComponent* FX_PowerBag_WallRunLoop; // 0x288(0x08)
	struct UParticleSystemComponent* FX_PowerBag_Trail; // 0x290(0x08)
	struct UParticleSystemComponent* FX_PowerBag_DropSlowDown; // 0x298(0x08)
	struct UParticleSystemComponent* FX_PowerBag_SkyDivingLanding; // 0x2a0(0x08)
	struct USceneComponent* VFX; // 0x2a8(0x08)
	float TrailFade_Size_581709C845BD673DB0841C82710F99F1; // 0x2b0(0x04)
	enum class ETimelineDirection TrailFade__Direction_581709C845BD673DB0841C82710F99F1; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* TrailFade; // 0x2b8(0x08)

	void OnWallRun(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnWallRun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BackpackSFXEnd(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BackpackSFXLaunch(bool GroundDetected, struct FVector& GroundLocation, struct FVector& GroundNormal); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXLaunch // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void BackpackSFXBegin(enum class EFXJetType InJetType, bool GroundDetected); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXBegin // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void UpdateTrailParticle(struct FBackpackTrailAssemblingParams SoftObjectRef); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.UpdateTrailParticle // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	struct UParticleSystemComponent* GetTrailEffectComponent(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.GetTrailEffectComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x2d63a00
	void FX_FinishDeactive(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_FinishDeactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void SkyDivingLanding(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.SkyDivingLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void DropSlowDown(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.DropSlowDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void Normal Jet Fly(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.Normal Jet Fly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void FX_InitializeDeactive(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_InitializeDeactive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void TrailFade__FinishedFunc(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__FinishedFunc // (BlueprintEvent) // @ game+0x2d63a00
	void TrailFade__UpdateFunc(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__UpdateFunc // (BlueprintEvent) // @ game+0x2d63a00
	void OnBackpackTrailAssembling(struct FBackpackTrailAssemblingParams& Params, enum class EBackpackPropellingMode PropellingMode); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnBackpackTrailAssembling // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d63a00
	void TryFadeOutTrail(); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TryFadeOutTrail // (BlueprintCallable|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_BP_PBagsTrail_Common(int32_t EntryPoint); // Function BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.ExecuteUbergraph_BP_PBagsTrail_Common // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

