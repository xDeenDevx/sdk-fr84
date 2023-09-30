namespace offsets
{
	namespace UGameplayAbility_Montage
	{
			constexpr auto MontageToPlay = 0x400; // Size: 8, Type: struct UAnimMontage*
			constexpr auto PlayRate = 0x408; // Size: 4, Type: float
			constexpr auto SectionName = 0x40c; // Size: 8, Type: struct FName
			constexpr auto GameplayEffectClassesWhileAnimating = 0x418; // Size: 16, Type: struct TArray<UGameplayEffect*>
			constexpr auto GameplayEffectsWhileAnimating = 0x428; // Size: 16, Type: struct TArray<struct UGameplayEffect*>
	}
} 
