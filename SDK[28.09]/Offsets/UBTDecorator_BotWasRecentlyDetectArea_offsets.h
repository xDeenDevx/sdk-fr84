namespace offsets
{
	namespace UBTDecorator_BotWasRecentlyDetectArea
	{
			constexpr auto TimeThresholdMax = 0x98; // Size: 4, Type: float
			constexpr auto TimeThresholdMin = 0x9c; // Size: 4, Type: float
			constexpr auto TimeThresholdMinDeviation = 0xa0; // Size: 4, Type: float
			constexpr auto bSpecifyAreaType = 0xa4; // Size: 1, Type: bool
			constexpr auto SpecifiedAreaType = 0xa5; // Size: 1, Type: enum class EPerceivableEffectAreaType
			constexpr auto bSpecifyAreaTendency = 0xa6; // Size: 1, Type: bool
			constexpr auto SpecifiedAreaTendency = 0xa7; // Size: 1, Type: enum class EPerceivableEffectAreaTendency
			constexpr auto MinInfluenceValue = 0xa8; // Size: 4, Type: float
	}
} 
