namespace offsets
{
	namespace UBTDecorator_BotWasRecentlyHit
	{
			constexpr auto TimeThresholdMax = 0x98; // Size: 4, Type: float
			constexpr auto bIncludeHearingHit = 0x9c; // Size: 1, Type: bool
			constexpr auto bTriggerDelay = 0x9d; // Size: 1, Type: bool
			constexpr auto TriggerDelaySeconds = 0xa0; // Size: 4, Type: float
			constexpr auto TriggerDelaySecondsDeviation = 0xa4; // Size: 4, Type: float
			constexpr auto TriggerExpiredSeconds = 0xa8; // Size: 4, Type: float
	}
} 
