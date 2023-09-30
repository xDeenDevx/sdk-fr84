namespace offsets
{
	namespace ARecastNavMesh
	{
			constexpr auto bDrawTriangleEdges = 0x408; // Size: 1, Type: char
			constexpr auto bDrawPolyEdges = 0x408; // Size: 1, Type: char
			constexpr auto bDrawFilledPolys = 0x408; // Size: 1, Type: char
			constexpr auto bDrawNavMeshEdges = 0x408; // Size: 1, Type: char
			constexpr auto bDrawTileBounds = 0x408; // Size: 1, Type: char
			constexpr auto bDrawPathCollidingGeometry = 0x408; // Size: 1, Type: char
			constexpr auto bDrawTileLabels = 0x408; // Size: 1, Type: char
			constexpr auto bDrawPolygonLabels = 0x408; // Size: 1, Type: char
			constexpr auto bDrawDefaultPolygonCost = 0x409; // Size: 1, Type: char
			constexpr auto bDrawLabelsOnPathNodes = 0x409; // Size: 1, Type: char
			constexpr auto bDrawNavLinks = 0x409; // Size: 1, Type: char
			constexpr auto bDrawFailedNavLinks = 0x409; // Size: 1, Type: char
			constexpr auto bDrawClusters = 0x409; // Size: 1, Type: char
			constexpr auto bDrawOctree = 0x409; // Size: 1, Type: char
			constexpr auto bDrawOctreeDetails = 0x409; // Size: 1, Type: char
			constexpr auto bDrawMarkedForbiddenPolys = 0x409; // Size: 1, Type: char
			constexpr auto bDistinctlyDrawTilesBeingBuilt = 0x40a; // Size: 1, Type: char
			constexpr auto bDrawNavMesh = 0x40a; // Size: 1, Type: char
			constexpr auto DrawOffset = 0x40c; // Size: 4, Type: float
			constexpr auto bFixedTilePoolSize = 0x410; // Size: 1, Type: char
			constexpr auto TilePoolSize = 0x414; // Size: 4, Type: int32_t
			constexpr auto TileSizeUU = 0x418; // Size: 4, Type: float
			constexpr auto CellSize = 0x41c; // Size: 4, Type: float
			constexpr auto CellHeight = 0x420; // Size: 4, Type: float
			constexpr auto AgentRadius = 0x424; // Size: 4, Type: float
			constexpr auto AgentHeight = 0x428; // Size: 4, Type: float
			constexpr auto AgentMaxHeight = 0x42c; // Size: 4, Type: float
			constexpr auto AgentMaxSlope = 0x430; // Size: 4, Type: float
			constexpr auto AgentMaxStepHeight = 0x434; // Size: 4, Type: float
			constexpr auto MinRegionArea = 0x438; // Size: 4, Type: float
			constexpr auto MergeRegionSize = 0x43c; // Size: 4, Type: float
			constexpr auto MaxSimplificationError = 0x440; // Size: 4, Type: float
			constexpr auto MaxSimultaneousTileGenerationJobsCount = 0x444; // Size: 4, Type: int32_t
			constexpr auto TileNumberHardLimit = 0x448; // Size: 4, Type: int32_t
			constexpr auto PolyRefTileBits = 0x44c; // Size: 4, Type: int32_t
			constexpr auto PolyRefNavPolyBits = 0x450; // Size: 4, Type: int32_t
			constexpr auto PolyRefSaltBits = 0x454; // Size: 4, Type: int32_t
			constexpr auto NavMeshOriginOffset = 0x458; // Size: 12, Type: struct FVector
			constexpr auto DefaultDrawDistance = 0x464; // Size: 4, Type: float
			constexpr auto DefaultMaxSearchNodes = 0x468; // Size: 4, Type: float
			constexpr auto DefaultMaxHierarchicalSearchNodes = 0x46c; // Size: 4, Type: float
			constexpr auto RegionPartitioning = 0x470; // Size: 1, Type: enum class ERecastPartitioning
			constexpr auto LayerPartitioning = 0x471; // Size: 1, Type: enum class ERecastPartitioning
			constexpr auto RegionChunkSplits = 0x474; // Size: 4, Type: int32_t
			constexpr auto LayerChunkSplits = 0x478; // Size: 4, Type: int32_t
			constexpr auto bSortNavigationAreasByCost = 0x47c; // Size: 1, Type: char
			constexpr auto bPerformVoxelFiltering = 0x47c; // Size: 1, Type: char
			constexpr auto bMarkLowHeightAreas = 0x47c; // Size: 1, Type: char
			constexpr auto bFilterLowSpanSequences = 0x47c; // Size: 1, Type: char
			constexpr auto bFilterLowSpanFromTileCache = 0x47c; // Size: 1, Type: char
			constexpr auto bDoFullyAsyncNavDataGathering = 0x47c; // Size: 1, Type: char
			constexpr auto bUseBetterOffsetsFromCorners = 0x47c; // Size: 1, Type: char
			constexpr auto bStoreEmptyTileLayers = 0x47c; // Size: 1, Type: char
			constexpr auto bUseVirtualFilters = 0x47d; // Size: 1, Type: char
			constexpr auto bAllowNavLinkAsPathEnd = 0x47d; // Size: 1, Type: char
			constexpr auto bUseVoxelCache = 0x47d; // Size: 1, Type: char
			constexpr auto TileSetUpdateInterval = 0x480; // Size: 4, Type: float
			constexpr auto HeuristicScale = 0x484; // Size: 4, Type: float
			constexpr auto VerticalDeviationFromGroundCompensation = 0x488; // Size: 4, Type: float
	}
} 
