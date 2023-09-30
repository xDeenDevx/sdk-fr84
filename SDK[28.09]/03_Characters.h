/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package 03_Characters.

/// Class /Game/03_Characters/BluePrints/ActorEffect/DissolvedDeath/BP_DissolvedDeathController.BP_DissolvedDeathController_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UBP_DissolvedDeathController_C : public UTimedEffectController
{ 
public:
};

/// Class /Game/03_Characters/BluePrints/GameplayAbility/Abilities/Weapon/ChaGABP_Bolt.ChaGABP_Bolt_C
/// Size: 0x0000 (0x000468 - 0x000468)
class UChaGABP_Bolt_C : public UChaGA_Bolt
{ 
public:
};

/// Class /Game/03_Characters/Skill/Common/ChaGABP_CancelSkill_EMP.ChaGABP_CancelSkill_EMP_C
/// Size: 0x0000 (0x000418 - 0x000418)
class UChaGABP_CancelSkill_EMP_C : public USolarGameplayAbility
{ 
public:
};

/// Class /Game/03_Characters/Skill/SuperSkill/SuperSkill_AutoTurret/Blueprint/BP_AutoTurret_Bullet.BP_AutoTurret_Bullet_C
/// Size: 0x0000 (0x000508 - 0x000508)
class ABP_AutoTurret_Bullet_C : public ADefaultProjBullet_C
{ 
public:
};

/// Class /Game/03_Characters/Skill/SuperSkill/SuperSkill_EMP/Blueprint/GE_EMP.GE_EMP_C
/// Size: 0x0000 (0x000848 - 0x000848)
class UGE_EMP_C : public UGameplayEffect
{ 
public:
};

/// Class /Game/03_Characters/BluePrints/GameplayAbility/Abilities/Weapon/ChaGABP_Reload.ChaGABP_Reload_C
/// Size: 0x0000 (0x000478 - 0x000478)
class UChaGABP_Reload_C : public UChaGA_Reload
{ 
public:
};

/// Class /Game/03_Characters/BluePrints/GameplayAbility/Abilities/Weapon/ChaGABP_OpenScope.ChaGABP_OpenScope_C
/// Size: 0x0000 (0x0004B8 - 0x0004B8)
class UChaGABP_OpenScope_C : public UChaGA_OpenScope
{ 
public:
};

/// Class /Game/03_Characters/BluePrints/GameplayAbility/Abilities/Weapon/ChaGABP_Fire.ChaGABP_Fire_C
/// Size: 0x0000 (0x000470 - 0x000470)
class UChaGABP_Fire_C : public UChaGA_Fire
{ 
public:
};

/// Class /Game/03_Characters/BluePrints/ActorEffect/DissolvedDeath/BP_DissolvedDeath.BP_DissolvedDeath_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UBP_DissolvedDeath_C : public UMaterialVariableEffect
{ 
public:
};

/// Class /Game/03_Characters/BluePrints/ActorEffect/DissolvedDeath_Mphy02_Set0001A/BP_DissolvedDeath.BP_DissolvedDeath_C
/// Size: 0x0000 (0x0001D0 - 0x0001D0)
class UBP_DissolvedDeath_C : public UMaterialVariableEffect
{ 
public:
};

/// Class /Game/03_Characters/BluePrints/BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C
/// Size: 0x0010 (0x000438 - 0x000448)
class ABP_SolarLobbyCharacter_C : public ASolarLobbyCharacter
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0438   (0x0008)  
	UMediaSoundComponent*                              MediaSound;                                                 // 0x0440   (0x0008)  


	/// Functions
	// Function /Game/03_Characters/BluePrints/BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.GetModuleName
	FString GetModuleName();                                                                                                 // [0x2649560] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/03_Characters/BluePrints/BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ReceiveBeginPlay
	void ReceiveBeginPlay();                                                                                                 // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Game/03_Characters/BluePrints/BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C.ExecuteUbergraph_BP_SolarLobbyCharacter
	void ExecuteUbergraph_BP_SolarLobbyCharacter(int32_t EntryPoint);                                                        // [0x2649560] Final                
};

