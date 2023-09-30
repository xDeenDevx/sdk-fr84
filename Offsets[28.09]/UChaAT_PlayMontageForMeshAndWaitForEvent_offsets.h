namespace offsets
{
	namespace UChaAT_PlayMontageForMeshAndWaitForEvent
	{
			constexpr auto OnCompleted = 0x80; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBlendOut = 0x90; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInterrupted = 0xa0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnCancelled = 0xb0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto EventReceived = 0xc0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Mesh = 0xd0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MontageToPlay = 0xd8; // Size: 8, Type: struct UAnimMontage*
			constexpr auto EventTags = 0xe0; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto Rate = 0x100; // Size: 4, Type: float
			constexpr auto StartSection = 0x104; // Size: 8, Type: struct FName
			constexpr auto AnimRootMotionTranslationScale = 0x10c; // Size: 4, Type: float
			constexpr auto bStopWhenAbilityEnds = 0x110; // Size: 1, Type: bool
			constexpr auto bReplicateMontage = 0x111; // Size: 1, Type: bool
			constexpr auto OverrideBlendOutTimeForCancelAbility = 0x114; // Size: 4, Type: float
			constexpr auto OverrideBlendOutTimeForStopWhenEndAbility = 0x118; // Size: 4, Type: float
			constexpr auto bInterruptedCalledBeforeBlendingOut = 0x11c; // Size: 1, Type: bool
	}
} 
