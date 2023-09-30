namespace offsets
{
	namespace USolarTutorialManager
	{
			constexpr auto CurrentTutorialStage = 0x50; // Size: 1, Type: enum class ETutorialStage
			constexpr auto OnRegisterEvent = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStepActionBegan = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStepActionEnded = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStepActionReset = 0x88; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStepActionDisposed = 0x98; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto TutorialGlobalConfig = 0x118; // Size: 8, Type: struct UTutorialGlobalConfig*
			constexpr auto TutorialTableMapRows = 0x120; // Size: 80, Type: struct TMap<int32_t, struct FTutorialTableRow>
			constexpr auto ActionTableRows = 0x170; // Size: 16, Type: struct TArray<struct FTutorialActionTableRow>
			constexpr auto ConditionTableMapRows = 0x180; // Size: 80, Type: struct TMap<int32_t, struct FTutorialConditionTableRow>
			constexpr auto Tutorials = 0x1d0; // Size: 80, Type: struct TMap<int32_t, struct UTutorial*>
			constexpr auto bIsConditionCheckCodeParsed = 0x330; // Size: 1, Type: char
			constexpr auto TutorialDataTablePath = 0x338; // Size: 16, Type: struct FString
			constexpr auto ActionDataTablePath = 0x348; // Size: 16, Type: struct FString
			constexpr auto ConditionDataTablePath = 0x358; // Size: 16, Type: struct FString
			constexpr auto TutorialGlobalConfigPath = 0x368; // Size: 16, Type: struct FString
			constexpr auto OriginCheckFuncNames = 0x378; // Size: 80, Type: struct TMap<uint16_t, struct FName>
			constexpr auto CheckFuncs = 0x3c8; // Size: 80, Type: struct TMap<uint16_t, struct UFunction*>
			constexpr auto CacheRanConditions = 0x428; // Size: 80, Type: struct TMap<struct FString, struct FCacheConditionInfo>
			constexpr auto CurrentTutorialLevelSaveGame = 0x488; // Size: 8, Type: struct UTutorialLevelSaveGame*
	}
} 
