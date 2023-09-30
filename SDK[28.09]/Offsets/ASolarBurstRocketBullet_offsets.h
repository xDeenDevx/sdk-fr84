namespace offsets
{
	namespace ASolarBurstRocketBullet
	{
			constexpr auto BurstSum = 0x228; // Size: 4, Type: int32_t
			constexpr auto BurstInterval = 0x22c; // Size: 4, Type: float
			constexpr auto DamageRadius = 0x230; // Size: 4, Type: float
			constexpr auto DamagePerBullet = 0x234; // Size: 4, Type: float
			constexpr auto CanDamageObjectTypes = 0x238; // Size: 16, Type: struct TArray<enum class EObjectTypeQuery>
			constexpr auto SpawnerAnimTime = 0x248; // Size: 4, Type: float
			constexpr auto SpawnerMeshMaterialParamName = 0x24c; // Size: 8, Type: struct FName
			constexpr auto Ammo = 0x258; // Size: 8, Type: struct UAmmoConfig*
			constexpr auto RocketSpawnerMeshOffset = 0x260; // Size: 12, Type: struct FVector
			constexpr auto MuzzleSocketNames = 0x270; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto SpawnerMoveInterpSpeed = 0x280; // Size: 4, Type: float
			constexpr auto SpawnerMoveInterpMinSpeed = 0x284; // Size: 4, Type: float
			constexpr auto SpawnerTemplateMesh = 0x288; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto bUseForwardAxisY = 0x290; // Size: 1, Type: bool
			constexpr auto SpawnerMesh = 0x298; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto SpawnerIdleAnim = 0x2a0; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto SpawnerFireAnim = 0x2a8; // Size: 8, Type: struct UAnimationAsset*
			constexpr auto SpawnerStartSoundName1P = 0x2b0; // Size: 16, Type: struct FString
			constexpr auto SpawnerStartSoundName3P = 0x2c0; // Size: 16, Type: struct FString
			constexpr auto SpawnerEndSoundName1P = 0x2d0; // Size: 16, Type: struct FString
			constexpr auto SpawnerEndSoundName3P = 0x2e0; // Size: 16, Type: struct FString
			constexpr auto FireSoundName1P = 0x2f0; // Size: 16, Type: struct FString
			constexpr auto FireSoundName3P = 0x300; // Size: 16, Type: struct FString
			constexpr auto FireImpactSoundName = 0x310; // Size: 16, Type: struct FString
			constexpr auto bTeammateDamage = 0x320; // Size: 1, Type: bool
			constexpr auto bDrawDebugAimLine = 0x321; // Size: 1, Type: bool
			constexpr auto bDrawDebugExplodeSphere = 0x322; // Size: 1, Type: bool
			constexpr auto bDrawDebugHitActor = 0x323; // Size: 1, Type: bool
			constexpr auto OwnerCharacter = 0x328; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto OwnerRocketGA = 0x330; // Size: 8, Type: struct USolarWeaponGA_Rocket*
			constexpr auto HitAkObj = 0x338; // Size: 8, Type: struct UAkComponent*
			constexpr auto PlayerRotation = 0x340; // Size: 12, Type: struct FRotator
			constexpr auto FiredBullets = 0x360; // Size: 16, Type: struct TArray<struct ASolarProjBullet*>
			constexpr auto RocketPathArray = 0x378; // Size: 16, Type: struct TArray<struct USplineComponent*>
	}
} 
