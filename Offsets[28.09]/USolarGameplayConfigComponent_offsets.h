namespace offsets
{
	namespace USolarGameplayConfigComponent
	{
			constexpr auto EnableTestGameplayConfig = 0xb0; // Size: 1, Type: bool
			constexpr auto CGMConfig = 0xb8; // Size: 8, Type: UGameplayConfigBase*
			constexpr auto TestCGMConfig = 0xc0; // Size: 8, Type: UGameplayConfigBase*
			constexpr auto InstGameplayConfig = 0xc8; // Size: 8, Type: struct UGameplayConfigBase*
			constexpr auto InstTestGameplayConfig = 0xd0; // Size: 8, Type: struct UGameplayConfigBase*
	}
} 
