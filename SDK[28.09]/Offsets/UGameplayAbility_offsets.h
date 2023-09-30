namespace offsets
{
	namespace UGameplayAbility
	{
			constexpr auto AbilityTags = 0xa8; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto bReplicateInputDirectly = 0xc8; // Size: 1, Type: bool
			constexpr auto RemoteInstanceEnded = 0xc9; // Size: 1, Type: bool
			constexpr auto ReplicationPolicy = 0xce; // Size: 1, Type: enum class EGameplayAbilityReplicationPolicy
			constexpr auto InstancingPolicy = 0xcf; // Size: 1, Type: enum class EGameplayAbilityInstancingPolicy
			constexpr auto bServerRespectsRemoteAbilityCancellation = 0xd0; // Size: 1, Type: bool
			constexpr auto bRetriggerInstancedAbility = 0xd1; // Size: 1, Type: bool
			constexpr auto CurrentActivationInfo = 0xd8; // Size: 32, Type: struct FGameplayAbilityActivationInfo
			constexpr auto CurrentEventData = 0xf8; // Size: 176, Type: struct FGameplayEventData
			constexpr auto NetExecutionPolicy = 0x1a8; // Size: 1, Type: enum class EGameplayAbilityNetExecutionPolicy
			constexpr auto NetSecurityPolicy = 0x1a9; // Size: 1, Type: enum class EGameplayAbilityNetSecurityPolicy
			constexpr auto CostGameplayEffectClass = 0x1b0; // Size: 8, Type: UGameplayEffect*
			constexpr auto AbilityTriggers = 0x1b8; // Size: 16, Type: struct TArray<struct FAbilityTriggerData>
			constexpr auto CooldownGameplayEffectClass = 0x1c8; // Size: 8, Type: UGameplayEffect*
			constexpr auto CancelAbilitiesMatchingTagQuery = 0x1d0; // Size: 72, Type: struct FGameplayTagQuery
			constexpr auto CancelAbilitiesWithTag = 0x218; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto BlockAbilitiesWithTag = 0x238; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto ActivationOwnedTags = 0x258; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto ActivationRequiredTags = 0x278; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto ActivationBlockedTags = 0x298; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto SourceRequiredTags = 0x2b8; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto SourceBlockedTags = 0x2d8; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto TargetRequiredTags = 0x2f8; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto TargetBlockedTags = 0x318; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto ActiveTasks = 0x358; // Size: 16, Type: struct TArray<struct UGameplayTask*>
			constexpr auto CurrentMontage = 0x378; // Size: 8, Type: struct UAnimMontage*
			constexpr auto bIsActive = 0x3e0; // Size: 1, Type: bool
			constexpr auto bIsCancelable = 0x3e1; // Size: 1, Type: bool
			constexpr auto bIsBlockingOtherAbilities = 0x3e2; // Size: 1, Type: bool
			constexpr auto bMarkPendingKillOnAbilityEnd = 0x3f8; // Size: 1, Type: bool
	}
} 
