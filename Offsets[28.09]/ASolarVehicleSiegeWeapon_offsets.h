namespace offsets
{
	namespace ASolarVehicleSiegeWeapon
	{
			constexpr auto BulletTargetAreaInSameTeam = 0x12a8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto BulletDecalMaterialInSameTeam = 0x12d0; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto BulletTargetAreaInEnemy = 0x12f8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto BulletDecalMaterialInEnemy = 0x1320; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto AreaParticleScale = 0x1348; // Size: 4, Type: float
			constexpr auto AreaDecalSize = 0x134c; // Size: 12, Type: struct FVector
			constexpr auto AreaFadeOutTime = 0x1358; // Size: 4, Type: float
			constexpr auto AreaFadeOutName = 0x135c; // Size: 8, Type: struct FName
			constexpr auto AreaDisplayDistance = 0x1364; // Size: 4, Type: float
			constexpr auto AreaBlockThreshold = 0x1368; // Size: 4, Type: float
			constexpr auto BulletAreaParticleMap = 0x1370; // Size: 80, Type: struct TMap<struct FFireUniqueID, struct FBulletExplodedAreaData>
	}
} 
