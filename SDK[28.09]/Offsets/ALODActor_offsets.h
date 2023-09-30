namespace offsets
{
	namespace ALODActor
	{
			constexpr auto StaticMeshComponent = 0x228; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto ImpostersStaticMeshComponents = 0x230; // Size: 80, Type: struct TMap<struct UMaterialInterface*, struct UInstancedStaticMeshComponent*>
			constexpr auto Proxy = 0x280; // Size: 8, Type: struct UHLODProxy*
			constexpr auto Key = 0x288; // Size: 8, Type: struct FName
			constexpr auto LODDrawDistance = 0x290; // Size: 4, Type: float
			constexpr auto LODLevel = 0x294; // Size: 4, Type: int32_t
			constexpr auto SubActors = 0x298; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto CachedNumHLODLevels = 0x2a8; // Size: 1, Type: char
	}
} 
