namespace offsets
{
	namespace UAudioSettings
	{
			constexpr auto DefaultSoundClassName = 0x38; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultMediaSoundClassName = 0x50; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultSoundConcurrencyName = 0x68; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto DefaultBaseSoundMix = 0x80; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto VoiPSoundClass = 0x98; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto MasterSubmix = 0xb0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ReverbSubmix = 0xc8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto EQSubmix = 0xe0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto VoiPSampleRate = 0xf8; // Size: 4, Type: enum class EVoiceSampleRate
			constexpr auto DefaultReverbSendLevel = 0xfc; // Size: 4, Type: float
			constexpr auto MaximumConcurrentStreams = 0x100; // Size: 4, Type: int32_t
			constexpr auto GlobalMinPitchScale = 0x104; // Size: 4, Type: float
			constexpr auto GlobalMaxPitchScale = 0x108; // Size: 4, Type: float
			constexpr auto QualityLevels = 0x110; // Size: 16, Type: struct TArray<struct FAudioQualitySettings>
			constexpr auto bAllowPlayWhenSilent = 0x120; // Size: 1, Type: char
			constexpr auto bDisableMasterEQ = 0x120; // Size: 1, Type: char
			constexpr auto bAllowCenterChannel3DPanning = 0x120; // Size: 1, Type: char
			constexpr auto NumStoppingSources = 0x124; // Size: 4, Type: uint32_t
			constexpr auto PanningMethod = 0x128; // Size: 1, Type: enum class EPanningMethod
			constexpr auto MonoChannelUpmixMethod = 0x129; // Size: 1, Type: enum class EMonoChannelUpmixMethod
			constexpr auto DialogueFilenameFormat = 0x130; // Size: 16, Type: struct FString
	}
} 
