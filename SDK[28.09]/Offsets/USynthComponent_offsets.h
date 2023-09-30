namespace offsets
{
	namespace USynthComponent
	{
			constexpr auto bAutoDestroy = 0x318; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x318; // Size: 1, Type: char
			constexpr auto bAllowSpatialization = 0x318; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x318; // Size: 1, Type: char
			constexpr auto bOutputToBusOnly = 0x31c; // Size: 1, Type: char
			constexpr auto AttenuationSettings = 0x320; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto AttenuationOverrides = 0x328; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto ConcurrencySettings = 0x6c8; // Size: 8, Type: struct USoundConcurrency*
			constexpr auto ConcurrencySet = 0x6d0; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto SoundClass = 0x720; // Size: 8, Type: struct USoundClass*
			constexpr auto SourceEffectChain = 0x728; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto SoundSubmix = 0x730; // Size: 8, Type: struct USoundSubmixBase*
			constexpr auto SoundSubmixSends = 0x738; // Size: 16, Type: struct TArray<struct FSoundSubmixSendInfo>
			constexpr auto BusSends = 0x748; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto Modulation = 0x758; // Size: 16, Type: struct FSoundModulation
			constexpr auto PreEffectBusSends = 0x768; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto bIsUISound = 0x778; // Size: 1, Type: char
			constexpr auto bIsPreviewSound = 0x778; // Size: 1, Type: char
			constexpr auto EnvelopeFollowerAttackTime = 0x77c; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x780; // Size: 4, Type: int32_t
			constexpr auto OnAudioEnvelopeValue = 0x788; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Synth = 0x7b8; // Size: 8, Type: struct USynthSound*
			constexpr auto AudioComponent = 0x7c0; // Size: 8, Type: struct UAudioComponent*
	}
} 
