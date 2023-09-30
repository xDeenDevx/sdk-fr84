namespace offsets
{
	namespace URadialForceComponent
	{
			constexpr auto Radius = 0x318; // Size: 4, Type: float
			constexpr auto Falloff = 0x31c; // Size: 1, Type: enum class ERadialImpulseFalloff
			constexpr auto ImpulseStrength = 0x320; // Size: 4, Type: float
			constexpr auto bImpulseVelChange = 0x324; // Size: 1, Type: char
			constexpr auto bIgnoreOwningActor = 0x324; // Size: 1, Type: char
			constexpr auto ForceStrength = 0x328; // Size: 4, Type: float
			constexpr auto DestructibleDamage = 0x32c; // Size: 4, Type: float
			constexpr auto ObjectTypesToAffect = 0x330; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
	}
} 
