namespace offsets
{
	namespace ALandscapeProxy
	{
			constexpr auto SplineComponent = 0x228; // Size: 8, Type: struct ULandscapeSplinesComponent*
			constexpr auto LandscapeGuid = 0x230; // Size: 16, Type: struct FGuid
			constexpr auto LandscapeSectionOffset = 0x240; // Size: 8, Type: struct FIntPoint
			constexpr auto MaxLODLevel = 0x248; // Size: 4, Type: int32_t
			constexpr auto LODDistanceFactor = 0x24c; // Size: 4, Type: float
			constexpr auto LODFalloff = 0x250; // Size: 1, Type: enum class ELandscapeLODFalloff
			constexpr auto ComponentScreenSizeToUseSubSections = 0x254; // Size: 4, Type: float
			constexpr auto LOD0ScreenSize = 0x258; // Size: 4, Type: float
			constexpr auto LOD0DistributionSetting = 0x25c; // Size: 4, Type: float
			constexpr auto LODDistributionSetting = 0x260; // Size: 4, Type: float
			constexpr auto TessellationComponentScreenSize = 0x264; // Size: 4, Type: float
			constexpr auto UseTessellationComponentScreenSizeFalloff = 0x268; // Size: 1, Type: bool
			constexpr auto TessellationComponentScreenSizeFalloff = 0x26c; // Size: 4, Type: float
			constexpr auto OccluderGeometryLOD = 0x270; // Size: 4, Type: int32_t
			constexpr auto StaticLightingLOD = 0x274; // Size: 4, Type: int32_t
			constexpr auto DefaultPhysMaterial = 0x278; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto StreamingDistanceMultiplier = 0x280; // Size: 4, Type: float
			constexpr auto LandscapeMaterial = 0x288; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto LandscapeHoleMaterial = 0x2b0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto LandscapeMaterialsOverride = 0x2b8; // Size: 16, Type: struct TArray<struct FLandscapeProxyMaterialOverride>
			constexpr auto bMeshHoles = 0x2c8; // Size: 1, Type: bool
			constexpr auto MeshHolesMaxLod = 0x2c9; // Size: 1, Type: char
			constexpr auto RuntimeVirtualTextures = 0x2d0; // Size: 16, Type: struct TArray<struct URuntimeVirtualTexture*>
			constexpr auto VirtualTextureNumLods = 0x2e0; // Size: 4, Type: int32_t
			constexpr auto VirtualTextureLodBias = 0x2e4; // Size: 4, Type: int32_t
			constexpr auto VirtualTextureRenderPassType = 0x2e8; // Size: 1, Type: enum class ERuntimeVirtualTextureMainPassType
			constexpr auto NegativeZBoundsExtension = 0x2ec; // Size: 4, Type: float
			constexpr auto PositiveZBoundsExtension = 0x2f0; // Size: 4, Type: float
			constexpr auto LandscapeComponents = 0x2f8; // Size: 16, Type: struct TArray<struct ULandscapeComponent*>
			constexpr auto CollisionComponents = 0x308; // Size: 16, Type: struct TArray<struct ULandscapeHeightfieldCollisionComponent*>
			constexpr auto FoliageComponents = 0x318; // Size: 16, Type: struct TArray<struct UHierarchicalInstancedStaticMeshComponent*>
			constexpr auto bHasLandscapeGrass = 0x38c; // Size: 1, Type: bool
			constexpr auto StaticLightingResolution = 0x390; // Size: 4, Type: float
			constexpr auto bCastStaticShadow = 0x394; // Size: 1, Type: char
			constexpr auto bCastShadowAsTwoSided = 0x394; // Size: 1, Type: char
			constexpr auto bCastFarShadow = 0x394; // Size: 1, Type: char
			constexpr auto bAffectDistanceFieldLighting = 0x398; // Size: 1, Type: char
			constexpr auto LightingChannels = 0x399; // Size: 1, Type: struct FLightingChannels
			constexpr auto bUseMaterialPositionOffsetInStaticLighting = 0x39c; // Size: 1, Type: char
			constexpr auto bRenderCustomDepth = 0x39c; // Size: 1, Type: char
			constexpr auto CustomDepthStencilValue = 0x3a0; // Size: 4, Type: int32_t
			constexpr auto LDMaxDrawDistance = 0x3a4; // Size: 4, Type: float
			constexpr auto LightmassSettings = 0x3a8; // Size: 24, Type: struct FLightmassPrimitiveSettings
			constexpr auto CollisionMipLevel = 0x3c0; // Size: 4, Type: int32_t
			constexpr auto SimpleCollisionMipLevel = 0x3c4; // Size: 4, Type: int32_t
			constexpr auto CollisionThickness = 0x3c8; // Size: 4, Type: float
			constexpr auto BodyInstance = 0x3d0; // Size: 304, Type: struct FBodyInstance
			constexpr auto bGenerateOverlapEvents = 0x500; // Size: 1, Type: char
			constexpr auto bBakeMaterialPositionOffsetIntoCollision = 0x500; // Size: 1, Type: char
			constexpr auto ComponentSizeQuads = 0x504; // Size: 4, Type: int32_t
			constexpr auto SubsectionSizeQuads = 0x508; // Size: 4, Type: int32_t
			constexpr auto NumSubsections = 0x50c; // Size: 4, Type: int32_t
			constexpr auto bUsedForNavigation = 0x510; // Size: 1, Type: char
			constexpr auto bFillCollisionUnderLandscapeForNavmesh = 0x510; // Size: 1, Type: char
			constexpr auto bUseDynamicMaterialInstance = 0x514; // Size: 1, Type: bool
			constexpr auto NavigationGeometryGatheringMode = 0x515; // Size: 1, Type: enum class ENavDataGatheringMode
			constexpr auto bUseLandscapeForCullingInvisibleHLODVertices = 0x516; // Size: 1, Type: bool
			constexpr auto bHasLayersContent = 0x517; // Size: 1, Type: bool
			constexpr auto WeightmapUsageMap = 0x518; // Size: 80, Type: struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*>
	}
} 
