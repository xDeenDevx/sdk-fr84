// BlueprintGeneratedClass ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C
// Size: 0x331 (Inherited: 0x308)
struct AChaGCBP_SkydiveFly_C : AChaGC_SkydiveFly {
	struct USceneComponent* DefaultSceneRoot; // 0x308(0x08)
	struct UParticleSystemComponent* Particle; // 0x310(0x08)
	struct UParticleSystem* EnemyParticleAsset; // 0x318(0x08)
	struct UParticleSystem* FriendParticleAsset; // 0x320(0x08)
	struct UParticleSystem* DefenderParticleAsset; // 0x328(0x08)
	bool ShowParticleInLowLevelGraphicsQuality; // 0x330(0x01)

	void ShowEncircleParticle(bool bIsLocalTeam, bool bIsDefender); // Function ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C.ShowEncircleParticle // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool OnRemoveInternal(struct ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C.OnRemoveInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool WhileActiveInternal(struct ASolarCharacter* Character, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_SkydiveFly.ChaGCBP_SkydiveFly_C.WhileActiveInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

