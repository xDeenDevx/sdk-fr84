namespace offsets
{
	namespace UClothingAssetCommon
	{
			constexpr auto PhysicsAsset = 0x48; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto ClothConfigs = 0x50; // Size: 80, Type: struct TMap<struct FName, struct UClothConfigBase*>
			constexpr auto ClothSharedSimConfig = 0xa0; // Size: 8, Type: struct UClothConfigBase*
			constexpr auto ClothSimConfig = 0xa8; // Size: 8, Type: struct UClothConfigBase*
			constexpr auto ChaosClothSimConfig = 0xb0; // Size: 8, Type: struct UClothConfigBase*
			constexpr auto ClothLODData = 0xb8; // Size: 16, Type: struct TArray<struct UClothLODDataCommon_Legacy*>
			constexpr auto LODData = 0xc8; // Size: 16, Type: struct TArray<struct FClothLODDataCommon>
			constexpr auto LodMap = 0xd8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto UsedBoneNames = 0xe8; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto UsedBoneIndices = 0xf8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ReferenceBoneIndex = 0x108; // Size: 4, Type: int32_t
			constexpr auto CustomData = 0x110; // Size: 8, Type: struct UClothingAssetCustomData*
			constexpr auto ClothConfig = 0x118; // Size: 212, Type: struct FClothConfig_Legacy
	}
} 
