namespace offsets
{
	namespace USolarPlayerActivityHeatComponent
	{
			constexpr auto WeaponScore = 0xc0; // Size: 4, Type: float
			constexpr auto VehicleScore = 0xc4; // Size: 4, Type: float
			constexpr auto AbilityScore = 0xc8; // Size: 4, Type: float
			constexpr auto DistScoreCurve = 0xd0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DefenderOrReaperScore = 0xd8; // Size: 4, Type: float
			constexpr auto FirstKillTimeBefore = 0xdc; // Size: 4, Type: float
			constexpr auto LastKillTimeLater = 0xe0; // Size: 4, Type: float
	}
} 
