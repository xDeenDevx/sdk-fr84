namespace offsets
{
	namespace APostProcessVolume
	{
			constexpr auto Settings = 0x270; // Size: 1440, Type: struct FPostProcessSettings
			constexpr auto Priority = 0x810; // Size: 4, Type: float
			constexpr auto BlendRadius = 0x814; // Size: 4, Type: float
			constexpr auto BlendWeight = 0x818; // Size: 4, Type: float
			constexpr auto bEnabled = 0x81c; // Size: 1, Type: char
			constexpr auto bUnbound = 0x81c; // Size: 1, Type: char
	}
} 
