/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 09_Weapons.

/// Class /Game/09_Weapons/Weapons/Psm/SMG_Psm03/Set00/BluePrint/BP_SMG_Psm03_Set00_Preview.BP_SMG_Psm03_Set00_Preview_C
/// Size: 0x0000 (0x000688 - 0x000688)
class ABP_SMG_Psm03_Set00_Preview_C : public ABP_Weaponry_Base_Preview_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Mphy/Sniper_MPhy02/Set00/BluePrint/BP_Sniper_Mphy02_Set00_Preview.BP_Sniper_Mphy02_Set00_Preview_C
/// Size: 0x0000 (0x000688 - 0x000688)
class ABP_Sniper_Mphy02_Set00_Preview_C : public ABP_Weaponry_Base_Preview_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/BluePrint/BP_Sniper_B9A01_Set00_Preview.BP_Sniper_B9A01_Set00_Preview_C
/// Size: 0x0000 (0x000688 - 0x000688)
class ABP_Sniper_B9A01_Set00_Preview_C : public ABP_Weaponry_Base_Preview_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set00/BluePrint/BP_Rifle_Mphy01_Set00_Preview.BP_Rifle_Mphy01_Set00_Preview_C
/// Size: 0x0000 (0x000688 - 0x000688)
class ABP_Rifle_Mphy01_Set00_Preview_C : public ABP_Weaponry_Base_Preview_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/BluePrint/BP_Shotgun_WL02_Set00_Preview.BP_Shotgun_WL02_Set00_Preview_C
/// Size: 0x0000 (0x000688 - 0x000688)
class ABP_Shotgun_WL02_Set00_Preview_C : public ABP_Weaponry_Base_Preview_C
{ 
public:
};

/// Class /Game/09_Weapons/BluePrints/BP_Weaponry_Base_Preview.BP_Weaponry_Base_Preview_C
/// Size: 0x0028 (0x000660 - 0x000688)
class ABP_Weaponry_Base_Preview_C : public AWeaponryWeapon
{ 
public:
	UWeaponryPartClip*                                 WeaponryPartClip;                                           // 0x0660   (0x0008)  
	UWeaponryPartScope*                                WeaponryPartScope;                                          // 0x0668   (0x0008)  
	UWeaponryPartMuzzle*                               WeaponryPartMuzzle;                                         // 0x0670   (0x0008)  
	UWeaponryPartGunStock*                             WeaponryPartGunStock;                                       // 0x0678   (0x0008)  
	UWeaponryPartGrip*                                 WeaponryPartGrip;                                           // 0x0680   (0x0008)  
};

/// Class /Game/09_Weapons/Ability/Summon/QuickSummonProxy/BP_QuickSummon_FootDown.BP_QuickSummon_FootDown_C
/// Size: 0x0008 (0x000028 - 0x000030)
class UBP_QuickSummon_FootDown_C : public USolarQuickSummonProxy
{ 
public:
	float                                              UpHeight;                                                   // 0x0028   (0x0004)  
	float                                              DownHeight;                                                 // 0x002C   (0x0004)  


	/// Functions
	// Function /Game/09_Weapons/Ability/Summon/QuickSummonProxy/BP_QuickSummon_FootDown.BP_QuickSummon_FootDown_C.TryGetSummonHitResult
	bool TryGetSummonHitResult(FHitResult& OutHitResult, AActor* InSummoner, USolarSummonDetectionConfig* InSummonConfig);   // [0x2649560] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/Ability/Summon/QuickSummonProxy/BP_QuickSummon_Forward.BP_QuickSummon_Forward_C
/// Size: 0x0018 (0x000028 - 0x000040)
class UBP_QuickSummon_Forward_C : public USolarQuickSummonProxy
{ 
public:
	float                                              CheckHeightUp;                                              // 0x0028   (0x0004)  
	float                                              CheckHeightDown;                                            // 0x002C   (0x0004)  
	TArray<float>                                      CheckDistanceArray;                                         // 0x0030   (0x0010)  


	/// Functions
	// Function /Game/09_Weapons/Ability/Summon/QuickSummonProxy/BP_QuickSummon_Forward.BP_QuickSummon_Forward_C.TryGetSummonHitResult
	bool TryGetSummonHitResult(FHitResult& OutHitResult, AActor* InSummoner, USolarSummonDetectionConfig* InSummonConfig);   // [0x2649560] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_RPG_BaseDamage.Effect_RPG_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_RPG_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SG_BaseDamage.Effect_SG_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SG_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SMG_WL04_BaseDamage.Effect_SMG_WL04_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SMG_WL04_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SMG_WL04_BaseDamage.Ability_SMG_WL04_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_SMG_WL04_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SG_BaseDamage.Ability_SG_BaseDamage_C
/// Size: 0x0008 (0x000310 - 0x000318)
class AAbility_SG_BaseDamage_C : public ASolarAbility
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0310   (0x0008)  
};

/// Class /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Effect_Anti-vehicle_Weapon01.Effect_Anti-vehicle_Weapon01_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Anti-vehicle_Weapon01_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C
/// Size: 0x0009 (0x000310 - 0x000319)
class AAbility_Anti-vehicle_Weapon01_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	bool                                               HasExploded;                                                // 0x0318   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Ability_Anti-vehicle_Weapon01.Ability_Anti-vehicle_Weapon01_C.ExecuteUbergraph_Ability_Anti-vehicle_Weapon01
	void ExecuteUbergraph_Ability_Anti-vehicle_Weapon01(int32_t EntryPoint);                                                 // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SMG_B9A12_BaseDamage.Effect_SMG_B9A12_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SMG_B9A12_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SMG_B9A12_BaseDamage.Ability_SMG_B9A12_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_SMG_B9A12_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SMG_B9A02_BaseDamage.Effect_SMG_B9A02_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SMG_B9A02_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SMG_B9A08_BaseDamage.Effect_SMG_B9A08_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SMG_B9A08_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SMG_B9A08_BaseDamage.Ability_SMG_B9A08_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_SMG_B9A08_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SMG_B9A02_BaseDamage.Ability_SMG_B9A02_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_SMG_B9A02_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/SMG_9A02/ModeMain/WAT_9A02.WAT_9A02_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UWAT_9A02_C : public USolarWeaponAT_FireBurst
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/SMG_9A08/Modemain/WAT_9A08.WAT_9A08_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UWAT_9A08_C : public USolarWeaponAT_FireBurst
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_Anti-vehicle_Weapon01.Crosshair_Anti-vehicle_Weapon01_C
/// Size: 0x0048 (0x000300 - 0x000348)
class UCrosshair_Anti-vehicle_Weapon01_C : public UCrossHairWidget
{ 
public:
	UImage*                                            ForbidImg;                                                  // 0x0300   (0x0008)  
	UImage*                                            Image;                                                      // 0x0308   (0x0008)  
	UImage*                                            OverloadImg2;                                               // 0x0310   (0x0008)  
	UWidgetTween_C*                                    OverloadNormalPanel_Tween;                                  // 0x0318   (0x0008)  
	UImage*                                            OverloadProgressBar_BG;                                     // 0x0320   (0x0008)  
	UImage*                                            OverloadProgressBar_BG;                                     // 0x0328   (0x0008)  
	UProgressBar*                                      OverloadProgressBarNormal;                                  // 0x0330   (0x0008)  
	UProgressBar*                                      OverloadProgressBarWarn;                                    // 0x0338   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0340   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_VehicleSummon.Crosshair_VehicleSummon_C
/// Size: 0x0028 (0x000300 - 0x000328)
class UCrosshair_VehicleSummon_C : public UCrossHairWidget
{ 
public:
	UImage*                                            SpreadImg_coredot;                                          // 0x0300   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0308   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0310   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0318   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0320   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Shotgun.Crosshair_Shotgun_C
/// Size: 0x0015 (0x000300 - 0x000315)
class UCrosshair_Shotgun_C : public UCrossHairWidget
{ 
public:
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0300   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0308   (0x0008)  
	int32_t                                            9_o_;                                                       // 0x0310   (0x0004)  
	TEnumAsByte<E_UI_Bullet_Type>                      9_o_;                                                       // 0x0314   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Shotgun.Crosshair_Shotgun_C.GetAmmoWidget
	UUserWidget* GetAmmoWidget();                                                                                            // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Shotgun.Crosshair_Shotgun_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C
/// Size: 0x0008 (0x0003B0 - 0x0003B8)
class AAbility_RPG_BaseDamage_C : public AWeaponAbilityBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B0   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Ability/BaseDamage/Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.OnLoaded_F1E8D1D244089792BF00E29440E0F852
	void OnLoaded_F1E8D1D244089792BF00E29440E0F852(UObject* Loaded);                                                         // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/Ability/BaseDamage/Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/Ability/BaseDamage/Ability_RPG_BaseDamage.Ability_RPG_BaseDamage_C.ExecuteUbergraph_Ability_RPG_BaseDamage
	void ExecuteUbergraph_Ability_RPG_BaseDamage(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C
/// Size: 0x0011 (0x000260 - 0x000271)
class UHUD_Bullet_Simple_Light_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Gauge_Anim;                                                 // 0x0268   (0x0008)  
	TEnumAsByte<E_UI_Bullet_Type>                      9_o_;                                                       // 0x0270   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple_Light.HUD_Bullet_Simple_Light_C.ExecuteUbergraph_HUD_Bullet_Simple_Light
	void ExecuteUbergraph_HUD_Bullet_Simple_Light(int32_t EntryPoint);                                                       // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C
/// Size: 0x0008 (0x000260 - 0x000268)
class UBP_HUD_BulletBase_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetReloadBulletAnimation
	void GetReloadBulletAnimation(UWidgetAnimation*& OutReloadAniamtion);                                                    // [0x2649560] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayReloadBulletAnimation
	void PlayReloadBulletAnimation();                                                                                        // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletVisible
	void SetBulletVisible(bool InbVisilble);                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.ReloadFinish
	void ReloadFinish(int32_t InReservedAmmo, int32_t InMaxAmmo);                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.SetBulletLightEffect
	void SetBulletLightEffect(float InProgress);                                                                             // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetBulletGaugeWidget
	void GetBulletGaugeWidget(UUserWidget*& OutBulletGaugeWidget);                                                           // [0x2649560] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.UpdateBulletGaugeProgress
	void UpdateBulletGaugeProgress(float InBulletGaugeProgress);                                                             // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.GetUpdateBulletStateAnimation
	void GetUpdateBulletStateAnimation(UWidgetAnimation*& OutUpdateBulletStateAnimation);                                    // [0x2649560] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.PlayUpdateBulletStateAnimation
	void PlayUpdateBulletStateAnimation(bool InbReload);                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnActiveCrosshair
	void OnActiveCrosshair(UUserWidget* InActiveCrosshair);                                                                  // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeOverloadState
	void OnChangeOverloadState(bool InbQuitState);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnChangeReloadState
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);                                                        // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnInsufficientAmmo
	void OnInsufficientAmmo();                                                                                               // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCharge
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress);                                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateCoolDown
	void OnUpdateCoolDown(float InReloadProgress);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateOverload
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateAmmo
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst);                       // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnUpdateReload
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo);                                    // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.OnReloadFinish
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_BulletBase.BP_HUD_BulletBase_C.ExecuteUbergraph_BP_HUD_BulletBase
	void ExecuteUbergraph_BP_HUD_BulletBase(int32_t EntryPoint);                                                             // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SMG_BaseDamage.Effect_SMG_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SMG_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Sniper_Epsm02BaseDamage.Effect_Sniper_Epsm02BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Sniper_Epsm02BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Rifle_BWL03__BaseDamage.Effect_Rifle_BWL03__BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Rifle_BWL03__BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Rifle_BWL03_BaseDamage.Ability_Rifle_BWL03_BaseDamage_C
/// Size: 0x0008 (0x000310 - 0x000318)
class AAbility_Rifle_BWL03_BaseDamage_C : public ASolarAbility
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0310   (0x0008)  
};

