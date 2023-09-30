namespace offsets
{
	namespace USolarBotAIConfig
	{
			constexpr auto IdentifierTags = 0x30; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto BattleSection = 0x50; // Size: 8, Type: struct USolarBotConfigSection_Battle*
			constexpr auto LootSection = 0x58; // Size: 8, Type: struct USolarBotConfigSection_Loot*
			constexpr auto PerceptionSection = 0x60; // Size: 8, Type: struct USolarBotConfigSection_Perception*
			constexpr auto CustomSections = 0x68; // Size: 16, Type: struct TArray<struct USolarBotConfigSection*>
	}
} 
