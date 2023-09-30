namespace offsets
{
	namespace UHoudiniAssetComponent
	{
			constexpr auto LandscapeTransferParams = 0x548; // Size: 200, Type: struct FHoudiniInputLandscapeTransferParams
			constexpr auto Directories = 0x610; // Size: 16, Type: struct TArray<struct FDirectoryPath>
			constexpr auto HoudiniAsset = 0x620; // Size: 8, Type: struct UHoudiniAsset*
			constexpr auto bCookOnParameterChange = 0x628; // Size: 1, Type: bool
			constexpr auto bUploadTransformsToHoudiniEngine = 0x629; // Size: 1, Type: bool
			constexpr auto bCookOnTransformChange = 0x62a; // Size: 1, Type: bool
			constexpr auto bCookOnAssetInputCook = 0x62b; // Size: 1, Type: bool
			constexpr auto bOutputless = 0x62c; // Size: 1, Type: bool
			constexpr auto bOutputTemplateGeos = 0x62d; // Size: 1, Type: bool
			constexpr auto bUseOutputNodes = 0x62e; // Size: 1, Type: bool
			constexpr auto TemporaryCookFolder = 0x630; // Size: 16, Type: struct FDirectoryPath
			constexpr auto BakeFolder = 0x640; // Size: 16, Type: struct FDirectoryPath
			constexpr auto StaticMeshMethod = 0x650; // Size: 1, Type: enum class EHoudiniStaticMeshMethod
			constexpr auto StaticMeshGenerationProperties = 0x658; // Size: 384, Type: struct FHoudiniStaticMeshGenerationProperties
			constexpr auto StaticMeshBuildSettings = 0x7d8; // Size: 48, Type: struct FMeshBuildSettings
			constexpr auto bOverrideGlobalProxyStaticMeshSettings = 0x808; // Size: 1, Type: bool
			constexpr auto bEnableProxyStaticMeshOverride = 0x809; // Size: 1, Type: bool
			constexpr auto bEnableProxyStaticMeshRefinementByTimerOverride = 0x80a; // Size: 1, Type: bool
			constexpr auto ProxyMeshAutoRefineTimeoutSecondsOverride = 0x80c; // Size: 4, Type: float
			constexpr auto bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride = 0x810; // Size: 1, Type: bool
			constexpr auto bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride = 0x811; // Size: 1, Type: bool
			constexpr auto AssetId = 0x814; // Size: 4, Type: int32_t
			constexpr auto NodeIdsToCook = 0x818; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto OutputNodeCookCounts = 0x828; // Size: 80, Type: struct TMap<int32_t, int32_t>
			constexpr auto DownstreamHoudiniAssets = 0x878; // Size: 80, Type: struct TSet<struct UHoudiniAssetComponent*>
			constexpr auto ComponentGUID = 0x8c8; // Size: 16, Type: struct FGuid
			constexpr auto HapiGUID = 0x8d8; // Size: 16, Type: struct FGuid
			constexpr auto HapiAssetName = 0x8e8; // Size: 16, Type: struct FString
			constexpr auto AssetState = 0x8f8; // Size: 1, Type: enum class EHoudiniAssetState
			constexpr auto DebugLastAssetState = 0x8f9; // Size: 1, Type: enum class EHoudiniAssetState
			constexpr auto AssetStateResult = 0x8fa; // Size: 1, Type: enum class EHoudiniAssetStateResult
			constexpr auto LastComponentTransform = 0x900; // Size: 48, Type: struct FTransform
			constexpr auto SubAssetIndex = 0x930; // Size: 4, Type: uint32_t
			constexpr auto AssetCookCount = 0x934; // Size: 4, Type: int32_t
			constexpr auto bHasBeenLoaded = 0x938; // Size: 1, Type: bool
			constexpr auto bHasBeenDuplicated = 0x939; // Size: 1, Type: bool
			constexpr auto bPendingDelete = 0x93a; // Size: 1, Type: bool
			constexpr auto bRecookRequested = 0x93b; // Size: 1, Type: bool
			constexpr auto bRebuildRequested = 0x93c; // Size: 1, Type: bool
			constexpr auto bEnableCooking = 0x93d; // Size: 1, Type: bool
			constexpr auto bForceNeedUpdate = 0x93e; // Size: 1, Type: bool
			constexpr auto bLastCookSuccess = 0x93f; // Size: 1, Type: bool
			constexpr auto bParameterDefinitionUpdateNeeded = 0x940; // Size: 1, Type: bool
			constexpr auto bBlueprintStructureModified = 0x941; // Size: 1, Type: bool
			constexpr auto bBlueprintModified = 0x942; // Size: 1, Type: bool
			constexpr auto Parameters = 0x948; // Size: 16, Type: struct TArray<struct UHoudiniParameter*>
			constexpr auto Inputs = 0x958; // Size: 16, Type: struct TArray<struct UHoudiniInput*>
			constexpr auto Outputs = 0x968; // Size: 16, Type: struct TArray<struct UHoudiniOutput*>
			constexpr auto BakedOutputs = 0x978; // Size: 16, Type: struct TArray<struct FHoudiniBakedOutput>
			constexpr auto UntrackedOutputs = 0x988; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<AActor>>
			constexpr auto HandleComponents = 0x998; // Size: 16, Type: struct TArray<struct UHoudiniHandleComponent*>
			constexpr auto bHasComponentTransformChanged = 0x9a8; // Size: 1, Type: bool
			constexpr auto bFullyLoaded = 0x9a9; // Size: 1, Type: bool
			constexpr auto PDGAssetLink = 0x9b0; // Size: 8, Type: struct UHoudiniPDGAssetLink*
			constexpr auto RefineMeshesTimer = 0x9b8; // Size: 8, Type: struct FTimerHandle
			constexpr auto bNoProxyMeshNextCookRequested = 0x9d8; // Size: 1, Type: bool
			constexpr auto InputPresets = 0x9e0; // Size: 80, Type: struct TMap<struct UObject*, int32_t>
			constexpr auto bBakeAfterNextCook = 0xa30; // Size: 1, Type: bool
			constexpr auto bCachedIsPreview = 0xab0; // Size: 1, Type: bool
			constexpr auto LastTickTime = 0xac0; // Size: 8, Type: double
	}
} 
