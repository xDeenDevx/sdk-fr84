namespace offsets
{
	namespace ASolarSkill_PenetrateGrenade
	{
			constexpr auto DamageInterval = 0x558; // Size: 4, Type: float
			constexpr auto DefaultDamage = 0x55c; // Size: 4, Type: float
			constexpr auto ClassTypeDamageMap = 0x560; // Size: 80, Type: struct TMap<AActor*, float>
			constexpr auto bCanDamageTeamate = 0x5b0; // Size: 1, Type: bool
			constexpr auto OnStopDestroyTime = 0x5b4; // Size: 4, Type: float
			constexpr auto TraceTestDistance = 0x5b8; // Size: 4, Type: float
			constexpr auto DamageSphereRadius = 0x5bc; // Size: 4, Type: float
			constexpr auto DamageBoxExtent = 0x5c0; // Size: 12, Type: struct FVector
			constexpr auto DamageObjectTypeArray = 0x5d0; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
	}
} 
