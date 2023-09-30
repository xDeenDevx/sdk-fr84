namespace offsets
{
	namespace UMovieSceneAudioSection
	{
			constexpr auto Sound = 0xe0; // Size: 8, Type: struct USoundBase*
			constexpr auto StartFrameOffset = 0xe8; // Size: 4, Type: struct FFrameNumber
			constexpr auto StartOffset = 0xec; // Size: 4, Type: float
			constexpr auto AudioStartTime = 0xf0; // Size: 4, Type: float
			constexpr auto AudioDilationFactor = 0xf4; // Size: 4, Type: float
			constexpr auto AudioVolume = 0xf8; // Size: 4, Type: float
			constexpr auto SoundVolume = 0x100; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto PitchMultiplier = 0x1a0; // Size: 160, Type: struct FMovieSceneFloatChannel
			constexpr auto AttachActorData = 0x240; // Size: 176, Type: struct FMovieSceneActorReferenceData
			constexpr auto bSuppressSubtitles = 0x2f0; // Size: 1, Type: bool
			constexpr auto bOverrideAttenuation = 0x2f1; // Size: 1, Type: bool
			constexpr auto AttenuationSettings = 0x2f8; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto OnQueueSubtitles = 0x300; // Size: 16, Type: struct FDelegate
			constexpr auto OnAudioFinished = 0x310; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioPlaybackPercent = 0x320; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
