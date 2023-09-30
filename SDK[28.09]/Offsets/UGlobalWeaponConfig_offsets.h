namespace offsets
{
	namespace UGlobalWeaponConfig
	{
			constexpr auto WeaponAttributeTags = 0x38; // Size: 24, Type: struct FWeaponAttributeGameplayTags
			constexpr auto AimTraceOriginType = 0x50; // Size: 1, Type: enum class EAimTraceOriginType
			constexpr auto MuzzleInWallCheckDistance = 0x54; // Size: 4, Type: float
			constexpr auto SpreadSmoothSpeed = 0x58; // Size: 4, Type: float
			constexpr auto bEnableNewShoot = 0x5c; // Size: 1, Type: bool
			constexpr auto bEnableGunEndShake = 0x5d; // Size: 1, Type: bool
			constexpr auto bEnableRecoilRecovery = 0x5e; // Size: 1, Type: bool
			constexpr auto bRecoilRecoveryBlockGunEndShake = 0x5f; // Size: 1, Type: bool
			constexpr auto RecoilRecoveryScale = 0x60; // Size: 4, Type: float
			constexpr auto AimOffsetAdjustType = 0x64; // Size: 1, Type: enum class EAimOffsetAdjustType
			constexpr auto StandardViewportSize = 0x68; // Size: 8, Type: struct FVector2D
			constexpr auto StandardDPIScale = 0x70; // Size: 4, Type: float
			constexpr auto bWeaponReceiveShadow = 0x74; // Size: 1, Type: bool
			constexpr auto WeaponScopeSensitivityTable = 0x78; // Size: 8, Type: struct UDataTable*
			constexpr auto bSecondLimitFullForGameDrop = 0x80; // Size: 1, Type: bool
			constexpr auto DoScopeInterval = 0x84; // Size: 4, Type: float
			constexpr auto DoScopeMixedTimeThreshold = 0x88; // Size: 4, Type: float
			constexpr auto SprintingFireDelay = 0x8c; // Size: 4, Type: float
			constexpr auto WeaponHitResponseClassMap = 0x90; // Size: 80, Type: struct TMap<AActor*, struct FWeaponHitResponse>
			constexpr auto WeaponHitResponseTagMap = 0xe0; // Size: 80, Type: struct TMap<struct FName, struct FWeaponHitResponse>
			constexpr auto WeaponHitResponseSameTeamClassMap = 0x130; // Size: 80, Type: struct TMap<AActor*, struct FWeaponHitResponse>
			constexpr auto WeaponHitResponseSameTeamTagMap = 0x180; // Size: 80, Type: struct TMap<struct FName, struct FWeaponHitResponse>
			constexpr auto HitEffectScaleRuntimeCurve = 0x1d0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto bCanOperateWhenOverload = 0x258; // Size: 1, Type: bool
			constexpr auto WeaponCrosshairSpreadSpeedRuntimeCurve = 0x260; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto WeaponCrosshairBackSpeedRuntimeCurve = 0x2e8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto WeaponSkillDataUIDisplayDistance = 0x370; // Size: 4, Type: float
			constexpr auto PriamayFireIgnoreInterval = 0x374; // Size: 4, Type: float
			constexpr auto AssistAimAutoFireRadius = 0x378; // Size: 4, Type: float
			constexpr auto AssistAimAutoFireBlockTypes = 0x380; // Size: 16, Type: struct TArray<enum class ECollisionChannel>
			constexpr auto AssistAimConfig = 0x390; // Size: 8, Type: struct UWeaponAssistAimConfig*
			constexpr auto PartUpgradeMaterial = 0x398; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PartUpgradeFadeInterval = 0x3b0; // Size: 4, Type: float
			constexpr auto CharaterPostureMap = 0x3b8; // Size: 80, Type: struct TMap<enum class EPosture, struct FString>
			constexpr auto BlockCharacterSprintTags = 0x408; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto WeaponPartEffectDescTable = 0x428; // Size: 8, Type: struct UDataTable*
			constexpr auto WeaponPartEffectTipMaxinum = 0x430; // Size: 4, Type: int32_t
			constexpr auto HitFeedbackMapForUI = 0x438; // Size: 80, Type: struct TMap<enum class ESolarHitType, struct FString>
			constexpr auto CrosshairAimEnemyEndTimeForPlayerWeapon = 0x488; // Size: 4, Type: float
			constexpr auto CrosshairAimEnemyEndTimeForVehicleWeapon = 0x48c; // Size: 4, Type: float
			constexpr auto AudioPromptForNoAmmoTable = 0x490; // Size: 80, Type: struct TMap<int32_t, enum class EPassiveTriggeredVoice>
			constexpr auto WeaponEquipSound = 0x4e0; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FName>
			constexpr auto WeaponUnequipSound = 0x530; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FName>
			constexpr auto WeaponOpenScopeSound = 0x580; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FName>
			constexpr auto WeaponCloseScopeSound = 0x5d0; // Size: 80, Type: struct TMap<enum class EWeaponType, struct FName>
			constexpr auto WeaponSummonBlockNoticeID = 0x620; // Size: 4, Type: int32_t
			constexpr auto WeaponSummonOverRangeNoticeID = 0x624; // Size: 4, Type: int32_t
			constexpr auto WeaponSkinTable = 0x628; // Size: 8, Type: struct UDataTable*
			constexpr auto PartSocketNameTable = 0x630; // Size: 80, Type: struct TMap<enum class EWeaponPartType, struct FName>
			constexpr auto WeaponLODTable = 0x680; // Size: 8, Type: struct UDataTable*
			constexpr auto EnableHeadShotDamageMinScale = 0x688; // Size: 4, Type: float
	}
} 
