namespace offsets
{
	namespace USolarGameplaySmokeComponent
	{
			constexpr auto SmokeRadius = 0xb0; // Size: 4, Type: float
			constexpr auto LocalPlayerCheckRadiusWithCamera = 0xb4; // Size: 4, Type: float
			constexpr auto DetectDistance = 0xb8; // Size: 4, Type: float
			constexpr auto DetectTargetFlag = 0xbc; // Size: 1, Type: char
			constexpr auto TeamPerspectiveCueTag = 0xc0; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto HawkeyePerspectiveCueTag = 0xc8; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto bEnableSmokeDamage = 0xd0; // Size: 1, Type: bool
			constexpr auto DamageDistance = 0xd4; // Size: 4, Type: float
			constexpr auto DamagePerTime = 0xd8; // Size: 4, Type: float
			constexpr auto DamageFreq = 0xdc; // Size: 4, Type: float
	}
} 
