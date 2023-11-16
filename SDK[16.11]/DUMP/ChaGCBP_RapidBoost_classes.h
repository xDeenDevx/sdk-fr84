// BlueprintGeneratedClass ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C
// Size: 0x2e8 (Inherited: 0x2b8)
struct AChaGCBP_RapidBoost_C : ASolarSkillGC_RapidBoost {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	struct FTimerHandle PlayEndSoundHandle; // 0x2c8(0x08)
	int32_t CachedScreenEffectHandle; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct ASolarCharacter* CharacterOwner; // 0x2d8(0x08)
	int64_t OnActiveFrameCount; // 0x2e0(0x08)

	void WhileActive_Impl(); // Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.WhileActive_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnActive_Impl(); // Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnActive_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void OnPlayEndSound(); // Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnPlayEndSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	struct UParticleSystemComponent* SpawnEmitter(struct UParticleSystem* EmitterTemplate, struct USceneComponent* Mesh, struct FName BoneName, enum class EPSCPoolMethod PoolingMethod, bool bAbsoluteRotation); // Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.SpawnEmitter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_ChaGCBP_RapidBoost(int32_t EntryPoint); // Function ChaGCBP_RapidBoost.ChaGCBP_RapidBoost_C.ExecuteUbergraph_ChaGCBP_RapidBoost // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d656b0
};

