namespace offsets
{
	namespace UHoudiniStaticMesh
	{
			constexpr auto bHasNormals = 0x28; // Size: 1, Type: bool
			constexpr auto bHasTangents = 0x29; // Size: 1, Type: bool
			constexpr auto bHasColors = 0x2a; // Size: 1, Type: bool
			constexpr auto NumUVLayers = 0x2c; // Size: 4, Type: uint32_t
			constexpr auto bHasPerFaceMaterials = 0x30; // Size: 1, Type: bool
			constexpr auto VertexPositions = 0x38; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto TriangleIndices = 0x48; // Size: 16, Type: struct TArray<struct FIntVector>
			constexpr auto VertexInstanceColors = 0x58; // Size: 16, Type: struct TArray<struct FColor>
			constexpr auto VertexInstanceNormals = 0x68; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto VertexInstanceUTangents = 0x78; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto VertexInstanceVTangents = 0x88; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto VertexInstanceUVs = 0x98; // Size: 16, Type: struct TArray<struct FVector2D>
			constexpr auto MaterialIDsPerTriangle = 0xa8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto StaticMaterials = 0xb8; // Size: 16, Type: struct TArray<struct FStaticMaterial>
	}
} 
