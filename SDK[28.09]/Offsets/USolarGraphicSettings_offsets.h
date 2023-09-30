namespace offsets
{
	namespace USolarGraphicSettings
	{
			constexpr auto CurrentActiveColorThemeIndex = 0x28; // Size: 4, Type: uint32_t
			constexpr auto FrameRateLevelItem[5] = 0x2c; // Size: 80, Type: struct FFrameRateLevelItem
			constexpr auto DefaultQualityToDefaultFrameRateLevel = 0x80; // Size: 80, Type: struct TMap<enum class ESolarGraphicsQualityLevel, enum class ESolarFrameRateLevel>
			constexpr auto DefaultAndCurQualityToMaxFrameRateLevel = 0xd0; // Size: 80, Type: struct TMap<enum class ESolarGraphicsQualityLevel, struct FMaxQualityConfig>
			constexpr auto MobileMaxFrameRate = 0x120; // Size: 4, Type: int32_t
			constexpr auto HighRefreshRateThreshold = 0x124; // Size: 4, Type: int32_t
			constexpr auto DefaultMSAALevel = 0x128; // Size: 4, Type: int32_t
			constexpr auto ContentScaleFactorLevelItems[4] = 0x130; // Size: 352, Type: struct FContentScaleFactorLevelItem
			constexpr auto DefaultContentScaleFactorLevel = 0x290; // Size: 80, Type: struct TMap<enum class ESolarDeviceLevel, enum class ESolarContentScaleFactorLevel>
	}
} 
