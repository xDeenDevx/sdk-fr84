namespace offsets
{
	namespace ULandscapeComponent
	{
			constexpr auto SectionBaseX = 0x540; // Size: 4, Type: int32_t
			constexpr auto SectionBaseY = 0x544; // Size: 4, Type: int32_t
			constexpr auto ComponentSizeQuads = 0x548; // Size: 4, Type: int32_t
			constexpr auto SubsectionSizeQuads = 0x54c; // Size: 4, Type: int32_t
			constexpr auto NumSubsections = 0x550; // Size: 4, Type: int32_t
			constexpr auto OverrideMaterial = 0x558; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OverrideHoleMaterial = 0x560; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto OverrideMaterials = 0x568; // Size: 16, Type: struct TArray<struct FLandscapeComponentMaterialOverride>
			constexpr auto MaterialInstances = 0x578; // Size: 16, Type: struct TArray<struct UMaterialInstanceConstant*>
			constexpr auto MaterialInstancesDynamic = 0x588; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto LODIndexToMaterialIndex = 0x598; // Size: 16, Type: struct TArray<int8_t>
			constexpr auto MaterialIndexToDisabledTessellationMaterial = 0x5a8; // Size: 16, Type: struct TArray<int8_t>
			constexpr auto XYOffsetmapTexture = 0x5b8; // Size: 8, Type: struct UTexture2D*
			constexpr auto WeightmapScaleBias = 0x5c0; // Size: 16, Type: struct FVector4
			constexpr auto WeightmapSubsectionOffset = 0x5d0; // Size: 4, Type: float
			constexpr auto HeightmapScaleBias = 0x5e0; // Size: 16, Type: struct FVector4
			constexpr auto CachedLocalBox = 0x5f0; // Size: 28, Type: struct FBox
			constexpr auto CollisionComponent = 0x60c; // Size: 28, Type: 
			constexpr auto HeightmapTexture = 0x628; // Size: 8, Type: struct UTexture2D*
			constexpr auto WeightmapLayerAllocations = 0x630; // Size: 16, Type: struct TArray<struct FWeightmapLayerAllocationInfo>
			constexpr auto WeightmapTextures = 0x640; // Size: 16, Type: struct TArray<struct UTexture2D*>
			constexpr auto MapBuildDataId = 0x650; // Size: 16, Type: struct FGuid
			constexpr auto IrrelevantLights = 0x660; // Size: 16, Type: struct TArray<struct FGuid>
			constexpr auto CollisionMipLevel = 0x670; // Size: 4, Type: int32_t
			constexpr auto SimpleCollisionMipLevel = 0x674; // Size: 4, Type: int32_t
			constexpr auto NegativeZBoundsExtension = 0x678; // Size: 4, Type: float
			constexpr auto PositiveZBoundsExtension = 0x67c; // Size: 4, Type: float
			constexpr auto StaticLightingResolution = 0x680; // Size: 4, Type: float
			constexpr auto ForcedLOD = 0x684; // Size: 4, Type: int32_t
			constexpr auto LODBias = 0x688; // Size: 4, Type: int32_t
			constexpr auto StateId = 0x68c; // Size: 16, Type: struct FGuid
			constexpr auto BakedTextureMaterialGuid = 0x69c; // Size: 16, Type: struct FGuid
			constexpr auto GIBakedBaseColorTexture = 0x6b0; // Size: 8, Type: struct UTexture2D*
			constexpr auto MobileBlendableLayerMask = 0x6b8; // Size: 1, Type: char
			constexpr auto MobileMaterialInterface = 0x6c0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MobileMaterialInterfaces = 0x6c8; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto MobileWeightmapTextures = 0x6d8; // Size: 16, Type: struct TArray<struct UTexture2D*>
	}
} 
