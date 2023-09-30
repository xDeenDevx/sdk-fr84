namespace offsets
{
	namespace UWeaponryPartBase
	{
			constexpr auto PartID = 0x738; // Size: 4, Type: int32_t
			constexpr auto bDataAssetInit = 0x73c; // Size: 1, Type: bool
			constexpr auto bMeshAssetsInit = 0x73d; // Size: 1, Type: bool
			constexpr auto AssetPath = 0x740; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto OrginDataAsset = 0x758; // Size: 8, Type: struct UWeaponPartDataAsset*
			constexpr auto SkinPartDataAsset = 0x760; // Size: 8, Type: struct UWeaponPartDataAsset*
			constexpr auto MyStaticMesh = 0x768; // Size: 8, Type: struct UStaticMesh*
			constexpr auto WeaponSkin = 0x770; // Size: 8, Type: struct UWeaponSkinData*
			constexpr auto SkinMatchedPartData = 0x778; // Size: 64, Type: struct FWeaponSkinPartData
	}
} 
