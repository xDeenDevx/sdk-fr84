namespace offsets
{
	namespace ASummonItemTurret
	{
			constexpr auto DetectableRadius = 0x3e0; // Size: 4, Type: float
			constexpr auto DetectableCollisionTypes = 0x3e8; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto TurretYawRotateSpeed = 0x3f8; // Size: 4, Type: float
			constexpr auto TurretWeaponBP = 0x400; // Size: 8, Type: ASolarSummonWeapon*
			constexpr auto BoomEffect = 0x408; // Size: 8, Type: struct UParticleSystem*
			constexpr auto AimMaxAngle = 0x410; // Size: 4, Type: float
			constexpr auto BlockShotObjectTypes = 0x418; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto BlockShotCheckRadius = 0x428; // Size: 4, Type: float
			constexpr auto TestEnemyHeight = 0x42c; // Size: 4, Type: float
			constexpr auto PrioritizeTargetingBoneNames = 0x430; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto TurretTransformTime = 0x440; // Size: 4, Type: float
			constexpr auto ForceResearchTargetTime = 0x444; // Size: 4, Type: float
			constexpr auto CurrentWeapon = 0x448; // Size: 8, Type: struct ASolarSummonWeapon*
			constexpr auto LookAtTargetRotator = 0x450; // Size: 12, Type: struct FRotator
			constexpr auto AnimationIndex = 0x45c; // Size: 1, Type: char
			constexpr auto TurretMesh = 0x460; // Size: 8, Type: struct USkeletalMeshComponentBudgeted*
			constexpr auto CachedTurretHandle = 0x46c; // Size: 4, Type: struct FSpawnedActorHandle
	}
} 
