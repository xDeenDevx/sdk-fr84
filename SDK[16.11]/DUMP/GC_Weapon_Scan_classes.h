// BlueprintGeneratedClass GC_Weapon_Scan.GC_Weapon_Scan_C
// Size: 0x2a8 (Inherited: 0x298)
struct AGC_Weapon_Scan_C : AGameplayCueNotify_Actor {
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Duration; // 0x2a0(0x04)
	float ScanRadius; // 0x2a4(0x04)

	void PlaySound(struct ASolarCharacter* CueOwner, struct FVector CueLocation); // Function GC_Weapon_Scan.GC_Weapon_Scan_C.PlaySound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GC_Weapon_Scan.GC_Weapon_Scan_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

