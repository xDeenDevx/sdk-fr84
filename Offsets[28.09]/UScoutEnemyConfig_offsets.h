namespace offsets
{
	namespace UScoutEnemyConfig
	{
			constexpr auto bShowDebug = 0x30; // Size: 1, Type: bool
			constexpr auto ScoutMaxNum = 0x34; // Size: 4, Type: int32_t
			constexpr auto TimeToScanEffect = 0x38; // Size: 4, Type: float
			constexpr auto MaxDetectionDistance = 0x3c; // Size: 4, Type: float
			constexpr auto BondingBoxExtent = 0x40; // Size: 8, Type: struct FVector2D
			constexpr auto bSupportHipFire = 0x48; // Size: 1, Type: bool
			constexpr auto BoxScaleRatioByScope = 0x50; // Size: 80, Type: struct TMap<enum class EWeaponScopeType, float>
			constexpr auto TargetOccBlockTypes = 0xa0; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto BlockWithMyTags = 0xb0; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto BlockWithEnemyTags = 0xd0; // Size: 32, Type: struct FGameplayTagContainer
	}
} 
