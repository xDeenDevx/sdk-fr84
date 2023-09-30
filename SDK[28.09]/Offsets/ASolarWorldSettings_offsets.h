namespace offsets
{
	namespace ASolarWorldSettings
	{
			constexpr auto MapID = 0x400; // Size: 4, Type: int32_t
			constexpr auto PreloadAssets = 0x408; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto bAsyncPreload = 0x420; // Size: 1, Type: bool
			constexpr auto bHoldAllMips = 0x421; // Size: 1, Type: bool
			constexpr auto PostProcessItemClass = 0x428; // Size: 8, Type: USolarPostProcessSettingItem*
			constexpr auto CurrentActiveColorThemeIndex = 0x430; // Size: 4, Type: int32_t
			constexpr auto SolarMapTypeValue = 0x434; // Size: 4, Type: int32_t
			constexpr auto MapEnableLowMemoryGraphOpt = 0x438; // Size: 1, Type: bool
			constexpr auto SpectatorPawnStartPoint = 0x440; // Size: 48, Type: struct FTransform
			constexpr auto PostProcessItem = 0x470; // Size: 8, Type: struct USolarPostProcessSettingItem*
	}
} 
