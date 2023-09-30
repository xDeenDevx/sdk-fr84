namespace offsets
{
	namespace USoundSubmix
	{
			constexpr auto bMuteWhenBackgrounded = 0x40; // Size: 1, Type: char
			constexpr auto SubmixEffectChain = 0x48; // Size: 16, Type: struct TArray<struct USoundEffectSubmixPreset*>
			constexpr auto AmbisonicsPluginSettings = 0x58; // Size: 8, Type: struct USoundfieldEncodingSettingsBase*
			constexpr auto EnvelopeFollowerAttackTime = 0x60; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x64; // Size: 4, Type: int32_t
			constexpr auto OutputVolume = 0x68; // Size: 4, Type: float
			constexpr auto OnSubmixRecordedFileDone = 0x70; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
