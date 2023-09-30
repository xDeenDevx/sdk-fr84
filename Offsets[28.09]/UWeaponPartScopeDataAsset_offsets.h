namespace offsets
{
	namespace UWeaponPartScopeDataAsset
	{
			constexpr auto TypeID = 0x118; // Size: 1, Type: enum class EWeaponScopeType
			constexpr auto FPPLocation = 0x11c; // Size: 12, Type: struct FVector
			constexpr auto FPPRotation = 0x128; // Size: 12, Type: struct FRotator
			constexpr auto DistanceToEyeWhenScope = 0x134; // Size: 4, Type: float
			constexpr auto bShoulderShootChangeScale = 0x138; // Size: 1, Type: bool
			constexpr auto ShoulderShootChangeScale = 0x13c; // Size: 4, Type: float
			constexpr auto CrosshairSocketName = 0x140; // Size: 8, Type: struct FName
			constexpr auto LodXMeshPath = 0x148; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ScopeCrossHairMaterialPath = 0x160; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ScopeCrossHairMeshPath = 0x178; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto bVibration = 0x190; // Size: 1, Type: bool
			constexpr auto CorrectMapData = 0x198; // Size: 80, Type: struct TMap<int32_t, struct FPartScopeCorrect>
			constexpr auto FPPMapForWeaponSkin = 0x1e8; // Size: 80, Type: struct TMap<int32_t, struct FPartScopeCorrect>
			constexpr auto AmmoMeshData = 0x238; // Size: 72, Type: struct FSolarAmmoMeshData
			constexpr auto bEnableEnemyMaker = 0x280; // Size: 1, Type: bool
			constexpr auto EnemyMakerRelativeTransform = 0x290; // Size: 48, Type: struct FTransform
			constexpr auto ScopeCrossHairRedPointMaterialPath = 0x2c0; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ScopeCrossHairRedPointMeshPath = 0x2d8; // Size: 24, Type: struct FSoftObjectPath
	}
} 
