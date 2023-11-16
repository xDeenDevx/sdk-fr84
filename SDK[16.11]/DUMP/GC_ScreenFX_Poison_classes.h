// BlueprintGeneratedClass GC_ScreenFX_Poison.GC_ScreenFX_Poison_C
// Size: 0x2a0 (Inherited: 0x298)
struct AGC_ScreenFX_Poison_C : AGameplayCueNotify_Actor {
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)

	bool IsObservationTarget(struct ASolarCharacter* Target); // Function GC_ScreenFX_Poison.GC_ScreenFX_Poison_C.IsObservationTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x2d656b0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_ScreenFX_Poison.GC_ScreenFX_Poison_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_ScreenFX_Poison.GC_ScreenFX_Poison_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

