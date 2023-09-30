namespace offsets
{
	namespace UInstancedStaticMeshComponent
	{
			constexpr auto PerInstanceSMData = 0x600; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshInstanceData>
			constexpr auto NumCustomDataFloats = 0x610; // Size: 4, Type: int32_t
			constexpr auto PerInstanceSMCustomData = 0x618; // Size: 16, Type: struct TArray<float>
			constexpr auto InstancingRandomSeed = 0x628; // Size: 4, Type: int32_t
			constexpr auto InstanceStartCullDistance = 0x62c; // Size: 4, Type: int32_t
			constexpr auto InstanceEndCullDistance = 0x630; // Size: 4, Type: int32_t
			constexpr auto InstanceReorderTable = 0x638; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto NumPendingLightmaps = 0x690; // Size: 4, Type: int32_t
			constexpr auto CachedMappings = 0x698; // Size: 16, Type: struct TArray<struct FInstancedStaticMeshMappingInfo>
	}
} 
