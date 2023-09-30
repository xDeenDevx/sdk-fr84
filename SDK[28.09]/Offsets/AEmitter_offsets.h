namespace offsets
{
	namespace AEmitter
	{
			constexpr auto ParticleSystemComponent = 0x228; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto bDestroyOnSystemFinish = 0x230; // Size: 1, Type: char
			constexpr auto bPostUpdateTickGroup = 0x230; // Size: 1, Type: char
			constexpr auto bCurrentlyActive = 0x230; // Size: 1, Type: char
			constexpr auto OnParticleSpawn = 0x238; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleBurst = 0x248; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleDeath = 0x258; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnParticleCollide = 0x268; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
