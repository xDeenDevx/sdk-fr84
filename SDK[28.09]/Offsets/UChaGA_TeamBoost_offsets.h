namespace offsets
{
	namespace UChaGA_TeamBoost
	{
			constexpr auto SkillMontage = 0x460; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SkillMontageArmed = 0x468; // Size: 8, Type: struct UAnimMontage*
			constexpr auto OrnamentTag = 0x470; // Size: 8, Type: struct FGameplayTag
			constexpr auto OrnamentMontage = 0x478; // Size: 8, Type: struct UAnimMontage*
			constexpr auto OrnamentMontageArmed = 0x480; // Size: 8, Type: struct UAnimMontage*
			constexpr auto StartSkillMontageNotify = 0x488; // Size: 8, Type: struct FName
			constexpr auto DebuffPurifyEffectClass = 0x490; // Size: 8, Type: UGameplayEffect*
			constexpr auto DebuffImmunityEffectClass = 0x498; // Size: 8, Type: UGameplayEffect*
			constexpr auto SelfBoostEffectClass = 0x4a0; // Size: 8, Type: UGameplayEffect*
			constexpr auto TeammateBoostEffectClass = 0x4a8; // Size: 8, Type: UGameplayEffect*
			constexpr auto TeamBoostProjectileClass = 0x4b0; // Size: 8, Type: ATeamBoostProjectile*
			constexpr auto ProjectileSpawnRelativeLocation = 0x4b8; // Size: 12, Type: struct FVector
			constexpr auto SkillRangeRadius = 0x4c4; // Size: 4, Type: float
			constexpr auto SkillRangeHalfHeight = 0x4c8; // Size: 4, Type: float
	}
} 
