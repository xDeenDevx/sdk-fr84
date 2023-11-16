// BlueprintGeneratedClass ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C
// Size: 0x2ec (Inherited: 0x2b0)
struct AChaGCBP_DuckRollingEnableCharacterHit_C : AChaGC_CharacterActorCueBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	struct UB_DuckRollingProxyComponent_C* ProxyCompoent; // 0x2c0(0x08)
	struct UParticleSystem* ParticleAsset; // 0x2c8(0x08)
	struct UB_DuckRollingMeshComponent_C* MeshComponent; // 0x2d0(0x08)
	struct UParticleSystemComponent*  ParticleComponent; // 0x2d8(0x08)
	struct FRotator RotationOffset; // 0x2e0(0x0c)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveTick(float DeltaSeconds); // Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit(int32_t EntryPoint); // Function ChaGCBP_DuckRollingEnableCharacterHit.ChaGCBP_DuckRollingEnableCharacterHit_C.ExecuteUbergraph_ChaGCBP_DuckRollingEnableCharacterHit // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d656b0
};

