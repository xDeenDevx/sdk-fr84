namespace offsets
{
	namespace USubmixEffectConvolutionReverbPreset
	{
			constexpr auto Settings = 0x40; // Size: 32, Type: struct FSubmixEffectConvolutionReverbSettings
			constexpr auto ImpulseResponse = 0x60; // Size: 8, Type: struct UAudioImpulseResponse*
			constexpr auto BlockSize = 0x68; // Size: 1, Type: enum class ESubmixEffectConvolutionReverbBlockSize
			constexpr auto bEnableHardwareAcceleration = 0x69; // Size: 1, Type: bool
	}
} 
