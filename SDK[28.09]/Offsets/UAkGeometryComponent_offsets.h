namespace offsets
{
	namespace UAkGeometryComponent
	{
			constexpr auto MeshType = 0x330; // Size: 1, Type: enum class AkMeshType
			constexpr auto LOD = 0x334; // Size: 4, Type: int32_t
			constexpr auto WeldingThreshold = 0x338; // Size: 4, Type: float
			constexpr auto StaticMeshSurfaceOverride = 0x340; // Size: 80, Type: struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride>
			constexpr auto CollisionMeshSurfaceOverride = 0x390; // Size: 24, Type: struct FAkGeometrySurfaceOverride
			constexpr auto bEnableDiffraction = 0x3a8; // Size: 1, Type: char
			constexpr auto bEnableDiffractionOnBoundaryEdges = 0x3a8; // Size: 1, Type: char
			constexpr auto AssociatedRoom = 0x3b0; // Size: 8, Type: struct AActor*
			constexpr auto GeometryData = 0x3c8; // Size: 80, Type: struct FAkGeometryData
			constexpr auto SurfaceAreas = 0x418; // Size: 80, Type: struct TMap<int32_t, float>
	}
} 
