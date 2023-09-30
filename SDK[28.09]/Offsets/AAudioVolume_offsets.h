namespace offsets
{
	namespace AAudioVolume
	{
			constexpr auto Priority = 0x260; // Size: 4, Type: float
			constexpr auto bEnabled = 0x264; // Size: 1, Type: char
			constexpr auto Settings = 0x268; // Size: 32, Type: struct FReverbSettings
			constexpr auto AmbientZoneSettings = 0x288; // Size: 36, Type: struct FInteriorSettings
	}
} 
