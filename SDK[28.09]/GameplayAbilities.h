/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayAbilities.

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x11D8 (0x000120 - 0x0012F8)
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0120   (0x0010)  MISSED
	TArray<FAttributeDefaults>                         DefaultStartingData;                                        // 0x0130   (0x0010)  
	TArray<UAttributeSet*>                             SpawnedAttributes;                                          // 0x0140   (0x0010)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_5[0x1A0];                                     // 0x0158   (0x01A0)  MISSED
	float                                              OutgoingDuration;                                           // 0x02F8   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02FC   (0x0004)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0300   (0x0020)  MISSED
	TArray<FString>                                    ClientDebugStrings;                                         // 0x0320   (0x0010)  
	TArray<FString>                                    ServerDebugStrings;                                         // 0x0330   (0x0010)  
	unsigned char                                      UnknownData03_5[0x60];                                      // 0x0340   (0x0060)  MISSED
	bool                                               UserAbilityActivationInhibited;                             // 0x03A0   (0x0001)  
	bool                                               ReplicationProxyEnabled;                                    // 0x03A1   (0x0001)  
	bool                                               bSuppressGrantAbility;                                      // 0x03A2   (0x0001)  
	bool                                               bSuppressGameplayCues;                                      // 0x03A3   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x03A4   (0x0004)  MISSED
	TArray<AGameplayAbilityTargetActor*>               SpawnedTargetActors;                                        // 0x03A8   (0x0010)  
	unsigned char                                      UnknownData05_5[0x28];                                      // 0x03B8   (0x0028)  MISSED
	AActor*                                            OwnerActor;                                                 // 0x03E0   (0x0008)  
	AActor*                                            AvatarActor;                                                // 0x03E8   (0x0008)  
	unsigned char                                      UnknownData06_5[0x10];                                      // 0x03F0   (0x0010)  MISSED
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                       // 0x0400   (0x0120)  
	unsigned char                                      UnknownData07_5[0x30];                                      // 0x0520   (0x0030)  MISSED
	TArray<UGameplayAbility*>                          AllReplicatedInstancedAbilities;                            // 0x0550   (0x0010)  
	unsigned char                                      UnknownData08_5[0x1D0];                                     // 0x0560   (0x01D0)  MISSED
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                         // 0x0730   (0x0038)  
	bool                                               bCachedIsNetSimulated;                                      // 0x0768   (0x0001)  
	bool                                               bPendingMontageRep;                                         // 0x0769   (0x0001)  
	unsigned char                                      UnknownData09_5[0x6];                                       // 0x076A   (0x0006)  MISSED
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                       // 0x0770   (0x0030)  
	unsigned char                                      UnknownData10_5[0xA0];                                      // 0x07A0   (0x00A0)  MISSED
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                      // 0x0840   (0x0480)  
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                         // 0x0CC0   (0x0128)  
	FActiveGameplayCueContainer                        MinimalReplicationGameplayCues;                             // 0x0DE8   (0x0128)  
	unsigned char                                      UnknownData11_5[0x128];                                     // 0x0F10   (0x0128)  MISSED
	TArray<char>                                       BlockedAbilityBindings;                                     // 0x1038   (0x0010)  
	unsigned char                                      UnknownData12_5[0x128];                                     // 0x1048   (0x0128)  MISSED
	FMinimalReplicationTagCountMap                     MinimalReplicationTags;                                     // 0x1170   (0x0060)  
	unsigned char                                      UnknownData13_5[0x10];                                      // 0x11D0   (0x0010)  MISSED
	FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap;                                 // 0x11E0   (0x0118)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	bool TryActivateAbilityByClass(UClass* InAbilityToActivate, bool bAllowRemoteActivation);                                // [0x7c4b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0x7c4a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	void TargetConfirm();                                                                                                    // [0x7c4a30] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	void TargetCancel();                                                                                                     // [0x7c4a10] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0x7c4980] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0x7c4880] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);                           // [0x7c47a0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x7c4300] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0x7c4190] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x7c3ff0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0x7c3d40] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0x7c3af0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x7c3910] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0x7c3860] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0x7c37b0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0x7c36c0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	void ServerPrintDebug_Request();                                                                                         // [0x7c3670] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0x7c34c0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	void ServerCurrentMontageSetPlayRate(UAnimMontage* ClientAnimMontage, float InPlayRate);                                 // [0x7c33b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	void ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); // [0x7c3220] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	void ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, FName SectionName);                          // [0x7c3110] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x7c2fe0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0x7c2e20] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	void RemoveActiveGameplayEffectBySourceEffect(UClass* GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0x7c2d10] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0x7c2c30] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0x7c2b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0x7c2a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0x7c2960] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0x7c2960] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	void OnRep_ServerDebugString();                                                                                          // [0x7c2940] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	void OnRep_ReplicatedAnimMontage();                                                                                      // [0x7c2920] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	void OnRep_OwningActor();                                                                                                // [0x7c2900] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	void OnRep_ClientDebugString();                                                                                          // [0x7c28e0] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	void OnRep_ActivateAbilities();                                                                                          // [0x7c28c0] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x7c2630] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x7c2450] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x7c21c0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x7c1f80] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0x7c1df0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x7c1c60] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x7c17e0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0x7c1650] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0x7c1a20] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x7c14c0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	FGameplayEffectSpecHandle MakeOutgoingSpec(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0x7c12a0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0x7c1220] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	void K2_InitStats(UClass* Attributes, UDataTable* DataTable);                                                            // [0x7c1150] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0x7c10b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	bool GetUserAbilityActivationInhibited();                                                                                // [0x7c1080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0x7c0e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	int32_t GetGameplayEffectCount(UClass* SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x7c0d50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0x7c0c20] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0x7c0b20] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0x7c0a90] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0x7c0950] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0x7c0840] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0x7c0740] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x7c0640] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x7c02f0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0x7c01f0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0x7c0110] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UClass* GameplayEffectClass, UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0x7bff50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0x7bfdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target); // [0x7bfc90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0x7bfbb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x2649560] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x2649560] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0000 (0x000318 - 0x000318)
