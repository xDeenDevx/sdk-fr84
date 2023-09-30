namespace offsets
{
	namespace UChaGA_HitShield
	{
			constexpr auto HitShieldClass = 0x438; // Size: 8, Type: ASolarEnergyShield*
			constexpr auto DistanceToCharacter = 0x440; // Size: 4, Type: float
			constexpr auto CoolDown = 0x444; // Size: 4, Type: float
			constexpr auto MaxAngleinZ = 0x448; // Size: 4, Type: float
			constexpr auto BlockShieldSpawnTags = 0x450; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto TriggerDamageTypes = 0x470; // Size: 80, Type: struct TSet<enum class ESCMDamageType>
	}
} 
