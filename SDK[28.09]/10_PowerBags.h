/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 10_PowerBags.

/// Class /Game/10_PowerBags/Common/Blueprints/BP_SolarBackpackActor.BP_SolarBackpackActor_C
/// Size: 0x0000 (0x000310 - 0x000310)
class ABP_SolarBackpackActor_C : public ASolarBackpackActor
{ 
public:
};

/// Class /Game/10_PowerBags/PBags_MC/R/Set01/BluePrints/BP_PBags_MC_Set01.BP_PBags_MC_Set01_C
/// Size: 0x0000 (0x000310 - 0x000310)
class ABP_PBags_MC_Set01_C : public ABP_SolarBackpackActor_C
{ 
public:
};

/// Class /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C
/// Size: 0x0040 (0x000280 - 0x0002C0)
class ABP_PBagsTrail_Common_C : public ASolarBackpackSFX
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UParticleSystemComponent*                          FX_PowerBag_WallRunLoop;                                    // 0x0288   (0x0008)  
	UParticleSystemComponent*                          FX_PowerBag_Trail;                                          // 0x0290   (0x0008)  
	UParticleSystemComponent*                          FX_PowerBag_DropSlowDown;                                   // 0x0298   (0x0008)  
	UParticleSystemComponent*                          FX_PowerBag_SkyDivingLanding;                               // 0x02A0   (0x0008)  
	USceneComponent*                                   VFX;                                                        // 0x02A8   (0x0008)  
	float                                              TrailFade_Size_581709C845BD673DB0841C82710F99F1;            // 0x02B0   (0x0004)  
	TEnumAsByte<ETimelineDirection>                    TrailFade__Direction_581709C845BD673DB0841C82710F99F1;      // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02B5   (0x0003)  MISSED
	UTimelineComponent*                                TrailFade;                                                  // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnWallRun
	void OnWallRun();                                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXEnd
	void BackpackSFXEnd();                                                                                                   // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXLaunch
	void BackpackSFXLaunch(bool GroundDetected, FVector& GroundLocation, FVector& GroundNormal);                             // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.BackpackSFXBegin
	void BackpackSFXBegin(TEnumAsByte<EFXJetType> InJetType, bool GroundDetected);                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.UpdateTrailParticle
	void UpdateTrailParticle(FBackpackTrailAssemblingParams SoftObjectRef);                                                  // [0x2649560] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.GetTrailEffectComponent
	UParticleSystemComponent* GetTrailEffectComponent();                                                                     // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_FinishDeactive
	void FX_FinishDeactive();                                                                                                // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.SkyDivingLanding
	void SkyDivingLanding();                                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.DropSlowDown
	void DropSlowDown();                                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.Normal Jet Fly
	void Normal Jet Fly();                                                                                                   // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.FX_InitializeDeactive
	void FX_InitializeDeactive();                                                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__FinishedFunc
	void TrailFade__FinishedFunc();                                                                                          // [0x2649560] BlueprintEvent       
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TrailFade__UpdateFunc
	void TrailFade__UpdateFunc();                                                                                            // [0x2649560] BlueprintEvent       
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.OnBackpackTrailAssembling
	void OnBackpackTrailAssembling(FBackpackTrailAssemblingParams& Params, EBackpackPropellingMode PropellingMode);          // [0x2649560] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.TryFadeOutTrail
	void TryFadeOutTrail();                                                                                                  // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsTrail_Common.BP_PBagsTrail_Common_C.ExecuteUbergraph_BP_PBagsTrail_Common
	void ExecuteUbergraph_BP_PBagsTrail_Common(int32_t EntryPoint);                                                          // [0x2649560] Final|HasDefaults    
};

/// Class /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C
/// Size: 0x0020 (0x000280 - 0x0002A0)
class ABP_PBagsOffgas_Common_C : public ASolarBackpackSFX
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0280   (0x0008)  
	UParticleSystemComponent*                          FX_BoostClimb_Start;                                        // 0x0288   (0x0008)  
	UParticleSystemComponent*                          FX_PowerBag_MainJet;                                        // 0x0290   (0x0008)  
	USceneComponent*                                   VFX;                                                        // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXBegin
	void BackpackSFXBegin(TEnumAsByte<EFXJetType> InJetType, bool GroundDetected);                                           // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXEnd
	void BackpackSFXEnd();                                                                                                   // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.OnBackpackTrailAssembling
	void OnBackpackTrailAssembling(FBackpackTrailAssemblingParams& Params, EBackpackPropellingMode PropellingMode);          // [0x2649560] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/10_PowerBags/PowerBagsTrail/Common/BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.ExecuteUbergraph_BP_PBagsOffgas_Common
	void ExecuteUbergraph_BP_PBagsOffgas_Common(int32_t EntryPoint);                                                         // [0x2649560] Final|HasDefaults    
};

