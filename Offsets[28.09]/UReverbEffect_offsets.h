namespace offsets
{
	namespace UReverbEffect
	{
			constexpr auto Density = 0x28; // Size: 4, Type: float
			constexpr auto Diffusion = 0x2c; // Size: 4, Type: float
			constexpr auto Gain = 0x30; // Size: 4, Type: float
			constexpr auto GainHF = 0x34; // Size: 4, Type: float
			constexpr auto DecayTime = 0x38; // Size: 4, Type: float
			constexpr auto DecayHFRatio = 0x3c; // Size: 4, Type: float
			constexpr auto ReflectionsGain = 0x40; // Size: 4, Type: float
			constexpr auto ReflectionsDelay = 0x44; // Size: 4, Type: float
			constexpr auto LateGain = 0x48; // Size: 4, Type: float
			constexpr auto LateDelay = 0x4c; // Size: 4, Type: float
			constexpr auto AirAbsorptionGainHF = 0x50; // Size: 4, Type: float
			constexpr auto RoomRolloffFactor = 0x54; // Size: 4, Type: float
	}
} 