class AAbilitySystemDebugHUD : public AHUD
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x0238 (0x000028 - 0x000260)
class UAbilitySystemGlobals : public UObject
{ 
public:
	FSoftClassPath                                     AbilitySystemGlobalsClassName;                              // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0040   (0x0028)  MISSED
	FGameplayTag                                       ActivateFailIsDeadTag;                                      // 0x0068   (0x0008)  
	FName                                              ActivateFailIsDeadName;                                     // 0x0070   (0x0008)  
	FGameplayTag                                       ActivateFailCooldownTag;                                    // 0x0078   (0x0008)  
	FName                                              ActivateFailCooldownName;                                   // 0x0080   (0x0008)  
	FGameplayTag                                       ActivateFailCostTag;                                        // 0x0088   (0x0008)  
	FName                                              ActivateFailCostName;                                       // 0x0090   (0x0008)  
	FGameplayTag                                       ActivateFailTagsBlockedTag;                                 // 0x0098   (0x0008)  
	FName                                              ActivateFailTagsBlockedName;                                // 0x00A0   (0x0008)  
	FGameplayTag                                       ActivateFailTagsMissingTag;                                 // 0x00A8   (0x0008)  
	FName                                              ActivateFailTagsMissingName;                                // 0x00B0   (0x0008)  
	FGameplayTag                                       ActivateFailNetworkingTag;                                  // 0x00B8   (0x0008)  
	FName                                              ActivateFailNetworkingName;                                 // 0x00C0   (0x0008)  
	int32_t                                            MinimalReplicationTagCountBits;                             // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FNetSerializeScriptStructCache                     TargetDataStructCache;                                      // 0x00D0   (0x0010)  
	bool                                               bAllowGameplayModEvaluationChannels;                        // 0x00E0   (0x0001)  
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                        // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FName                                              GameplayModEvaluationChannelAliases;                        // 0x00E4   (0x0050)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	FSoftObjectPath                                    GlobalCurveTableName;                                       // 0x0138   (0x0018)  
	UCurveTable*                                       GlobalCurveTable;                                           // 0x0150   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeMetaDataTableName;                           // 0x0158   (0x0018)  
	UDataTable*                                        GlobalAttributeMetaDataTable;                               // 0x0170   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName;                        // 0x0178   (0x0018)  
	TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames;                       // 0x0190   (0x0010)  
	TArray<UCurveTable*>                               GlobalAttributeDefaultsTables;                              // 0x01A0   (0x0010)  
	FSoftObjectPath                                    GlobalGameplayCueManagerClass;                              // 0x01B0   (0x0018)  
	FSoftObjectPath                                    GlobalGameplayCueManagerName;                               // 0x01C8   (0x0018)  
	TArray<FString>                                    GameplayCueNotifyPaths;                                     // 0x01E0   (0x0010)  
	FSoftObjectPath                                    GameplayTagResponseTableName;                               // 0x01F0   (0x0018)  
	UGameplayTagReponseTable*                          GameplayTagResponseTable;                                   // 0x0208   (0x0008)  
	bool                                               PredictTargetGameplayEffects;                               // 0x0210   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0211   (0x0007)  MISSED
	UGameplayCueManager*                               GlobalGameplayCueManager;                                   // 0x0218   (0x0008)  
	unsigned char                                      UnknownData05_6[0x40];                                      // 0x0220   (0x0040)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	void ToggleIgnoreAbilitySystemCosts();                                                                                   // [0x7c99e0] Exec|Native|Public   
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	void ToggleIgnoreAbilitySystemCooldowns();                                                                               // [0x7c99c0] Exec|Native|Public   
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0008 (0x000028 - 0x000030)
class UAttributeSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0040 (0x000030 - 0x000070)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
public:
	float                                              MaxHealth;                                                  // 0x0030   (0x0004)  
	float                                              Health;                                                     // 0x0034   (0x0004)  
	float                                              Mana;                                                       // 0x0038   (0x0004)  
	float                                              MaxMana;                                                    // 0x003C   (0x0004)  
	float                                              Damage;                                                     // 0x0040   (0x0004)  
	float                                              SpellDamage;                                                // 0x0044   (0x0004)  
	float                                              PhysicalDamage;                                             // 0x0048   (0x0004)  
	float                                              CritChance;                                                 // 0x004C   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0050   (0x0004)  
	float                                              ArmorDamageReduction;                                       // 0x0054   (0x0004)  
	float                                              DodgeChance;                                                // 0x0058   (0x0004)  
	float                                              LifeSteal;                                                  // 0x005C   (0x0004)  
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              StackingAttribute1;                                         // 0x0064   (0x0004)  
	float                                              StackingAttribute2;                                         // 0x0068   (0x0004)  
	float                                              NoStackAttribute;                                           // 0x006C   (0x0004)  
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x02B0   (0x0018)  MISSED
	UAbilitySystemComponent*                           AbilitySystemComponent;                                     // 0x02C8   (0x0008)  
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0018 (0x000068 - 0x000080)
class UAbilityTask : public UGameplayTask
{ 
public:
	UGameplayAbility*                                  Ability;                                                    // 0x0068   (0x0008)  
	UAbilitySystemComponent*                           AbilitySystemComponent;                                     // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
public:
	FName                                              ForceName;                                                  // 0x0080   (0x0008)  
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                         // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	FVector                                            FinishSetVelocity;                                          // 0x008C   (0x000C)  
	float                                              FinishClampVelocity;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	UCharacterMovementComponent*                       MovementComponent;                                          // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x00B8   (0x0010)  
	FVector                                            WorldDirection;                                             // 0x00C8   (0x000C)  
	float                                              Strength;                                                   // 0x00D4   (0x0004)  
	float                                              Duration;                                                   // 0x00D8   (0x0004)  
	bool                                               bIsAdditive;                                                // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	UCurveFloat*                                       StrengthOverTime;                                           // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x7c7b40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnLanded;                                                   // 0x00C8   (0x0010)  
	FRotator                                           Rotation;                                                   // 0x00D8   (0x000C)  
	float                                              Distance;                                                   // 0x00E4   (0x0004)  
	float                                              Height;                                                     // 0x00E8   (0x0004)  
	float                                              Duration;                                                   // 0x00EC   (0x0004)  
	float                                              MinimumLandedTriggerTime;                                   // 0x00F0   (0x0004)  
	bool                                               bFinishOnLanded;                                            // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	UCurveVector*                                      PathOffsetCurve;                                            // 0x00F8   (0x0008)  
	UCurveFloat*                                       TimeMappingCurve;                                           // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0108   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	void OnLandedCallback(FHitResult& Hit);                                                                                  // [0x7c97f0] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	void Finish();                                                                                                           // [0x7c95f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve); // [0x7c7e40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x0078 (0x0000B8 - 0x000130)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00D0   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00DC   (0x000C)  
	AActor*                                            TargetActor;                                                // 0x00E8   (0x0008)  
	FVector                                            TargetLocationOffset;                                       // 0x00F0   (0x000C)  
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                            // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x0100   (0x0004)  
	bool                                               bDisableDestinationReachedInterrupt;                        // 0x0104   (0x0001)  
	bool                                               bSetNewMovementMode;                                        // 0x0105   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x0106   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x0107   (0x0001)  
	UCurveVector*                                      PathOffsetCurve;                                            // 0x0108   (0x0008)  
	UCurveFloat*                                       TimeMappingCurve;                                           // 0x0110   (0x0008)  
	UCurveFloat*                                       TargetLerpSpeedHorizontalCurve;                             // 0x0118   (0x0008)  
	UCurveFloat*                                       TargetLerpSpeedVerticalCurve;                               // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	void OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget);                                                    // [0x7c98f0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	void OnRep_TargetLocation();                                                                                             // [0x7c98d0] Final|Native|Protected 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x7c8a50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x7c8210] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnTimedOut;                                                 // 0x00B8   (0x0010)  
	FMulticastInlineDelegate                           OnTimedOutAndDestinationReached;                            // 0x00C8   (0x0010)  
	FVector                                            StartLocation;                                              // 0x00D8   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00E4   (0x000C)  
	float                                              Duration;                                                   // 0x00F0   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x00F4   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x00F5   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x00F6   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00F7   (0x0001)  MISSED
	UCurveVector*                                      PathOffsetCurve;                                            // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0100   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x7c8700] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x00B8   (0x0010)  
	FVector                                            Location;                                                   // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	AActor*                                            LocationActor;                                              // 0x00D8   (0x0008)  
	float                                              Strength;                                                   // 0x00E0   (0x0004)  
	float                                              Duration;                                                   // 0x00E4   (0x0004)  
	float                                              Radius;                                                     // 0x00E8   (0x0004)  
	bool                                               bIsPush;                                                    // 0x00EC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00ED   (0x0001)  
	bool                                               bNoZForce;                                                  // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00EF   (0x0001)  MISSED
	UCurveFloat*                                       StrengthDistanceFalloff;                                    // 0x00F0   (0x0008)  
	UCurveFloat*                                       StrengthOverTime;                                           // 0x00F8   (0x0008)  
	bool                                               bUseFixedWorldDirection;                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	FRotator                                           FixedWorldDirection;                                        // 0x0104   (0x000C)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, UCurveFloat* StrengthDistanceFalloff, UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x7c90e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x0048 (0x000080 - 0x0000C8)
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnTargetLocationReached;                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0090   (0x0004)  MISSED
	FVector                                            StartLocation;                                              // 0x0094   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00A0   (0x000C)  
	float                                              DurationOfMovement;                                         // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B0   (0x0008)  MISSED
	UCurveFloat*                                       LerpCurve;                                                  // 0x00B8   (0x0008)  
	UCurveVector*                                      LerpCurveVector;                                            // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	UAbilityTask_MoveToLocation* MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve); // [0x7c9610] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0018 (0x000080 - 0x000098)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnSync;                                                     // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	UAbilityTask_NetworkSyncPoint* WaitNetSync(UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);           // [0x7cefc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	void OnSignalCallback();                                                                                                 // [0x7cc960] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0088 (0x000080 - 0x000108)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnCompleted;                                                // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnBlendOut;                                                 // 0x0090   (0x0010)  
	FMulticastInlineDelegate                           OnInterrupted;                                              // 0x00A0   (0x0010)  
	FMulticastInlineDelegate                           OnCancelled;                                                // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x00C0   (0x0028)  MISSED
	UAnimMontage*                                      MontageToPlay;                                              // 0x00E8   (0x0008)  
	float                                              Rate;                                                       // 0x00F0   (0x0004)  
	FName                                              StartSection;                                               // 0x00F4   (0x0008)  
	float                                              AnimRootMotionTranslationScale;                             // 0x00FC   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x0100   (0x0001)  
	bool                                               bInterruptedCalledBeforeBlendingOut;                        // 0x0101   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0102   (0x0006)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	void OnMontageInterrupted();                                                                                             // [0x7cc940] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);                                                           // [0x7cc870] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x7cc7a0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale); // [0x7cbf30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_Repeat : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnPerformAction;                                            // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnFinished;                                                 // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	UAbilityTask_Repeat* RepeatAction(UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount);  // [0x7cc980] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x0048 (0x000080 - 0x0000C8)
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           Success;                                                    // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           DidNotSpawn;                                                // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	UAbilityTask_SpawnActor* SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class); // [0x7cca90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor); // [0x7cc140] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class, AActor*& SpawnedActor); // [0x7cbc10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnStateEnded;                                               // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnStateInterrupted;                                         // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	UAbilityTask_StartAbilityState* StartAbilityState(UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0x7ccc50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           TimeElapsed;                                                // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration); // [0x7ccea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	UAbilityTask_VisualizeTargeting* VisualizeTargeting(UGameplayAbility* OwningAbility, UClass* Class, FName TaskInstanceName, float Duration); // [0x7ccd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);                    // [0x7cc300] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor);     // [0x7cbe10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x00C8 (0x000080 - 0x000148)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnActivate;                                                 // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB8];                                      // 0x0090   (0x00B8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x7cd410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x7cd620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x7cd270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	void OnAbilityActivate(UGameplayAbility* ActivatedAbility);                                                              // [0x7cc3d0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x0078 (0x000080 - 0x0000F8)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnCommit;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0090   (0x0068)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0x7cd940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0x7cd7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	void OnAbilityCommit(UGameplayAbility* ActivatedAbility);                                                                // [0x7cc460] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x0078 (0x000080 - 0x0000F8)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0090   (0x0060)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner); // [0x7ce510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	UAbilityTask_WaitAttributeChange* WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner); // [0x7cdac0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x00C0 (0x000080 - 0x000140)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0xA8];                                      // 0x0090   (0x00A8)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0x7cdda0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x0070 (0x000080 - 0x0000F0)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0090   (0x0058)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0x7ce220] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0018 (0x000080 - 0x000098)
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnCancel;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	UAbilityTask_WaitCancel* WaitCancel(UGameplayAbility* OwningAbility);                                                    // [0x7ccff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	void OnLocalCancelCallback();                                                                                            // [0x7cc740] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	void OnCancelCallback();                                                                                                 // [0x7cc650] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnConfirm;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	UAbilityTask_WaitConfirm* WaitConfirm(UGameplayAbility* OwningAbility);                                                  // [0x7cd080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	void OnConfirmCallback(UGameplayAbility* InAbility);                                                                     // [0x7cc690] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnConfirm;                                                  // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           OnCancel;                                                   // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(UGameplayAbility* OwningAbility);                                      // [0x7cd110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	void OnLocalConfirmCallback();                                                                                           // [0x7cc780] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	void OnLocalCancelCallback();                                                                                            // [0x7cc760] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	void OnConfirmCallback();                                                                                                // [0x7cc720] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	void OnCancelCallback();                                                                                                 // [0x7cc670] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnFinish;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	UAbilityTask_WaitDelay* WaitDelay(UGameplayAbility* OwningAbility, float Time);                                          // [0x7cd1a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x0158 (0x000080 - 0x0001D8)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_2[0x148];                                     // 0x0080   (0x0148)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0x7cc4f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0020 (0x0001D8 - 0x0001F8)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	FMulticastInlineDelegate                           OnApplied;                                                  // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x7cec80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x7ce870] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0020 (0x0001D8 - 0x0001F8)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	FMulticastInlineDelegate                           OnApplied;                                                  // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x01E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x7d5e40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0x7d5a30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x00C8 (0x000080 - 0x000148)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           bLocked;                                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0xA8];                                      // 0x0090   (0x00A8)  MISSED
	UAbilitySystemComponent*                           ExternalOwner;                                              // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0x7d6180] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnRemoved;                                                  // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           InvalidHandle;                                              // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x7d57e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0x7d4ae0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           InvalidHandle;                                              // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x7d58c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);                // [0x7d4bc0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           EventReceived;                                              // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0090   (0x0008)  MISSED
	UAbilitySystemComponent*                           OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x7d6490] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0080   (0x0010)  MISSED
	UAbilitySystemComponent*                           OptionalExternalTarget;                                     // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount);                                                            // [0x7d33e0] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
public:
	FMulticastInlineDelegate                           Added;                                                      // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x7d6630] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
public:
	FMulticastInlineDelegate                           Removed;                                                    // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x7d6780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnPress;                                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	UAbilityTask_WaitInputPress* WaitInputPress(UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);                  // [0x7d68d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	void OnPressCallback();                                                                                                  // [0x7d4fd0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnRelease;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	UAbilityTask_WaitInputRelease* WaitInputRelease(UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);             // [0x7d69a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	void OnReleaseCallback();                                                                                                // [0x7d4ff0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnChange;                                                   // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode);  // [0x7d4ec0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0x7d2ff0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0010 (0x000080 - 0x000090)
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnOverLap;                                                  // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	UAbilityTask_WaitOverlap* WaitForOverlap(UGameplayAbility* OwningAbility);                                               // [0x7d59a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x7d4ce0] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           ValidData;                                                  // 0x0080   (0x0010)  
	FMulticastInlineDelegate                           Cancelled;                                                  // 0x0090   (0x0010)  
	UClass*                                            TargetClass;                                                // 0x00A0   (0x0008)  
	AGameplayAbilityTargetActor*                       TargetActor;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, AGameplayAbilityTargetActor* TargetActor); // [0x7d6bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	UAbilityTask_WaitTargetData* WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, UClass* Class); // [0x7d6a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	void OnTargetDataReplicatedCancelledCallback();                                                                          // [0x7d53b0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0x7d5250] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0x7d5130] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0x7d5010] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.K2_ExternalConfirm
	void K2_ExternalConfirm(bool bEndTask);                                                                                  // [0x7d44e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.K2_ExternalCancel
	void K2_ExternalCancel();                                                                                                // [0x7d44c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);                    // [0x7d3310] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor);     // [0x7d2d70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
