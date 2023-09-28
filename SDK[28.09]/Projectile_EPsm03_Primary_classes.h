// BlueprintGeneratedClass Projectile_EPsm03_Primary.Projectile_EPsm03_Primary_C
// Size: 0x520 (Inherited: 0x508)
struct AProjectile_EPsm03_Primary_C : ADefaultProjBullet_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UParticleSystemComponent* FX_T_Smg_Bullet01; // 0x510(0x08)
	struct UArrowComponent* Arrow; // 0x518(0x08)

	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult); // Function Projectile_EPsm03_Primary.Projectile_EPsm03_Primary_C.BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_Projectile_EPsm03_Primary(int32_t EntryPoint); // Function Projectile_EPsm03_Primary.Projectile_EPsm03_Primary_C.ExecuteUbergraph_Projectile_EPsm03_Primary // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

