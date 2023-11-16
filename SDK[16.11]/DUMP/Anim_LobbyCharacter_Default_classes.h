// DynamicClass Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C
// Size: 0x6c0 (Inherited: 0x270)
struct UAnim_LobbyCharacter_Default_C : USolarLobbyAnimInstance {
	struct FAnimNode_Root AnimGraphNode_Root; // 0x270(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2a0(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2e8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x310(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x338(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3b0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3e0(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x458(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x488(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x538(0x78)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x5b0(0xc8)
	struct UAnimSequenceBase* IdleAnim; // 0x678(0x08)
	struct UAnimSequenceBase* CurIdleShow; // 0x680(0x08)
	struct TArray<struct UAnimSequenceBase*> IdleShowList; // 0x688(0x10)
	bool ShouldPlayShow; // 0x698(0x01)
	char pad_699[0x3]; // 0x699(0x03)
	float ShowCDTime; // 0x69c(0x04)
	struct FTimerHandle IdleShowCD; // 0x6a0(0x08)
	int32_t MaxNum; // 0x6a8(0x04)
	bool CharacterCanBeLooked; // 0x6ac(0x01)
	char pad_6AD[0x3]; // 0x6ad(0x03)
	float K2Node_Event_DeltaTimeX; // 0x6b0(0x04)
	bool K2Node_Event_IsVisible; // 0x6b4(0x01)
	char pad_6B5[0xb]; // 0x6b5(0x0b)

	void SetCharacterCanBeLooked(bool bpp__IsVisible__pf); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.SetCharacterCanBeLooked // (Native|Event|Public) // @ game+0x1b5ee20
	void Rand Idle Show BP(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.Rand Idle Show BP // (Native|Public|BlueprintCallable) // @ game+0x1b3c900
	void RandIdleShow(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.RandIdleShow // (Native|Event|Public) // @ game+0x1b4a1b0
	void PlayIdleShow(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.PlayIdleShow // (Native|Public|BlueprintCallable) // @ game+0x1b3c8c0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D // (Native|Public) // @ game+0x1b3c770
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213 // (Native|Public) // @ game+0x1b3c790
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C // (Native|Public) // @ game+0x1b3c7f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5 // (Native|Public) // @ game+0x1b3c7d0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC // (Native|Public) // @ game+0x1b3c710
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A // (Native|Public) // @ game+0x1b3c730
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.BlueprintUpdateAnimation // (Native|Event|Public) // @ game+0x1b628b0
	void AnimNotify_IdleShowStart(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleShowStart // (Native|Public|BlueprintCallable) // @ game+0x1b3c7b0
	void AnimNotify_IdleShowFinish(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleShowFinish // (Native|Public|BlueprintCallable) // @ game+0x1b4a2d0
	void AnimNotify_IdleAnimStart(); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleAnimStart // (Native|Public|BlueprintCallable) // @ game+0x1b3c8a0
	void AnimGraph(struct FPoseLink& bpp__AnimGraph__pf); // Function Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimGraph // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1b5ece0
};

