/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 08_Vehicles.

/// Class /Game/08_Vehicles/Abilities/WeaponAbility/GE_VehicleWeaponFire.GE_VehicleWeaponFire_C
/// Size: 0x0000 (0x000848 - 0x000848)
class UGE_VehicleWeaponFire_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/08_Vehicles/Abilities/WeaponAbility/GA_VehicleWeaponFire.GA_VehicleWeaponFire_C
/// Size: 0x0000 (0x0004F0 - 0x0004F0)
class UGA_VehicleWeaponFire_C : public USolarVehicleGA_WeaponFire
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_9A03/Weapon/Effect_VH_Tire_9A03_Rocket_ExplosionDamage_man.Effect_VH_Tire_9A03_Rocket_ExplosionDamage_man_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Tire_9A03_Rocket_ExplosionDamage_man_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_9A03/Weapon/Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man.Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man_C
/// Size: 0x0009 (0x000310 - 0x000319)
class AAbility_VH_Tire_9A03_Rocket_ExplosionDamage_man_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	bool                                               HasExploded;                                                // 0x0318   (0x0001)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Hover_9A03/Weapon/Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man.Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Hover_9A03/Weapon/Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man.Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Hover_9A03/Weapon/Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man.Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man_C.ExecuteUbergraph_Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man
	void ExecuteUbergraph_Ability_VH_Tire_9A03_Rocket_ExplosionDamage_man(int32_t EntryPoint);                               // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Hover_9A03/Weapon/WAT_VH_Hover_9A03_Rocket_Burst.WAT_VH_Hover_9A03_Rocket_Burst_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UWAT_VH_Hover_9A03_Rocket_Burst_C : public USolarWeaponAT_FireBurst
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Leg_WL03/Weapons/VH_Leg_Spider01_ShapedGun/Ability_VehicleWeapon_ShapedGun.Ability_VehicleWeapon_ShapedGun_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VehicleWeapon_ShapedGun_C : public ASolarAbility
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll04/Weapons/LaserVehicleBlockEffect.LaserVehicleBlockEffect_C
/// Size: 0x0000 (0x000848 - 0x000848)
class ULaserVehicleBlockEffect_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll03/Weapons/VH_Hover_Soroll03_TurretA1/Ability_VH_Hover_Soroll03_TurretA1_BaseDamage.Ability_VH_Hover_Soroll03_TurretA1_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VH_Hover_Soroll03_TurretA1_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll04/Weapons/WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C
/// Size: 0x0008 (0x000230 - 0x000238)
class UWAT_FireLaser_VH_Hover_Soroll04_New_C : public USolarWeaponAT_FireLaser
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Hover_Soroll04/Weapons/WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.K2_ActivateRealFire
	void K2_ActivateRealFire();                                                                                              // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Hover_Soroll04/Weapons/WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C.ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New
	void ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New(int32_t EntryPoint);                                           // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Leg_9A02/Weapons/VH_Leg_9A02_Gatling/Ability_VH_Leg_9A02_Gatling_BaseDamage.Ability_VH_Leg_9A02_Gatling_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VH_Leg_9A02_Gatling_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_WL04/Weapon/Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C
/// Size: 0x0010 (0x000310 - 0x000320)
class AAbility_VH_Hover_WL04_StickyBomb_Explode_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	UParticleSystemComponent*                          FX_Hover_WL04_Hit;                                          // 0x0318   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Hover_WL04/Weapon/Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Hover_WL04/Weapon/Ability_VH_Hover_WL04_StickyBomb_Explode.Ability_VH_Hover_WL04_StickyBomb_Explode_C.ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode
	void ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb_Explode(int32_t EntryPoint);                                      // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Hover_WL04/Weapon/Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C
