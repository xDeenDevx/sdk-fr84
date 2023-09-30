namespace offsets
{
	namespace UAudioComponent
	{
			constexpr auto Sound = 0x318; // Size: 8, Type: struct USoundBase*
			constexpr auto InstanceParameters = 0x320; // Size: 16, Type: struct TArray<struct FAudioComponentParam>
			constexpr auto SoundClassOverride = 0x330; // Size: 8, Type: struct USoundClass*
			constexpr auto bAutoDestroy = 0x338; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x338; // Size: 1, Type: char
			constexpr auto bShouldRemainActiveIfDropped = 0x338; // Size: 1, Type: char
			constexpr auto bAllowSpatialization = 0x338; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x338; // Size: 1, Type: char
			constexpr auto bOverrideSubtitlePriority = 0x338; // Size: 1, Type: char
			constexpr auto bIsUISound = 0x338; // Size: 1, Type: char
			constexpr auto bEnableLowPassFilter = 0x338; // Size: 1, Type: char
			constexpr auto bOverridePriority = 0x339; // Size: 1, Type: char
			constexpr auto bSuppressSubtitles = 0x339; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x33a; // Size: 1, Type: char
			constexpr auto AudioComponentUserID = 0x340; // Size: 8, Type: struct FName
			constexpr auto PitchModulationMin = 0x348; // Size: 4, Type: float
			constexpr auto PitchModulationMax = 0x34c; // Size: 4, Type: float
			constexpr auto VolumeModulationMin = 0x350; // Size: 4, Type: float
			constexpr auto VolumeModulationMax = 0x354; // Size: 4, Type: float
			constexpr auto VolumeMultiplier = 0x358; // Size: 4, Type: float
			constexpr auto EnvelopeFollowerAttackTime = 0x35c; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x360; // Size: 4, Type: int32_t
			constexpr auto Priority = 0x364; // Size: 4, Type: float
			constexpr auto SubtitlePriority = 0x368; // Size: 4, Type: float
			constexpr auto SourceEffectChain = 0x370; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto PitchMultiplier = 0x378; // Size: 4, Type: float
			constexpr auto LowPassFilterFrequency = 0x37c; // Size: 4, Type: float
			constexpr auto AttenuationSettings = 0x388; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto AttenuationOverrides = 0x390; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto ConcurrencySettings = 0x730; // Size: 8, Type: struct USoundConcurrency*
			constexpr auto ConcurrencySet = 0x738; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto AutoAttachLocationRule = 0x794; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachRotationRule = 0x795; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachScaleRule = 0x796; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto OnAudioFinished = 0x798; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioPlaybackPercent = 0x7c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioSingleEnvelopeValue = 0x7e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioMultiEnvelopeValue = 0x810; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Modulation = 0x838; // Size: 16, Type: struct FSoundModulation
			constexpr auto OnQueueSubtitles = 0x848; // Size: 16, Type: struct FDelegate
			constexpr auto AutoAttachParent = 0x858; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x860; // Size: 8, Type: struct FName
	}
} 
