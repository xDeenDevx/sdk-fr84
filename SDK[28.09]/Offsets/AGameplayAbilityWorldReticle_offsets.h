namespace offsets
{
	namespace AGameplayAbilityWorldReticle
	{
			constexpr auto Parameters = 0x228; // Size: 12, Type: struct FWorldReticleParameters
			constexpr auto bFaceOwnerFlat = 0x234; // Size: 1, Type: bool
			constexpr auto bSnapToTargetedActor = 0x235; // Size: 1, Type: bool
			constexpr auto bIsTargetValid = 0x236; // Size: 1, Type: bool
			constexpr auto bIsTargetAnActor = 0x237; // Size: 1, Type: bool
			constexpr auto MasterPC = 0x238; // Size: 8, Type: struct APlayerController*
			constexpr auto TargetingActor = 0x240; // Size: 8, Type: struct AActor*
	}
} 