/// Size: 0x0009 (0x000310 - 0x000319)
class AAbility_VH_Hover_WL04_StickyBomb_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	bool                                               HasExploded;                                                // 0x0318   (0x0001)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Hover_WL04/Weapon/Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Hover_WL04/Weapon/Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Hover_WL04/Weapon/Ability_VH_Hover_WL04_StickyBomb.Ability_VH_Hover_WL04_StickyBomb_C.ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb
	void ExecuteUbergraph_Ability_VH_Hover_WL04_StickyBomb(int32_t EntryPoint);                                              // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll02/Weapons/Effect_VH_Hover_Soroll02_AutoGun_BaseDamage.Effect_VH_Hover_Soroll02_AutoGun_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Hover_Soroll02_AutoGun_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll02/Weapons/Ability_VH_Hover_Soroll02_AutoGun_BaseDamage.Ability_VH_Hover_Soroll02_AutoGun_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VH_Hover_Soroll02_AutoGun_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll04/Weapons/BP_CameraAnimShake_Soroll04.BP_CameraAnimShake_Soroll04_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UBP_CameraAnimShake_Soroll04_C : public UCameraShake
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Leg_WL06/Weapon/Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man.Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C
/// Size: 0x0009 (0x000310 - 0x000319)
class AAbility_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	bool                                               HasExploded;                                                // 0x0318   (0x0001)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Leg_WL06/Weapon/Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man.Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Leg_WL06/Weapon/Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man.Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Leg_WL06/Weapon/Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man.Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C.ExecuteUbergraph_Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man
	void ExecuteUbergraph_Ability_VH_Leg_WL06_Shotgun_ExplosionDamage_man(int32_t EntryPoint);                               // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Leg_WL09/Weapons/BP_WAT_RocketLauncher.BP_WAT_RocketLauncher_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UBP_WAT_RocketLauncher_C : public USolarWeaponAT_FireRocket
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man.Effect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Tire_9A04_TurretA1_ExplosionDamage_man_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_WL04/Weapon/Effect_VH_Hover_WL04_StickyBomb_Explode.Effect_VH_Hover_WL04_StickyBomb_Explode_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Hover_WL04_StickyBomb_Explode_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man.Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_C
/// Size: 0x0009 (0x000310 - 0x000319)
class AAbility_VH_Tire_9A04_TurretA1_ExplosionDamage_man_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	bool                                               HasExploded;                                                // 0x0318   (0x0001)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man.Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man.Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man.Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man_C.ExecuteUbergraph_Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man
	void ExecuteUbergraph_Ability_VH_Tire_9A04_TurretA1_ExplosionDamage_man(int32_t EntryPoint);                             // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Leg_WL06/Weapon/Effect_VH_Leg_WL06_Shotgun_ExplosionDamage_man.Effect_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Leg_WL06_Shotgun_ExplosionDamage_man_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Tire_WL01/Weapons/VH_Tire_WL01_Flamethrower/Effect_VH_Tire_WL01_Flamethrower_BaseDamage.Effect_VH_Tire_WL01_Flamethrower_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Tire_WL01_Flamethrower_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_TransTL_WL07/Weapons/Flamethrower/Effect_VH_Tire_WL07_Flamethrower_BaseDamage.Effect_VH_Tire_WL07_Flamethrower_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Tire_WL07_Flamethrower_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_TransTL_WL07/Weapons/Machinegun/BP_SolarAbility_WL07_EMP.BP_SolarAbility_WL07_EMP_C
/// Size: 0x0000 (0x000320 - 0x000320)
class ABP_SolarAbility_WL07_EMP_C : public ASolarWeaponAbilityTemp
{ 
public:
};

/// Class /Game/08_Vehicles/VH_TransTL_WL07/Weapons/Flamethrower/Ability_VH_Tire_WL07_Flamethrower_BaseDamage.Ability_VH_Tire_WL07_Flamethrower_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VH_Tire_WL07_Flamethrower_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Tire_WL01/Weapons/VH_Tire_WL01_Flamethrower/Ability_VH_Tire_WL01_Flamethrower_BaseDamage.Ability_VH_Tire_WL01_Flamethrower_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VH_Tire_WL01_Flamethrower_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretA1/Effect_VH_Tire_Mphy01_TurretA1_BaseDamage.Effect_VH_Tire_Mphy01_TurretA1_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Tire_Mphy01_TurretA1_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Effect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C
/// Size: 0x0009 (0x000310 - 0x000319)
class AAbility_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	bool                                               HasExploded;                                                // 0x0318   (0x0001)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man.Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man_C.ExecuteUbergraph_Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man
	void ExecuteUbergraph_Ability_VH_Tire_Mphy01_TurretB1_Rocket_ExplosionDamage_man(int32_t EntryPoint);                    // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretA1/Ability_VH_Tire_Mphy01_TurretA1_BaseDamage.Ability_VH_Tire_Mphy01_TurretA1_BaseDamage_C
