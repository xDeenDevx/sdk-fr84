namespace offsets
{
	namespace UPaperTerrainComponent
	{
			constexpr auto TerrainMaterial = 0x540; // Size: 8, Type: struct UPaperTerrainMaterial*
			constexpr auto bClosedSpline = 0x548; // Size: 1, Type: bool
			constexpr auto bFilledSpline = 0x549; // Size: 1, Type: bool
			constexpr auto AssociatedSpline = 0x550; // Size: 8, Type: struct UPaperTerrainSplineComponent*
			constexpr auto RandomSeed = 0x558; // Size: 4, Type: int32_t
			constexpr auto SegmentOverlapAmount = 0x55c; // Size: 4, Type: float
			constexpr auto TerrainColor = 0x560; // Size: 16, Type: struct FLinearColor
			constexpr auto ReparamStepsPerSegment = 0x570; // Size: 4, Type: int32_t
			constexpr auto SpriteCollisionDomain = 0x574; // Size: 1, Type: enum class ESpriteCollisionMode
			constexpr auto CollisionThickness = 0x578; // Size: 4, Type: float
			constexpr auto CachedBodySetup = 0x580; // Size: 8, Type: struct UBodySetup*
	}
} 
