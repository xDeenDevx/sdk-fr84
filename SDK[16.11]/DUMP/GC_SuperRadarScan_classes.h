// BlueprintGeneratedClass GC_SuperRadarScan.GC_SuperRadarScan_C
// Size: 0x2d0 (Inherited: 0x298)
struct AGC_SuperRadarScan_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct FString EnutterSound; // 0x2a8(0x10)
	struct FVector CacheLocation; // 0x2b8(0x0c)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct UParticleSystemComponent* CacheEmitter; // 0x2c8(0x08)

	void PlayEmitterEffect(); // Function GC_SuperRadarScan.GC_SuperRadarScan_C.PlayEmitterEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_SuperRadarScan.GC_SuperRadarScan_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_SuperRadarScan.GC_SuperRadarScan_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveBeginPlay(); // Function GC_SuperRadarScan.GC_SuperRadarScan_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveTick(float DeltaSeconds); // Function GC_SuperRadarScan.GC_SuperRadarScan_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_GC_SuperRadarScan(int32_t EntryPoint); // Function GC_SuperRadarScan.GC_SuperRadarScan_C.ExecuteUbergraph_GC_SuperRadarScan // (Final|UbergraphFunction) // @ game+0x2d656b0
};

