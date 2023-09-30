namespace offsets
{
	namespace UPassiveSkillDataAsset
	{
			constexpr auto SkillClassPath = 0x30; // Size: 24, Type: struct FSoftClassPath
			constexpr auto SkillIconPath = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto SkillName = 0x60; // Size: 4, Type: struct FWrappedLocalTextID
			constexpr auto SkillDescription = 0x64; // Size: 4, Type: struct FWrappedLocalTextID
			constexpr auto LevelUpConfigs = 0x68; // Size: 16, Type: struct TArray<struct FPassiveSkillLevelDescription>
	}
} 
