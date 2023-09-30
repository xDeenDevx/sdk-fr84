namespace offsets
{
	namespace AMissileSwarmLauncher
	{
			constexpr auto bDrawDebug = 0x228; // Size: 1, Type: bool
			constexpr auto EjectSpeed = 0x22c; // Size: 4, Type: float
			constexpr auto EjectGravity = 0x230; // Size: 4, Type: float
			constexpr auto EjectTimeLength = 0x234; // Size: 4, Type: float
			constexpr auto BoostSpeed = 0x238; // Size: 4, Type: float
			constexpr auto BoostCtrlSpread = 0x23c; // Size: 4, Type: float
			constexpr auto DamagePerBullet = 0x240; // Size: 4, Type: float
			constexpr auto ExplodeRadius = 0x244; // Size: 4, Type: float
			constexpr auto bTeammateDamage = 0x248; // Size: 1, Type: bool
			constexpr auto CanDamageObjectTypes = 0x250; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto ExplodeMarkParticle = 0x260; // Size: 8, Type: struct UParticleSystem*
			constexpr auto BulletParticle = 0x268; // Size: 8, Type: struct UParticleSystem*
			constexpr auto RibbonTrajectoryParticle = 0x270; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EjectParticle = 0x278; // Size: 8, Type: struct UParticleSystem*
			constexpr auto BoostParticle = 0x280; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ExplodeParticle = 0x288; // Size: 8, Type: struct UParticleSystem*
			constexpr auto ExplodeMarkEffects = 0x2b0; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto OwnerCharacter = 0x2c0; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto PlayerRotation = 0x2c8; // Size: 12, Type: struct FRotator
			constexpr auto SpawnerMesh = 0x2d8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto SpawnerTemplateMesh = 0x2e0; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto SpawnerAnimTime = 0x2e8; // Size: 4, Type: float
			constexpr auto MissileShootTime = 0x2ec; // Size: 4, Type: float
			constexpr auto RemoveAnimTime = 0x2f0; // Size: 4, Type: float
			constexpr auto SpawnerMeshMaterialParamName = 0x2f4; // Size: 8, Type: struct FName
			constexpr auto RocketSpawnerMeshOffset = 0x2fc; // Size: 12, Type: struct FVector
			constexpr auto RocketSpawnerMeshPitchOffset = 0x308; // Size: 4, Type: float
			constexpr auto MuzzleSocketNames = 0x310; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto SpawnerMoveInterpSpeed = 0x320; // Size: 4, Type: float
			constexpr auto SpawnerMoveInterpMinSpeed = 0x324; // Size: 4, Type: float
			constexpr auto bUseForwardAxisY = 0x328; // Size: 1, Type: bool
			constexpr auto SpawnerIdleAnim = 0x330; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto SpawnerFireAnim = 0x338; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto SpawnerStartSoundName1P = 0x340; // Size: 16, Type: struct FString
			constexpr auto SpawnerStartSoundName3P = 0x350; // Size: 16, Type: struct FString
			constexpr auto SpawnerEndSoundName1P = 0x360; // Size: 16, Type: struct FString
			constexpr auto SpawnerEndSoundName3P = 0x370; // Size: 16, Type: struct FString
			constexpr auto FireSoundName1P = 0x380; // Size: 16, Type: struct FString
			constexpr auto FireSoundName3P = 0x390; // Size: 16, Type: struct FString
			constexpr auto FireImpactSoundName = 0x3a0; // Size: 16, Type: struct FString
	}
} 
