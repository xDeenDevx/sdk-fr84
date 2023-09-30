namespace offsets
{
	namespace UWeaponPartDataAsset
	{
			constexpr auto bOnlyData = 0x30; // Size: 1, Type: bool
			constexpr auto OnlyDataForWeaponSkinIDArray = 0x38; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ViewStaticMeshPath = 0x48; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PreviewTransform = 0x60; // Size: 48, Type: struct FTransform
			constexpr auto FightStaticMeshPath = 0x90; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto PartIcon = 0xa8; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto SpecificScaleMap = 0xc0; // Size: 80, Type: struct TMap<int32_t, struct FVector>
			constexpr auto WeaponAttributeConfig = 0x110; // Size: 8, Type: struct UWeaponPartWeaponAttributeDataAsset*
	}
} 
