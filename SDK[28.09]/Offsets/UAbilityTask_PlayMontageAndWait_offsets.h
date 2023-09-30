namespace offsets
{
	namespace UAbilityTask_PlayMontageAndWait
	{
			constexpr auto OnCompleted = 0x80; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBlendOut = 0x90; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInterrupted = 0xa0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCancelled = 0xb0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MontageToPlay = 0xe8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto Rate = 0xf0; // Size: 4, Type: float
			constexpr auto StartSection = 0xf4; // Size: 8, Type: struct FName
			constexpr auto AnimRootMotionTranslationScale = 0xfc; // Size: 4, Type: float
			constexpr auto bStopWhenAbilityEnds = 0x100; // Size: 1, Type: bool
			constexpr auto bInterruptedCalledBeforeBlendingOut = 0x101; // Size: 1, Type: bool
	}
} 
