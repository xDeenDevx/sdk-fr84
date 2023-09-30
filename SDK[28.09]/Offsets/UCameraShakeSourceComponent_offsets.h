namespace offsets
{
	namespace UCameraShakeSourceComponent
	{
			constexpr auto Attenuation = 0x318; // Size: 1, Type: enum class ECameraShakeAttenuation
			constexpr auto InnerAttenuationRadius = 0x31c; // Size: 4, Type: float
			constexpr auto OuterAttenuationRadius = 0x320; // Size: 4, Type: float
			constexpr auto CameraShake = 0x328; // Size: 8, Type: UCameraShake*
			constexpr auto bAutoPlay = 0x330; // Size: 1, Type: bool
	}
} 
