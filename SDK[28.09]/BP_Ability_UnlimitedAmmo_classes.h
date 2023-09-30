// BlueprintGeneratedClass BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C
// Size: 0x420 (Inherited: 0x3b0)
struct ABP_Ability_UnlimitedAmmo_C : AWeaponHitAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UParticleSystemComponent* FX_Buff_AbilityIncrease; // 0x3b8(0x08)
	struct UParticleSystemComponent* Fx_WeaponBuff; // 0x3c0(0x08)
	struct ASolarCharacter* CacheCharacter; // 0x3c8(0x08)
	struct FName CharacterEffectSocketName; // 0x3d0(0x08)
	struct UUserWidget* ScreenEffectClass; // 0x3d8(0x08)
	struct UUserWidget* CacheScreenEffect; // 0x3e0(0x08)
	struct FString SoundName1P; // 0x3e8(0x10)
	struct FString SoundName3P; // 0x3f8(0x10)
	struct FString SoundName3PEnemy; // 0x408(0x10)
	struct ASolarWeapon* CacheWeapon; // 0x418(0x08)

	void ReceiveBeginPlay(); // Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x2649560
	void EndWhenUnhold(); // Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.EndWhenUnhold // (BlueprintCallable|BlueprintEvent) // @ game+0x2649560
	void ExecuteUbergraph_BP_Ability_UnlimitedAmmo(int32_t EntryPoint); // Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ExecuteUbergraph_BP_Ability_UnlimitedAmmo // (Final|UbergraphFunction|HasDefaults) // @ game+0x2649560
};

