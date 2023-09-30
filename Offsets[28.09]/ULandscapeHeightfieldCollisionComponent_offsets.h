namespace offsets
{
	namespace ULandscapeHeightfieldCollisionComponent
	{
			constexpr auto ComponentLayerInfos = 0x540; // Size: 16, Type: struct TArray<struct ULandscapeLayerInfoObject*>
			constexpr auto SectionBaseX = 0x550; // Size: 4, Type: int32_t
			constexpr auto SectionBaseY = 0x554; // Size: 4, Type: int32_t
			constexpr auto CollisionSizeQuads = 0x558; // Size: 4, Type: int32_t
			constexpr auto CollisionScale = 0x55c; // Size: 4, Type: float
			constexpr auto SimpleCollisionSizeQuads = 0x560; // Size: 4, Type: int32_t
			constexpr auto CollisionQuadFlags = 0x568; // Size: 16, Type: struct TArray<char>
			constexpr auto HeightfieldGuid = 0x578; // Size: 16, Type: struct FGuid
			constexpr auto CachedLocalBox = 0x588; // Size: 28, Type: struct FBox
			constexpr auto RenderComponent = 0x5a4; // Size: 28, Type: 
			constexpr auto CookedPhysicalMaterials = 0x5d0; // Size: 16, Type: struct TArray<struct UPhysicalMaterial*>
	}
} 
