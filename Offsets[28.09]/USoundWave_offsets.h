namespace offsets
{
	namespace USoundWave
	{
			constexpr auto CompressionQuality = 0x160; // Size: 4, Type: int32_t
			constexpr auto StreamingPriority = 0x164; // Size: 4, Type: int32_t
			constexpr auto SampleRateQuality = 0x168; // Size: 1, Type: enum class ESoundwaveSampleRateSettings
			constexpr auto SoundGroup = 0x16a; // Size: 1, Type: enum class ESoundGroup
			constexpr auto bLooping = 0x16b; // Size: 1, Type: char
			constexpr auto bStreaming = 0x16b; // Size: 1, Type: char
			constexpr auto bSeekableStreaming = 0x16b; // Size: 1, Type: char
			constexpr auto LoadingBehavior = 0x16c; // Size: 1, Type: enum class ESoundWaveLoadingBehavior
			constexpr auto bMature = 0x16d; // Size: 1, Type: char
			constexpr auto bManualWordWrap = 0x16d; // Size: 1, Type: char
			constexpr auto bSingleLine = 0x16d; // Size: 1, Type: char
			constexpr auto bIsAmbisonics = 0x16e; // Size: 1, Type: char
			constexpr auto FrequenciesToAnalyze = 0x170; // Size: 16, Type: struct TArray<float>
			constexpr auto CookedSpectralTimeData = 0x180; // Size: 16, Type: struct TArray<struct FSoundWaveSpectralTimeData>
			constexpr auto CookedEnvelopeTimeData = 0x190; // Size: 16, Type: struct TArray<struct FSoundWaveEnvelopeTimeData>
			constexpr auto InitialChunkSize = 0x1a0; // Size: 4, Type: int32_t
			constexpr auto SpokenText = 0x1e8; // Size: 16, Type: struct FString
			constexpr auto SubtitlePriority = 0x1f8; // Size: 4, Type: float
			constexpr auto Volume = 0x1fc; // Size: 4, Type: float
			constexpr auto Pitch = 0x200; // Size: 4, Type: float
			constexpr auto NumChannels = 0x204; // Size: 4, Type: int32_t
			constexpr auto SampleRate = 0x208; // Size: 4, Type: int32_t
			constexpr auto Subtitles = 0x218; // Size: 16, Type: struct TArray<struct FSubtitleCue>
			constexpr auto Curves = 0x228; // Size: 8, Type: struct UCurveTable*
			constexpr auto InternalCurves = 0x230; // Size: 8, Type: struct UCurveTable*
	}
} 
