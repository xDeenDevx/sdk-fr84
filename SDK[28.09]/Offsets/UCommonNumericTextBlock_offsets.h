namespace offsets
{
	namespace UCommonNumericTextBlock
	{
			constexpr auto OnInterpolationStartedEvent = 0x320; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInterpolationUpdatedEvent = 0x330; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnOutroEvent = 0x340; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInterpolationEndedEvent = 0x350; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CurrentNumericValue = 0x360; // Size: 4, Type: float
			constexpr auto NumericType = 0x364; // Size: 1, Type: enum class ECommonNumericType
			constexpr auto FormattingSpecification = 0x368; // Size: 20, Type: struct FCommonNumberFormattingOptions
			constexpr auto EaseOutInterpolationExponent = 0x37c; // Size: 4, Type: float
			constexpr auto InterpolationUpdateInterval = 0x380; // Size: 4, Type: float
			constexpr auto PostInterpolationShrinkDuration = 0x384; // Size: 4, Type: float
			constexpr auto PerformSizeInterpolation = 0x388; // Size: 1, Type: bool
			constexpr auto IsPercentage = 0x389; // Size: 1, Type: bool
	}
} 
