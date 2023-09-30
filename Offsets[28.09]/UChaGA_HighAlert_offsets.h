namespace offsets
{
	namespace UChaGA_HighAlert
	{
			constexpr auto bShowDebug = 0x438; // Size: 1, Type: bool
			constexpr auto HighAlertAngle = 0x43c; // Size: 4, Type: float
			constexpr auto HighAlertRadiusMin = 0x440; // Size: 4, Type: float
			constexpr auto HighAlertRadiusMax = 0x444; // Size: 4, Type: float
			constexpr auto HighAlertBoxExtent = 0x448; // Size: 8, Type: struct FVector2D
			constexpr auto AlertCD = 0x450; // Size: 80, Type: struct TMap<enum class EAlertDirection, float>
			constexpr auto CueTag = 0x4a0; // Size: 8, Type: struct FGameplayCueTag
	}
} 
