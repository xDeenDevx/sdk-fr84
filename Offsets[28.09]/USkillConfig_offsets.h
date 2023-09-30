namespace offsets
{
	namespace USkillConfig
	{
			constexpr auto SkillName = 0x30; // Size: 4, Type: int32_t
			constexpr auto SkillType = 0x34; // Size: 4, Type: int32_t
			constexpr auto SkillDescription = 0x38; // Size: 4, Type: int32_t
			constexpr auto SkillIcon = 0x40; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto KillIcon = 0x58; // Size: 16, Type: struct FString
			constexpr auto SkillVoiceDelay = 0x68; // Size: 4, Type: float
			constexpr auto CanCancelPhaseFlag = 0x6c; // Size: 1, Type: char
			constexpr auto CanCancelContinuousBegin = 0x70; // Size: 4, Type: float
			constexpr auto CanCancelContinuousEnd = 0x74; // Size: 4, Type: float
			constexpr auto VoiceTriggerTiming = 0x78; // Size: 1, Type: char
			constexpr auto SkillExtraConfigByPlayerLevel = 0x80; // Size: 80, Type: struct TMap<int32_t, struct USkillBPAndExtraConfig*>
	}
} 
