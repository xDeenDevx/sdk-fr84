namespace offsets
{
	namespace UChaGA_EnergyBubble
	{
			constexpr auto EnergyShieldClass = 0x460; // Size: 8, Type: ASolarEnergyBubble*
			constexpr auto GATargetActorClass = 0x468; // Size: 8, Type: AGameplayAbilityTargetActor*
			constexpr auto EmptyMontage = 0x470; // Size: 8, Type: struct UAnimMontage*
			constexpr auto AimMontage = 0x478; // Size: 8, Type: struct UAnimMontage*
			constexpr auto StartSocketName = 0x480; // Size: 8, Type: struct FName
			constexpr auto StartEnergyBubbleNotify = 0x488; // Size: 8, Type: struct FName
			constexpr auto ReleaseEnergyBubbleNotify = 0x490; // Size: 8, Type: struct FName
			constexpr auto EnergyShieldActor = 0x498; // Size: 8, Type: struct ASolarEnergyBubble*
			constexpr auto WaitTargetDataTask = 0x4a8; // Size: 8, Type: struct UAbilityTask_WaitTargetData*
			constexpr auto TargetActorCache = 0x4b0; // Size: 8, Type: struct TWeakObjectPtr<AGameplayAbilityTargetActor>
	}
} 
