// BlueprintGeneratedClass ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C
// Size: 0x318 (Inherited: 0x2b0)
struct AChaGCBP_SwitchToRollingMesh_C : AChaGC_SwitchToDuckRollingMesh {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	float Timeline_0_FxFade_8BBDA8D746ED656413E1B4B6DF587EEF; // 0x2c0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_8BBDA8D746ED656413E1B4B6DF587EEF; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x2c8(0x08)
	struct UParticleSystem* SmokeParticleAsset; // 0x2d0(0x08)
	struct FRotator SmokeParticleRelativeRotation; // 0x2d8(0x0c)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UB_DuckRollingMeshComponent_C* MeshComponent; // 0x2e8(0x08)
	struct UParticleSystemComponent*  ParticleComponent; // 0x2f0(0x08)
	struct UCurveFloat* SpeedToSmokeRatCurve; // 0x2f8(0x08)
	struct UCurveFloat* SpeedToFxRatCurve; // 0x300(0x08)
	bool IsPlayingRolingLoop; // 0x308(0x01)
	bool IsPlayingAirLoop; // 0x309(0x01)
	char pad_30A[0x6]; // 0x30a(0x06)
	struct ASolarCharacter* SolarCharacter; // 0x310(0x08)

	void TryStopAirLoop(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStopAirLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void TryStopRollingLoop(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStopRollingLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void TryStartAirLoop(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStartAirLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void TryStartRollingLoop(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.TryStartRollingLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void StopLoopSound(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.StopLoopSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void UpdateRollingSound(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.UpdateRollingSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void UpdateParticleParamsBySpeed(float Speed); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.UpdateParticleParamsBySpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnRemoveInternal(struct ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.OnRemoveInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool WhileActiveInternal(struct ASolarCharacter* Character, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.WhileActiveInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnActiveInternal(struct ASolarCharacter* Character, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.OnActiveInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void Timeline_0__FinishedFunc(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x2d656b0
	void Timeline_0__UpdateFunc(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x2d656b0
	void ReceiveTick(float DeltaSeconds); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void FadeIn(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.FadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void FadeOut(); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh(int32_t EntryPoint); // Function ChaGCBP_SwitchToRollingMesh.ChaGCBP_SwitchToRollingMesh_C.ExecuteUbergraph_ChaGCBP_SwitchToRollingMesh // (Final|UbergraphFunction|HasDefaults) // @ game+0x2d656b0
};

