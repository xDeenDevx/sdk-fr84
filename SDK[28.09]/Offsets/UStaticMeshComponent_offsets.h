namespace offsets
{
	namespace UStaticMeshComponent
	{
			constexpr auto ForcedLodModel = 0x578; // Size: 4, Type: int32_t
			constexpr auto PreviousLODLevel = 0x57c; // Size: 4, Type: int32_t
			constexpr auto MinLOD = 0x580; // Size: 4, Type: int32_t
			constexpr auto SubDivisionStepSize = 0x584; // Size: 4, Type: int32_t
			constexpr auto StaticMesh = 0x588; // Size: 8, Type: struct UStaticMesh*
			constexpr auto WireframeColorOverride = 0x590; // Size: 4, Type: struct FColor
			constexpr auto bEvaluateWorldPositionOffset = 0x594; // Size: 1, Type: char
			constexpr auto bOverrideWireframeColor = 0x594; // Size: 1, Type: char
			constexpr auto bOverrideMinLod = 0x594; // Size: 1, Type: char
			constexpr auto bOverrideNavigationExport = 0x594; // Size: 1, Type: char
			constexpr auto bForceNavigationObstacle = 0x594; // Size: 1, Type: char
			constexpr auto bDisallowMeshPaintPerInstance = 0x594; // Size: 1, Type: char
			constexpr auto bIgnoreInstanceForTextureStreaming = 0x594; // Size: 1, Type: char
			constexpr auto bOverrideLightMapRes = 0x594; // Size: 1, Type: char
			constexpr auto bOverrideShadowMapRes = 0x595; // Size: 1, Type: char
			constexpr auto bMinimizeLightmapRes = 0x598; // Size: 1, Type: char
			constexpr auto bOverrideMeshMinScreenSize = 0x59c; // Size: 1, Type: char
			constexpr auto bCastDistanceFieldIndirectShadow = 0x59c; // Size: 1, Type: char
			constexpr auto bOverrideDistanceFieldSelfShadowBias = 0x59c; // Size: 1, Type: char
			constexpr auto bUseSubDivisions = 0x59c; // Size: 1, Type: char
			constexpr auto bUseDefaultCollision = 0x59c; // Size: 1, Type: char
			constexpr auto bReverseCulling = 0x59c; // Size: 1, Type: char
			constexpr auto OverriddenLightMapRes = 0x5a0; // Size: 4, Type: int32_t
			constexpr auto LightmapPrecision = 0x5a4; // Size: 4, Type: float
			constexpr auto ShadowmapPrecision = 0x5a8; // Size: 4, Type: float
			constexpr auto OverriddenShadowMapRes = 0x5ac; // Size: 4, Type: int32_t
			constexpr auto DistanceFieldIndirectShadowMinVisibility = 0x5b0; // Size: 4, Type: float
			constexpr auto DistanceFieldSelfShadowBias = 0x5b4; // Size: 4, Type: float
			constexpr auto StreamingDistanceMultiplier = 0x5b8; // Size: 4, Type: float
			constexpr auto LODData = 0x5c0; // Size: 16, Type: struct TArray<struct FStaticMeshComponentLODInfo>
			constexpr auto StreamingTextureData = 0x5d0; // Size: 16, Type: struct TArray<struct FStreamingTextureBuildInfo>
			constexpr auto bClearStaticLightmap = 0x5e0; // Size: 1, Type: bool
			constexpr auto LightmassSettings = 0x5e4; // Size: 24, Type: struct FLightmassPrimitiveSettings
	}
} 
