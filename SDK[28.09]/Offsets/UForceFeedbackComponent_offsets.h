namespace offsets
{
	namespace UForceFeedbackComponent
	{
			constexpr auto ForceFeedbackEffect = 0x318; // Size: 8, Type: struct UForceFeedbackEffect*
			constexpr auto bAutoDestroy = 0x320; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x320; // Size: 1, Type: char
			constexpr auto bLooping = 0x320; // Size: 1, Type: char
			constexpr auto bIgnoreTimeDilation = 0x320; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x320; // Size: 1, Type: char
			constexpr auto IntensityMultiplier = 0x324; // Size: 4, Type: float
			constexpr auto AttenuationSettings = 0x328; // Size: 8, Type: struct UForceFeedbackAttenuation*
			constexpr auto AttenuationOverrides = 0x330; // Size: 176, Type: struct FForceFeedbackAttenuationSettings
			constexpr auto OnForceFeedbackFinished = 0x3e0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
