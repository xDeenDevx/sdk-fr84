// BlueprintGeneratedClass ChaGCBP_BlindMark_SlowDown.ChaGCBP_BlindMark_SlowDown_C
// Size: 0x2bc (Inherited: 0x2b0)
struct AChaGCBP_BlindMark_SlowDown_C : AChaGC_CharacterActorCueBase {
	struct USceneComponent* DefaultSceneRoot; // 0x2b0(0x08)
	int32_t EffectHandle; // 0x2b8(0x04)

	bool OnRemoveInternal(struct ASolarCharacter* NullableCharacter, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_BlindMark_SlowDown.ChaGCBP_BlindMark_SlowDown_C.OnRemoveInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
	bool WhileActiveInternal(struct ASolarCharacter* Character, struct FGameplayCueParameters& Parameters); // Function ChaGCBP_BlindMark_SlowDown.ChaGCBP_BlindMark_SlowDown_C.WhileActiveInternal // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2d656b0
};