/// Class /Game/09_Weapons/Weapons/WL/Rifle_WL03/Set00/BluePrint/BP_WL03_RotationAnim.BP_WL03_RotationAnim_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UBP_WL03_RotationAnim_C : public UCameraShake
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Sniper_EPsm02_BaseDamage.Ability_Sniper_EPsm02_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_Sniper_EPsm02_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SMG_BaseDamage.Ability_SMG_BaseDamage_C
/// Size: 0x0008 (0x000310 - 0x000318)
class AAbility_SMG_BaseDamage_C : public ASolarAbility
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0310   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C
/// Size: 0x0029 (0x000268 - 0x000291)
class UHUD_Bullet_Simple_C : public UBP_HUD_BulletBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0268   (0x0008)  
	UWidgetAnimation*                                  Buttle_Light_Anim;                                          // 0x0270   (0x0008)  
	UGaugeImage_C*                                     AmmoGauge;                                                  // 0x0278   (0x0008)  
	UImage*                                            AmmoGauge_BG;                                               // 0x0280   (0x0008)  
	UHUD_Bullet_Simple_Light_C*                        HUD_Bullet_Simple_Light;                                    // 0x0288   (0x0008)  
	TEnumAsByte<E_UI_Bullet_Type>                      9_o_;                                                       // 0x0290   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.ReloadFinish
	void ReloadFinish(int32_t InReservedAmmo, int32_t InMaxAmmo);                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.SetBulletLightEffect
	void SetBulletLightEffect(float InProgress);                                                                             // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.GetBulletGaugeWidget
	void GetBulletGaugeWidget(UUserWidget*& OutBulletGaugeWidget);                                                           // [0x2649560] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnEntryReleased
	void BP_OnEntryReleased();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemExpansionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.BP_OnItemSelectionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.OnListItemObjectSet
	void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Bullet_Simple.HUD_Bullet_Simple_C.ExecuteUbergraph_HUD_Bullet_Simple
	void ExecuteUbergraph_HUD_Bullet_Simple(int32_t EntryPoint);                                                             // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Rifle_Psm04_BaseDamage.Effect_Rifle_Psm04_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Rifle_Psm04_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Rifle_Psm04_BaseDamage.Ability_Rifle_Psm04_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_Rifle_Psm04_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Rifle_B9A05_BaseDamage.Effect_Rifle_B9A05_BaseDamage_2_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Rifle_B9A05_BaseDamage_2_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Rifle_B9A05_BaseDamage.Ability_Rifle_B9A05_BaseDamage_2_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_Rifle_B9A05_BaseDamage_2_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Rifle_B9A03_BaseDamage.Effect_Rifle_B9A03_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Rifle_B9A03_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Rifle_B9A03_BaseDamage.Ability_Rifle_B9A03_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_Rifle_B9A03_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_En.Crosshair_Simple_En_C
/// Size: 0x0051 (0x000300 - 0x000351)
class UCrosshair_Simple_En_C : public UCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	UWidgetAnimation*                                  Simple_EN_Anim;                                             // 0x0308   (0x0008)  
	UImage*                                            ForbidImg;                                                  // 0x0310   (0x0008)  
	UHUD_Bullet_Simple_C*                              HUD_Bullet_Simple;                                          // 0x0318   (0x0008)  
	UHUD_Reload_C*                                     HUD_Reload;                                                 // 0x0320   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0328   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0330   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0338   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0340   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0348   (0x0008)  
	TEnumAsByte<E_UI_Bullet_Type>                      9_o_;                                                       // 0x0350   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_En.Crosshair_Simple_En_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_En.Crosshair_Simple_En_C.GetAmmoWidget
	UUserWidget* GetAmmoWidget();                                                                                            // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_En.Crosshair_Simple_En_C.Update
	void Update();                                                                                                           // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_En.Crosshair_Simple_En_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_En.Crosshair_Simple_En_C.ExecuteUbergraph_Crosshair_Simple_En
	void ExecuteUbergraph_Crosshair_Simple_En(int32_t EntryPoint);                                                           // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C
/// Size: 0x0041 (0x000300 - 0x000341)
class UCrosshair_Simple_Rifle_C : public UCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	UWidgetAnimation*                                  Rifle_Anim;                                                 // 0x0308   (0x0008)  
	UImage*                                            ForbidImg;                                                  // 0x0310   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0318   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0320   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0328   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0330   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0338   (0x0008)  
	TEnumAsByte<E_UI_Bullet_Type>                      9_o_;                                                       // 0x0340   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.GetAmmoWidget
	UUserWidget* GetAmmoWidget();                                                                                            // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.Update
	void Update();                                                                                                           // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle.Crosshair_Simple_Rifle_C.ExecuteUbergraph_Crosshair_Simple_Rifle
	void ExecuteUbergraph_Crosshair_Simple_Rifle(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Weapons/WL/Rifle_WL05/ModeMain/WAT_WL05.WAT_WL05_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UWAT_WL05_C : public USolarWeaponAT_FireBurst
{ 
public:
};

/// Class /Game/09_Weapons/Skill/GAS/EMP/BP_Weapon_EMP_Throw.BP_Weapon_EMP_Throw_C
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class ABP_Weapon_EMP_Throw_C : public ASolarSkill_EMP
{ 
public:
};

/// Class /Game/09_Weapons/Skill/Config/ExtraAmmo/BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C
/// Size: 0x0070 (0x0003B0 - 0x000420)
class ABP_Ability_UnlimitedAmmo_C : public AWeaponHitAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B0   (0x0008)  
	UParticleSystemComponent*                          FX_Buff_AbilityIncrease;                                    // 0x03B8   (0x0008)  
	UParticleSystemComponent*                          Fx_WeaponBuff;                                              // 0x03C0   (0x0008)  
	ASolarCharacter*                                   CacheCharacter;                                             // 0x03C8   (0x0008)  
	FName                                              CharacterEffectSocketName;                                  // 0x03D0   (0x0008)  
	UClass*                                            ScreenEffectClass;                                          // 0x03D8   (0x0008)  
	UUserWidget*                                       CacheScreenEffect;                                          // 0x03E0   (0x0008)  
	FString                                            SoundName1P;                                                // 0x03E8   (0x0010)  
	FString                                            SoundName3P;                                                // 0x03F8   (0x0010)  
	FString                                            SoundName3PEnemy;                                           // 0x0408   (0x0010)  
	ASolarWeapon*                                      CacheWeapon;                                                // 0x0418   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Skill/Config/ExtraAmmo/BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/Skill/Config/ExtraAmmo/BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveEndPlay
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/Skill/Config/ExtraAmmo/BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.EndWhenUnhold
	void EndWhenUnhold();                                                                                                    // [0x2649560] BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/Skill/Config/ExtraAmmo/BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ExecuteUbergraph_BP_Ability_UnlimitedAmmo
	void ExecuteUbergraph_BP_Ability_UnlimitedAmmo(int32_t EntryPoint);                                                      // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C
/// Size: 0x0054 (0x000260 - 0x0002B4)
class UHUD_Charged_Attack_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Bar_Yellow_Anim;                                            // 0x0268   (0x0008)  
	UWidgetAnimation*                                  Bar_Blue_Anim;                                              // 0x0270   (0x0008)  
	UImage*                                            Image;                                                      // 0x0278   (0x0008)  
	UImage*                                            Image;                                                      // 0x0280   (0x0008)  
	UImage*                                            Image;                                                      // 0x0288   (0x0008)  
	UImage*                                            Img_BG_Light;                                               // 0x0290   (0x0008)  
	UImage*                                            Img_Light;                                                  // 0x0298   (0x0008)  
	UImage*                                            Img_Light;                                                  // 0x02A0   (0x0008)  
	UProgressBar*                                      ProgressBar_Charge;                                         // 0x02A8   (0x0008)  
	int32_t                                            LastChargeMode;                                             // 0x02B0   (0x0004)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.SetPercent
	void SetPercent(float InPercent, int32_t InChargeMode, bool InbFirstEnter);                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnActiveCrosshair
	void OnActiveCrosshair(UUserWidget* InActiveCrosshair);                                                                  // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeOverloadState
	void OnChangeOverloadState(bool InbQuitState);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnChangeReloadState
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);                                                        // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnInsufficientAmmo
	void OnInsufficientAmmo();                                                                                               // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnReloadFinish
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateAmmo
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst);                       // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCoolDown
	void OnUpdateCoolDown(float InReloadProgress);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateOverload
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateReload
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo);                                    // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.OnUpdateCharge
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress);                                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Charged_Attack.HUD_Charged_Attack_C.ExecuteUbergraph_HUD_Charged_Attack
	void ExecuteUbergraph_HUD_Charged_Attack(int32_t EntryPoint);                                                            // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SG_EMphy04_BaseDamage.Effect_SG_EMphy04_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SG_EMphy04_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SG_EMphy04_BaseDamage.Ability_SG_EMphy04_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_SG_EMphy04_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Rifle_EMphy03_BaseDamage.Effect_Rifle_EMphy03_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Rifle_EMphy03_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Rifle_EMphy03_BaseDamage.Ability_Rifle_EMphy03_BaseDamage_C
