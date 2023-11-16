// BlueprintGeneratedClass BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C
// Size: 0x2a0 (Inherited: 0x280)
struct ABP_PBagsOffgas_Common_C : ASolarBackpackSFX {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UParticleSystemComponent* FX_BoostClimb_Start; // 0x288(0x08)
	struct UParticleSystemComponent* FX_PowerBag_MainJet; // 0x290(0x08)
	struct USceneComponent* VFX; // 0x298(0x08)

	void BackpackSFXBegin(enum class EFXJetType InJetType, bool GroundDetected); // Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXBegin // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void BackpackSFXEnd(); // Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXEnd // (Event|Public|BlueprintEvent) // @ game+0x2d63a00
	void OnBackpackTrailAssembling(struct FBackpackTrailAssemblingParams& Params, enum class EBackpackPropellingMode PropellingMode); // Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.OnBackpackTrailAssembling // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d63a00
	void ExecuteUbergraph_BP_PBagsOffgas_Common(int32_t EntryPoint); // Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.ExecuteUbergraph_BP_PBagsOffgas_Common // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d63a00
};

