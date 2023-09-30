namespace offsets
{
	namespace USolarPerceptionComponent
	{
			constexpr auto DefaultThreatConfig = 0x180; // Size: 108, Type: struct FSolarBotThreatConfig
			constexpr auto ConfigAreaTypeIdentifyMap = 0x1f0; // Size: 80, Type: struct TMap<enum class EPerceivableEffectAreaType, AActor*>
			constexpr auto EffectAreasInfluenceConfig = 0x240; // Size: 96, Type: struct FPerceivableEAInfluenceConfig
			constexpr auto MaxInfluenceRadius = 0x2a0; // Size: 4, Type: float
			constexpr auto SmokeGrenadeAffectRadius = 0x2a4; // Size: 4, Type: float
			constexpr auto EnergyBubbleAffectRadius = 0x2a8; // Size: 4, Type: float
			constexpr auto SummonWallAffectRadius = 0x2ac; // Size: 4, Type: float
			constexpr auto UAVShieldAffectRadius = 0x2b0; // Size: 4, Type: float
			constexpr auto UAVRescueAffectRadius = 0x2b4; // Size: 4, Type: float
			constexpr auto bTargetSelectEnabled = 0x2b8; // Size: 1, Type: bool
			constexpr auto ForbiddenTags = 0x2c0; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto MaxNumCachedDamage = 0x308; // Size: 4, Type: int32_t
	}
} 
