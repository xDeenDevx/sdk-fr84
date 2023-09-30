namespace offsets
{
	namespace USolarBotTeamConfig
	{
			constexpr auto bUseSpecificMemberPreset = 0x30; // Size: 1, Type: bool
			constexpr auto SpecificMemberPresets = 0x38; // Size: 16, Type: struct TArray<struct USolarBotAIConfig*>
			constexpr auto BuildRules = 0x48; // Size: 16, Type: struct TArray<struct FSolarBotTeamBuildRule>
			constexpr auto ForbiddenTags = 0x58; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto HeroPickFormations = 0x78; // Size: 16, Type: struct TArray<struct FSolarBotTeamHeroPickFormation>
	}
} 