/// Size: 0x0008 (0x000310 - 0x000318)
class AAbility_Rifle_EMphy03_BaseDamage_C : public ASolarAbility
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0310   (0x0008)  
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Rifle_BMphy01_BaseDamage.Effect_Rifle_BMphy01_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Rifle_BMphy01_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Rifle_BMphy01_BaseDamage.Ability_Rifle_BMphy01_BaseDamage_C
/// Size: 0x0008 (0x000310 - 0x000318)
class AAbility_Rifle_BMphy01_BaseDamage_C : public ASolarAbility
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0310   (0x0008)  
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Sniper_BaseDamage.Effect_Sniper_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Sniper_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Sniper_BaseDamage.Ability_Sniper_BaseDamage_C
/// Size: 0x0008 (0x000310 - 0x000318)
class AAbility_Sniper_BaseDamage_C : public ASolarAbility
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0310   (0x0008)  
};

/// Class /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/BluePrint/BP_9A01_CameraAnim.BP_9A01_CameraAnim_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UBP_9A01_CameraAnim_C : public UCameraShake
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_SMG_B9A04_BaseDamage.Effect_SMG_B9A04_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_SMG_B9A04_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_SMG_B9A04_BaseDamage.Ability_SMG_B9A04_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_SMG_B9A04_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Sniper_EMphy02_BaseDamage.Effect_Sniper_EMphy02_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Sniper_EMphy02_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Shotgun_En.Crosshair_Shotgun_En_C
/// Size: 0x0014 (0x000300 - 0x000314)
class UCrosshair_Shotgun_En_C : public UCrossHairWidget
{ 
public:
	UOverlay*                                          SpreadImg_left;                                             // 0x0300   (0x0008)  
	UOverlay*                                          SpreadImg_Right;                                            // 0x0308   (0x0008)  
	int32_t                                            pe;                                                         // 0x0310   (0x0004)  
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Sniper_EMphy02_BaseDamage.Ability_Sniper_EMphy02_BaseDamage_C
/// Size: 0x0008 (0x000310 - 0x000318)
class AAbility_Sniper_EMphy02_BaseDamage_C : public ASolarAbility
{ 
public:
	USceneComponent*                                   DefaultSceneRoot;                                           // 0x0310   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_GridBulletContainer.HUD_GridBulletContainer_C
/// Size: 0x0218 (0x000438 - 0x000650)
class UHUD_GridBulletContainer_C : public UGridBulletContainer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0438   (0x0008)  
	UImage*                                            bg_BulletEmpty;                                             // 0x0440   (0x0008)  
	UImage*                                            bg_BulletEmptyShine;                                        // 0x0448   (0x0008)  
	UImage*                                            bg_BulletGrid;                                              // 0x0450   (0x0008)  
	UImage*                                            Img_LightAll;                                               // 0x0458   (0x0008)  
	int32_t                                            CurrentBulletForDebug;                                      // 0x0460   (0x0004)  
	int32_t                                            MaxBulletForDebug;                                          // 0x0464   (0x0004)  
	FProgressBarStyle                                  NewVar;                                                     // 0x0468   (0x01D0)  
	bool                                               IsMaxAmmoChanged;                                           // 0x0638   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0639   (0x0007)  MISSED
	TArray<UWidget*>                                   DivisorWidgetArray;                                         // 0x0640   (0x0010)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_GridBulletContainer.HUD_GridBulletContainer_C.ReceiveUpdateMaxAmmoEvent
	void ReceiveUpdateMaxAmmoEvent(int32_t InMaxAmmo);                                                                       // [0x2649560] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_GridBulletContainer.HUD_GridBulletContainer_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_GridBulletContainer.HUD_GridBulletContainer_C.ExecuteUbergraph_HUD_GridBulletContainer
	void ExecuteUbergraph_HUD_GridBulletContainer(int32_t EntryPoint);                                                       // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Sniper_En.Crosshair_Simple_Sniper_En_C
/// Size: 0x003C (0x000300 - 0x00033C)
class UCrosshair_Simple_Sniper_En_C : public UCrossHairWidget
{ 
public:
	UWidgetAnimation*                                  Sniper_Anim;                                                // 0x0300   (0x0008)  
	UImage*                                            ForbidImg;                                                  // 0x0308   (0x0008)  
	UHUD_Charged_Attack_C*                             HUD_Charged_Attack;                                         // 0x0310   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0318   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0320   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0328   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0330   (0x0008)  
	int32_t                                            9_o_;                                                       // 0x0338   (0x0004)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Sniper_En.Crosshair_Simple_Sniper_En_C.GetChargeWidget
	UUserWidget* GetChargeWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C
/// Size: 0x0030 (0x000300 - 0x000330)
class UCrosshair_Simple_Sniper_C : public UCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	UWidgetAnimation*                                  Sniper_Anim;                                                // 0x0308   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0310   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0318   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0320   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0328   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.InitializeCrosshairSpread
	void InitializeCrosshairSpread(float Spread);                                                                            // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.SetCrosshairSprite
	void SetCrosshairSprite(UPaperSprite* InSprite);                                                                         // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.ExecuteUbergraph_Crosshair_Simple_Sniper
	void ExecuteUbergraph_Crosshair_Simple_Sniper(int32_t EntryPoint);                                                       // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C
/// Size: 0x0008 (0x000260 - 0x000268)
class UBP_HUD_ReloadBase_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.SetSpeedUpBuff
	void SetSpeedUpBuff(bool bHaveBuff);                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.StopReloadAnimation
	void StopReloadAnimation();                                                                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.GetReloadAnimation
	void GetReloadAnimation(UWidgetAnimation*& OutReloadAnimation);                                                          // [0x2649560] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.PlayReloadAnimation
	void PlayReloadAnimation();                                                                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnActiveCrosshair
	void OnActiveCrosshair(UUserWidget* InActiveCrosshair);                                                                  // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeOverloadState
	void OnChangeOverloadState(bool InbQuitState);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnInsufficientAmmo
	void OnInsufficientAmmo();                                                                                               // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnReloadFinish
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateAmmo
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst);                       // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCharge
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress);                                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateCoolDown
	void OnUpdateCoolDown(float InReloadProgress);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateOverload
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnUpdateReload
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo);                                    // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.OnChangeReloadState
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);                                                        // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/BP_HUD_ReloadBase.BP_HUD_ReloadBase_C.ExecuteUbergraph_BP_HUD_ReloadBase
	void ExecuteUbergraph_BP_HUD_ReloadBase(int32_t EntryPoint);                                                             // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy03/Set00/BluePrint/BP_Mphy03_RotationAnim.BP_Mphy03_RotationAnim_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UBP_Mphy03_RotationAnim_C : public UCameraShake
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C
/// Size: 0x0049 (0x000300 - 0x000349)
class UCrosshair_Simple_Rifle_En_C : public UCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	UWidgetAnimation*                                  Rifle_EN_Anim;                                              // 0x0308   (0x0008)  
	UImage*                                            ForbidImg;                                                  // 0x0310   (0x0008)  
	UHUD_Reload_C*                                     HUD_Reload;                                                 // 0x0318   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0320   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0328   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0330   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0338   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0340   (0x0008)  
	TEnumAsByte<E_UI_Bullet_Type>                      9_o_;                                                       // 0x0348   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.GetAmmoWidget
	UUserWidget* GetAmmoWidget();                                                                                            // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.Update
	void Update();                                                                                                           // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple_Rifle_En.Crosshair_Simple_Rifle_En_C.ExecuteUbergraph_Crosshair_Simple_Rifle_En
	void ExecuteUbergraph_Crosshair_Simple_Rifle_En(int32_t EntryPoint);                                                     // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple.Crosshair_Simple_C
/// Size: 0x0038 (0x000300 - 0x000338)
class UCrosshair_Simple_C : public UCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0300   (0x0008)  
	UWidgetAnimation*                                  Simple_Anim;                                                // 0x0308   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0310   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0318   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0320   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0328   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple.Crosshair_Simple_C.InitializeCrosshairSpread
	void InitializeCrosshairSpread(float Spread);                                                                            // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple.Crosshair_Simple_C.SetCrosshairSprite
	void SetCrosshairSprite(UPaperSprite* InSprite);                                                                         // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_Simple.Crosshair_Simple_C.ExecuteUbergraph_Crosshair_Simple
	void ExecuteUbergraph_Crosshair_Simple(int32_t EntryPoint);                                                              // [0x2649560] Final                
};

