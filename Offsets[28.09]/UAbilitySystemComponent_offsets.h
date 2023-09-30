namespace offsets
{
	namespace UAbilitySystemComponent
	{
			constexpr auto DefaultStartingData = 0x130; // Size: 16, Type: struct TArray<struct FAttributeDefaults>
			constexpr auto SpawnedAttributes = 0x140; // Size: 16, Type: struct TArray<struct UAttributeSet*>
			constexpr auto AffectedAnimInstanceTag = 0x150; // Size: 8, Type: struct FName
			constexpr auto OutgoingDuration = 0x2f8; // Size: 4, Type: float
			constexpr auto IncomingDuration = 0x2fc; // Size: 4, Type: float
			constexpr auto ClientDebugStrings = 0x320; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ServerDebugStrings = 0x330; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto UserAbilityActivationInhibited = 0x3a0; // Size: 1, Type: bool
			constexpr auto ReplicationProxyEnabled = 0x3a1; // Size: 1, Type: bool
			constexpr auto bSuppressGrantAbility = 0x3a2; // Size: 1, Type: bool
			constexpr auto bSuppressGameplayCues = 0x3a3; // Size: 1, Type: bool
			constexpr auto SpawnedTargetActors = 0x3a8; // Size: 16, Type: struct TArray<struct AGameplayAbilityTargetActor*>
			constexpr auto OwnerActor = 0x3e0; // Size: 8, Type: struct AActor*
			constexpr auto AvatarActor = 0x3e8; // Size: 8, Type: struct AActor*
			constexpr auto ActivatableAbilities = 0x400; // Size: 288, Type: struct FGameplayAbilitySpecContainer
			constexpr auto AllReplicatedInstancedAbilities = 0x550; // Size: 16, Type: struct TArray<struct UGameplayAbility*>
			constexpr auto RepAnimMontageInfo = 0x730; // Size: 56, Type: struct FGameplayAbilityRepAnimMontage
			constexpr auto bCachedIsNetSimulated = 0x768; // Size: 1, Type: bool
			constexpr auto bPendingMontageRep = 0x769; // Size: 1, Type: bool
			constexpr auto LocalAnimMontageInfo = 0x770; // Size: 48, Type: struct FGameplayAbilityLocalAnimMontage
			constexpr auto ActiveGameplayEffects = 0x840; // Size: 1152, Type: struct FActiveGameplayEffectsContainer
			constexpr auto ActiveGameplayCues = 0xcc0; // Size: 296, Type: struct FActiveGameplayCueContainer
			constexpr auto MinimalReplicationGameplayCues = 0xde8; // Size: 296, Type: struct FActiveGameplayCueContainer
			constexpr auto BlockedAbilityBindings = 0x1038; // Size: 16, Type: struct TArray<char>
			constexpr auto MinimalReplicationTags = 0x1170; // Size: 96, Type: struct FMinimalReplicationTagCountMap
			constexpr auto ReplicatedPredictionKeyMap = 0x11e0; // Size: 280, Type: struct FReplicatedPredictionKeyMap
	}
} 
