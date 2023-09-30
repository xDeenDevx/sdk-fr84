namespace offsets
{
	namespace ASummonItemBase
	{
			constexpr auto AkAudioComponent = 0x2a8; // Size: 8, Type: struct UAkComponent*
			constexpr auto HPBar = 0x2b0; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto CachedActorHandle = 0x2b8; // Size: 4, Type: struct FSpawnedActorHandle
			constexpr auto SourceSummoner = 0x2bc; // Size: 8, Type: struct TWeakObjectPtr<ASolarCharacter>
			constexpr auto DeathReason = 0x2c4; // Size: 1, Type: enum class ESolarSummonDeathReason
			constexpr auto CurrentHealth = 0x2c8; // Size: 4, Type: float
			constexpr auto bDead = 0x2cc; // Size: 1, Type: bool
			constexpr auto FunctionalTimerMax = 0x2d0; // Size: 4, Type: float
			constexpr auto FunctionalTimerDelta = 0x2d4; // Size: 4, Type: float
			constexpr auto CenterOffset = 0x2ec; // Size: 12, Type: struct FVector
			constexpr auto GEToSelfHandle = 0x2f8; // Size: 16, Type: struct FGameplayEffectSpecHandle
			constexpr auto GEToTargetHandle = 0x308; // Size: 16, Type: struct FGameplayEffectSpecHandle
			constexpr auto MaxHealth = 0x318; // Size: 4, Type: float
			constexpr auto ReducedHealth = 0x31c; // Size: 4, Type: float
			constexpr auto DelayDestroyTime = 0x320; // Size: 4, Type: float
			constexpr auto bTeammateDamage = 0x324; // Size: 1, Type: bool
			constexpr auto bSuicideWithSummonerChange = 0x325; // Size: 1, Type: bool
			constexpr auto TimeDuration = 0x328; // Size: 4, Type: float
			constexpr auto bOnlyOne = 0x32c; // Size: 1, Type: bool
			constexpr auto bEnableHPBar = 0x32d; // Size: 1, Type: bool
			constexpr auto bHPDefaultVisible = 0x32e; // Size: 1, Type: bool
			constexpr auto HPBarTagName = 0x330; // Size: 8, Type: struct FName
			constexpr auto HPBarPercentName = 0x338; // Size: 8, Type: struct FName
			constexpr auto HPBarColorName = 0x340; // Size: 8, Type: struct FName
			constexpr auto HPBarColorTeammate = 0x348; // Size: 16, Type: struct FLinearColor
			constexpr auto HPBarColorEnemy = 0x358; // Size: 16, Type: struct FLinearColor
			constexpr auto HPBarMaterialIndex = 0x368; // Size: 4, Type: int32_t
			constexpr auto CenterLocationOffset = 0x36c; // Size: 12, Type: struct FVector
			constexpr auto DestroyDeathWithinSeconds = 0x378; // Size: 4, Type: float
			constexpr auto bSupportAssistAim = 0x37c; // Size: 1, Type: bool
			constexpr auto AssistAimTargetConfig = 0x380; // Size: 72, Type: struct FWeaponAssistAimTargetConfig
			constexpr auto bCanAffectedByEMP = 0x3c8; // Size: 1, Type: bool
			constexpr auto bShowDamageText = 0x3c9; // Size: 1, Type: bool
			constexpr auto SpawnAdjustConfig = 0x3d0; // Size: 8, Type: struct USolarSpawnAdjustConfig*
			constexpr auto bDebug = 0x3d8; // Size: 1, Type: bool
	}
} 
