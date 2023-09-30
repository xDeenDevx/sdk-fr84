namespace offsets
{
	namespace ASolarVehicleRocketLauncherWeapon
	{
			constexpr auto BombingAreaDatas = 0x12a8; // Size: 16, Type: struct TArray<struct FBombingAreaData>
			constexpr auto RocketFireMode = 0x12b8; // Size: 1, Type: enum class ERocketFireMode
			constexpr auto BombingAreaAssetMap = 0x12c0; // Size: 80, Type: struct TMap<int32_t, struct FBombingAreaAsset>
			constexpr auto SpawnedRocketDatas = 0x1340; // Size: 16, Type: struct TArray<struct FSpawnedRocketData>
			constexpr auto PreviewRangeAsset = 0x14b0; // Size: 96, Type: struct FBombingAreaAsset
			constexpr auto BombingAreaAimAsset = 0x1510; // Size: 96, Type: struct FBombingAreaAsset
			constexpr auto BombingAreaWarningAsset = 0x1570; // Size: 96, Type: struct FBombingAreaAsset
			constexpr auto AlertLineMeshClass = 0x15d0; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto FireMuzzleParticle = 0x15f8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto BombingAreaBlendTime = 0x1620; // Size: 4, Type: float
			constexpr auto RocketFireModeSettings[2] = 0x1624; // Size: 112, Type: struct FFireModeSetting
			constexpr auto ResetOwnerTimer = 0x1694; // Size: 4, Type: float
			constexpr auto SpawnRocketHight = 0x1698; // Size: 4, Type: float
			constexpr auto MuzzleSocketNames = 0x16a0; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto RocketLaunchSound_1P = 0x16b0; // Size: 16, Type: struct FString
			constexpr auto RocketLaunchSound_3P = 0x16c0; // Size: 16, Type: struct FString
	}
} 
