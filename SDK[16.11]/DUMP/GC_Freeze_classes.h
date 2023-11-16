// BlueprintGeneratedClass GC_Freeze.GC_Freeze_C
// Size: 0x430 (Inherited: 0x360)
struct AGC_Freeze_C : ASolarSkillGC_Freeze {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x368(0x08)
	struct FMaterialChangeHandle MaterialChangeHandle; // 0x370(0x08)
	struct TMap<int32_t, struct FString> SoundPlayMap; // 0x378(0x50)
	struct TMap<int32_t, struct FString> SoundStopMap; // 0x3c8(0x50)
	struct UParticleSystemComponent* ParticleHandle; // 0x418(0x08)
	struct FString PlayingAudioEventName; // 0x420(0x10)

	void RemoveFunc(struct AActor* Actor); // Function GC_Freeze.GC_Freeze_C.RemoveFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void ActiveFunc(struct AActor* TartgetActor); // Function GC_Freeze.GC_Freeze_C.ActiveFunc // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void Is Teammate(struct ASolarCharacter* Actor1, struct AActor* Actor2, bool& IsTeammate); // Function GC_Freeze.GC_Freeze_C.Is Teammate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void PlaySoundEvent(struct AActor* TargetActor, bool bPlay); // Function GC_Freeze.GC_Freeze_C.PlaySoundEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveBeginPlay(); // Function GC_Freeze.GC_Freeze_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GC_Freeze.GC_Freeze_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x2d656b0
	void ExecuteUbergraph_GC_Freeze(int32_t EntryPoint); // Function GC_Freeze.GC_Freeze_C.ExecuteUbergraph_GC_Freeze // (Final|UbergraphFunction) // @ game+0x2d656b0
};

