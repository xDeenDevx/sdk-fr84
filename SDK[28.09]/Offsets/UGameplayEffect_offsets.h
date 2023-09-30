namespace offsets
{
	namespace UGameplayEffect
	{
			constexpr auto DurationPolicy = 0x30; // Size: 1, Type: enum class EGameplayEffectDurationType
			constexpr auto DurationMagnitude = 0x38; // Size: 424, Type: struct FGameplayEffectModifierMagnitude
			constexpr auto Period = 0x1e0; // Size: 32, Type: struct FScalableFloat
			constexpr auto bExecutePeriodicEffectOnApplication = 0x200; // Size: 1, Type: bool
			constexpr auto PeriodicInhibitionPolicy = 0x201; // Size: 1, Type: enum class EGameplayEffectPeriodInhibitionRemovedPolicy
			constexpr auto Modifiers = 0x208; // Size: 16, Type: struct TArray<struct FGameplayModifierInfo>
			constexpr auto Executions = 0x218; // Size: 16, Type: struct TArray<struct FGameplayEffectExecutionDefinition>
			constexpr auto ChanceToApplyToTarget = 0x228; // Size: 32, Type: struct FScalableFloat
			constexpr auto ApplicationRequirements = 0x248; // Size: 16, Type: struct TArray<UGameplayEffectCustomApplicationRequirement*>
			constexpr auto TargetEffectClasses = 0x258; // Size: 16, Type: struct TArray<UGameplayEffect*>
			constexpr auto ConditionalGameplayEffects = 0x268; // Size: 16, Type: struct TArray<struct FConditionalGameplayEffect>
			constexpr auto OverflowEffects = 0x278; // Size: 16, Type: struct TArray<UGameplayEffect*>
			constexpr auto bDenyOverflowApplication = 0x288; // Size: 1, Type: bool
			constexpr auto bClearStackOnOverflow = 0x289; // Size: 1, Type: bool
			constexpr auto PrematureExpirationEffectClasses = 0x290; // Size: 16, Type: struct TArray<UGameplayEffect*>
			constexpr auto RoutineExpirationEffectClasses = 0x2a0; // Size: 16, Type: struct TArray<UGameplayEffect*>
			constexpr auto bRequireModifierSuccessToTriggerCues = 0x2b0; // Size: 1, Type: bool
			constexpr auto bSuppressStackingCues = 0x2b1; // Size: 1, Type: bool
			constexpr auto GameplayCues = 0x2b8; // Size: 16, Type: struct TArray<struct FGameplayEffectCue>
			constexpr auto UIData = 0x2c8; // Size: 8, Type: struct UGameplayEffectUIData*
			constexpr auto InheritableGameplayEffectTags = 0x2d0; // Size: 96, Type: struct FInheritedTagContainer
			constexpr auto InheritableOwnedTagsContainer = 0x330; // Size: 96, Type: struct FInheritedTagContainer
			constexpr auto OngoingTagRequirements = 0x390; // Size: 80, Type: struct FGameplayTagRequirements
			constexpr auto ApplicationTagRequirements = 0x3e0; // Size: 80, Type: struct FGameplayTagRequirements
			constexpr auto RemovalTagRequirements = 0x430; // Size: 80, Type: struct FGameplayTagRequirements
			constexpr auto RemovalSourceTagRequirements = 0x480; // Size: 80, Type: struct FGameplayTagRequirements
			constexpr auto RemoveGameplayEffectsWithTags = 0x4d0; // Size: 96, Type: struct FInheritedTagContainer
			constexpr auto GrantedApplicationImmunityTags = 0x530; // Size: 80, Type: struct FGameplayTagRequirements
			constexpr auto GrantedApplicationImmunityQuery = 0x580; // Size: 336, Type: struct FGameplayEffectQuery
			constexpr auto RemoveGameplayEffectQuery = 0x6d8; // Size: 336, Type: struct FGameplayEffectQuery
			constexpr auto StackingType = 0x829; // Size: 1, Type: enum class EGameplayEffectStackingType
			constexpr auto StackLimitCount = 0x82c; // Size: 4, Type: int32_t
			constexpr auto StackDurationRefreshPolicy = 0x830; // Size: 1, Type: enum class EGameplayEffectStackingDurationPolicy
			constexpr auto StackPeriodResetPolicy = 0x831; // Size: 1, Type: enum class EGameplayEffectStackingPeriodPolicy
			constexpr auto StackExpirationPolicy = 0x832; // Size: 1, Type: enum class EGameplayEffectStackingExpirationPolicy
			constexpr auto GrantedAbilities = 0x838; // Size: 16, Type: struct TArray<struct FGameplayAbilitySpecDef>
	}
} 
