namespace offsets
{
	namespace UMockDataMeshTrackerComponent
	{
			constexpr auto OnMeshTrackerUpdated = 0x318; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ScanWorld = 0x328; // Size: 1, Type: bool
			constexpr auto RequestNormals = 0x329; // Size: 1, Type: bool
			constexpr auto RequestVertexConfidence = 0x32a; // Size: 1, Type: bool
			constexpr auto VertexColorMode = 0x32b; // Size: 1, Type: enum class EMeshTrackerVertexColorMode
			constexpr auto BlockVertexColors = 0x330; // Size: 16, Type: struct TArray<struct FColor>
			constexpr auto VertexColorFromConfidenceZero = 0x340; // Size: 16, Type: struct FLinearColor
			constexpr auto VertexColorFromConfidenceOne = 0x350; // Size: 16, Type: struct FLinearColor
			constexpr auto UpdateInterval = 0x360; // Size: 4, Type: float
			constexpr auto MRMesh = 0x368; // Size: 8, Type: struct UMRMeshComponent*
	}
} 
