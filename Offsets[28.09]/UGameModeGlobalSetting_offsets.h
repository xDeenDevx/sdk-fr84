namespace offsets
{
	namespace UGameModeGlobalSetting
	{
			constexpr auto OnGlobalSettingChanged = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bCanVJetInWater = 0x38; // Size: 1, Type: bool
			constexpr auto bCanHJetInWater = 0x39; // Size: 1, Type: bool
			constexpr auto bOverrideVJetCD = 0x3a; // Size: 1, Type: bool
			constexpr auto OverridenVJetCD = 0x3c; // Size: 4, Type: float
			constexpr auto bOverrideHJetCD = 0x40; // Size: 1, Type: bool
			constexpr auto OverridenHJetCD = 0x44; // Size: 4, Type: float
			constexpr auto bEnableJetCost = 0x48; // Size: 1, Type: bool
			constexpr auto JetAltitudeLimitationMode = 0x49; // Size: 1, Type: enum class EJetAltitudeLimitationMode
			constexpr auto bEnableEnergyCost = 0x4a; // Size: 1, Type: bool
			constexpr auto bEnableDamage = 0x4b; // Size: 1, Type: bool
			constexpr auto bEnableTeamDamage = 0x4c; // Size: 1, Type: bool
			constexpr auto bEnableMinHPLock = 0x4d; // Size: 1, Type: bool
			constexpr auto MinHPToLock = 0x50; // Size: 4, Type: float
			constexpr auto bEnableSkydiveFollowMovement = 0x54; // Size: 1, Type: bool
			constexpr auto bEnableBigMap = 0x55; // Size: 1, Type: bool
			constexpr auto bShowVehicleOnMap = 0x56; // Size: 1, Type: bool
			constexpr auto KillStreakEndNoticeNumber = 0x58; // Size: 4, Type: int32_t
			constexpr auto KillLeaderMinKillNumber = 0x5c; // Size: 4, Type: int32_t
			constexpr auto bShowRevengeNotice = 0x60; // Size: 1, Type: bool
			constexpr auto bShowKillStreakEndNotice = 0x61; // Size: 1, Type: bool
			constexpr auto bShowTotalKillNotice = 0x62; // Size: 1, Type: bool
			constexpr auto bShowKillDownNotice = 0x63; // Size: 1, Type: bool
			constexpr auto bShowKillLeaderNotice = 0x64; // Size: 1, Type: bool
			constexpr auto bShowKillLeaderShutDownNotice = 0x65; // Size: 1, Type: bool
			constexpr auto bShowClearTeamNotice = 0x66; // Size: 1, Type: bool
			constexpr auto WeaponInfiniteAmmoMode = 0x67; // Size: 1, Type: enum class EWeaponInfiniteAmmoMode
			constexpr auto bEnableWeaponPartEffectTip = 0x68; // Size: 1, Type: bool
			constexpr auto WeaponLevelDamageFactorArray = 0x70; // Size: 16, Type: struct TArray<float>
			constexpr auto bDestroyItemOnDiscard = 0x80; // Size: 1, Type: bool
			constexpr auto bDestroyWeaponOnDiscard = 0x81; // Size: 1, Type: bool
			constexpr auto bCanRebirth = 0x82; // Size: 1, Type: bool
			constexpr auto bCanLoginBattle = 0x83; // Size: 1, Type: bool
			constexpr auto bEnableBattlePrompt = 0x84; // Size: 1, Type: bool
			constexpr auto bEnableBattlePrompt_BeginPlay = 0x85; // Size: 1, Type: bool
			constexpr auto bEnableOpponentPerspective = 0x86; // Size: 1, Type: bool
			constexpr auto bKillPlayerWhenOut = 0x87; // Size: 1, Type: bool
			constexpr auto ConfigGameModeId = 0x88; // Size: 4, Type: int32_t
			constexpr auto bEnableEnemyNameMark = 0x8c; // Size: 1, Type: bool
			constexpr auto EnableEnemyNameMarkDistance = 0x90; // Size: 4, Type: float
			constexpr auto EnemyNameMarkDuration = 0x94; // Size: 4, Type: float
			constexpr auto SummonedAirDropMaxSum = 0x98; // Size: 4, Type: int32_t
			constexpr auto SummonedAirDropLifeTime = 0x9c; // Size: 4, Type: float
			constexpr auto SummonedAirDropDestroyEffectTime = 0xa0; // Size: 4, Type: float
	}
} 
