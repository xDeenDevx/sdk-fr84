namespace offsets
{
	namespace USolarBotAITeamManager
	{
			constexpr auto UpdateInterval = 0x28; // Size: 4, Type: float
			constexpr auto DefaultSeparateDistance = 0x2c; // Size: 4, Type: float
			constexpr auto DefaultReturnDistance = 0x30; // Size: 4, Type: float
			constexpr auto DebugVisualizerClass = 0x90; // Size: 8, Type: ASolarBotTeamVisualizer*
			constexpr auto DebugVisualizer = 0x98; // Size: 8, Type: struct ASolarBotTeamVisualizer*
			constexpr auto GlobalGameTeamConfigs = 0xa0; // Size: 8, Type: struct UDataTable*
			constexpr auto AllocatedCharacters = 0xa8; // Size: 80, Type: struct TMap<struct ASolarCharacter*, struct ASolarBotAIController*>
			constexpr auto AbandonedCharacters = 0xf8; // Size: 16, Type: struct TArray<struct ASolarCharacter*>
			constexpr auto EmojiTaskSettings = 0x108; // Size: 80, Type: struct TMap<enum class EBotInteractCondition, struct FBotEmojiSetting>
			constexpr auto ResponseToVoiceType = 0x158; // Size: 80, Type: struct TMap<int32_t, enum class EBotInteractCondition>
			constexpr auto ResponseToMarkType = 0x1a8; // Size: 80, Type: struct TMap<enum class EWorldMarkType, enum class EBotInteractCondition>
			constexpr auto ResponseTaskSettings = 0x1f8; // Size: 80, Type: struct TMap<enum class EBotInteractCondition, struct FBotResponseSetting>
	}
} 
