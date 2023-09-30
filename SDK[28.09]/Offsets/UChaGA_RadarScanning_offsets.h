namespace offsets
{
	namespace UChaGA_RadarScanning
	{
			constexpr auto SpawnRadarDelayTime = 0x460; // Size: 4, Type: float
			constexpr auto LifeTime = 0x464; // Size: 4, Type: float
			constexpr auto LifeTimeNoResult = 0x468; // Size: 4, Type: float
			constexpr auto RadarClass = 0x470; // Size: 8, Type: ASolarRadarBase*
			constexpr auto SpawnRadarEventID = 0x478; // Size: 4, Type: int32_t
			constexpr auto EffectRadius = 0x47c; // Size: 4, Type: float
			constexpr auto CueTag = 0x480; // Size: 8, Type: struct FGameplayTag
			constexpr auto SpawnedRadar = 0x488; // Size: 8, Type: struct ASolarRadarBase*
	}
} 