/// Size: 0x0000 (0x000310 - 0x000310)
class AAbility_VH_Tire_Mphy01_TurretA1_BaseDamage_C : public ASolarAbility
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Leg_WL09/Weapons/Effect_VH_Leg_WL09_Rocket_ExplosionDamage.Effect_VH_Leg_WL09_Rocket_ExplosionDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Leg_WL09_Rocket_ExplosionDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Leg_WL09/Weapons/Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C
/// Size: 0x0009 (0x000310 - 0x000319)
class AAbility_VH_Leg_WL09_Rockets_ExplosionDamage_C : public ASolarAbility
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	bool                                               HasExploded;                                                // 0x0318   (0x0001)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Leg_WL09/Weapons/Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Leg_WL09/Weapons/Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C.ReceiveTick
	void ReceiveTick(float DeltaSeconds);                                                                                    // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Leg_WL09/Weapons/Ability_VH_Leg_WL09_Rockets_ExplosionDamage.Ability_VH_Leg_WL09_Rockets_ExplosionDamage_C.ExecuteUbergraph_Ability_VH_Leg_WL09_Rockets_ExplosionDamage
	void ExecuteUbergraph_Ability_VH_Leg_WL09_Rockets_ExplosionDamage(int32_t EntryPoint);                                   // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_Leg_9A02/Weapons/VH_Leg_9A02_Gatling/Effect_VH_Leg_9A02_Gatling_BaseDamage.Effect_VH_Leg_9A02_Gatling_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Leg_9A02_Gatling_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Leg_WL03/Weapons/VH_Leg_Spider01_ShapedGun/Effect_VehicleWeapon_ShapedGun.Effect_VehicleWeapon_ShapedGun_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VehicleWeapon_ShapedGun_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll03/Weapons/VH_Hover_Soroll03_TurretA1/Effect_VH_Hover_Soroll03_TurretA1_BaseDamage.Effect_VH_Hover_Soroll03_TurretA1_BaseDamage_C
/// Size: 0x0000 (0x000198 - 0x000198)
class UEffect_VH_Hover_Soroll03_TurretA1_BaseDamage_C : public USolarAbilityEffect
{ 
public:
};

/// Class /Game/08_Vehicles/VH_TransTL_WL07/Weapons/Machinegun/Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_TransTL_WL07_Machinegun_Secondary_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_TransTL_WL07/Weapons/Machinegun/Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.K2_OnExplode
	void K2_OnExplode();                                                                                                     // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_TransTL_WL07/Weapons/Machinegun/Projectile_VH_TransTL_WL07_Machinegun_Secondary.Projectile_VH_TransTL_WL07_Machinegun_Secondary_C.ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary
	void ExecuteUbergraph_Projectile_VH_TransTL_WL07_Machinegun_Secondary(int32_t EntryPoint);                               // [0x2649560] Final                
};

/// Class /Game/08_Vehicles/VH_TransTL_WL07/Weapons/Flamethrower/Projectile_VH_TransTL_WL07_Flamethrower_New.Projectile_VH_TransTL_WL07_Flamethrower_New_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_TransTL_WL07_Flamethrower_New_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Tire_WL01/Weapons/VH_Tire_WL01_Flamethrower/Projectile_VH_Tire_WL01_Flamethrower.Projectile_VH_Tire_WL01_Flamethrower_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Tire_WL01_Flamethrower_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Projectile_VH_Tire_Mphy01_TurretB1_Rocket.Projectile_VH_Tire_Mphy01_TurretB1_Rocket_C
/// Size: 0x0010 (0x000508 - 0x000518)
class AProjectile_VH_Tire_Mphy01_TurretB1_Rocket_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  
	UStaticMeshComponent*                              VH_Tire_Mphy01_Bullet_A;                                    // 0x0510   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Projectile_VH_Tire_Mphy01_TurretB1_Rocket.Projectile_VH_Tire_Mphy01_TurretB1_Rocket_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretB1_Rocket/Projectile_VH_Tire_Mphy01_TurretB1_Rocket.Projectile_VH_Tire_Mphy01_TurretB1_Rocket_C.ExecuteUbergraph_Projectile_VH_Tire_Mphy01_TurretB1_Rocket
	void ExecuteUbergraph_Projectile_VH_Tire_Mphy01_TurretB1_Rocket(int32_t EntryPoint);                                     // [0x2649560] Final|HasDefaults    
};

/// Class /Game/08_Vehicles/VH_Tire_Mphy01/Weapons/VH_Tire_Mphy01_TurretA1/Projectile_VH_Tire_Mphy01_TurretA1.Projectile_VH_Tire_Mphy01_TurretA1_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Tire_Mphy01_TurretA1_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Leg_WL09/Weapons/Projectile_VH_Tire_WL09_Rocket.Projectile_VH_Tire_WL09_Rocket_C
/// Size: 0x0010 (0x000508 - 0x000518)
class AProjectile_VH_Tire_WL09_Rocket_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  
	UStaticMeshComponent*                              Bullet;                                                     // 0x0510   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Leg_WL09/Weapons/Projectile_VH_Tire_WL09_Rocket.Projectile_VH_Tire_WL09_Rocket_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Leg_WL09/Weapons/Projectile_VH_Tire_WL09_Rocket.Projectile_VH_Tire_WL09_Rocket_C.ExecuteUbergraph_Projectile_VH_Tire_WL09_Rocket
	void ExecuteUbergraph_Projectile_VH_Tire_WL09_Rocket(int32_t EntryPoint);                                                // [0x2649560] Final|HasDefaults    
};

