namespace offsets
{
	namespace USoundBase
	{
			constexpr auto SoundClassObject = 0x28; // Size: 8, Type: struct USoundClass*
			constexpr auto bDebug = 0x30; // Size: 1, Type: char
			constexpr auto bOverrideConcurrency = 0x30; // Size: 1, Type: char
			constexpr auto bOutputToBusOnly = 0x30; // Size: 1, Type: char
			constexpr auto bHasDelayNode = 0x30; // Size: 1, Type: char
			constexpr auto bHasConcatenatorNode = 0x30; // Size: 1, Type: char
			constexpr auto bBypassVolumeScaleForPriority = 0x30; // Size: 1, Type: char
			constexpr auto VirtualizationMode = 0x31; // Size: 1, Type: enum class EVirtualizationMode
			constexpr auto ConcurrencySet = 0x88; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto ConcurrencyOverrides = 0xd8; // Size: 32, Type: struct FSoundConcurrencySettings
			constexpr auto Duration = 0xf8; // Size: 4, Type: float
			constexpr auto MaxDistance = 0xfc; // Size: 4, Type: float
			constexpr auto TotalSamples = 0x100; // Size: 4, Type: float
			constexpr auto Priority = 0x104; // Size: 4, Type: float
			constexpr auto AttenuationSettings = 0x108; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto Modulation = 0x110; // Size: 16, Type: struct FSoundModulation
			constexpr auto SoundSubmixObject = 0x120; // Size: 8, Type: struct USoundSubmixBase*
			constexpr auto SoundSubmixSends = 0x128; // Size: 16, Type: struct TArray<struct FSoundSubmixSendInfo>
			constexpr auto SourceEffectChain = 0x138; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto BusSends = 0x140; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto PreEffectBusSends = 0x150; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
	}
} 
