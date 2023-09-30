namespace offsets
{
	namespace AGameplayAbilityTargetActor
	{
			constexpr auto ShouldProduceTargetDataOnServer = 0x228; // Size: 1, Type: bool
			constexpr auto StartLocation = 0x230; // Size: 112, Type: struct FGameplayAbilityTargetingLocationInfo
			constexpr auto MasterPC = 0x2d0; // Size: 8, Type: struct APlayerController*
			constexpr auto OwningAbility = 0x2d8; // Size: 8, Type: struct UGameplayAbility*
			constexpr auto bDestroyOnConfirmation = 0x2e0; // Size: 1, Type: bool
			constexpr auto SourceActor = 0x2e8; // Size: 8, Type: struct AActor*
			constexpr auto ReticleParams = 0x2f0; // Size: 12, Type: struct FWorldReticleParameters
			constexpr auto ReticleClass = 0x300; // Size: 8, Type: AGameplayAbilityWorldReticle*
			constexpr auto Filter = 0x308; // Size: 16, Type: struct FGameplayTargetDataFilterHandle
			constexpr auto bDebug = 0x318; // Size: 1, Type: bool
			constexpr auto GenericDelegateBoundASC = 0x330; // Size: 8, Type: struct UAbilitySystemComponent*
	}
} 
