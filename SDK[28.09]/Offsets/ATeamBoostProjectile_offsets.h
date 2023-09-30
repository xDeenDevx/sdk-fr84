namespace offsets
{
	namespace ATeamBoostProjectile
	{
			constexpr auto BaseMoveSpeed = 0x228; // Size: 4, Type: float
			constexpr auto MaxMoveSpeed = 0x22c; // Size: 4, Type: float
			constexpr auto MoveAcceleration = 0x230; // Size: 4, Type: float
			constexpr auto HeightOffset = 0x234; // Size: 4, Type: float
			constexpr auto FinishDistance = 0x238; // Size: 4, Type: float
			constexpr auto ProjectileParticleSpawnInfos = 0x240; // Size: 16, Type: struct TArray<struct FActorParticleEffectSpawnInfo>
			constexpr auto ProjectileParticleComponents = 0x250; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto TargetCharacter = 0x260; // Size: 8, Type: struct TWeakObjectPtr<ASolarCharacter>
	}
} 
