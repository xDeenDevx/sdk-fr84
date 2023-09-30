namespace offsets
{
	namespace USoundCue
	{
			constexpr auto bPrimeOnLoad = 0x160; // Size: 1, Type: char
			constexpr auto FirstNode = 0x168; // Size: 8, Type: struct USoundNode*
			constexpr auto VolumeMultiplier = 0x170; // Size: 4, Type: float
			constexpr auto PitchMultiplier = 0x174; // Size: 4, Type: float
			constexpr auto AttenuationOverrides = 0x178; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto SubtitlePriority = 0x518; // Size: 4, Type: float
			constexpr auto bOverrideAttenuation = 0x520; // Size: 1, Type: char
			constexpr auto bExcludeFromRandomNodeBranchCulling = 0x520; // Size: 1, Type: char
			constexpr auto CookedQualityIndex = 0x524; // Size: 4, Type: int32_t
			constexpr auto bHasPlayWhenSilent = 0x528; // Size: 1, Type: char
	}
} 
