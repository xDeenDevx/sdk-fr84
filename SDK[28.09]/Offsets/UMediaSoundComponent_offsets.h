namespace offsets
{
	namespace UMediaSoundComponent
	{
			constexpr auto Channels = 0x7f0; // Size: 4, Type: enum class EMediaSoundChannels
			constexpr auto DynamicRateAdjustment = 0x7f4; // Size: 1, Type: bool
			constexpr auto RateAdjustmentFactor = 0x7f8; // Size: 4, Type: float
			constexpr auto RateAdjustmentRange = 0x7fc; // Size: 16, Type: struct FFloatRange
			constexpr auto MediaPlayer = 0x810; // Size: 8, Type: struct UMediaPlayer*
	}
} 
