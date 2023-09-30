namespace offsets
{
	namespace USolarRoleSkillDataConfig
	{
			constexpr auto ClassCommonPassiveSkill = 0x30; // Size: 40, Type: struct TSoftObjectPtr<UPassiveSkillDataAsset>
			constexpr auto HeroClassConfigs = 0x58; // Size: 80, Type: struct TMap<enum class EClassType, struct FHeroClassConfig>
			constexpr auto RoleSkillDataTable = 0xa8; // Size: 8, Type: struct UDataTable*
			constexpr auto BattleUpgradeEffectTypeDataTable = 0xb0; // Size: 8, Type: struct UDataTable*
			constexpr auto RoleSkillCannotActiveNoticeID = 0xb8; // Size: 4, Type: int32_t
			constexpr auto UniqueSkillForbiddenGameplayEffect = 0xc0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto TacticalSkillForbiddenGameplayEffect = 0xd8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto InitCDValueGameplayEffect = 0xf0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto SuperSkillBlockGameplayEffect = 0x108; // Size: 24, Type: struct FSoftClassPath
			constexpr auto TacticalSkillBlockGameplayEffect = 0x120; // Size: 24, Type: struct FSoftClassPath
			constexpr auto UsingContinuousSkillStatusEffect = 0x138; // Size: 8, Type: UGameplayEffect*
			constexpr auto HoldingSkillStatusEffect = 0x140; // Size: 8, Type: UGameplayEffect*
			constexpr auto WeaponUIStyleDataTable = 0x148; // Size: 8, Type: struct UDataTable*
			constexpr auto CharacterUpgradeEffects = 0x150; // Size: 80, Type: struct TMap<int32_t, struct FString>
	}
} 
