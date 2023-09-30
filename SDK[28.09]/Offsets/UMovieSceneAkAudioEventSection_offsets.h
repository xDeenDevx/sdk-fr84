namespace offsets
{
	namespace UMovieSceneAkAudioEventSection
	{
			constexpr auto Event = 0x120; // Size: 8, Type: struct UAkAudioEvent*
			constexpr auto RetriggerEvent = 0x128; // Size: 1, Type: bool
			constexpr auto ScrubTailLengthMs = 0x12c; // Size: 4, Type: int32_t
			constexpr auto StopAtSectionEnd = 0x130; // Size: 1, Type: bool
			constexpr auto EventName = 0x138; // Size: 16, Type: struct FString
			constexpr auto MaxSourceDuration = 0x168; // Size: 4, Type: float
			constexpr auto MaxDurationSourceID = 0x170; // Size: 16, Type: struct FString
	}
} 
