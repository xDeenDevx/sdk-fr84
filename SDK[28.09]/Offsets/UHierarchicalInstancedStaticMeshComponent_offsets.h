namespace offsets
{
	namespace UHierarchicalInstancedStaticMeshComponent
	{
			constexpr auto SortedInstances = 0x6b8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumBuiltInstances = 0x6c8; // Size: 4, Type: int32_t
			constexpr auto BuiltInstanceBounds = 0x6d0; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBounds = 0x6ec; // Size: 28, Type: struct FBox
			constexpr auto UnbuiltInstanceBoundsList = 0x708; // Size: 16, Type: struct TArray<struct FBox>
			constexpr auto bEnableDensityScaling = 0x718; // Size: 1, Type: char
			constexpr auto OcclusionLayerNumNodes = 0x720; // Size: 4, Type: int32_t
			constexpr auto CacheMeshExtendedBounds = 0x724; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto bDisableCollision = 0x740; // Size: 1, Type: bool
			constexpr auto InstanceCountToRender = 0x744; // Size: 4, Type: int32_t
	}
} 
