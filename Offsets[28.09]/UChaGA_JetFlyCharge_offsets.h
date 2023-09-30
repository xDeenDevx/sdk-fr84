namespace offsets
{
	namespace UChaGA_JetFlyCharge
	{
			constexpr auto VerticalChargeEffect = 0x460; // Size: 8, Type: UGameplayEffect*
			constexpr auto TempVerticalChargeEffect = 0x468; // Size: 8, Type: UGameplayEffect*
			constexpr auto OnceVChargeCompletedEffect = 0x470; // Size: 8, Type: UGameplayEffect*
			constexpr auto HorizontalChargeEffect = 0x478; // Size: 8, Type: UGameplayEffect*
			constexpr auto TempHorizontalChargeEffect = 0x480; // Size: 8, Type: UGameplayEffect*
			constexpr auto OnceHChargeCompletedEffect = 0x488; // Size: 8, Type: UGameplayEffect*
			constexpr auto TempChargeDurationTag = 0x490; // Size: 8, Type: struct FGameplayTag
			constexpr auto OnOnceVJetChargeFinished = 0x498; // Size: 8, Type: struct UAbilityTask_WaitGameplayEffectRemoved*
			constexpr auto OnOnceHJetChargeFinished = 0x4a0; // Size: 8, Type: struct UAbilityTask_WaitGameplayEffectRemoved*
	}
} 
