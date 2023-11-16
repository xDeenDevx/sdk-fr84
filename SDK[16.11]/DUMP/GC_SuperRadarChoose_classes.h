// BlueprintGeneratedClass GC_SuperRadarChoose.GC_SuperRadarChoose_C
// Size: 0x2d0 (Inherited: 0x298)
struct AGC_SuperRadarChoose_C : AGameplayCueNotify_Actor {
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	int32_t FXRootHandle; // 0x2a0(0x04)
	int32_t FXEyeHandle; // 0x2a4(0x04)
	struct ASolarCharacter* CacheCharacter; // 0x2a8(0x08)
	struct FString OnsetSound_1P; // 0x2b0(0x10)
	struct FString OnsetSound_3P; // 0x2c0(0x10)

	void PlayPlayerEffect(); // Function GC_SuperRadarChoose.GC_SuperRadarChoose_C.PlayPlayerEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_SuperRadarChoose.GC_SuperRadarChoose_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_SuperRadarChoose.GC_SuperRadarChoose_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

