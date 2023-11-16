// BlueprintGeneratedClass GC_UnlimitedAmmo.GC_UnlimitedAmmo_C
// Size: 0x2b8 (Inherited: 0x298)
struct AGC_UnlimitedAmmo_C : AGameplayCueNotify_Actor {
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct UParticleSystemComponent* CharacterVFX; // 0x2a0(0x08)
	struct UUserWidget* ScreenVFX; // 0x2a8(0x08)
	int32_t CharacterEffectHandle; // 0x2b0(0x04)
	int32_t ScreenEffectHandle; // 0x2b4(0x04)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_UnlimitedAmmo.GC_UnlimitedAmmo_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_UnlimitedAmmo.GC_UnlimitedAmmo_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