/// Class /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C
/// Size: 0x0450 (0x000270 - 0x0006C0)
class UAnim_LobbyCharacter_Default_C : public USolarLobbyAnimInstance
{ 
public:
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x0270   (0x0030)  
	FAnimNode_Slot                                     AnimGraphNode_Slot;                                         // 0x02A0   (0x0048)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x02E8   (0x0028)  
	FAnimNode_TransitionResult                         AnimGraphNode_TransitionResult;                             // 0x0310   (0x0028)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0338   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x03B0   (0x0030)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x03E0   (0x0078)  
	FAnimNode_StateResult                              AnimGraphNode_StateResult;                                  // 0x0458   (0x0030)  
	FAnimNode_StateMachine                             AnimGraphNode_StateMachine;                                 // 0x0488   (0x00B0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0538   (0x0078)  
	FAnimNode_TwoWayBlend                              AnimGraphNode_TwoWayBlend;                                  // 0x05B0   (0x00C8)  
	UAnimSequenceBase*                                 IdleAnim;                                                   // 0x0678   (0x0008)  
	UAnimSequenceBase*                                 CurIdleShow;                                                // 0x0680   (0x0008)  
	TArray<UAnimSequenceBase*>                         IdleShowList;                                               // 0x0688   (0x0010)  
	bool                                               ShouldPlayShow;                                             // 0x0698   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0699   (0x0003)  MISSED
	float                                              ShowCDTime;                                                 // 0x069C   (0x0004)  
	FTimerHandle                                       IdleShowCD;                                                 // 0x06A0   (0x0008)  
	int32_t                                            MaxNum;                                                     // 0x06A8   (0x0004)  
	bool                                               CharacterCanBeLooked;                                       // 0x06AC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x06AD   (0x0003)  MISSED
	float                                              K2Node_Event_DeltaTimeX;                                    // 0x06B0   (0x0004)  
	bool                                               K2Node_Event_IsVisible;                                     // 0x06B4   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x06B5   (0x000B)  MISSED


	/// Functions
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.SetCharacterCanBeLooked
	void SetCharacterCanBeLooked(bool bpp__IsVisible__pf);                                                                   // [0x1581270] Native|Event|Public  
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.Rand Idle Show BP
	void Rand Idle Show BP();                                                                                                // [0x1564620] Native|Public|BlueprintCallable 
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.RandIdleShow
	void RandIdleShow();                                                                                                     // [0x1570c70] Native|Event|Public  
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.PlayIdleShow
	void PlayIdleShow();                                                                                                     // [0x15645c0] Native|Public|BlueprintCallable 
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TwoWayBlend_1324C6B947749553DBAB488CF6FFAA1D(); // [0x1564600] Native|Public        
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_EFF864F2415FFE7C85667C9B1A0CC213(); // [0x15645e0] Native|Public        
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_TransitionResult_91AB0B2E43FDD2622D11D4823EEDD73C(); // [0x1564840] Native|Public        
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_D129D66148A76FE8404F6BB53C41B2F5(); // [0x1564820] Native|Public        
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_9F92E37E45D0DB25B7813584454F8BDC(); // [0x15646a0] Native|Public        
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_LobbyCharacter_Default_AnimGraphNode_SequencePlayer_8F8046714AA0A8276EC35FB1CD0F037A(); // [0x1564680] Native|Public        
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.BlueprintUpdateAnimation
	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);                                                                // [0x1584810] Native|Event|Public  
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleShowStart
	void AnimNotify_IdleShowStart();                                                                                         // [0x1564660] Native|Public|BlueprintCallable 
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleShowFinish
	void AnimNotify_IdleShowFinish();                                                                                        // [0x1570b30] Native|Public|BlueprintCallable 
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimNotify_IdleAnimStart
	void AnimNotify_IdleAnimStart();                                                                                         // [0x15647e0] Native|Public|BlueprintCallable 
	// Function /Game/03_Characters/Avatar/Lobby/ACommon/ABPTemplate/Anim_LobbyCharacter_Default.Anim_LobbyCharacter_Default_C.AnimGraph
	void AnimGraph(FPoseLink& bpp__AnimGraph__pf);                                                                           // [0x1564480] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Game/03_Characters/Avatar/Lobby/FDS/Normal/Animations/Anim_LobbyCharacter_FDS.Anim_LobbyCharacter_FDS_C
/// Size: 0x0000 (0x0006C0 - 0x0006C0)
class UAnim_LobbyCharacter_FDS_C : public UAnim_LobbyCharacter_Default_C
{ 
public:
};

/// Class /Game/03_Characters/Avatar/Lobby/FDS/Normal/Animations/Anim_LobbyCharacter_FDSNew.Anim_LobbyCharacter_FDSNew_C
/// Size: 0x0000 (0x0006C0 - 0x0006C0)
class UAnim_LobbyCharacter_FDSNew_C : public UAnim_LobbyCharacter_FDS_C
{ 
public:
};

