namespace offsets
{
	namespace UStaticMesh
	{
			constexpr auto LODGroupAsInt = 0x60; // Size: 1, Type: char
			constexpr auto bStripLastLODLevel = 0x61; // Size: 1, Type: bool
			constexpr auto MinLOD = 0x64; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto LpvBiasMultiplier = 0x68; // Size: 4, Type: float
			constexpr auto StaticMaterials = 0x70; // Size: 16, Type: struct TArray<struct FStaticMaterial>
			constexpr auto PhysicalMaterialsOverride = 0x80; // Size: 16, Type: struct TArray<struct FStaticMaterial>
			constexpr auto LightmapUVDensity = 0x90; // Size: 4, Type: float
			constexpr auto LightMapResolution = 0x94; // Size: 4, Type: int32_t
			constexpr auto LightMapCoordinateIndex = 0x98; // Size: 4, Type: int32_t
			constexpr auto bForceLODsShareLightmap = 0x9c; // Size: 1, Type: bool
			constexpr auto DistanceFieldSelfShadowBias = 0xa0; // Size: 4, Type: float
			constexpr auto MinScreenSize = 0xa4; // Size: 4, Type: float
			constexpr auto BodySetup = 0xa8; // Size: 8, Type: struct UBodySetup*
			constexpr auto LODForCollision = 0xb0; // Size: 4, Type: int32_t
			constexpr auto bGenerateMeshDistanceField = 0xb4; // Size: 1, Type: char
			constexpr auto bStripComplexCollisionForConsole = 0xb4; // Size: 1, Type: char
			constexpr auto bHasNavigationData = 0xb4; // Size: 1, Type: char
			constexpr auto bSupportUniformlyDistributedSampling = 0xb4; // Size: 1, Type: char
			constexpr auto bSupportPhysicalMaterialMasks = 0xb4; // Size: 1, Type: char
			constexpr auto bIsBuiltAtRuntime = 0xb4; // Size: 1, Type: char
			constexpr auto bAllowCPUAccess = 0xb4; // Size: 1, Type: char
			constexpr auto bSupportGpuUniformlyDistributedSampling = 0xb5; // Size: 1, Type: char
			constexpr auto Sockets = 0xd8; // Size: 16, Type: struct TArray<struct UStaticMeshSocket*>
			constexpr auto PositiveBoundsExtension = 0xf8; // Size: 12, Type: struct FVector
			constexpr auto NegativeBoundsExtension = 0x104; // Size: 12, Type: struct FVector
			constexpr auto ExtendedBounds = 0x110; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto ElementToIgnoreForTexFactor = 0x12c; // Size: 4, Type: int32_t
			constexpr auto AssetUserData = 0x130; // Size: 16, Type: struct TArray<struct UAssetUserData*>
			constexpr auto EditableMesh = 0x148; // Size: 8, Type: struct UObject*
			constexpr auto NavCollision = 0x150; // Size: 8, Type: struct UNavCollisionBase*
	}
} 
