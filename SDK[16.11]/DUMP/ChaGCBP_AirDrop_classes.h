// BlueprintGeneratedClass ChaGCBP_AirDrop.ChaGCBP_AirDrop_C
// Size: 0x2c0 (Inherited: 0x298)
struct AChaGCBP_AirDrop_C : AChaGC_AirDrop {
	struct UCapsuleComponent* Capsule; // 0x298(0x08)
	struct UActorSequenceComponent* Show; // 0x2a0(0x08)
	struct UStaticMeshComponent* fx_ring_small; // 0x2a8(0x08)
	struct UStaticMeshComponent* fx_spread; // 0x2b0(0x08)
	struct USceneComponent* Range; // 0x2b8(0x08)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_AirDrop.ChaGCBP_AirDrop_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_AirDrop.ChaGCBP_AirDrop_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

