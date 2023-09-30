namespace offsets
{
	namespace UWeaponFireLaserCollector
	{
			constexpr auto OwnerWeapon = 0xb8; // Size: 8, Type: struct ASolarWeapon*
			constexpr auto FireAkComponent = 0xc0; // Size: 8, Type: struct UAkComponent*
			constexpr auto ImpactAkComponent = 0xc8; // Size: 8, Type: struct UAkComponent*
			constexpr auto ActElement = 0xd0; // Size: 72, Type: struct FWeaponFireLaserElement
			constexpr auto FadingElements = 0x118; // Size: 16, Type: struct TArray<struct FWeaponFireLaserElement>
			constexpr auto ExplodeEffectParticle = 0x140; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DecalsEffectParticle = 0x148; // Size: 8, Type: struct UParticleSystem*
			constexpr auto CacheParticles = 0x150; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
	}
} 
