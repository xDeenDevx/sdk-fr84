#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x510 - 0x508)
// BlueprintGeneratedClass Projectile_VH_Tire_9A04_TurretA1.Projectile_VH_Tire_9A04_TurretA1_C
class AProjectile_VH_Tire_9A04_TurretA1_C : public ADefaultProjBullet_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AProjectile_VH_Tire_9A04_TurretA1_C* GetDefaultObj();

	void BndEvt__MovementComp_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void ExecuteUbergraph_Projectile_VH_Tire_9A04_TurretA1(int32 EntryPoint, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult);
};

}


