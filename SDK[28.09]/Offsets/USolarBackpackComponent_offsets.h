namespace offsets
{
	namespace USolarBackpackComponent
	{
			constexpr auto DeathBoxEnergyRate = 0xb8; // Size: 4, Type: float
			constexpr auto RebirthEnergyRate = 0xbc; // Size: 4, Type: float
			constexpr auto OnWeaponCreateCompleteDelegate = 0xc8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto InitialSolarCharge = 0x150; // Size: 4, Type: float
			constexpr auto SolarChargeInterval = 0x154; // Size: 4, Type: float
			constexpr auto InitialEnergyLimit = 0x158; // Size: 4, Type: float
			constexpr auto InitialExtraEnergyLimit = 0x15c; // Size: 4, Type: float
			constexpr auto InitialExtraEnergyCharge = 0x160; // Size: 4, Type: float
			constexpr auto InitialChargeCD = 0x164; // Size: 4, Type: float
			constexpr auto RechargeFrequencyFromSky = 0x178; // Size: 4, Type: float
			constexpr auto RechargeFrequencyFromDeathBox = 0x17c; // Size: 4, Type: float
			constexpr auto RechargeFrequencyFromPile = 0x180; // Size: 4, Type: float
			constexpr auto RechargeQuantityFromSky = 0x184; // Size: 4, Type: float
			constexpr auto RechargeQuantityFromDeathBox = 0x188; // Size: 4, Type: float
			constexpr auto RechargeQuantityFromPile = 0x18c; // Size: 4, Type: float
			constexpr auto JetPackVerticalDashSpeedScale = 0x220; // Size: 4, Type: float
			constexpr auto JetPackHorizontalDashSpeedScale = 0x224; // Size: 4, Type: float
			constexpr auto ItemAbilities = 0x228; // Size: 80, Type: struct TMap<int32_t, UGameplayAbility*>
			constexpr auto GivenAbilityHandles = 0x278; // Size: 80, Type: struct TMap<int32_t, struct FGameplayAbilitySpecHandle>
			constexpr auto bWeaponPartPickable = 0x31c; // Size: 1, Type: bool
			constexpr auto defaultDeathBoxEnergyConfig = 0x320; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto DroppedItemIDMap = 0x370; // Size: 80, Type: struct TMap<int32_t, struct FDateTime>
			constexpr auto DiscardItemDelayNoticeTime = 0x3c0; // Size: 4, Type: float
			constexpr auto GradeRankProportion = 0x3c8; // Size: 16, Type: struct TArray<float>
			constexpr auto InitialGridNum = 0x3d8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CustomMode_Hunt_InitialGridNum = 0x3e8; // Size: 16, Type: struct TArray<int32_t>
	}
} 