/// Class /Game/09_Weapons/FeedbackWidget/Kill_Anim.Kill_Anim_C
/// Size: 0x0018 (0x000260 - 0x000278)
class UKill_Anim_C : public UUserWidget
{ 
public:
	UWidgetAnimation*                                  KnockDown_Anim;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Kill_Anim;                                                  // 0x0268   (0x0008)  
	UCanvasPanel*                                      Panel_Kill;                                                 // 0x0270   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Hit_Player.HUD_Hit_Player_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UHUD_Hit_Player_C : public USolarUserWidget
{ 
public:
	UWidgetAnimation*                                  Anim_Hit_Player;                                            // 0x0348   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Hit_Car_Weakness.HUD_Hit_Car_Weakness_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UHUD_Hit_Car_Weakness_C : public USolarUserWidget
{ 
public:
	UWidgetAnimation*                                  Anim_Hit_Car_Weakness;                                      // 0x0348   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Hit_Car.HUD_Hit_Car_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UHUD_Hit_Car_C : public USolarUserWidget
{ 
public:
	UWidgetAnimation*                                  Anim_Hit_Car;                                               // 0x0348   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_HeadHit_Player.HUD_HeadHit_Player_C
/// Size: 0x0008 (0x000348 - 0x000350)
class UHUD_HeadHit_Player_C : public USolarUserWidget
{ 
public:
	UWidgetAnimation*                                  Anim_HeadHit_Player;                                        // 0x0348   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_AutoFire_Anim.Crosshair_AutoFire_Anim_C
/// Size: 0x0030 (0x000348 - 0x000378)
class UCrosshair_AutoFire_Anim_C : public USolarUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	UWidgetAnimation*                                  Anim_AutoFire;                                              // 0x0350   (0x0008)  
	UWidgetAnimation*                                  Anim_AutoFire;                                              // 0x0358   (0x0008)  
	UCanvasPanel*                                      CanvasPanel;                                                // 0x0360   (0x0008)  
	UImage*                                            Img_AutoFire;                                               // 0x0368   (0x0008)  
	UImage*                                            Img_coredot;                                                // 0x0370   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_AutoFire_Anim.Crosshair_AutoFire_Anim_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_AutoFire_Anim.Crosshair_AutoFire_Anim_C.ExecuteUbergraph_Crosshair_AutoFire_Anim
	void ExecuteUbergraph_Crosshair_AutoFire_Anim(int32_t EntryPoint);                                                       // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_VehicleWeapon_IronManLaser.Effect_VehicleWeapon_IronManLaser_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VehicleWeapon_IronManLaser_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Reload.HUD_Reload_C
/// Size: 0x0031 (0x000268 - 0x000299)
class UHUD_Reload_C : public UBP_HUD_ReloadBase_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0268   (0x0008)  
	UWidgetAnimation*                                  Anim_Reload_Buff;                                           // 0x0270   (0x0008)  
	UWidgetAnimation*                                  Anim_Reload;                                                // 0x0278   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x0280   (0x0008)  
	UImage*                                            Img_Reload;                                                 // 0x0288   (0x0008)  
	USolarTextBlock*                                   Txt_QuickReload;                                            // 0x0290   (0x0008)  
	TEnumAsByte<E_PassiveBuff>                         Passive;                                                    // 0x0298   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Reload.HUD_Reload_C.SetSpeedUpBuff
	void SetSpeedUpBuff(bool bHaveBuff);                                                                                     // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Reload.HUD_Reload_C.SetPassive
	void SetPassive(TEnumAsByte<E_PassiveBuff> Passive);                                                                     // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Reload.HUD_Reload_C.GetReloadAnimation
	void GetReloadAnimation(UWidgetAnimation*& OutReloadAnimation);                                                          // [0x2649560] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Reload.HUD_Reload_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_Reload.HUD_Reload_C.ExecuteUbergraph_HUD_Reload
	void ExecuteUbergraph_HUD_Reload(int32_t EntryPoint);                                                                    // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C
/// Size: 0x00D5 (0x000260 - 0x000335)
class UHUD_Overload_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	UWidgetAnimation*                                  Overheat_Anim;                                              // 0x0268   (0x0008)  
	UImage*                                            Img_Disable;                                                // 0x0270   (0x0008)  
	UImage*                                            Img_Disable;                                                // 0x0278   (0x0008)  
	UImage*                                            img_overload;                                               // 0x0280   (0x0008)  
	UImage*                                            img_overload_bg;                                            // 0x0288   (0x0008)  
	UImage*                                            img_overload_Glow;                                          // 0x0290   (0x0008)  
	UCanvasPanel*                                      OverloadWarning;                                            // 0x0298   (0x0008)  
	FVector2D                                          OverloadImgMaxSize;                                         // 0x02A0   (0x0008)  
	float                                              AnimImgRatio;                                               // 0x02A8   (0x0004)  
	float                                              OverloadProgress;                                           // 0x02AC   (0x0004)  
	UUserWidget*                                       ParentWidget;                                               // 0x02B0   (0x0008)  
	UCurveLinearColor*                                 ColorCurve;                                                 // 0x02B8   (0x0008)  
	FVector2D                                          ShadowSize;                                                 // 0x02C0   (0x0008)  
	float                                              ImgMaxParmValue;                                            // 0x02C8   (0x0004)  
	float                                              ImgParmOffset;                                              // 0x02CC   (0x0004)  
	FLinearColor                                       NewVar;                                                     // 0x02D0   (0x0010)  
	TMap<UClass*, FVector2D>                           CrosshairScaleMapping;                                      // 0x02E0   (0x0050)  
	float                                              NewVar;                                                     // 0x0330   (0x0004)  
	bool                                               AlwaysShowOverload;                                         // 0x0334   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.PlayOverloadAnima
	void PlayOverloadAnima(bool InOverload);                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.SetCoolDownProgress
	void SetCoolDownProgress();                                                                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.SetOverLoadImageSize
	void SetOverLoadImageSize(float InProgress);                                                                             // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnChangeReloadState
	void OnChangeReloadState(bool InbQuitState, bool bReloadSpeedup);                                                        // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnInsufficientAmmo
	void OnInsufficientAmmo();                                                                                               // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnReloadFinish
	void OnReloadFinish(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress); // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnUpdateAmmo
	void OnUpdateAmmo(int32_t InReservedAmmo, int32_t InMaxAmmo, float InAmmoProgress, bool InbFirst);                       // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnUpdateCharge
	void OnUpdateCharge(bool InbCharging, int32_t InChargeMode, float InChargeProgress);                                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnUpdateCoolDown
	void OnUpdateCoolDown(float InReloadProgress);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnUpdateReload
	void OnUpdateReload(float InReloadProgress, int32_t InReloadAmmo, int32_t InMaxAmmo);                                    // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.PreConstruct
	void PreConstruct(bool IsDesignTime);                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnUpdateOverload
	void OnUpdateOverload(float InOverloadProgress, float InOverloadWarningRate, bool InbOverloadState);                     // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnChangeOverloadState
	void OnChangeOverloadState(bool InbQuitState);                                                                           // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.OnActiveCrosshair
	void OnActiveCrosshair(UUserWidget* InActiveCrosshair);                                                                  // [0x2649560] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_OverLoad.HUD_Overload_C.ExecuteUbergraph_HUD_Overload
	void ExecuteUbergraph_HUD_Overload(int32_t EntryPoint);                                                                  // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_MachineGun.Crosshair_CarWeapon_MachineGun_C
/// Size: 0x0048 (0x000488 - 0x0004D0)
class UCrosshair_CarWeapon_MachineGun_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x0488   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x0490   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x0498   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04A0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04A8   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x04B0   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x04B8   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x04C0   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x04C8   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_MachineGun.Crosshair_CarWeapon_MachineGun_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_MachineGun.Crosshair_CarWeapon_MachineGun_C.GetOverloadWidget
	UUserWidget* GetOverloadWidget();                                                                                        // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_MachineGun.Crosshair_CarWeapon_MachineGun_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Rocket.Crosshair_CarWeapon_Rocket_C
/// Size: 0x0048 (0x000488 - 0x0004D0)
class UCrosshair_CarWeapon_Rocket_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x0488   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x0490   (0x0008)  
	UImage*                                            ForbidImg;                                                  // 0x0498   (0x0008)  
	UHUD_Overload_C*                                   HUD_Overload;                                               // 0x04A0   (0x0008)  
	UHUD_Reload_C*                                     HUD_Reload;                                                 // 0x04A8   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04B0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04B8   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04C0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04C8   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Rocket.Crosshair_CarWeapon_Rocket_C.GetOverloadWidget
	UUserWidget* GetOverloadWidget();                                                                                        // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Rocket.Crosshair_CarWeapon_Rocket_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C
/// Size: 0x0061 (0x000488 - 0x0004E9)
class UCrosshair_CarWeapon_Flame_New_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Overheat_Anim_Quit;                                         // 0x0490   (0x0008)  
	UWidgetAnimation*                                  Overheat_Anim_Enter;                                        // 0x0498   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04A0   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04A8   (0x0008)  
	UImage*                                            img_normal;                                                 // 0x04B0   (0x0008)  
	UImage*                                            img_overload;                                               // 0x04B8   (0x0008)  
	UImage*                                            Img_Overload_vx;                                            // 0x04C0   (0x0008)  
	UCanvasPanel*                                      panel_overload;                                             // 0x04C8   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04D0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04D8   (0x0008)  
	UWidgetSwitcher*                                   wgs_status;                                                 // 0x04E0   (0x0008)  
	bool                                               IsOverloading;                                              // 0x04E8   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadChanged
	void OnOverloadChanged(bool InOverload);                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnOverloadStateChanged
	void OnOverloadStateChanged(bool bEnter);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnAnimationFinished
	void OnAnimationFinished(UWidgetAnimation* Animation);                                                                   // [0x2649560] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.OnCrosshairInNormalState
	void OnCrosshairInNormalState();                                                                                         // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Flame_New.Crosshair_CarWeapon_Flame_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Flame_New
	void ExecuteUbergraph_Crosshair_CarWeapon_Flame_New(int32_t EntryPoint);                                                 // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C
/// Size: 0x00A0 (0x000488 - 0x000528)
class UCrosshair_CarWeapon_Trans_Flame_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_ResetOverheat;                                         // 0x0490   (0x0008)  
	UWidgetAnimation*                                  Anim_Overheat;                                              // 0x0498   (0x0008)  
	UWidgetAnimation*                                  Anim_transform;                                             // 0x04A0   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04A8   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04B0   (0x0008)  
	UImage*                                            img_flame;                                                  // 0x04B8   (0x0008)  
	UImage*                                            img_lb;                                                     // 0x04C0   (0x0008)  
	UImage*                                            img_lt;                                                     // 0x04C8   (0x0008)  
	UImage*                                            img_overload;                                               // 0x04D0   (0x0008)  
	UImage*                                            Img_Overload_vx;                                            // 0x04D8   (0x0008)  
	UImage*                                            img_rb;                                                     // 0x04E0   (0x0008)  
	UImage*                                            img_rt;                                                     // 0x04E8   (0x0008)  
	UCanvasPanel*                                      panel_trans;                                                // 0x04F0   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04F8   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0500   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0508   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0510   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0518   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0520   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnTransformerWeaponChanged
	void OnTransformerWeaponChanged(ETransformerType InType);                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnOverloadStateChanged
	void OnOverloadStateChanged(bool bEnter);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.OnCrosshairInNormalState
	void OnCrosshairInNormalState();                                                                                         // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_Flame.Crosshair_CarWeapon_Trans_Flame_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame
	void ExecuteUbergraph_Crosshair_CarWeapon_Trans_Flame(int32_t EntryPoint);                                               // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C
/// Size: 0x00A0 (0x000488 - 0x000528)
class UCrosshair_CarWeapon_Trans_MachineGun_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_transform;                                             // 0x0490   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x0498   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04A0   (0x0008)  
	UImage*                                            downarrow;                                                  // 0x04A8   (0x0008)  
	UImage*                                            img_flame;                                                  // 0x04B0   (0x0008)  
	UImage*                                            img_lb;                                                     // 0x04B8   (0x0008)  
	UImage*                                            img_lt;                                                     // 0x04C0   (0x0008)  
	UImage*                                            img_rb;                                                     // 0x04C8   (0x0008)  
	UImage*                                            img_rt;                                                     // 0x04D0   (0x0008)  
	UImage*                                            leftarrow;                                                  // 0x04D8   (0x0008)  
	UCanvasPanel*                                      panel_trans;                                                // 0x04E0   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04E8   (0x0008)  
	UImage*                                            rightarrow;                                                 // 0x04F0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04F8   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0500   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0508   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0510   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0518   (0x0008)  
	UImage*                                            uparrow;                                                    // 0x0520   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.OnTransformerWeaponChanged
	void OnTransformerWeaponChanged(ETransformerType InType);                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Trans_MachineGun.Crosshair_CarWeapon_Trans_MachineGun_C.ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun
	void ExecuteUbergraph_Crosshair_CarWeapon_Trans_MachineGun(int32_t EntryPoint);                                          // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C
/// Size: 0x008C (0x000488 - 0x000514)
class UCrosshair_CarWeapon_Shotgun_New_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_Reload;                                                // 0x0490   (0x0008)  
	UImage*                                            bullet_l;                                                   // 0x0498   (0x0008)  
	UImage*                                            bullet_r;                                                   // 0x04A0   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04A8   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04B0   (0x0008)  
	UCanvasPanel*                                      panel_bottom;                                               // 0x04B8   (0x0008)  
	UCanvasPanel*                                      Panel_Left;                                                 // 0x04C0   (0x0008)  
	UCanvasPanel*                                      Panel_Reload;                                               // 0x04C8   (0x0008)  
	UCanvasPanel*                                      Panel_Right;                                                // 0x04D0   (0x0008)  
	UCanvasPanel*                                      panel_top;                                                  // 0x04D8   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04E0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04E8   (0x0008)  
	UImage*                                            SpreadImg_coredot_l;                                        // 0x04F0   (0x0008)  
	UImage*                                            SpreadImg_coredot_l;                                        // 0x04F8   (0x0008)  
	UImage*                                            SpreadImg_coredot_r;                                        // 0x0500   (0x0008)  
	UImage*                                            SpreadImg_coredot_r;                                        // 0x0508   (0x0008)  
	int32_t                                            LastAmmoCount;                                              // 0x0510   (0x0004)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ChangeAmmoCount
	void ChangeAmmoCount(int32_t ReloadCount, int32_t AmmoCount);                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnAmmoChanged
	void OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst);                                            // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadStarted
	void OnReloadStarted(float InReloadTime, int32_t InReservedAmmo);                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.OnReloadFinished
	void OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo);           // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Shotgun_New.Crosshair_CarWeapon_Shotgun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New
	void ExecuteUbergraph_Crosshair_CarWeapon_Shotgun_New(int32_t EntryPoint);                                               // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C
/// Size: 0x00C0 (0x000488 - 0x000548)
class UCrosshair_Carweapon_WL09Rocket_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x0490   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x0498   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04A0   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04A8   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04B0   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04B8   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04C0   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04C8   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04D0   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04D8   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04E0   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04E8   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04F0   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x04F8   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x0500   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x0508   (0x0008)  
	UImage*                                            img_Bullet;                                                 // 0x0510   (0x0008)  
	UCanvasPanel*                                      Panel_Reload;                                               // 0x0518   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0520   (0x0008)  
	USolarTextBlock*                                   Txt_Distance;                                               // 0x0528   (0x0008)  
	int32_t                                            LastRservedAmmo;                                            // 0x0530   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0534   (0x0004)  MISSED
	TArray<UImage*>                                    BulletImage;                                                // 0x0538   (0x0010)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoCounterChanged
	void OnAmmoCounterChanged(int32_t Counter);                                                                              // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoChanged
	void OnAmmoChanged(int32_t InReservedAmmo, int32_t InMaxAmmo, bool InbFirst);                                            // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateReloadProgress
	void OnUpdateReloadProgress(float InReloadProgress, int32_t InReservedAmmo, int32_t InMaxAmmo);                          // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnInitialized
	void OnInitialized();                                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnReloadFinished
	void OnReloadFinished(bool InbReloadSuccess, int32_t InReloadAmmo, int32_t InReservedAmmo, int32_t InMaxAmmo);           // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateAimTargetDistance
	void OnUpdateAimTargetDistance(float InDistance);                                                                        // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket
	void ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket(int32_t EntryPoint);                                                // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C
/// Size: 0x0044 (0x000488 - 0x0004CC)
class UCrosshair_CarWeapon_HoverTriangle_New_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_Overheat;                                              // 0x0490   (0x0008)  
	UWidgetAnimation*                                  Anim_Shoot;                                                 // 0x0498   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04A0   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04A8   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04B0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04B8   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04C0   (0x0008)  
	int32_t                                            FireCounter;                                                // 0x04C8   (0x0004)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.GetOverloadWidget
	UUserWidget* GetOverloadWidget();                                                                                        // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.GetAmmoWidget
	UUserWidget* GetAmmoWidget();                                                                                            // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.OnWeaponFired
	void OnWeaponFired();                                                                                                    // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.OnOverloadStateChanged
	void OnOverloadStateChanged(bool bEnter);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_HoverTriangle_New.Crosshair_CarWeapon_HoverTriangle_New_C.ExecuteUbergraph_Crosshair_CarWeapon_HoverTriangle_New
	void ExecuteUbergraph_Crosshair_CarWeapon_HoverTriangle_New(int32_t EntryPoint);                                         // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Cannon.Crosshair_CarWeapon_Cannon_2_C
/// Size: 0x0028 (0x000488 - 0x0004B0)
class UCrosshair_CarWeapon_Cannon_2_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	UWidgetAnimation*                                  Anim_CD_Out;                                                // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_CD_Enter;                                              // 0x0490   (0x0008)  
	UCanvasPanel*                                      Canvas_Dynamic;                                             // 0x0498   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04A0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04A8   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Cannon.Crosshair_CarWeapon_Cannon_2_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C
/// Size: 0x0031 (0x000488 - 0x0004B9)
class UCrosshair_CarWeapon_Gatling_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x0490   (0x0008)  
	UCanvasPanel*                                      SpreadCanvasPanel;                                          // 0x0498   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04A0   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x04A8   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x04B0   (0x0008)  
	bool                                               NewlyControlled;                                            // 0x04B8   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnCrosshairInNormalState
	void OnCrosshairInNormalState();                                                                                         // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnUpdateGatlingRoll
	void OnUpdateGatlingRoll(float DeltaTmie, float InRollSpeedInterp, bool bWantFire);                                      // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.Tick
	void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.ExecuteUbergraph_Crosshair_CarWeapon_Gatling
	void ExecuteUbergraph_Crosshair_CarWeapon_Gatling(int32_t EntryPoint);                                                   // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_VehicleWeapon_IronManLaser.Ability_VehicleWeapon_IronManLaser_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VehicleWeapon_IronManLaser_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C
/// Size: 0x0098 (0x000488 - 0x000520)
class UCrosshair_CarWeapon_Boat_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_Charging;                                              // 0x0490   (0x0008)  
	UWidgetAnimation*                                  Anim_Cooldown;                                              // 0x0498   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04A0   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04A8   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04B0   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04B8   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04C0   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04C8   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04D0   (0x0008)  
	UImage*                                            Bullet;                                                     // 0x04D8   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04E0   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04E8   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04F0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04F8   (0x0008)  
	int32_t                                            PreBurstCount;                                              // 0x0500   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0504   (0x0004)  MISSED
	TArray<UImage*>                                    BulletImages;                                               // 0x0508   (0x0010)  
	bool                                               IsCoolDown;                                                 // 0x0518   (0x0001)  
	bool                                               IsPreCharging;                                              // 0x0519   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x051A   (0x0002)  MISSED
	float                                              AnimationReversTime;                                        // 0x051C   (0x0004)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.OnUpdateChargeProgress
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.OnInitialized
	void OnInitialized();                                                                                                    // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.OnUpdateCoolDownProgress
	void OnUpdateCoolDownProgress(float InCoolDownProgress);                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Boat.Crosshair_CarWeapon_Boat_C.ExecuteUbergraph_Crosshair_CarWeapon_Boat
	void ExecuteUbergraph_Crosshair_CarWeapon_Boat(int32_t EntryPoint);                                                      // [0x2649560] Final                
};

/// Class /Game/09_Weapons/Ammo/DefaultProjBullet.DefaultProjBullet_C
/// Size: 0x0000 (0x000508 - 0x000508)
class ADefaultProjBullet_C : public ASolarProjBullet
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/WL/SMG_WL04/Modemain/Projectile_BWL04_Primary.Projectile_BWL04_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_BWL04_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/WL/Shotgun_WL02/ModeMain/Projectile_EWL02_Primary.Projectile_EWL02_Primary_C
/// Size: 0x0010 (0x000508 - 0x000518)
class AProjectile_EWL02_Primary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0510   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/ModeMain/Projectile_EWL02_Primary.Projectile_EWL02_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/ModeMain/Projectile_EWL02_Primary.Projectile_EWL02_Primary_C.ExecuteUbergraph_Projectile_EWL02_Primary
	void ExecuteUbergraph_Projectile_EWL02_Primary(int32_t EntryPoint);                                                      // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Projectile_Anti-vehicle_Weapon01.Projectile_Anti-vehicle_Weapon01_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_Anti-vehicle_Weapon01_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Projectile_Anti-vehicle_Weapon01.Projectile_Anti-vehicle_Weapon01_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Extra/Anti-vehicleWeapon/Projectile_Anti-vehicle_Weapon01.Projectile_Anti-vehicle_Weapon01_C.ExecuteUbergraph_Projectile_Anti-vehicle_Weapon01
	void ExecuteUbergraph_Projectile_Anti-vehicle_Weapon01(int32_t EntryPoint);                                              // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/9A/Sniper_9A06/Modemain/Projectile_B9A06_Primary.Projectile_B9A06_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_B9A06_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/SMG_9A08/Modemain/Projectile_B9A08_Primary.Projectile_B9A08_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_B9A08_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/SMG_9A02/ModeMain/Projectile_B9A02_Primary.Projectile_B9A02_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_B9A02_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/WL/RPG_WL08/Modemain/Projectile_WL08_Turret_Rocket.Projectile_WL08_Turret_Rocket_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_WL08_Turret_Rocket_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/WL/RPG_WL08/Modemain/Projectile_WL08_Turret_Rocket.Projectile_WL08_Turret_Rocket_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/WL/RPG_WL08/Modemain/Projectile_WL08_Turret_Rocket.Projectile_WL08_Turret_Rocket_C.ExecuteUbergraph_Projectile_WL08_Turret_Rocket
	void ExecuteUbergraph_Projectile_WL08_Turret_Rocket(int32_t EntryPoint);                                                 // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/WL/Rifle_WL05/ModeMain/Projectile_BWL05_Primary.Projectile_BWL05_Primary_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_BWL05_Primary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/WL/Rifle_WL05/ModeMain/Projectile_BWL05_Primary.Projectile_BWL05_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/WL/Rifle_WL05/ModeMain/Projectile_BWL05_Primary.Projectile_BWL05_Primary_C.ExecuteUbergraph_Projectile_BWL05_Primary
	void ExecuteUbergraph_Projectile_BWL05_Primary(int32_t EntryPoint);                                                      // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/WL/Rifle_WL03/ModeMain/Projectile_BWL03_Primary.Projectile_BWL03_Primary_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_BWL03_Primary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/WL/Rifle_WL03/ModeMain/Projectile_BWL03_Primary.Projectile_BWL03_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/WL/Rifle_WL03/ModeMain/Projectile_BWL03_Primary.Projectile_BWL03_Primary_C.ExecuteUbergraph_Projectile_BWL03_Primary
	void ExecuteUbergraph_Projectile_BWL03_Primary(int32_t EntryPoint);                                                      // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/Psm/Sniper_Psm02/ModeMain/Projectile_SniperEPsm02_Primary.Projectile_SniperEPsm02_Primary_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_SniperEPsm02_Primary_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/09_Weapons/Weapons/Psm/SMG_Psm03/ModeMain/Projectile_EPsm03_Primary.Projectile_EPsm03_Primary_C
/// Size: 0x0018 (0x000508 - 0x000520)
class AProjectile_EPsm03_Primary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  
	UParticleSystemComponent*                          FX_T_Smg_Bullet01;                                          // 0x0510   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0518   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/Psm/SMG_Psm03/ModeMain/Projectile_EPsm03_Primary.Projectile_EPsm03_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Psm/SMG_Psm03/ModeMain/Projectile_EPsm03_Primary.Projectile_EPsm03_Primary_C.ExecuteUbergraph_Projectile_EPsm03_Primary
	void ExecuteUbergraph_Projectile_EPsm03_Primary(int32_t EntryPoint);                                                     // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/Psm/Rifle_Psm04/MainMode/Projectile_Psm04_Primary.Projectile_Psm04_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_Psm04_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/Rifle_B9A03/ModeMain/Projectile_B9A03_Primary.Projectile_B9A03_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_B9A03_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Mphy/Shotgun_Mphy04/ModeMain/Projectile_Shotgun_Emphy04_Primary.Projectile_Shotgun_Emphy04_Primary_C
/// Size: 0x0010 (0x000508 - 0x000518)
class AProjectile_Shotgun_Emphy04_Primary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  
	UArrowComponent*                                   Arrow;                                                      // 0x0510   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/Mphy/Shotgun_Mphy04/ModeMain/Projectile_Shotgun_Emphy04_Primary.Projectile_Shotgun_Emphy04_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Mphy/Shotgun_Mphy04/ModeMain/Projectile_Shotgun_Emphy04_Primary.Projectile_Shotgun_Emphy04_Primary_C.ExecuteUbergraph_Projectile_Shotgun_Emphy04_Primary
	void ExecuteUbergraph_Projectile_Shotgun_Emphy04_Primary(int32_t EntryPoint);                                            // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy03/ModeMain/Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_BMphy0_Primary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy03/ModeMain/Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy03/ModeMain/Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C.ExecuteUbergraph_Projectile_BMphy0_Primary
	void ExecuteUbergraph_Projectile_BMphy0_Primary(int32_t EntryPoint);                                                     // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/ModeMain/Projectile_BMphy0_Primary.Projectile_BMphy0_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_BMphy0_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/Sniper_9A01/ModeMain/Projectile_SniperPrimary.Projectile_SniperPrimary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_SniperPrimary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/SMG_9A04/ModeMain/Projectile_B9A04_Primary.Projectile_B9A04_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_B9A04_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Mphy/Sniper_MPhy02/ModeMain/Projectile_Sniper_Mphy02SniperPrimary.Projectile_Sniper_Mphy02SniperPrimary_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_Sniper_Mphy02SniperPrimary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/Mphy/Sniper_MPhy02/ModeMain/Projectile_Sniper_Mphy02SniperPrimary.Projectile_Sniper_Mphy02SniperPrimary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Mphy/Sniper_MPhy02/ModeMain/Projectile_Sniper_Mphy02SniperPrimary.Projectile_Sniper_Mphy02SniperPrimary_C.ExecuteUbergraph_Projectile_Sniper_Mphy02SniperPrimary
	void ExecuteUbergraph_Projectile_Sniper_Mphy02SniperPrimary(int32_t EntryPoint);                                         // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Weapons/9A/Rifle_9A05/ModeMain/Projectile_B9A05_Primary.Projectile_B9A05_Primary_C
/// Size: 0x0000 (0x000508 - 0x000508)
class AProjectile_B9A05_Primary_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/HUD_StripBulletContainer.HUD_StripBulletContainer_C
/// Size: 0x0000 (0x000400 - 0x000400)
class UHUD_StripBulletContainer_C : public UStripBulletContainer
{ 
public:
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C
/// Size: 0x0048 (0x000488 - 0x0004D0)
class UCrosshair_CarWeapon_AssaultRifle_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x0488   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x0490   (0x0008)  
	UHUD_Overload_C*                                   HUD_Overload;                                               // 0x0498   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04A0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04A8   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04B0   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x04B8   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x04C0   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x04C8   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C.GetAmmoWidget
	UUserWidget* GetAmmoWidget();                                                                                            // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_AssaultRifle.Crosshair_CarWeapon_AssaultRifle_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C
/// Size: 0x00BD (0x000488 - 0x000545)
class UCrosshair_CarWeapon_IronGun_New_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim;                                                       // 0x0490   (0x0008)  
	UWidgetAnimation*                                  Anim;                                                       // 0x0498   (0x0008)  
	UWidgetAnimation*                                  Anim;                                                       // 0x04A0   (0x0008)  
	UWidgetAnimation*                                  Anim;                                                       // 0x04A8   (0x0008)  
	UWidgetAnimation*                                  Anim;                                                       // 0x04B0   (0x0008)  
	UWidgetAnimation*                                  Anim_Fullcharge;                                            // 0x04B8   (0x0008)  
	UProgressBar*                                      bar_crosshair;                                              // 0x04C0   (0x0008)  
	UProgressBar*                                      bar_crosshair;                                              // 0x04C8   (0x0008)  
	UProgressBar*                                      bar_crosshair;                                              // 0x04D0   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04D8   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04E0   (0x0008)  
	UImage*                                            Img_Glow;                                                   // 0x04E8   (0x0008)  
	USolarImage*                                       img_round_l;                                                // 0x04F0   (0x0008)  
	USolarImage*                                       img_round_r;                                                // 0x04F8   (0x0008)  
	USolarImage*                                       img_round_t;                                                // 0x0500   (0x0008)  
	UImageTween_C*                                     ReloadImg_Tween;                                            // 0x0508   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x0510   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0518   (0x0008)  
	UCanvasPanel*                                      SpreadImg_coredot;                                          // 0x0520   (0x0008)  
	UCanvasPanel*                                      SpreadImg_coredot;                                          // 0x0528   (0x0008)  
	UCanvasPanel*                                      SpreadImg_coredot;                                          // 0x0530   (0x0008)  
	int32_t                                            LastChargeMode;                                             // 0x0538   (0x0004)  
	bool                                               bChargeFull;                                                // 0x053C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x053D   (0x0003)  MISSED
	float                                              MinlPercent;                                                // 0x0540   (0x0004)  
	bool                                               bLockedEnemy;                                               // 0x0544   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ChangeProgressBarColor
	void ChangeProgressBarColor(UProgressBar* InProgressBar, FLinearColor InBackgroundColor, FLinearColor InFillImageColor); // [0x2649560] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetPrograssPrecent
	void SetPrograssPrecent(float Percent, int32_t Index, UProgressBar* InProgressBar);                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.GetChargeWidget
	UUserWidget* GetChargeWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateChargeProgress
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnUpdateAimState
	void OnUpdateAimState(bool InbLockEnemy);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnPlayWeaponSpecialFire
	void OnPlayWeaponSpecialFire(ECrossHairSpecialFireState InState, float PlayRate);                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.OnCrosshairInNormalState
	void OnCrosshairInNormalState();                                                                                         // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_IronGun_New.Crosshair_CarWeapon_IronGun_New_C.ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New
	void ExecuteUbergraph_Crosshair_CarWeapon_IronGun_New(int32_t EntryPoint);                                               // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C
/// Size: 0x00C6 (0x000488 - 0x00054E)
class UCrosshair_CarWeapon_Float_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Normal_Anim;                                                // 0x0490   (0x0008)  
	UWidgetAnimation*                                  Aim_Anim;                                                   // 0x0498   (0x0008)  
	UWidgetAnimation*                                  Overheat_Anim_Quit;                                         // 0x04A0   (0x0008)  
	UWidgetAnimation*                                  Fullcharge_Anim;                                            // 0x04A8   (0x0008)  
	UWidgetAnimation*                                  Overheat_Anim_Enter;                                        // 0x04B0   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04B8   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04C0   (0x0008)  
	UImage*                                            img_charge;                                                 // 0x04C8   (0x0008)  
	UImage*                                            Img_Circle;                                                 // 0x04D0   (0x0008)  
	UImage*                                            Img_Circle;                                                 // 0x04D8   (0x0008)  
	UImage*                                            Img_Glow;                                                   // 0x04E0   (0x0008)  
	UImage*                                            img_overload_cordot;                                        // 0x04E8   (0x0008)  
	UCanvasPanel*                                      Panel_Aim;                                                  // 0x04F0   (0x0008)  
	UCanvasPanel*                                      panel_enlarge;                                              // 0x04F8   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x0500   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0508   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0510   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0518   (0x0008)  
	UWidgetSwitcher*                                   wgs_enlarge;                                                // 0x0520   (0x0008)  
	UWidgetSwitcher*                                   wgs_overload;                                               // 0x0528   (0x0008)  
	float                                              ChargeProgress;                                             // 0x0530   (0x0004)  
	bool                                               IsChargingLast;                                             // 0x0534   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0535   (0x0003)  MISSED
	FVector2D                                          OriChargeSize;                                              // 0x0538   (0x0008)  
	bool                                               IsCharging;                                                 // 0x0540   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0541   (0x0003)  MISSED
	FVector2D                                          TempSize;                                                   // 0x0544   (0x0008)  
	bool                                               IsOverloading;                                              // 0x054C   (0x0001)  
	bool                                               bLockedEnemy;                                               // 0x054D   (0x0001)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadChanged
	void OnOverloadChanged(bool InOverload);                                                                                 // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Set Charge Panel Size
	void Set Charge Panel Size();                                                                                            // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetChargeProgress
	void SetChargeProgress();                                                                                                // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.Construct
	void Construct();                                                                                                        // [0x2649560] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateChargeProgress
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnOverloadStateChanged
	void OnOverloadStateChanged(bool bEnter);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnCrosshairInNormalState
	void OnCrosshairInNormalState();                                                                                         // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnAnimationFinished
	void OnAnimationFinished(UWidgetAnimation* Animation);                                                                   // [0x2649560] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.OnUpdateAimState
	void OnUpdateAimState(bool InbLockEnemy);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Float.Crosshair_CarWeapon_Float_C.ExecuteUbergraph_Crosshair_CarWeapon_Float
	void ExecuteUbergraph_Crosshair_CarWeapon_Float(int32_t EntryPoint);                                                     // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C
/// Size: 0x00A8 (0x000488 - 0x000530)
class UCrosshair_CarWeapon_ShapedGun_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_Charging;                                              // 0x0490   (0x0008)  
	UProgressBar*                                      ChargeBar_1;                                                // 0x0498   (0x0008)  
	UProgressBar*                                      ChargeBar_1;                                                // 0x04A0   (0x0008)  
	UProgressBar*                                      ChargeBar_1;                                                // 0x04A8   (0x0008)  
	UProgressBar*                                      ChargeBar_1;                                                // 0x04B0   (0x0008)  
	UProgressBar*                                      ChargeBar_2;                                                // 0x04B8   (0x0008)  
	UProgressBar*                                      ChargeBar_2;                                                // 0x04C0   (0x0008)  
	UProgressBar*                                      ChargeBar_2;                                                // 0x04C8   (0x0008)  
	UProgressBar*                                      ChargeBar_2;                                                // 0x04D0   (0x0008)  
	UCanvasPanel*                                      Charging;                                                   // 0x04D8   (0x0008)  
	UCanvasPanel*                                      Charging;                                                   // 0x04E0   (0x0008)  
	UCanvasPanel*                                      Container_SecondReticle;                                    // 0x04E8   (0x0008)  
	UCanvasPanel*                                      Coredot;                                                    // 0x04F0   (0x0008)  
	UImage*                                            ReloadImg;                                                  // 0x04F8   (0x0008)  
	UImageTween_C*                                     ReloadImg_Tween;                                            // 0x0500   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x0508   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0510   (0x0008)  
	UCanvasPanel*                                      SpreadImg_coredot;                                          // 0x0518   (0x0008)  
	UCanvasPanel*                                      SpreadImg_coredot;                                          // 0x0520   (0x0008)  
	int32_t                                            LastChargeMode;                                             // 0x0528   (0x0004)  
	float                                              AnimationReversTime;                                        // 0x052C   (0x0004)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetPrograssPrecent
	void SetPrograssPrecent(float Percent, int32_t Index, UProgressBar* InProgressBar);                                      // [0x2649560] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.GetChargeWidget
	UUserWidget* GetChargeWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.OnUpdateChargeProgress
	void OnUpdateChargeProgress(bool InbCharging, int32_t InChargeMode, float InChargeProgress, int32_t InChargeBurstCount); // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_ShapedGun.Crosshair_CarWeapon_ShapedGun_C.ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun
	void ExecuteUbergraph_Crosshair_CarWeapon_ShapedGun(int32_t EntryPoint);                                                 // [0x2649560] Final                
};

/// Class /Game/09_Weapons/CrossHairWidget/HUD_CarFireCD.HUD_CarFireCD_C
/// Size: 0x0000 (0x000360 - 0x000360)
class UHUD_CarFireCD_C : public USolarWeaponRechamberWidget
{ 
public:
};

/// Class /Game/09_Weapons/FeedbackWidget/Feedback.Feedback_C
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UFeedback_C : public UFeedbackWidget
{ 
public:
	UCrosshair_AutoFire_Anim_C*                        AutoFire;                                                   // 0x02A0   (0x0008)  
	UHUD_HeadHit_Player_C*                             HUD_HeadHit_Player;                                         // 0x02A8   (0x0008)  
	UHUD_Hit_Car_C*                                    HUD_Hit_Car;                                                // 0x02B0   (0x0008)  
	UHUD_Hit_Car_Weakness_C*                           HUD_Hit_Car_Weakness;                                       // 0x02B8   (0x0008)  
	UHUD_Hit_Player_C*                                 HUD_Hit_Player;                                             // 0x02C0   (0x0008)  
	UKill_Anim_C*                                      Kill_Anim;                                                  // 0x02C8   (0x0008)  
};

/// Class /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Cannon_New.Crosshair_CarWeapon_Cannon_New_C
/// Size: 0x0028 (0x000488 - 0x0004B0)
class UCrosshair_CarWeapon_Cannon_New_C : public UVehicleWeaponCrossHairWidget
{ 
public:
	UWidgetAnimation*                                  Anim_CD_Out;                                                // 0x0488   (0x0008)  
	UWidgetAnimation*                                  Anim_CD_Enter;                                              // 0x0490   (0x0008)  
	UCanvasPanel*                                      Canvas_Dynamic;                                             // 0x0498   (0x0008)  
	UImage*                                            ReticleDirection;                                           // 0x04A0   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x04A8   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/Crosshair_CarWeapon_Cannon_New.Crosshair_CarWeapon_Cannon_New_C.SetWidgetResources
	void SetWidgetResources(UCanvasPanel*& InSecondReticlePanel, UImage*& InReticleDirectionImage, UImage*& InRangedImage, USizeBox*& InAssistLockSizeBox, UCanvasPanel*& InChangeNewAssistLockPawnPanel, UCanvasPanel*& InEnterLockPawnPanel, UCanvasPanel*& InCanvas_Dynamic); // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/9A02Summon/BP_9A02_QuickSummon_Forward.BP_9A02_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_9A02_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/9A03Summon/BP_9A03_QuickSummon_Forward.BP_9A03_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_9A03_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/Mphy01Summon/BP_Mphy01_QuickSummon_Forward.BP_Mphy01_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_Mphy01_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/Soroll01Summon/BP_Soroll01_QuickSummon_Forward.BP_Soroll01_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_Soroll01_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/Soroll02Summon/BP_Soroll02_QuickSummon_Forward.BP_Soroll02_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_Soroll02_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/Soroll03Summon/BP_Soroll03_QuickSummon_Forward.BP_Soroll03_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_Soroll03_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/Soroll04Summon/BP_Soroll04_QuickSummon_Forward.BP_Soroll04_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_Soroll04_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/WL01Summon/BP_WL01_QuickSummon_Forward.BP_WL01_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_WL01_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/WL03Summon/BP_WL03_QuickSummon_Forward.BP_WL03_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_WL03_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/WL04Summon/BP_WL04_QuickSummon_Forward.BP_WL04_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_WL04_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/WL05Summon/BP_WL05_QuickSummon_Forward.BP_WL05_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_WL05_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/WL06_Summon/BP_WL06_QuickSummon_Forward.BP_WL06_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_WL06_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/WL07Summon/BP_WL07_QuickSummon_Forward.BP_WL07_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_WL07_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Extra/VehicleSummonWeapon/WL09Summon/BP_WL09_QuickSummon_Forward.BP_WL09_QuickSummon_Forward_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_WL09_QuickSummon_Forward_C : public UBP_QuickSummon_Forward_C
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C
/// Size: 0x00B0 (0x0002D0 - 0x000380)
class UR_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{ 
public:
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D0   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0300   (0x0048)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0348   (0x0018)  
	FAnimMsgData                                       K2Node_MakeStruct_AnimMsgData;                              // 0x0360   (0x0008)  
	TArray<FAnimMsgData>                               K2Node_MakeArray_Array;                                     // 0x0368   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0378   (0x0008)  MISSED


	/// Functions
	// Function /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.TestAPI
	void TestAPI();                                                                                                          // [0x1564660] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.InterruptAnim
	void InterruptAnim();                                                                                                    // [0x1570b30] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitIdle
	void AnimNotify_QuitIdle();                                                                                              // [0x1564800] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitBolt
	void AnimNotify_QuitBolt();                                                                                              // [0x15647e0] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterIdle
	void AnimNotify_EnterIdle();                                                                                             // [0x1570c70] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterBolt
	void AnimNotify_EnterBolt();                                                                                             // [0x15645c0] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/9A/Sniper_9A01/Set00/Mesh/R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_9A01_Set00_LODP_Skeleton_AnimBlueprint_C.AnimGraph
	void AnimGraph(FPoseLink& bpp__AnimGraph__pf);                                                                           // [0x15708d0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C
/// Size: 0x0710 (0x0002D0 - 0x0009E0)
class UR_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{ 
public:
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D0   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0328   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0350   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0378   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03A0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03C8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x03F0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0418   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0440   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0468   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0490   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04B8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x04E0   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0508   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0530   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0558   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0580   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x05A8   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x05D0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0600   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0678   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x06A8   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x06D8   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0708   (0x0030)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0738   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0768   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x07E0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0810   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0888   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x08B8   (0x0028)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x08E0   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0910   (0x00B0)  
	FAnimMsgData                                       K2Node_MakeStruct_AnimMsgData;                              // 0x09C0   (0x0008)  
	TArray<FAnimMsgData>                               K2Node_MakeArray_Array;                                     // 0x09C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x09D8   (0x0008)  MISSED


	/// Functions
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.TestAPI
	void TestAPI();                                                                                                          // [0x1564640] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.InterruptAnim
	void InterruptAnim();                                                                                                    // [0x1570b30] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_FC0194B2401EA22381DBF39C55947FF9
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_FC0194B2401EA22381DBF39C55947FF9(); // [0x1564960] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_E401BBA149B0DABC77E320A5D26F161C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_E401BBA149B0DABC77E320A5D26F161C(); // [0x1564c60] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C959CBB24B6E3FBB125D5386BA83BA89
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C959CBB24B6E3FBB125D5386BA83BA89(); // [0x7d53d0] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_C56C131748626A9573F10282DB5E5052(); // [0x1564600] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_968E57334D0560E0D81E8F8CBF255866
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_968E57334D0560E0D81E8F8CBF255866(); // [0x1570a10] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_90C97F4B4CBC8816A38216BE138E6F89
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_90C97F4B4CBC8816A38216BE138E6F89(); // [0x1564940] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_902489064567DB8F1C7F35A412FC55BD
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_902489064567DB8F1C7F35A412FC55BD(); // [0x1564900] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_8E281982451991810FB1CDBE5C7AB333
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_8E281982451991810FB1CDBE5C7AB333(); // [0x1564980] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_75414DB244FBB7A53F3CE18A9FB7157B
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_75414DB244FBB7A53F3CE18A9FB7157B(); // [0x1564b20] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_73C2053F48EBA57AE80C7EB511A1ED8A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_73C2053F48EBA57AE80C7EB511A1ED8A(); // [0x1564920] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_666390444F55176B8452A3ADD88C04EC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_666390444F55176B8452A3ADD88C04EC(); // [0x1564aa0] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_57FE46434F01218D85EC4697425396E0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_57FE46434F01218D85EC4697425396E0(); // [0xc455a0] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_57691DF54B9855E9DD506B9FCCB61EA7
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_57691DF54B9855E9DD506B9FCCB61EA7(); // [0x1564620] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_4ADDE6E04C5F8810E1EEA58820D214AE
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_4ADDE6E04C5F8810E1EEA58820D214AE(); // [0x15645e0] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_43F44591410E60EB2C5CD2B43DEB8E8E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_43F44591410E60EB2C5CD2B43DEB8E8E(); // [0x1564b40] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2C342F604862980A804FF2996F90C087
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_2C342F604862980A804FF2996F90C087(); // [0x1564c80] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_28F31C444D5EA218BB1A38AACC8722F3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_28F31C444D5EA218BB1A38AACC8722F3(); // [0xc45560] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_20E8B10A4E9FF7BA091039BFD5B13AD8
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_20E8B10A4E9FF7BA091039BFD5B13AD8(); // [0x15645c0] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_056EEB8B459D1AC625DFDB8AC5C35452
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_056EEB8B459D1AC625DFDB8AC5C35452(); // [0x1564840] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_9CEFF7884F12CE6C82E80A8548619832
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_9CEFF7884F12CE6C82E80A8548619832(); // [0x1564820] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_696B215C4C93CC06D553F2B7970E6146
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_696B215C4C93CC06D553F2B7970E6146(); // [0x1564680] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_0D0A1C5849872911C76BD99ABCFFA34E
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_AnimGraphNode_SequencePlayer_0D0A1C5849872911C76BD99ABCFFA34E(); // [0x15646a0] Native|Public        
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitIdle
	void AnimNotify_QuitIdle();                                                                                              // [0x1564800] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitFire
	void AnimNotify_QuitFire();                                                                                              // [0x15647e0] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterIdle
	void AnimNotify_EnterIdle();                                                                                             // [0x1570c70] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterFire
	void AnimNotify_EnterFire();                                                                                             // [0x1564660] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy01/Set001/Mesh/R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint.R_Weapon_Mphy01_Set001_LODP_Skeleton_AnimBlueprint_C.AnimGraph
	void AnimGraph(FPoseLink& bpp__AnimGraph__pf);                                                                           // [0x15b2fc0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Game/09_Weapons/Weapons/Extra/Extra_Summon01/Set01/Mesh/R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C
/// Size: 0x0380 (0x0002D0 - 0x000650)
class UR_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{ 
public:
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D0   (0x0030)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0300   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0328   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0350   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0378   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03A0   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0418   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0448   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x04C0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x04F0   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0568   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0598   (0x00B0)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0648   (0x0008)  MISSED


	/// Functions
	// Function /Game/09_Weapons/Weapons/Extra/Extra_Summon01/Set01/Mesh/R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F2855A6E43032126BE9962A2F5370D30
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_F2855A6E43032126BE9962A2F5370D30(); // [0x15647e0] Native|Public        
	// Function /Game/09_Weapons/Weapons/Extra/Extra_Summon01/Set01/Mesh/R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_DDAC6AEB489D5E9CB3D09A9B9AA278F3
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_DDAC6AEB489D5E9CB3D09A9B9AA278F3(); // [0x1570b30] Native|Public        
	// Function /Game/09_Weapons/Weapons/Extra/Extra_Summon01/Set01/Mesh/R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A3D9D1AF449F798FCECE89AEF2D7661C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_A3D9D1AF449F798FCECE89AEF2D7661C(); // [0x1570c70] Native|Public        
	// Function /Game/09_Weapons/Weapons/Extra/Extra_Summon01/Set01/Mesh/R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_35F7023940C49D3FCC85AD9F57FAFFCB
	void EvaluateGraphExposedInputs_ExecuteUbergraph_R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_35F7023940C49D3FCC85AD9F57FAFFCB(); // [0x1564800] Native|Public        
	// Function /Game/09_Weapons/Weapons/Extra/Extra_Summon01/Set01/Mesh/R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint.R_Weapon_Summon_Set01_LODP_Skeleton_AnimBlueprint_C.AnimGraph
	void AnimGraph(FPoseLink& bpp__AnimGraph__pf);                                                                           // [0x15be980] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C
/// Size: 0x00B0 (0x0002D0 - 0x000380)
class UR_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{ 
public:
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02D0   (0x0030)  
	FAnimNode_RefPose                                  AnimGraphNode_LocalRefPose;                                 // 0x0300   (0x0018)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x0318   (0x0048)  
	FAnimMsgData                                       K2Node_MakeStruct_AnimMsgData;                              // 0x0360   (0x0008)  
	TArray<FAnimMsgData>                               K2Node_MakeArray_Array;                                     // 0x0368   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0378   (0x0008)  MISSED


	/// Functions
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.TestAPI
	void TestAPI();                                                                                                          // [0x15645e0] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.InterruptAnim
	void InterruptAnim();                                                                                                    // [0x1570b30] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitReload
	void AnimNotify_QuitReload();                                                                                            // [0x15647e0] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitIdle
	void AnimNotify_QuitIdle();                                                                                              // [0x1564800] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_QuitFire
	void AnimNotify_QuitFire();                                                                                              // [0x15645c0] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterReload
	void AnimNotify_EnterReload();                                                                                           // [0x1564660] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterIdle
	void AnimNotify_EnterIdle();                                                                                             // [0x1570c70] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimNotify_EnterFire
	void AnimNotify_EnterFire();                                                                                             // [0x1564640] Native|Public|BlueprintCallable 
	// Function /Game/09_Weapons/Weapons/WL/Shotgun_WL02/Set00/Mesh/R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint.R_Weapon_WL02_Set00_LODP_Skeleton_AnimBlueprint_C.AnimGraph
	void AnimGraph(FPoseLink& bpp__AnimGraph__pf);                                                                           // [0x15643e0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_AssaultRifle.Crosshair_AssaultRifle_C
/// Size: 0x0038 (0x000300 - 0x000338)
class UCrosshair_AssaultRifle_C : public UCrossHairWidget
{ 
public:
	UImage*                                            ForbidImg;                                                  // 0x0300   (0x0008)  
	UHUD_Reload_C*                                     HUD_Reload;                                                 // 0x0308   (0x0008)  
	UImage*                                            SpreadImg_coredot;                                          // 0x0310   (0x0008)  
	UImage*                                            SpreadImg_Downarrow;                                        // 0x0318   (0x0008)  
	UImage*                                            SpreadImg_leftarrow;                                        // 0x0320   (0x0008)  
	UImage*                                            SpreadImg_rightarrow;                                       // 0x0328   (0x0008)  
	UImage*                                            SpreadImg_uparrow;                                          // 0x0330   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_AssaultRifle.Crosshair_AssaultRifle_C.GetAmmoWidget
	UUserWidget* GetAmmoWidget();                                                                                            // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/Crosshair_AssaultRifle.Crosshair_AssaultRifle_C.GetReloadWidget
	UUserWidget* GetReloadWidget();                                                                                          // [0x2649560] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Summon_ColdTurret_BaseDamage.Effect_Summon_ColdTurret_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Summon_ColdTurret_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Summon_ColdTurrent_BaseDamage.Ability_Summon_ColdTurrent_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_Summon_ColdTurrent_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/09_Weapons/Skill/GAS/EMP/GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C
/// Size: 0x0008 (0x000428 - 0x000430)
class UGA_Weapon_EMP_Throw_C : public USolarWeaponGameplayAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0428   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Skill/GAS/EMP/GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C.K2_ActivateAbilityFromEvent
	void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x2649560] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Skill/GAS/EMP/GA_Weapon_EMP_Throw.GA_Weapon_EMP_Throw_C.ExecuteUbergraph_GA_Weapon_EMP_Throw
	void ExecuteUbergraph_GA_Weapon_EMP_Throw(int32_t EntryPoint);                                                           // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Effect_Rifle_Mphy08_BaseDamage.Effect_Rifle_Mphy08_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_Rifle_Mphy08_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy08/ModeMain/Projectile_BMphy08_Primary.Projectile_BMphy08_Primary_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_BMphy08_Primary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy08/ModeMain/Projectile_BMphy08_Primary.Projectile_BMphy08_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/09_Weapons/Weapons/Mphy/Rifle_Mphy08/ModeMain/Projectile_BMphy08_Primary.Projectile_BMphy08_Primary_C.ExecuteUbergraph_Projectile_BMphy08_Primary
	void ExecuteUbergraph_Projectile_BMphy08_Primary(int32_t EntryPoint);                                                    // [0x2649560] Final|HasDefaults    
};

/// Class /Game/09_Weapons/Ability/BaseDamage/Ability_Rifle_Mphy08_BaseDamage.Ability_Rifle_Mphy08_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_Rifle_Mphy08_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Enum /Game/09_Weapons/CrossHairWidget/WeaponCrosshair/E_UI_Bullet_Type.E_UI_Bullet_Type
/// Size: 0x03
enum E_UI_Bullet_Type : uint8_t
{
	E_UI_Bullet_Type__NewEnumerator0                                                 = 0,
	E_UI_Bullet_Type__NewEnumerator1                                                 = 1,
	E_UI_Bullet_Type__E UI Bullet MAX                                                = 2
};

