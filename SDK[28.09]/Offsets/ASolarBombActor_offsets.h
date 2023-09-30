namespace offsets
{
	namespace ASolarBombActor
	{
			constexpr auto bFireWater = 0x228; // Size: 1, Type: bool
			constexpr auto BombConfig = 0x22c; // Size: 28, Type: struct FBombingZoneBomb
			constexpr auto bAutoDestroyAfterFire = 0x248; // Size: 1, Type: bool
			constexpr auto TargetLandingTime = 0x254; // Size: 4, Type: float
			constexpr auto WaterBombEffect = 0x258; // Size: 8, Type: struct UParticleSystem*
			constexpr auto BombEffect = 0x260; // Size: 8, Type: struct UParticleSystem*
			constexpr auto GuideLine = 0x268; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto AkAudioComponent = 0x270; // Size: 8, Type: struct UAkComponent*
			constexpr auto SolarAkGameObject = 0x278; // Size: 8, Type: struct USolarAkGameObject*
	}
} 
