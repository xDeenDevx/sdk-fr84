namespace offsets
{
	namespace ASolarBullet
	{
			constexpr auto TotalEffectTime = 0x228; // Size: 4, Type: float
			constexpr auto bAttached = 0x22c; // Size: 1, Type: bool
			constexpr auto bShowHitCharacter = 0x22d; // Size: 1, Type: bool
			constexpr auto bShowHitToTeammate = 0x22e; // Size: 1, Type: bool
			constexpr auto bShowHitWater = 0x22f; // Size: 1, Type: bool
			constexpr auto BulletEffect = 0x230; // Size: 8, Type: struct UParticleSystem*
			constexpr auto TrajectoryEffect = 0x238; // Size: 8, Type: struct UParticleSystem*
			constexpr auto TrajectoryEffectOther = 0x240; // Size: 8, Type: struct UParticleSystem*
			constexpr auto SimpleCanisterShotEffectPath = 0x248; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto TrajectoryBeamEffect = 0x260; // Size: 8, Type: struct UParticleSystem*
			constexpr auto TrajectoryBeamEffectOther = 0x268; // Size: 8, Type: struct UParticleSystem*
			constexpr auto HitEffect = 0x270; // Size: 8, Type: struct UParticleSystem*
			constexpr auto MuzzleEffect = 0x278; // Size: 8, Type: struct UParticleSystem*
			constexpr auto bKeepOneActivate = 0x280; // Size: 1, Type: bool
			constexpr auto MuzzleEffectScope = 0x288; // Size: 8, Type: struct UParticleSystem*
			constexpr auto MuzzleEffectOther = 0x290; // Size: 8, Type: struct UParticleSystem*
			constexpr auto FlameArresterMuzzleEffect = 0x298; // Size: 8, Type: struct UParticleSystem*
			constexpr auto FlameArresterMuzzleEffectScope = 0x2a0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto FlameArresterMuzzleEffectOther = 0x2a8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto SpecialEffect = 0x2b0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DecalEffect = 0x2b8; // Size: 8, Type: struct UParticleSystem*
			constexpr auto DecalEffect2 = 0x2c0; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ShieldEffect = 0x2c8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PhysicsHitEffects = 0x2e0; // Size: 80, Type: struct TMap<enum class EPhysicalSurface, struct FSoftObjectPath>
			constexpr auto DecalLifeSpan = 0x330; // Size: 4, Type: float
			constexpr auto ShellCaseEffect = 0x338; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ShellCaseEffectOnScope = 0x340; // Size: 8, Type: struct UParticleSystem*
			constexpr auto CanExplodeWhenOutRange = 0x348; // Size: 1, Type: bool
			constexpr auto HoldingPreViewSound_1P = 0x350; // Size: 16, Type: struct FString
			constexpr auto HoldingPreViewSound_3P = 0x360; // Size: 16, Type: struct FString
			constexpr auto BulletCollisionType = 0x370; // Size: 1, Type: char
	}
} 
