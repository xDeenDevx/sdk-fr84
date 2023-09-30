namespace offsets
{
	namespace UTutorialGlobalConfig
	{
			constexpr auto bSwitch = 0x30; // Size: 1, Type: bool
			constexpr auto MapName2TutorialStage = 0x38; // Size: 80, Type: struct TMap<struct FString, enum class ETutorialStage>
			constexpr auto SubtitleDisappearTime = 0x88; // Size: 4, Type: float
			constexpr auto AsyncLoadUIDelayTime = 0x8c; // Size: 4, Type: float
			constexpr auto SameConditionCheckInterval = 0x90; // Size: 4, Type: float
			constexpr auto TutorialLevelConfig = 0x98; // Size: 56, Type: struct FTutorialLevelConfig
	}
} 