public:
	FMulticastInlineDelegate                           OnVelocityChage;                                            // 0x0080   (0x0010)  
	UMovementComponent*                                CachedMovementComponent;                                    // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0x7d30c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x03D8 (0x000028 - 0x000400)
class UGameplayAbility : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x0028   (0x0080)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x00A8   (0x0020)  
	bool                                               bReplicateInputDirectly;                                    // 0x00C8   (0x0001)  
	bool                                               RemoteInstanceEnded;                                        // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CA   (0x0004)  MISSED
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                          // 0x00CE   (0x0001)  
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                           // 0x00CF   (0x0001)  
	bool                                               bServerRespectsRemoteAbilityCancellation;                   // 0x00D0   (0x0001)  
	bool                                               bRetriggerInstancedAbility;                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00D2   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                      // 0x00D8   (0x0020)  
	FGameplayEventData                                 CurrentEventData;                                           // 0x00F8   (0x00B0)  
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                         // 0x01A8   (0x0001)  
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                          // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x01AA   (0x0006)  MISSED
	UClass*                                            CostGameplayEffectClass;                                    // 0x01B0   (0x0008)  
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                            // 0x01B8   (0x0010)  
	UClass*                                            CooldownGameplayEffectClass;                                // 0x01C8   (0x0008)  
	FGameplayTagQuery                                  CancelAbilitiesMatchingTagQuery;                            // 0x01D0   (0x0048)  
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                     // 0x0218   (0x0020)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x0238   (0x0020)  
	FGameplayTagContainer                              ActivationOwnedTags;                                        // 0x0258   (0x0020)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0278   (0x0020)  
	FGameplayTagContainer                              ActivationBlockedTags;                                      // 0x0298   (0x0020)  
	FGameplayTagContainer                              SourceRequiredTags;                                         // 0x02B8   (0x0020)  
	FGameplayTagContainer                              SourceBlockedTags;                                          // 0x02D8   (0x0020)  
	FGameplayTagContainer                              TargetRequiredTags;                                         // 0x02F8   (0x0020)  
	FGameplayTagContainer                              TargetBlockedTags;                                          // 0x0318   (0x0020)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0338   (0x0020)  MISSED
	TArray<UGameplayTask*>                             ActiveTasks;                                                // 0x0358   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0368   (0x0010)  MISSED
	UAnimMontage*                                      CurrentMontage;                                             // 0x0378   (0x0008)  
	unsigned char                                      UnknownData06_5[0x60];                                      // 0x0380   (0x0060)  MISSED
	bool                                               bIsActive;                                                  // 0x03E0   (0x0001)  
	bool                                               bIsCancelable;                                              // 0x03E1   (0x0001)  
	bool                                               bIsBlockingOtherAbilities;                                  // 0x03E2   (0x0001)  
	unsigned char                                      UnknownData07_5[0x15];                                      // 0x03E3   (0x0015)  MISSED
	bool                                               bMarkPendingKillOnAbilityEnd;                               // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x03F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0x7d5750] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0x7d56c0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0x7d53f0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	void RemoveGrantedByEffect();                                                                                            // [0x7d53d0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	void MontageStop(float OverrideBlendOutTime);                                                                            // [0x7d4a60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0x7d4990] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	void MontageJumpToSection(FName SectionName);                                                                            // [0x7d4900] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0x7d4800] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0x7d4760] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UClass* GameplayEffectClass, float Level);                      // [0x7d4600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x2649560] Event|Protected|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0x7d4570] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0x7d4300] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0x7d41c0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	void K2_EndAbility();                                                                                                    // [0x7d41a0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	void K2_CommitExecute();                                                                                                 // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0x7d4100] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0x7d4010] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	bool K2_CommitAbility();                                                                                                 // [0x7d3fe0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	bool K2_CheckAbilityCost();                                                                                              // [0x7d3fb0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	bool K2_CheckAbilityCooldown();                                                                                          // [0x7d3f80] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	void K2_CancelAbility();                                                                                                 // [0x7d3f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x2649560] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0x7d3d40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0x7d3c50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0x7d3a40] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0x7d38c0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x2649560] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	void K2_ActivateAbility();                                                                                               // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	void InvalidateClientPredictionKey();                                                                                    // [0x7d38a0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                               // [0x7d3870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	AActor* GetOwningActorFromActorInfo();                                                                                   // [0x7d3840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0x7d37c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	UObject* GetCurrentSourceObject();                                                                                       // [0x7d3790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	UAnimMontage* GetCurrentMontage();                                                                                       // [0x7d3760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	float GetCooldownTimeRemaining();                                                                                        // [0x7d3730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0x7d35b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	AActor* GetAvatarActorFromActorInfo();                                                                                   // [0x7d3580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0x7d3510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                       // [0x7d34e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	int32_t GetAbilityLevel();                                                                                               // [0x7d34b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	void EndTaskByInstanceName(FName InstanceName);                                                                          // [0x7d3280] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0x7d31f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0x7d2f20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0x7d2e90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0x7d2c90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0x7d2b70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0x7d2a50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x7d2820] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x7d2700] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x0000 (0x000400 - 0x000400)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x0038 (0x000400 - 0x000438)
