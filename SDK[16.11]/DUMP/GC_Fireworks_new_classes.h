// BlueprintGeneratedClass GC_Fireworks_new.GC_Fireworks_new_C
// Size: 0x2e2 (Inherited: 0x298)
struct AGC_Fireworks_new_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UAudioComponent* AudioComponent; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	struct UParticleSystem* FireworksMuzzleVFX; // 0x2b0(0x08)
	struct UParticleSystem* FireworksExplosionVFX; // 0x2b8(0x08)
	struct FString FireworksMuzzleAudio; // 0x2c0(0x10)
	struct FString FireworksExplosionAudio; // 0x2d0(0x10)
	bool CanSetCacheLocationLeft; // 0x2e0(0x01)
	bool CanSetCacheLocationRight; // 0x2e1(0x01)

	void PlayFireworksExplosionAudioRight(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity); // Function GC_Fireworks_new.GC_Fireworks_new_C.PlayFireworksExplosionAudioRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void PlayFireworksExplosionAudioLeft(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity); // Function GC_Fireworks_new.GC_Fireworks_new_C.PlayFireworksExplosionAudioLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_Fireworks_new.GC_Fireworks_new_C.WhileActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveBeginPlay(); // Function GC_Fireworks_new.GC_Fireworks_new_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_GC_Fireworks_new(int32_t EntryPoint); // Function GC_Fireworks_new.GC_Fireworks_new_C.ExecuteUbergraph_GC_Fireworks_new // (Final|UbergraphFunction) // @ game+0x2d656b0
};

