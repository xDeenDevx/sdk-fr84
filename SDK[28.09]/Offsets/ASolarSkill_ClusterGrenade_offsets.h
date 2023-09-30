namespace offsets
{
	namespace ASolarSkill_ClusterGrenade
	{
			constexpr auto Speed = 0x558; // Size: 4, Type: float
			constexpr auto ThrowAngleOffset = 0x55c; // Size: 4, Type: float
			constexpr auto ExplosionRadius = 0x560; // Size: 4, Type: float
			constexpr auto ClusterGrenadeMesh = 0x568; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto bIsLeader = 0x570; // Size: 1, Type: bool
			constexpr auto Damage = 0x574; // Size: 4, Type: float
			constexpr auto DamageScaleByDistanceCurve = 0x578; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto CanDamageObjectTypes = 0x600; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto DelayDestroyTime = 0x610; // Size: 4, Type: float
			constexpr auto SubClusterGrenades = 0x618; // Size: 16, Type: struct TArray<struct FSolarSubClusterGrenadeData>
			constexpr auto bTeammateDamage = 0x628; // Size: 1, Type: bool
			constexpr auto ClusterGrenadeIgnoreArray = 0x630; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<ASolarSkill_ClusterGrenade>>
	}
} 