class UGameplayAbility_Montage : public UGameplayAbility
{ 
public:
	UAnimMontage*                                      MontageToPlay;                                              // 0x0400   (0x0008)  
	float                                              PlayRate;                                                   // 0x0408   (0x0004)  
	FName                                              SectionName;                                                // 0x040C   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0414   (0x0004)  MISSED
	TArray<UClass*>                                    GameplayEffectClassesWhileAnimating;                        // 0x0418   (0x0010)  
	TArray<UGameplayEffect*>                           GameplayEffectsWhileAnimating;                              // 0x0428   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameplayAbilityBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayAbilitySet : public UDataAsset
{ 
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0118 (0x000228 - 0x000340)
class AGameplayAbilityTargetActor : public AActor
{ 
public:
	bool                                               ShouldProduceTargetDataOnServer;                            // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0229   (0x0007)  MISSED
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                              // 0x0230   (0x0070)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x02A0   (0x0030)  MISSED
	APlayerController*                                 MasterPC;                                                   // 0x02D0   (0x0008)  
	UGameplayAbility*                                  OwningAbility;                                              // 0x02D8   (0x0008)  
	bool                                               bDestroyOnConfirmation;                                     // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02E1   (0x0007)  MISSED
	AActor*                                            SourceActor;                                                // 0x02E8   (0x0008)  
	FWorldReticleParameters                            ReticleParams;                                              // 0x02F0   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x02FC   (0x0004)  MISSED
	UClass*                                            ReticleClass;                                               // 0x0300   (0x0008)  
	FGameplayTargetDataFilterHandle                    Filter;                                                     // 0x0308   (0x0010)  
	bool                                               bDebug;                                                     // 0x0318   (0x0001)  
	unsigned char                                      UnknownData04_5[0x17];                                      // 0x0319   (0x0017)  MISSED
	UAbilitySystemComponent*                           GenericDelegateBoundASC;                                    // 0x0330   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0338   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	void ConfirmTargeting();                                                                                                 // [0x7debe0] Native|Public        
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	void CancelTargeting();                                                                                                  // [0x7debc0] Native|Public        
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0010 (0x000340 - 0x000350)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
public:
	float                                              MaxRange;                                                   // 0x0338   (0x0004)  
	FCollisionProfileName                              TraceProfile;                                               // 0x033C   (0x0008)  
	bool                                               bTraceAffectsAimPitch;                                      // 0x0344   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0345   (0x000B)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0020 (0x000350 - 0x000370)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	float                                              CollisionRadius;                                            // 0x0350   (0x0004)  
	float                                              CollisionHeight;                                            // 0x0354   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0358   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0020 (0x000370 - 0x000390)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
public:
	UClass*                                            PlacedActorClass;                                           // 0x0370   (0x0008)  
	UMaterialInterface*                                PlacedActorMaterial;                                        // 0x0378   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0380   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0000 (0x000340 - 0x000340)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0000 (0x000350 - 0x000350)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0020 (0x000228 - 0x000248)
class AGameplayAbilityWorldReticle : public AActor
{ 
public:
	FWorldReticleParameters                            Parameters;                                                 // 0x0228   (0x000C)  
	bool                                               bFaceOwnerFlat;                                             // 0x0234   (0x0001)  
	bool                                               bSnapToTargetedActor;                                       // 0x0235   (0x0001)  
	bool                                               bIsTargetValid;                                             // 0x0236   (0x0001)  
	bool                                               bIsTargetAnActor;                                           // 0x0237   (0x0001)  
	APlayerController*                                 MasterPC;                                                   // 0x0238   (0x0008)  
	AActor*                                            TargetingActor;                                             // 0x0240   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x2649560] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	void OnValidTargetChanged(bool bNewValue);                                                                               // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	void OnParametersInitialized();                                                                                          // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0x7dec00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0018 (0x000248 - 0x000260)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
public:
	UCapsuleComponent*                                 CollisionComponent;                                         // 0x0248   (0x0008)  
	TArray<UActorComponent*>                           VisualizationComponents;                                    // 0x0250   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x02E0 (0x000030 - 0x000310)
class UGameplayCueManager : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0030   (0x0018)  MISSED
	FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary;                            // 0x0048   (0x0050)  
	FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary;                             // 0x0098   (0x0050)  
	unsigned char                                      UnknownData01_5[0x1C8];                                     // 0x00E8   (0x01C8)  MISSED
	TArray<UClass*>                                    LoadedGameplayCueNotifyClasses;                             // 0x02B0   (0x0010)  
	TArray<UClass*>                                    GameplayCueClassesForPreallocation;                         // 0x02C0   (0x0010)  
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                         // 0x02D0   (0x0010)  
	int32_t                                            GameplayCueSendContextCount;                                // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	TArray<FPreallocationInfo>                         PreallocationInfoList_Internal;                             // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x02F8   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0070 (0x000228 - 0x000298)
class AGameplayCueNotify_Actor : public AActor
{ 
public:
	bool                                               bAutoDestroyOnRemove;                                       // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0229   (0x0003)  MISSED
	float                                              AutoDestroyDelay;                                           // 0x022C   (0x0004)  
	bool                                               WarnIfTimelineIsStillRunning;                               // 0x0230   (0x0001)  
	bool                                               WarnIfLatentActionIsStillRunning;                           // 0x0231   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0232   (0x0002)  MISSED
	FGameplayTag                                       GameplayCueTag;                                             // 0x0234   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	FGameplayTagReferenceHelper                        ReferenceHelper;                                            // 0x0240   (0x0010)  
	FName                                              GameplayCueName;                                            // 0x0250   (0x0008)  
	bool                                               bAutoAttachToOwner;                                         // 0x0258   (0x0001)  
	bool                                               IsOverride;                                                 // 0x0259   (0x0001)  
	bool                                               bUniqueInstancePerInstigator;                               // 0x025A   (0x0001)  
	bool                                               bUniqueInstancePerSourceObject;                             // 0x025B   (0x0001)  
	bool                                               bAllowMultipleOnActiveEvents;                               // 0x025C   (0x0001)  
	bool                                               bAllowMultipleWhileActiveEvents;                            // 0x025D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x025E   (0x0002)  MISSED
	int32_t                                            NumPreallocatedInstances;                                   // 0x0260   (0x0004)  
	unsigned char                                      UnknownData04_6[0x34];                                      // 0x0264   (0x0034)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x7e6b60] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x7e67c0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	void OnOwnerDestroyed(AActor* DestroyedActor);                                                                           // [0x7e6730] Native|Public        
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x7e6390] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x7e5ff0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x2649560] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	void K2_EndGameplayCue();                                                                                                // [0x7e5fd0] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0028 (0x000028 - 0x000050)
class UGameplayCueNotify_Static : public UObject
{ 
public:
	FGameplayTag                                       GameplayCueTag;                                             // 0x0028   (0x0008)  
	FGameplayTagReferenceHelper                        ReferenceHelper;                                            // 0x0030   (0x0010)  
	FName                                              GameplayCueName;                                            // 0x0040   (0x0008)  
	bool                                               IsOverride;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x7e6d30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x7e6990] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x7e6560] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x7e61c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x2649560] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0010 (0x000050 - 0x000060)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
public:
	USoundBase*                                        Sound;                                                      // 0x0050   (0x0008)  
	UParticleSystem*                                   ParticleSystem;                                             // 0x0058   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0060 (0x000030 - 0x000090)
class UGameplayCueSet : public UDataAsset
{ 
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0820 (0x000028 - 0x000848)
class UGameplayEffect : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	EGameplayEffectDurationType                        DurationPolicy;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                          // 0x0038   (0x01A8)  
	FScalableFloat                                     Period;                                                     // 0x01E0   (0x0020)  
	bool                                               bExecutePeriodicEffectOnApplication;                        // 0x0200   (0x0001)  
	EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy;                                   // 0x0201   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0202   (0x0006)  MISSED
	TArray<FGameplayModifierInfo>                      Modifiers;                                                  // 0x0208   (0x0010)  
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                                 // 0x0218   (0x0010)  
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0228   (0x0020)  
	TArray<UClass*>                                    ApplicationRequirements;                                    // 0x0248   (0x0010)  
	TArray<UClass*>                                    TargetEffectClasses;                                        // 0x0258   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0268   (0x0010)  
	TArray<UClass*>                                    OverflowEffects;                                            // 0x0278   (0x0010)  
	bool                                               bDenyOverflowApplication;                                   // 0x0288   (0x0001)  
	bool                                               bClearStackOnOverflow;                                      // 0x0289   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x028A   (0x0006)  MISSED
	TArray<UClass*>                                    PrematureExpirationEffectClasses;                           // 0x0290   (0x0010)  
	TArray<UClass*>                                    RoutineExpirationEffectClasses;                             // 0x02A0   (0x0010)  
	bool                                               bRequireModifierSuccessToTriggerCues;                       // 0x02B0   (0x0001)  
	bool                                               bSuppressStackingCues;                                      // 0x02B1   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x02B2   (0x0006)  MISSED
	TArray<FGameplayEffectCue>                         GameplayCues;                                               // 0x02B8   (0x0010)  
	UGameplayEffectUIData*                             UIData;                                                     // 0x02C8   (0x0008)  
	FInheritedTagContainer                             InheritableGameplayEffectTags;                              // 0x02D0   (0x0060)  
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                              // 0x0330   (0x0060)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x0390   (0x0050)  
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x03E0   (0x0050)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0430   (0x0050)  
	FGameplayTagRequirements                           RemovalSourceTagRequirements;                               // 0x0480   (0x0050)  
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                              // 0x04D0   (0x0060)  
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                             // 0x0530   (0x0050)  
	FGameplayEffectQuery                               GrantedApplicationImmunityQuery;                            // 0x0580   (0x0150)  
	unsigned char                                      UnknownData05_5[0x8];                                       // 0x06D0   (0x0008)  MISSED
	FGameplayEffectQuery                               RemoveGameplayEffectQuery;                                  // 0x06D8   (0x0150)  
	unsigned char                                      UnknownData06_5[0x1];                                       // 0x0828   (0x0001)  MISSED
	EGameplayEffectStackingType                        StackingType;                                               // 0x0829   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x082A   (0x0002)  MISSED
	int32_t                                            StackLimitCount;                                            // 0x082C   (0x0004)  
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                                 // 0x0830   (0x0001)  
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                     // 0x0831   (0x0001)  
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                      // 0x0832   (0x0001)  
	unsigned char                                      UnknownData08_5[0x5];                                       // 0x0833   (0x0005)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                           // 0x0838   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayEffectCalculation : public UObject
{ 
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bRequiresPassedInTags;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // [0x7eb790] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectUIData : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
public:
	FText                                              Description;                                                // 0x0028   (0x0018)  
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	float CalculateBaseMagnitude(FGameplayEffectSpec& Spec);                                                                 // [0x7eb560] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x01B8 (0x000030 - 0x0001E8)
class UGameplayTagReponseTable : public UDataAsset
{ 
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x1A8];                                     // 0x0040   (0x01A8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, UAbilitySystemComponent* ASC, int32_t idx);                    // [0x7eb900] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTickableAttributeSetInterface : public UInterface
{ 
public:
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x0364 (0x00000C - 0x000370)
struct FActiveGameplayEffect : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x000C   (0x000C)  MISSED
	FGameplayEffectSpec                                Spec;                                                       // 0x0018   (0x0298)  
	FPredictionKey                                     PredictionKey;                                              // 0x02B0   (0x0018)  
	float                                              StartServerWorldTime;                                       // 0x02C8   (0x0004)  
	float                                              CachedStartServerWorldTime;                                 // 0x02CC   (0x0004)  
	float                                              StartWorldTime;                                             // 0x02D0   (0x0004)  
	bool                                               bIsInhibited;                                               // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x9B];                                      // 0x02D5   (0x009B)  MISSED
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPredictionKey
{ 
	int16_t                                            Current;                                                    // 0x0000   (0x0002)  
	int16_t                                            Base;                                                       // 0x0002   (0x0002)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	UPackageMap*                                       PredictiveConnection;                                       // 0x0008   (0x0008)  
	bool                                               bIsStale;                                                   // 0x0010   (0x0001)  
	bool                                               bIsServerInitiated;                                         // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (0x000000 - 0x000298)
struct FGameplayEffectSpec
{ 
	UGameplayEffect*                                   Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                                 // 0x0018   (0x0028)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Duration;                                                   // 0x0050   (0x0004)  
	float                                              Period;                                                     // 0x0054   (0x0004)  
	float                                              ChanceToApplyToTarget;                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FTagContainerAggregator                            CapturedSourceTags;                                         // 0x0060   (0x0088)  
	FTagContainerAggregator                            CapturedTargetTags;                                         // 0x00E8   (0x0088)  
	FGameplayTagContainer                              DynamicGrantedTags;                                         // 0x0170   (0x0020)  
	FGameplayTagContainer                              DynamicAssetTags;                                           // 0x0190   (0x0020)  
	TArray<FModifierSpec>                              Modifiers;                                                  // 0x01B0   (0x0010)  
	int32_t                                            StackCount;                                                 // 0x01C0   (0x0004)  
	bool                                               bCompletedSourceAttributeCapture;                           // 0x01C4:0 (0x0001)  
	bool                                               bCompletedTargetAttributeCapture;                           // 0x01C4:1 (0x0001)  
	bool                                               bDurationLocked;                                            // 0x01C4:2 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x01C5   (0x0003)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                        // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData03_5[0xA0];                                      // 0x01D8   (0x00A0)  MISSED
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0278   (0x0018)  
	float                                              Level;                                                      // 0x0290   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayEffectContextHandle
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0090 (0x000000 - 0x000090)
struct FGameplayAbilitySpecDef
{ 
	UClass*                                            Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0020)  
	int32_t                                            InputID;                                                    // 0x0028   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	UObject*                                           SourceObject;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0038   (0x0050)  MISSED
	FGameplayAbilitySpecHandle                         AssignedHandle;                                             // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FGameplayAbilitySpecHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0020 (0x000000 - 0x000020)
struct FScalableFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FCurveTableRowHandle                               Curve;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (0x000000 - 0x000004)
struct FModifierSpec
{ 
	float                                              EvaluatedMagnitude;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (0x000000 - 0x000088)
struct FTagContainerAggregator
{ 
	FGameplayTagContainer                              CapturedActorTags;                                          // 0x0000   (0x0020)  
	FGameplayTagContainer                              CapturedSpecTags;                                           // 0x0020   (0x0020)  
	FGameplayTagContainer                              ScopedTags;                                                 // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayEffectAttributeCaptureSpecContainer
{ 
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                           // 0x0000   (0x0010)  
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                           // 0x0010   (0x0010)  
	bool                                               bHasNonSnapshottedAttributes;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayEffectAttributeCaptureSpec
{ 
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                          // 0x0000   (0x0040)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayEffectAttributeCaptureDefinition
{ 
	FGameplayAttribute                                 AttributeToCapture;                                         // 0x0000   (0x0038)  
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                            // 0x0038   (0x0001)  
	bool                                               bSnapshot;                                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGameplayAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0010   (0x0020)  MISSED
	UStruct*                                           AttributeOwner;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (0x000000 - 0x000040)
struct FGameplayEffectModifiedAttribute
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	float                                              TotalMagnitude;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FActiveGameplayEffectHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	bool                                               bPassedFiltersAndWasExecuted;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayEffectSpecHandle
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayEffectRemovalInfo
{ 
	bool                                               bPrematureRemoval;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FGameplayEventData
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x0008)  
	AActor*                                            Instigator;                                                 // 0x0008   (0x0008)  
	AActor*                                            Target;                                                     // 0x0010   (0x0008)  
	UObject*                                           OptionalObject;                                             // 0x0018   (0x0008)  
	UObject*                                           OptionalObject2;                                            // 0x0020   (0x0008)  
	FGameplayEffectContextHandle                       ContextHandle;                                              // 0x0028   (0x0018)  
	FGameplayTagContainer                              InstigatorTags;                                             // 0x0040   (0x0020)  
	FGameplayTagContainer                              TargetTags;                                                 // 0x0060   (0x0020)  
	float                                              EventMagnitude;                                             // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0088   (0x0028)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayAbilityTargetDataHandle
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayAbilityActivationInfo
{ 
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                             // 0x0000   (0x0001)  
	bool                                               bCanBeEndedByOtherInstance;                                 // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPredictionKey                                     PredictionKeyWhenActivated;                                 // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0150 (0x000000 - 0x000150)
struct FGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	FDelegateProperty                                  CustomMatchDelegate_BP;                                     // 0x0010   (0x0010)  
	FGameplayTagQuery                                  OwningTagQuery;                                             // 0x0020   (0x0048)  
	FGameplayTagQuery                                  EffectTagQuery;                                             // 0x0068   (0x0048)  
	FGameplayTagQuery                                  SourceTagQuery;                                             // 0x00B0   (0x0048)  
	FGameplayAttribute                                 ModifyingAttribute;                                         // 0x00F8   (0x0038)  
	UObject*                                           EffectSource;                                               // 0x0130   (0x0008)  
	UClass*                                            EffectDefinition;                                           // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FGameplayCueParameters
{ 
	float                                              NormalizedMagnitude;                                        // 0x0000   (0x0004)  
	float                                              RawMagnitude;                                               // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	FGameplayTag                                       MatchedTagName;                                             // 0x0020   (0x0008)  
	FGameplayTag                                       OriginalTag;                                                // 0x0028   (0x0008)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	FVector_NetQuantize10                              Location;                                                   // 0x0070   (0x000C)  
	FVector_NetQuantizeNormal                          Normal;                                                     // 0x007C   (0x000C)  
	TWeakObjectPtr<AActor*>                            Instigator;                                                 // 0x0088   (0x0008)  
	TWeakObjectPtr<AActor*>                            EffectCauser;                                               // 0x0090   (0x0008)  
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x0098   (0x0008)  
	TWeakObjectPtr<UPhysicalMaterial*>                 PhysicalMaterial;                                           // 0x00A0   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x00A8   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x00AC   (0x0004)  
	TWeakObjectPtr<USceneComponent*>                   TargetAttachComponent;                                      // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (0x000000 - 0x000078)
struct FGameplayEffectSpecForRPC
{ 
	UGameplayEffect*                                   Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0018   (0x0018)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	float                                              Level;                                                      // 0x0070   (0x0004)  
	float                                              AbilityLevel;                                               // 0x0074   (0x0004)  
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0050 (0x000000 - 0x000050)
struct FServerAbilityRPCBatch
{ 
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0008   (0x0018)  
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0020   (0x0028)  
	bool                                               InputPressed;                                               // 0x0048   (0x0001)  
	bool                                               Ended;                                                      // 0x0049   (0x0001)  
	bool                                               Started;                                                    // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0010 (0x000108 - 0x000118)
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{ 
	TArray<FReplicatedPredictionKeyItem>               PredictionKeys;                                             // 0x0108   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x001C (0x00000C - 0x000028)
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0018)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMinimalReplicationTagCountMap
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
	UAbilitySystemComponent*                           Owner;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0020 (0x000108 - 0x000128)
struct FActiveGameplayCueContainer : FFastArraySerializer
{ 
	TArray<FActiveGameplayCue>                         GameplayCues;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0118   (0x0008)  MISSED
	UAbilitySystemComponent*                           Owner;                                                      // 0x0120   (0x0008)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x00EC (0x00000C - 0x0000F8)
struct FActiveGameplayCue : FFastArraySerializerItem
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	FGameplayCueParameters                             Parameters;                                                 // 0x0030   (0x00C0)  
	bool                                               bPredictivelyRemoved;                                       // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x0378 (0x000108 - 0x000480)
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0108   (0x0030)  MISSED
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                   // 0x0138   (0x0010)  
	unsigned char                                      UnknownData01_5[0x310];                                     // 0x0148   (0x0310)  MISSED
	TArray<UGameplayEffect*>                           ApplicationImmunityQueryEffects;                            // 0x0458   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0468   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameplayAbilityLocalAnimMontage
{ 
	UAnimMontage*                                      AnimMontage;                                                // 0x0000   (0x0008)  
	bool                                               PlayBit;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0018)  
	UGameplayAbility*                                  AnimatingAbility;                                           // 0x0028   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGameplayAbilityRepAnimMontage
{ 
	UAnimMontage*                                      AnimMontage;                                                // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              Position;                                                   // 0x000C   (0x0004)  
	float                                              BlendTime;                                                  // 0x0010   (0x0004)  
	char                                               NextSectionID;                                              // 0x0014   (0x0001)  
	bool                                               bRepPosition;                                               // 0x0015:0 (0x0001)  
	bool                                               IsStopped;                                                  // 0x0015:1 (0x0001)  
	bool                                               ForcePlayBit;                                               // 0x0015:2 (0x0001)  
	bool                                               SkipPositionCorrection;                                     // 0x0015:3 (0x0001)  
	bool                                               bSkipPlayRate;                                              // 0x0015:4 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0016   (0x0002)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	char                                               SectionIdToPlay;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0018 (0x000108 - 0x000120)
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{ 
	TArray<FGameplayAbilitySpec>                       Items;                                                      // 0x0108   (0x0010)  
	UAbilitySystemComponent*                           Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00BC (0x00000C - 0x0000C8)
struct FGameplayAbilitySpec : FFastArraySerializerItem
{ 
	FGameplayAbilitySpecHandle                         Handle;                                                     // 0x000C   (0x0004)  
	UGameplayAbility*                                  Ability;                                                    // 0x0010   (0x0008)  
	int32_t                                            Level;                                                      // 0x0018   (0x0004)  
	int32_t                                            InputID;                                                    // 0x001C   (0x0004)  
	UObject*                                           SourceObject;                                               // 0x0020   (0x0008)  
	char                                               ActiveCount;                                                // 0x0028   (0x0001)  
	bool                                               InputPressed;                                               // 0x0029:0 (0x0001)  
	bool                                               RemoveAfterActivation;                                      // 0x0029:1 (0x0001)  
	bool                                               PendingRemove;                                              // 0x0029:2 (0x0001)  
	bool                                               bActivateOnce;                                              // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x6];                                       // 0x002A   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     ActivationInfo;                                             // 0x0030   (0x0020)  
	TArray<UGameplayAbility*>                          NonReplicatedInstances;                                     // 0x0050   (0x0010)  
	TArray<UGameplayAbility*>                          ReplicatedInstances;                                        // 0x0060   (0x0010)  
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                       // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0078   (0x0050)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAttributeDefaults
{ 
	UClass*                                            Attributes;                                                 // 0x0000   (0x0008)  
	UDataTable*                                        DefaultStartingTable;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayCueTag
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAbilityEndedData
{ 
	UGameplayAbility*                                  AbilityThatEnded;                                           // 0x0000   (0x0008)  
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0008   (0x0004)  
	bool                                               bReplicateEndAbility;                                       // 0x000C   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNetSerializeScriptStructCache
{ 
	TArray<UScriptStruct*>                             ScriptStructs;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0028 (0x000008 - 0x000030)
struct FAttributeMetaData : FTableRowBase
{ 
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DerivedAttributeInfo;                                       // 0x0018   (0x0010)  
	bool                                               bCanStack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayAttributeData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              CurrentValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAbilityTriggerData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x0008)  
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayAbilityBindInfo
{ 
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	UClass*                                            GameplayAbilityClass;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameplayTargetDataFilterHandle
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayTargetDataFilter
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	AActor*                                            SelfActor;                                                  // 0x0008   (0x0008)  
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	UClass*                                            RequiredActorClass;                                         // 0x0018   (0x0008)  
	bool                                               bReverseFilter;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x0090 (0x000008 - 0x000098)
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0008   (0x0088)  
	bool                                               bHitReplaced;                                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x0088 (0x000008 - 0x000090)
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	TArray<TWeakObjectPtr>                             TargetActorArray;                                           // 0x0080   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FGameplayAbilityTargetingLocationInfo
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         LiteralTransform;                                           // 0x0020   (0x0030)  
	AActor*                                            SourceActor;                                                // 0x0050   (0x0008)  
	UMeshComponent*                                    SourceComponent;                                            // 0x0058   (0x0008)  
	UGameplayAbility*                                  SourceAbility;                                              // 0x0060   (0x0008)  
	FName                                              SourceSocketName;                                           // 0x0068   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x0080   (0x0070)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameplayAbilitySpecHandleAndPredictionKey
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	int32_t                                            PredictionKeyAtCreation;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAbilityTaskDebugMessage
{ 
	UGameplayTask*                                     FromTask;                                                   // 0x0000   (0x0008)  
	FString                                            Message;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameplayAbilityActorInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<AActor*>                            OwnerActor;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<AActor*>                            AvatarActor;                                                // 0x0010   (0x0008)  
	TWeakObjectPtr<APlayerController*>                 PlayerController;                                           // 0x0018   (0x0008)  
	TWeakObjectPtr<UAbilitySystemComponent*>           AbilitySystemComponent;                                     // 0x0020   (0x0008)  
	TWeakObjectPtr<USkeletalMeshComponent*>            SkeletalMeshComponent;                                      // 0x0028   (0x0008)  
	TWeakObjectPtr<UAnimInstance*>                     AnimInstance;                                               // 0x0030   (0x0008)  
	TWeakObjectPtr<UMovementComponent*>                MovementComponent;                                          // 0x0038   (0x0008)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0040   (0x0008)  
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x000C (0x000000 - 0x00000C)
struct FWorldReticleParameters
{ 
	FVector                                            AOEScale;                                                   // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPreallocationInfo
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
	TArray<UClass*>                                    ClassesNeedingPreallocation;                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0178 (0x000000 - 0x000178)
struct FGameplayCuePendingExecute
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0018)  
	EGameplayCuePayloadType                            PayloadType;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	UAbilitySystemComponent*                           OwningComponent;                                            // 0x0038   (0x0008)  
	FGameplayEffectSpecForRPC                          FromSpec;                                                   // 0x0040   (0x0078)  
	FGameplayCueParameters                             CueParameters;                                              // 0x00B8   (0x00C0)  
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x01C0 (0x000000 - 0x0001C0)
struct FMinimalGameplayCueReplicationProxy
{ 
	unsigned char                                      UnknownData00_2[0x1B0];                                     // 0x0000   (0x01B0)  MISSED
	UAbilitySystemComponent*                           Owner;                                                      // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01B8   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayCueObjectLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0010   (0x0020)  MISSED
	UObjectLibrary*                                    ActorObjectLibrary;                                         // 0x0030   (0x0008)  
	UObjectLibrary*                                    StaticObjectLibrary;                                        // 0x0038   (0x0008)  
	UGameplayCueSet*                                   CueSet;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bShouldSyncScan;                                            // 0x004C   (0x0001)  
	bool                                               bShouldAsyncLoad;                                           // 0x004D   (0x0001)  
	bool                                               bShouldSyncLoad;                                            // 0x004E   (0x0001)  
	bool                                               bHasBeenInitialized;                                        // 0x004F   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameplayCueNotifyData
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
	FSoftObjectPath                                    GameplayCueNotifyObj;                                       // 0x0008   (0x0018)  
	UClass*                                            LoadedGameplayCueClass;                                     // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (0x000000 - 0x000080)
struct FGameplayCueTranslationManager
{ 
	TArray<FGameplayCueTranslatorNode>                 TranslationLUT;                                             // 0x0000   (0x0010)  
	TMap<FName, FGameplayCueTranslatorNodeIndex>       TranslationNameToIndexMap;                                  // 0x0010   (0x0050)  
	UGameplayTagsManager*                              TagManager;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (0x000000 - 0x000004)
struct FGameplayCueTranslatorNodeIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0078 (0x000000 - 0x000078)
struct FGameplayCueTranslatorNode
{ 
	TArray<FGameplayCueTranslationLink>                Links;                                                      // 0x0000   (0x0010)  
	FGameplayCueTranslatorNodeIndex                    CachedIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       CachedGameplayTag;                                          // 0x0014   (0x0008)  
	FName                                              CachedGameplayTagName;                                      // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x54];                                      // 0x0024   (0x0054)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayCueTranslationLink
{ 
	UGameplayCueTranslator*                            RulesCDO;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (0x000000 - 0x000088)
struct FActiveGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (0x000000 - 0x000060)
struct FInheritedTagContainer
{ 
	FGameplayTagContainer                              CombinedTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              Added;                                                      // 0x0020   (0x0020)  
	FGameplayTagContainer                              Removed;                                                    // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGameplayEffectCue
{ 
	FGameplayAttribute                                 MagnitudeAttribute;                                         // 0x0000   (0x0038)  
	float                                              MinLevel;                                                   // 0x0038   (0x0004)  
	float                                              MaxLevel;                                                   // 0x003C   (0x0004)  
	FGameplayTagContainer                              GameplayCueTags;                                            // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x02B0 (0x000000 - 0x0002B0)
struct FGameplayModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FScalableFloat                                     Magnitude;                                                  // 0x0040   (0x0020)  
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0060   (0x01A8)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0209   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0210   (0x0050)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0260   (0x0050)  
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayTagRequirements
{ 
	ETagRequirementCheckRule                           RequireTagCheckRule;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FGameplayTagContainer                              RequireTags;                                                // 0x0008   (0x0020)  
	ETagRequirementCheckRule                           IgnoreTagCheckRule;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FGameplayTagContainer                              IgnoreTags;                                                 // 0x0030   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGameplayModEvaluationChannelSettings
{ 
	EGameplayModEvaluationChannel                      Channel;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01A8 (0x000000 - 0x0001A8)
struct FGameplayEffectModifierMagnitude
{ 
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     ScalableFloatMagnitude;                                     // 0x0008   (0x0020)  
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                    // 0x0028   (0x00F8)  
	FCustomCalculationBasedFloat                       CustomMagnitude;                                            // 0x0120   (0x0078)  
	FSetByCallerFloat                                  SetByCallerMagnitude;                                       // 0x0198   (0x0010)  
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSetByCallerFloat
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	FGameplayTag                                       DataTag;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0078 (0x000000 - 0x000078)
struct FCustomCalculationBasedFloat
{ 
	UClass*                                            CalculationClassMagnitude;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     Coefficient;                                                // 0x0008   (0x0020)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0028   (0x0020)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0048   (0x0020)  
	FCurveTableRowHandle                               FinalLookupCurve;                                           // 0x0068   (0x0010)  
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FAttributeBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0020)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0020   (0x0020)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0040   (0x0020)  
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                           // 0x0060   (0x0040)  
	FCurveTableRowHandle                               AttributeCurve;                                             // 0x00A0   (0x0010)  
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                   // 0x00B0   (0x0001)  
	EGameplayModEvaluationChannel                      FinalChannel;                                               // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	FGameplayTagContainer                              SourceTagFilter;                                            // 0x00B8   (0x0020)  
	FGameplayTagContainer                              TargetTagFilter;                                            // 0x00D8   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGameplayEffectExecutionDefinition
{ 
	UClass*                                            CalculationClass;                                           // 0x0000   (0x0008)  
	FGameplayTagContainer                              PassedInTags;                                               // 0x0008   (0x0020)  
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                       // 0x0028   (0x0010)  
	TArray<UClass*>                                    ConditionalGameplayEffectClasses;                           // 0x0038   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0048   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (0x000000 - 0x000028)
struct FConditionalGameplayEffect
{ 
	UClass*                                            EffectClass;                                                // 0x0000   (0x0008)  
	FGameplayTagContainer                              RequiredSourceTags;                                         // 0x0008   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x02A0 (0x000000 - 0x0002A0)
struct FGameplayEffectExecutionScopedModifierInfo
{ 
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                          // 0x0000   (0x0040)  
	FGameplayTag                                       TransientAggregatorIdentifier;                              // 0x0040   (0x0008)  
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                             // 0x0048   (0x0001)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0050   (0x01A8)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0200   (0x0050)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0250   (0x0050)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGameplayEffectCustomExecutionOutput
{ 
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                            // 0x0000   (0x0010)  
	bool                                               bTriggerConditionalGameplayEffects;                         // 0x0010:0 (0x0001)  
	bool                                               bHandledStackCountManually;                                 // 0x0010:1 (0x0001)  
	bool                                               bHandledGameplayCuesManually;                               // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayModifierEvaluatedData
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x003C   (0x0004)  
	FActiveGameplayEffectHandle                        Handle;                                                     // 0x0040   (0x0008)  
	bool                                               IsValid;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FGameplayEffectCustomExecutionParameters
{ 
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x0000   (0x00F8)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameplayTagBlueprintPropertyMap
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<FGameplayTagBlueprintPropertyMapping>       PropertyMappings;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (0x000000 - 0x000048)
struct FGameplayTagBlueprintPropertyMapping
{ 
	FGameplayTag                                       TagToMap;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0008   (0x0020)  MISSED
	FName                                              PropertyName;                                               // 0x0028   (0x0008)  
	FGuid                                              PropertyGuid;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0070 (0x000000 - 0x000070)
struct FGameplayEffectContext
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<AActor*>                            Instigator;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<AActor*>                            EffectCauser;                                               // 0x0010   (0x0008)  
	TWeakObjectPtr<UGameplayAbility*>                  AbilityCDO;                                                 // 0x0018   (0x0008)  
	TWeakObjectPtr<UGameplayAbility*>                  AbilityInstanceNotReplicated;                               // 0x0020   (0x0008)  
	int32_t                                            AbilityLevel;                                               // 0x0028   (0x0004)  
	TWeakObjectPtr<UObject*>                           SourceObject;                                               // 0x002C   (0x0008)  
	TWeakObjectPtr<UAbilitySystemComponent*>           InstigatorAbilitySystemComponent;                           // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<TWeakObjectPtr>                             Actors;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	FVector                                            WorldOrigin;                                                // 0x0060   (0x000C)  
	bool                                               bHasWorldOrigin;                                            // 0x006C:0 (0x0001)  
	bool                                               bReplicateSourceObject;                                     // 0x006C:1 (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameplayTagResponseTableEntry
{ 
	FGameplayTagReponsePair                            Positive;                                                   // 0x0000   (0x0028)  
	FGameplayTagReponsePair                            Negative;                                                   // 0x0028   (0x0028)  
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGameplayTagReponsePair
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x0008)  
	UClass*                                            ResponseGameplayEffect;                                     // 0x0008   (0x0008)  
	TArray<UClass*>                                    ResponseGameplayEffects;                                    // 0x0010   (0x0010)  
	int32_t                                            SoftCountCap;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x04
enum EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately              = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd                    = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing                             = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x03
enum EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source                                    = 0,
	EGameplayEffectAttributeCaptureSource__Target                                    = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x06
enum EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority                                        = 0,
	EGameplayAbilityActivationMode__NonAuthority                                     = 1,
	EGameplayAbilityActivationMode__Predicting                                       = 2,
	EGameplayAbilityActivationMode__Confirmed                                        = 3,
	EGameplayAbilityActivationMode__Rejected                                         = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX               = 5
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x13
enum EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm                                   = 0,
	EAbilityGenericReplicatedEvent__GenericCancel                                    = 1,
	EAbilityGenericReplicatedEvent__InputPressed                                     = 2,
	EAbilityGenericReplicatedEvent__InputReleased                                    = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient                          = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer                          = 5,
	EAbilityGenericReplicatedEvent__GameCustom1                                      = 6,
	EAbilityGenericReplicatedEvent__GameCustom2                                      = 7,
	EAbilityGenericReplicatedEvent__GameCustom3                                      = 8,
	EAbilityGenericReplicatedEvent__GameCustom4                                      = 9,
	EAbilityGenericReplicatedEvent__GameCustom5                                      = 10,
	EAbilityGenericReplicatedEvent__GameCustom6                                      = 11,
	EAbilityGenericReplicatedEvent__MAX                                              = 12
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x04
enum EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal                                          = 0,
	EGameplayEffectReplicationMode__Mixed                                            = 1,
	EGameplayEffectReplicationMode__Full                                             = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX               = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x04
enum EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame                                             = 1,
	EAbilityTaskWaitState__WaitingOnUser                                             = 2,
	EAbilityTaskWaitState__WaitingOnAvatar                                           = 4,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX                                 = 5
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x04
enum ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource                  = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward                     = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace                        = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x04
enum EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait                                                = 0,
	EAbilityTaskNetSyncType__OnlyServerWait                                          = 1,
	EAbilityTaskNetSyncType__OnlyClientWait                                          = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX                             = 3
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x08
enum EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None                                             = 0,
	EWaitAttributeChangeComparison__GreaterThan                                      = 1,
	EWaitAttributeChangeComparison__LessThan                                         = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo                             = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo                                = 4,
	EWaitAttributeChangeComparison__NotEqualTo                                       = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo                                   = 6,
	EWaitAttributeChangeComparison__MAX                                              = 7
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x10
enum EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1                                             = 0,
	EGameplayAbilityInputBinds__Ability2                                             = 1,
	EGameplayAbilityInputBinds__Ability3                                             = 2,
	EGameplayAbilityInputBinds__Ability4                                             = 3,
	EGameplayAbilityInputBinds__Ability5                                             = 4,
	EGameplayAbilityInputBinds__Ability6                                             = 5,
	EGameplayAbilityInputBinds__Ability7                                             = 6,
	EGameplayAbilityInputBinds__Ability8                                             = 7,
	EGameplayAbilityInputBinds__Ability9                                             = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX                       = 9
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x04
enum ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any                                                  = 0,
	ETargetDataFilterSelf__TDFS_NoSelf                                               = 1,
	ETargetDataFilterSelf__TDFS_NoOthers                                             = 2,
	ETargetDataFilterSelf__TDFS_MAX                                                  = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x04
enum EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform                          = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform                            = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform                           = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x05
enum EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant                                          = 0,
	EGameplayTargetingConfirmation__UserConfirmed                                    = 1,
	EGameplayTargetingConfirmation__Custom                                           = 2,
	EGameplayTargetingConfirmation__CustomMulti                                      = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX               = 4
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x03
enum ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position                                                 = 0,
	ERepAnimPositionMethod__CurrentSectionId                                         = 1,
	ERepAnimPositionMethod__ERepAnimPositionMethod_MAX                               = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x04
enum EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent                                     = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded                                     = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent                                   = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX                 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x03
enum EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo                                   = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes                                  = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x05
enum EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer                                = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution                           = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination                         = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly                                    = 3,
	EGameplayAbilityNetSecurityPolicy__EGameplayAbilityNetSecurityPolicy_MAX         = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x05
enum EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted                               = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly                                    = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated                              = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly                                   = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX       = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x04
enum EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced                                   = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor                              = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution                          = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX           = 3
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x03
enum EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters                                           = 0,
	EGameplayCuePayloadType__FromSpec                                                = 1,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x04
enum EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset                         = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod                        = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod              = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy__EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x04
enum EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack                        = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration     = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration                         = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x03
enum EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication                = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset                                  = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX     = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x03
enum EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication            = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh                              = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x04
enum EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant                                             = 0,
	EGameplayEffectDurationType__Infinite                                            = 1,
	EGameplayEffectDurationType__HasDuration                                         = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX                     = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x03
enum EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked             = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient                           = 1,
	EGameplayEffectScopedModifierAggregatorType__EGameplayEffectScopedModifierAggregatorType_MAX = 2
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x05
enum EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude                          = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue                          = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude                     = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel      = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX     = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x05
enum EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat                               = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased                              = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass                      = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller                                 = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX     = 4
};

/// Enum /Script/GameplayAbilities.ETagRequirementCheckRule
/// Size: 0x03
enum ETagRequirementCheckRule : uint8_t
{
	ETagRequirementCheckRule__HasAll                                                 = 0,
	ETagRequirementCheckRule__HasAny                                                 = 1,
	ETagRequirementCheckRule__ETagRequirementCheckRule_MAX                           = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x03
enum EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved                                              = 0,
	EGameplayTagEventType__AnyCountChange                                            = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX                                 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x05
enum EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive                                                      = 0,
	EGameplayCueEvent__WhileActive                                                   = 1,
	EGameplayCueEvent__Executed                                                      = 2,
	EGameplayCueEvent__Removed                                                       = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX                                         = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x04
enum EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None                                                = 0,
	EGameplayEffectStackingType__AggregateBySource                                   = 1,
	EGameplayEffectStackingType__AggregateByTarget                                   = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX                     = 3
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x05
enum EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive                                                         = 0,
	EGameplayModOp__Multiplicitive                                                   = 1,
	EGameplayModOp__Division                                                         = 2,
	EGameplayModOp__Override                                                         = 3,
	EGameplayModOp__Max                                                              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x12
enum EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0                                          = 0,
	EGameplayModEvaluationChannel__Channel1                                          = 1,
	EGameplayModEvaluationChannel__Channel2                                          = 2,
	EGameplayModEvaluationChannel__Channel3                                          = 3,
	EGameplayModEvaluationChannel__Channel4                                          = 4,
	EGameplayModEvaluationChannel__Channel5                                          = 5,
	EGameplayModEvaluationChannel__Channel6                                          = 6,
	EGameplayModEvaluationChannel__Channel7                                          = 7,
	EGameplayModEvaluationChannel__Channel8                                          = 8,
	EGameplayModEvaluationChannel__Channel9                                          = 9,
	EGameplayModEvaluationChannel__Channel_MAX                                       = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX                 = 11
};

