namespace offsets
{
	namespace USolarBTS_BotInteractionTrigger
	{
			constexpr auto ConditionToTrigger = 0x70; // Size: 1, Type: enum class EBotInteractCondition
			constexpr auto bLoop = 0x71; // Size: 1, Type: bool
			constexpr auto LoopInterval = 0x74; // Size: 4, Type: float
			constexpr auto LoopRandomDeviation = 0x78; // Size: 4, Type: float
			constexpr auto AllowedConditions = 0x88; // Size: 80, Type: struct TSet<enum class EBotInteractCondition>
	}
} 