/// Class /Game/08_Vehicles/VH_Leg_WL06/Weapon/Projectile_VH_Leg_WL06_Shotgun.Projectile_VH_Leg_WL06_Shotgun_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Leg_WL06_Shotgun_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Leg_WL06/Weapon/Projectile_VH_Leg_WL06_Shotgun.Projectile_VH_Leg_WL06_Shotgun_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Leg_WL06/Weapon/Projectile_VH_Leg_WL06_Shotgun.Projectile_VH_Leg_WL06_Shotgun_C.ExecuteUbergraph_Projectile_VH_Leg_WL06_Shotgun
	void ExecuteUbergraph_Projectile_VH_Leg_WL06_Shotgun(int32_t EntryPoint);                                                // [0x2649560] Final|HasDefaults    
};

/// Class /Game/08_Vehicles/VH_Leg_9A02/Weapons/VH_Leg_9A02_Gatling/Projectile_VH_Leg_9A02_Gatling.Projectile_VH_Leg_9A02_Gatling_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Leg_9A02_Gatling_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Hover_WL04/Weapon/Projectile_VH_Hover_WL04_StickyBomb.Projectile_VH_Hover_WL04_StickyBomb_C
/// Size: 0x0010 (0x000508 - 0x000518)
class AProjectile_VH_Hover_WL04_StickyBomb_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          FX_Hover_WL04_waring;                                       // 0x0508   (0x0008)  
	UStaticMeshComponent*                              Bullet;                                                     // 0x0510   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll02/Weapons/Projectile_VH_Hover_Soroll02_AutoGun_Tracer.Projectile_VH_Hover_Soroll02_AutoGun_Tracer_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Hover_Soroll02_AutoGun_Tracer_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Hover_9A03/Weapon/Projectile_VH_Tire_9A03_Rocket.Projectile_VH_Tire_9A03_Rocket_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Tire_9A03_Rocket_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Hover_9A03/Weapon/Projectile_VH_Tire_9A03_Rocket.Projectile_VH_Tire_9A03_Rocket_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Hover_9A03/Weapon/Projectile_VH_Tire_9A03_Rocket.Projectile_VH_Tire_9A03_Rocket_C.ExecuteUbergraph_Projectile_VH_Tire_9A03_Rocket
	void ExecuteUbergraph_Projectile_VH_Tire_9A03_Rocket(int32_t EntryPoint);                                                // [0x2649560] Final|HasDefaults    
};

/// Class /Game/08_Vehicles/VH_Leg_WL03/Weapons/VH_Leg_Spider01_ShapedGun/Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Leg_Spider01_ShapedGun_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Leg_WL03/Weapons/VH_Leg_Spider01_ShapedGun/Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Leg_WL03/Weapons/VH_Leg_Spider01_ShapedGun/Projectile_VH_Leg_Spider01_ShapedGun.Projectile_VH_Leg_Spider01_ShapedGun_C.ExecuteUbergraph_Projectile_VH_Leg_Spider01_ShapedGun
	void ExecuteUbergraph_Projectile_VH_Leg_Spider01_ShapedGun(int32_t EntryPoint);                                          // [0x2649560] Final|HasDefaults    
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll02/Weapons/Projectile_VH_Hover_Soroll02_AutoGun.Projectile_VH_Hover_Soroll02_AutoGun_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Hover_Soroll02_AutoGun_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Hover_Soroll03/Weapons/VH_Hover_Soroll03_TurretA1/Projectile_VH_Hover_Soroll03_TurretA1.Projectile_VH_Hover_Soroll03_TurretA1_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Hover_Soroll03_TurretA1_C : public ADefaultProjBullet_C
{ 
public:
	UParticleSystemComponent*                          Bullet;                                                     // 0x0508   (0x0008)  
};

/// Class /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Projectile_VH_Tire_9A04_TurretA1.Projectile_VH_Tire_9A04_TurretA1_C
/// Size: 0x0008 (0x000508 - 0x000510)
class AProjectile_VH_Tire_9A04_TurretA1_C : public ADefaultProjBullet_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Projectile_VH_Tire_9A04_TurretA1.Projectile_VH_Tire_9A04_TurretA1_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(FHitResult& ImpactResult); // [0x2649560] HasOutParms|BlueprintEvent 
	// Function /Game/08_Vehicles/VH_Tire_9A04/Weapons/VH_Tire_9A04_TurretA1/Projectile_VH_Tire_9A04_TurretA1.Projectile_VH_Tire_9A04_TurretA1_C.ExecuteUbergraph_Projectile_VH_Tire_9A04_TurretA1
	void ExecuteUbergraph_Projectile_VH_Tire_9A04_TurretA1(int32_t EntryPoint);                                              // [0x2649560] Final|HasDefaults    
};

