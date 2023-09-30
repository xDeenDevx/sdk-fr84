namespace offsets
{
	namespace USolarPreservedBotManager
	{
			constexpr auto SilenceLocationInDiffMap = 0x88; // Size: 80, Type: struct TMap<int32_t, struct FVector>
			constexpr auto MinDetectDistance = 0xdc; // Size: 4, Type: float
			constexpr auto PopTasks = 0x100; // Size: 16, Type: struct TArray<struct USolarPreservedBotPopTask*>
			constexpr auto DefaultPopQuery = 0x110; // Size: 72, Type: struct FEQSParametrizedQueryExecutionRequest
			constexpr auto PopQueryMap = 0x158; // Size: 80, Type: struct TMap<enum class EPopLocationType, struct FEQSParametrizedQueryExecutionRequest>
			constexpr auto SeparateQuery = 0x1a8; // Size: 8, Type: struct UEnvQuery*
			constexpr auto SeparateEQSRunMode = 0x1b0; // Size: 1, Type: enum class EEnvQueryRunMode
			constexpr auto DefaultItemTemplate = 0x1b8; // Size: 240, Type: struct FSolarBotTimelineAIItemSetting
			constexpr auto TimeBetweenDyingAndDead = 0x2a8; // Size: 4, Type: float
			constexpr auto OnSendBotsSuccess = 0x2b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSendBotsFail = 0x2c8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
