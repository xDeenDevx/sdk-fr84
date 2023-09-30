/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HoudiniEngineRuntime.

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetActor
/// Size: 0x0008 (0x000228 - 0x000230)
class AHoudiniAssetActor : public AActor
{ 
public:
	UHoudiniAssetComponent*                            HoudiniAssetComponent;                                      // 0x0228   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HiddenHoudiniAssetActor
/// Size: 0x0000 (0x000230 - 0x000230)
class AHiddenHoudiniAssetActor : public AHoudiniAssetActor
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAsset
/// Size: 0x0028 (0x000028 - 0x000050)
class UHoudiniAsset : public UObject
{ 
public:
	FString                                            AssetFileName;                                              // 0x0028   (0x0010)  
	TArray<char>                                       AssetBytes;                                                 // 0x0038   (0x0010)  
	uint32_t                                           AssetBytesCount;                                            // 0x0048   (0x0004)  
	bool                                               bAssetLimitedCommercial;                                    // 0x004C   (0x0001)  
	bool                                               bAssetNonCommercial;                                        // 0x004D   (0x0001)  
	bool                                               bAssetExpanded;                                             // 0x004E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x004F   (0x0001)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent
/// Size: 0x05A0 (0x000540 - 0x000AE0)
class UHoudiniAssetComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0540   (0x0008)  MISSED
	FHoudiniInputLandscapeTransferParams               LandscapeTransferParams;                                    // 0x0548   (0x00C8)  
	TArray<FDirectoryPath>                             Directories;                                                // 0x0610   (0x0010)  
	UHoudiniAsset*                                     HoudiniAsset;                                               // 0x0620   (0x0008)  
	bool                                               bCookOnParameterChange;                                     // 0x0628   (0x0001)  
	bool                                               bUploadTransformsToHoudiniEngine;                           // 0x0629   (0x0001)  
	bool                                               bCookOnTransformChange;                                     // 0x062A   (0x0001)  
	bool                                               bCookOnAssetInputCook;                                      // 0x062B   (0x0001)  
	bool                                               bOutputless;                                                // 0x062C   (0x0001)  
	bool                                               bOutputTemplateGeos;                                        // 0x062D   (0x0001)  
	bool                                               bUseOutputNodes;                                            // 0x062E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x062F   (0x0001)  MISSED
	FDirectoryPath                                     TemporaryCookFolder;                                        // 0x0630   (0x0010)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x0640   (0x0010)  
	EHoudiniStaticMeshMethod                           StaticMeshMethod;                                           // 0x0650   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0651   (0x0007)  MISSED
	FHoudiniStaticMeshGenerationProperties             StaticMeshGenerationProperties;                             // 0x0658   (0x0180)  
	FMeshBuildSettings                                 StaticMeshBuildSettings;                                    // 0x07D8   (0x0030)  
	bool                                               bOverrideGlobalProxyStaticMeshSettings;                     // 0x0808   (0x0001)  
	bool                                               bEnableProxyStaticMeshOverride;                             // 0x0809   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimerOverride;            // 0x080A   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x080B   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSecondsOverride;                  // 0x080C   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;     // 0x0810   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;      // 0x0811   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0812   (0x0002)  MISSED
	int32_t                                            AssetId;                                                    // 0x0814   (0x0004)  
	TArray<int32_t>                                    NodeIdsToCook;                                              // 0x0818   (0x0010)  
	TMap<int32_t, int32_t>                             OutputNodeCookCounts;                                       // 0x0828   (0x0050)  
	TSet<UHoudiniAssetComponent*>                      DownstreamHoudiniAssets;                                    // 0x0878   (0x0050)  
	FGuid                                              ComponentGUID;                                              // 0x08C8   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x08D8   (0x0010)  
	FString                                            HapiAssetName;                                              // 0x08E8   (0x0010)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x08F8   (0x0001)  
	EHoudiniAssetState                                 DebugLastAssetState;                                        // 0x08F9   (0x0001)  
	EHoudiniAssetStateResult                           AssetStateResult;                                           // 0x08FA   (0x0001)  
	unsigned char                                      UnknownData05_5[0x5];                                       // 0x08FB   (0x0005)  MISSED
	FTransform                                         LastComponentTransform;                                     // 0x0900   (0x0030)  
	uint32_t                                           SubAssetIndex;                                              // 0x0930   (0x0004)  
	int32_t                                            AssetCookCount;                                             // 0x0934   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x0938   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x0939   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x093A   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x093B   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x093C   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x093D   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x093E   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x093F   (0x0001)  
	bool                                               bParameterDefinitionUpdateNeeded;                           // 0x0940   (0x0001)  
	bool                                               bBlueprintStructureModified;                                // 0x0941   (0x0001)  
	bool                                               bBlueprintModified;                                         // 0x0942   (0x0001)  
	unsigned char                                      UnknownData06_5[0x5];                                       // 0x0943   (0x0005)  MISSED
	TArray<UHoudiniParameter*>                         Parameters;                                                 // 0x0948   (0x0010)  
	TArray<UHoudiniInput*>                             Inputs;                                                     // 0x0958   (0x0010)  
	TArray<UHoudiniOutput*>                            Outputs;                                                    // 0x0968   (0x0010)  
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0978   (0x0010)  
	TArray<TWeakObjectPtr>                             UntrackedOutputs;                                           // 0x0988   (0x0010)  
	TArray<UHoudiniHandleComponent*>                   HandleComponents;                                           // 0x0998   (0x0010)  
	bool                                               bHasComponentTransformChanged;                              // 0x09A8   (0x0001)  
	bool                                               bFullyLoaded;                                               // 0x09A9   (0x0001)  
	unsigned char                                      UnknownData07_5[0x6];                                       // 0x09AA   (0x0006)  MISSED
	UHoudiniPDGAssetLink*                              PDGAssetLink;                                               // 0x09B0   (0x0008)  
	FTimerHandle                                       RefineMeshesTimer;                                          // 0x09B8   (0x0008)  
	unsigned char                                      UnknownData08_5[0x18];                                      // 0x09C0   (0x0018)  MISSED
	bool                                               bNoProxyMeshNextCookRequested;                              // 0x09D8   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x09D9   (0x0007)  MISSED
	TMap<UObject*, int32_t>                            InputPresets;                                               // 0x09E0   (0x0050)  
	bool                                               bBakeAfterNextCook;                                         // 0x0A30   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7F];                                      // 0x0A31   (0x007F)  MISSED
	bool                                               bCachedIsPreview;                                           // 0x0AB0   (0x0001)  
	unsigned char                                      UnknownData11_5[0xF];                                       // 0x0AB1   (0x000F)  MISSED
	double                                             LastTickTime;                                               // 0x0AC0   (0x0008)  
	unsigned char                                      UnknownData12_6[0x18];                                      // 0x0AC8   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
/// Size: 0x0100 (0x000AE0 - 0x000BE0)
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0AE0   (0x0048)  MISSED
	bool                                               FauxBPProperty;                                             // 0x0B28   (0x0001)  
	bool                                               bHoudiniAssetChanged;                                       // 0x0B29   (0x0001)  
	bool                                               bUpdatedFromTemplate;                                       // 0x0B2A   (0x0001)  
	bool                                               bIsInBlueprintEditor;                                       // 0x0B2B   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x0B2C   (0x0001)  
	bool                                               bHasRegisteredComponentTemplate;                            // 0x0B2D   (0x0001)  
	unsigned char                                      UnknownData01_5[0xA];                                       // 0x0B2E   (0x000A)  MISSED
	TMap<FHoudiniOutputObjectIdentifier, FGuid>        CachedOutputNodes;                                          // 0x0B38   (0x0050)  
	TMap<FGuid, FGuid>                                 CachedInputNodes;                                           // 0x0B88   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0BD8   (0x0008)  MISSED


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
	void SetToggleValueAt(FString Name, bool Value, int32_t Index);                                                          // [0x872860] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
	void SetFloatParameter(FString Name, float Value, int32_t Index);                                                        // [0x872700] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
	bool HasParameter(FString Name);                                                                                         // [0x872600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameter
/// Size: 0x0058 (0x000028 - 0x000080)
class UHoudiniAssetParameter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterButton
/// Size: 0x0000 (0x000080 - 0x000080)
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterChoice
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterColor
/// Size: 0x0010 (0x000080 - 0x000090)
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFile
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0080   (0x0028)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFloat
/// Size: 0x0038 (0x000080 - 0x0000B8)
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0080   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolder
/// Size: 0x0000 (0x000080 - 0x000080)
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolderList
/// Size: 0x0000 (0x000080 - 0x000080)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterInt
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0080   (0x0030)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterLabel
/// Size: 0x0000 (0x000080 - 0x000080)
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
/// Size: 0x0008 (0x000080 - 0x000088)
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRamp
/// Size: 0x0018 (0x000080 - 0x000098)
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterSeparator
/// Size: 0x0000 (0x000080 - 0x000080)
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterString
/// Size: 0x0010 (0x000080 - 0x000090)
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterToggle
/// Size: 0x0010 (0x000080 - 0x000090)
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UHoudiniAssetComponentMaterials_V1 : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent_V1
/// Size: 0x0090 (0x000320 - 0x0003B0)
class UHoudiniHandleComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0320   (0x0090)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent_V1
/// Size: 0x00F0 (0x000320 - 0x000410)
class UHoudiniSplineComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x0320   (0x00F0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInput
/// Size: 0x0120 (0x000080 - 0x0001A0)
class UHoudiniAssetInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x120];                                     // 0x0080   (0x0120)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInput
/// Size: 0x00E0 (0x000080 - 0x000160)
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0080   (0x00E0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInputField
/// Size: 0x0168 (0x000028 - 0x000190)
class UHoudiniAssetInstanceInputField : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x168];                                     // 0x0028   (0x0168)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent_V1
/// Size: 0x04F0 (0x000540 - 0x000A30)
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{ 
public:
	bool                                               bGeneratedDoubleSidedGeometry;                              // 0x0540:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0541   (0x0007)  MISSED
	UPhysicalMaterial*                                 GeneratedPhysMaterial;                                      // 0x0548   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x0550   (0x0130)  
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                                // 0x0680   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0681   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x0684   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x0688   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x068C   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x069C   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio;                    // 0x06A0:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x06A1   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x06A4   (0x0004)  
	UFoliageType_InstancedStaticMesh*                  GeneratedFoliageDefaultSettings;                            // 0x06A8   (0x0008)  
	TArray<UAssetUserData*>                            GeneratedAssetUserData;                                     // 0x06B0   (0x0010)  
	FText                                              BakeFolder;                                                 // 0x06C0   (0x0018)  
	FText                                              TempCookFolder;                                             // 0x06D8   (0x0018)  
	unsigned char                                      UnknownData03_6[0x340];                                     // 0x06F0   (0x0340)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
/// Size: 0x0010 (0x000320 - 0x000330)
class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0320   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
/// Size: 0x0020 (0x000320 - 0x000340)
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0320   (0x0020)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UHoudiniEngineCopyPropertiesInterface : public UInterface
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleParameter
/// Size: 0x0010 (0x000028 - 0x000038)
class UHoudiniHandleParameter : public UObject
{ 
public:
	UHoudiniParameter*                                 AssetParameter;                                             // 0x0028   (0x0008)  
	int32_t                                            TupleIndex;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent
/// Size: 0x0030 (0x000320 - 0x000350)
class UHoudiniHandleComponent : public USceneComponent
{ 
public:
	TArray<UHoudiniHandleParameter*>                   XformParms;                                                 // 0x0318   (0x0010)  
	UHoudiniHandleParameter*                           RSTParm;                                                    // 0x0328   (0x0008)  
	UHoudiniHandleParameter*                           RotOrderParm;                                               // 0x0330   (0x0008)  
	EHoudiniHandleType                                 HandleType;                                                 // 0x0338   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0339   (0x0007)  MISSED
	FString                                            HandleName;                                                 // 0x0340   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInput
/// Size: 0x0250 (0x000028 - 0x000278)
class UHoudiniInput : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            Label;                                                      // 0x0038   (0x0010)  
	EHoudiniInputType                                  Type;                                                       // 0x0048   (0x0001)  
	EHoudiniInputType                                  PreviousType;                                               // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            AssetNodeId;                                                // 0x004C   (0x0004)  
	int32_t                                            InputNodeId;                                                // 0x0050   (0x0004)  
	int32_t                                            InputIndex;                                                 // 0x0054   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x0058   (0x0004)  
	bool                                               bIsObjectPathParameter;                                     // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<int32_t>                                    CreatedDataNodeIds;                                         // 0x0060   (0x0010)  
	bool                                               bHasChanged;                                                // 0x0070   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x0071   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	FBox                                               CachedBounds;                                               // 0x0074   (0x001C)  
	FString                                            help;                                                       // 0x0090   (0x0010)  
	EHoudiniXformType                                  KeepWorldTransform;                                         // 0x00A0   (0x0001)  
	bool                                               bPackBeforeMerge;                                           // 0x00A1   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x00A2   (0x0001)  
	bool                                               bImportAsReferenceRotScaleEnabled;                          // 0x00A3   (0x0001)  
	bool                                               bImportAsReferenceBboxEnabled;                              // 0x00A4   (0x0001)  
	bool                                               bImportAsReferenceMaterialEnabled;                          // 0x00A5   (0x0001)  
	bool                                               bExportLODs;                                                // 0x00A6   (0x0001)  
	bool                                               bExportSockets;                                             // 0x00A7   (0x0001)  
	bool                                               bExportColliders;                                           // 0x00A8   (0x0001)  
	bool                                               bExportMaterialParameters;                                  // 0x00A9   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x00AB   (0x0005)  MISSED
	TArray<UHoudiniInputObject*>                       GeometryInputObjects;                                       // 0x00B0   (0x0010)  
	bool                                               bStaticMeshChanged;                                         // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<UHoudiniInputObject*>                       AssetInputObjects;                                          // 0x00C8   (0x0010)  
	bool                                               bInputAssetConnectedInHoudini;                              // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	TArray<UHoudiniInputObject*>                       CurveInputObjects;                                          // 0x00E0   (0x0010)  
	float                                              DefaultCurveOffset;                                         // 0x00F0   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x00F4   (0x0001)  
	bool                                               bUseLegacyInputCurves;                                      // 0x00F5   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x00F6   (0x0002)  MISSED
	TArray<UHoudiniInputObject*>                       LandscapeInputObjects;                                      // 0x00F8   (0x0010)  
	bool                                               bLandscapeHasExportTypeChanged;                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	TArray<UHoudiniInputObject*>                       LandscapeSplinesInputObjects;                               // 0x0110   (0x0010)  
	TArray<UHoudiniInputObject*>                       FoliageInputObjects;                                        // 0x0120   (0x0010)  
	TArray<UHoudiniInputObject*>                       WorldSMCInputObjects;                                       // 0x0130   (0x0010)  
	TArray<UHoudiniInputObject*>                       PointCloudInputObjects;                                     // 0x0140   (0x0010)  
	TArray<UHoudiniInputObject*>                       WorldInputObjects;                                          // 0x0150   (0x0010)  
	TArray<UHoudiniInputObject*>                       TextureInputObjects;                                        // 0x0160   (0x0010)  
	TArray<AActor*>                                    WorldInputBoundSelectorObjects;                             // 0x0170   (0x0010)  
	bool                                               bIsWorldInputBoundSelector;                                 // 0x0180   (0x0001)  
	bool                                               bWorldInputBoundSelectorAutoUpdate;                         // 0x0181   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x0182   (0x0002)  MISSED
	float                                              UnrealSplineResolution;                                     // 0x0184   (0x0004)  
	TArray<UHoudiniInputObject*>                       SkeletalInputObjects;                                       // 0x0188   (0x0010)  
	TArray<UHoudiniInputObject*>                       GeometryCollectionInputObjects;                             // 0x0198   (0x0010)  
	TSet<ULandscapeComponent*>                         LandscapeSelectedComponents;                                // 0x01A8   (0x0050)  
	TSet<int32_t>                                      InputNodesPendingDelete;                                    // 0x01F8   (0x0050)  
	TArray<UHoudiniInputHoudiniSplineComponent*>       LastInsertedInputs;                                         // 0x0248   (0x0010)  
	TArray<UHoudiniInputObject*>                       LastUndoDeletedInputs;                                      // 0x0258   (0x0010)  
	bool                                               bUpdateInputLandscape;                                      // 0x0268   (0x0001)  
	EHoudiniLandscapeExportType                        LandscapeExportType;                                        // 0x0269   (0x0001)  
	bool                                               bLandscapeExportSelectionOnly;                              // 0x026A   (0x0001)  
	bool                                               bLandscapeAutoSelectComponent;                              // 0x026B   (0x0001)  
	bool                                               bLandscapeExportMaterials;                                  // 0x026C   (0x0001)  
	bool                                               bLandscapeExportLighting;                                   // 0x026D   (0x0001)  
	bool                                               bLandscapeExportNormalizedUVs;                              // 0x026E   (0x0001)  
	bool                                               bLandscapeExportTileUVs;                                    // 0x026F   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x0270   (0x0001)  
	bool                                               bAutoSelectInputType;                                       // 0x0271   (0x0001)  
	bool                                               bEnableSMCWorldFilter;                                      // 0x0272   (0x0001)  
	bool                                               bIsIncludeStaticMesh;                                       // 0x0273   (0x0001)  
	bool                                               bNeedSendModelMaterial;                                     // 0x0274   (0x0001)  
	bool                                               bNeedSendDataTableModel;                                    // 0x0275   (0x0001)  
	bool                                               bNeedSendFoliageInstanceCustomData;                         // 0x0276   (0x0001)  
	unsigned char                                      UnknownData09_6[0x1];                                       // 0x0277   (0x0001)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputObject
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UHoudiniInputObject : public UObject
{ 
public:
	TWeakObjectPtr<UObject*>                           InputObject;                                                // 0x0028   (0x0028)  
	FTransform                                         Transform;                                                  // 0x0050   (0x0030)  
	EHoudiniInputObjectType                            Type;                                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            InputNodeId;                                                // 0x0084   (0x0004)  
	int32_t                                            InputObjectNodeId;                                          // 0x0088   (0x0004)  
	FGuid                                              Guid;                                                       // 0x008C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x2C];                                      // 0x009C   (0x002C)  MISSED
	bool                                               bHasChanged;                                                // 0x00C8   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x00C9   (0x0001)  
	bool                                               bTransformChanged;                                          // 0x00CA   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x00CB   (0x0001)  
	bool                                               bImportAsReferenceRotScaleEnabled;                          // 0x00CC   (0x0001)  
	bool                                               bImportAsReferenceBboxEnabled;                              // 0x00CD   (0x0001)  
	bool                                               bImportAsReferenceMaterialEnabled;                          // 0x00CE   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x00CF   (0x0001)  MISSED
	TArray<FString>                                    MaterialReferences;                                         // 0x00D0   (0x0010)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x00E1   (0x000F)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputStaticMesh
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputTexture
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputTexture : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMesh
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputGeometryCollection
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSceneComponent
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{ 
public:
	FTransform                                         ActorTransform;                                             // 0x00F0   (0x0030)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputMeshComponent
/// Size: 0x0030 (0x000120 - 0x000150)
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{ 
public:
	TWeakObjectPtr<UStaticMesh*>                       StaticMesh;                                                 // 0x0120   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
/// Size: 0x0010 (0x000150 - 0x000160)
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{ 
public:
	TArray<FTransform>                                 InstanceTransforms;                                         // 0x0148   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputLandscapeSplineComponent
/// Size: 0x0020 (0x000120 - 0x000140)
class UHoudiniInputLandscapeSplineComponent : public UHoudiniInputSceneComponent
{ 
public:
	int32_t                                            NumberOfSplineControlPoints;                                // 0x0120   (0x0004)  
	float                                              SplineLength;                                               // 0x0124   (0x0004)  
	float                                              SplineResolution;                                           // 0x0128   (0x0004)  
	bool                                               SplineClosed;                                               // 0x012C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x012D   (0x0003)  MISSED
	TArray<FTransform>                                 SplineControlPoints;                                        // 0x0130   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSplineComponent
/// Size: 0x0020 (0x000120 - 0x000140)
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{ 
public:
	int32_t                                            NumberOfSplineControlPoints;                                // 0x0120   (0x0004)  
	float                                              SplineLength;                                               // 0x0124   (0x0004)  
	float                                              SplineResolution;                                           // 0x0128   (0x0004)  
	bool                                               SplineClosed;                                               // 0x012C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x012D   (0x0003)  MISSED
	TArray<FTransform>                                 SplineControlPoints;                                        // 0x0130   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
/// Size: 0x0000 (0x000120 - 0x000120)
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
/// Size: 0x0000 (0x000120 - 0x000120)
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{ 
public:
	EHoudiniCurveType                                  CurveType;                                                  // 0x00E8   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x00E9   (0x0001)  
	bool                                               Reversed;                                                   // 0x00EA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00EB   (0x0005)  MISSED
	UHoudiniSplineComponent*                           CachedComponent;                                            // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputCameraComponent
/// Size: 0x0020 (0x000120 - 0x000140)
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{ 
public:
	float                                              FOV;                                                        // 0x0120   (0x0004)  
	float                                              AspectRatio;                                                // 0x0124   (0x0004)  
	bool                                               bIsOrthographic;                                            // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0129   (0x0003)  MISSED
	float                                              OrthoWidth;                                                 // 0x012C   (0x0004)  
	float                                              OrthoNearClipPlane;                                         // 0x0130   (0x0004)  
	float                                              OrthoFarClipPlane;                                          // 0x0134   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniAsset
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputActor
/// Size: 0x0060 (0x0000F0 - 0x000150)
class UHoudiniInputActor : public UHoudiniInputObject
{ 
public:
	TArray<UHoudiniInputSceneComponent*>               ActorComponents;                                            // 0x00E8   (0x0010)  
	TSet<TWeakObjectPtr>                               ActorSceneComponents;                                       // 0x00F8   (0x0050)  
	int32_t                                            LastUpdateNumComponentsAdded;                               // 0x0148   (0x0004)  
	int32_t                                            LastUpdateNumComponentsRemoved;                             // 0x014C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputLandscape
/// Size: 0x0100 (0x000150 - 0x000250)
class UHoudiniInputLandscape : public UHoudiniInputActor
{ 
public:
	FTransform                                         CachedInputLandscapeTraqnsform;                             // 0x0150   (0x0030)  
	int32_t                                            CachedNumLandscapeComponents;                               // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	FHoudiniInputLandscapeTransferParams               TransferParams;                                             // 0x0188   (0x00C8)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputInstancedFoliage
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputInstancedFoliage : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputBrush
/// Size: 0x0020 (0x000150 - 0x000170)
class UHoudiniInputBrush : public UHoudiniInputActor
{ 
public:
	TArray<FHoudiniBrushInfo>                          BrushesInfo;                                                // 0x0150   (0x0010)  
	UModel*                                            CombinedModel;                                              // 0x0160   (0x0008)  
	bool                                               bIgnoreInputObject;                                         // 0x0168   (0x0001)  
	TEnumAsByte<EBrushType>                            CachedInputBrushType;                                       // 0x0169   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x016A   (0x0006)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputDataTable
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputDataTable : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputBlueprint
/// Size: 0x0060 (0x0000F0 - 0x000150)
class UHoudiniInputBlueprint : public UHoudiniInputObject
{ 
public:
	TArray<UHoudiniInputSceneComponent*>               BPComponents;                                               // 0x00E8   (0x0010)  
	TSet<TWeakObjectPtr>                               BPSceneComponents;                                          // 0x00F8   (0x0050)  
	int32_t                                            LastUpdateNumComponentsAdded;                               // 0x0148   (0x0004)  
	int32_t                                            LastUpdateNumComponentsRemoved;                             // 0x014C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent
/// Size: 0x0010 (0x000320 - 0x000330)
class UHoudiniInstancedActorComponent : public USceneComponent
{ 
public:
	UObject*                                           InstancedObject;                                            // 0x0318   (0x0008)  
	TArray<AActor*>                                    InstancedActors;                                            // 0x0320   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
/// Size: 0x0020 (0x000320 - 0x000340)
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{ 
public:
	TArray<UStaticMeshComponent*>                      Instances;                                                  // 0x0318   (0x0010)  
	TArray<UMaterialInterface*>                        OverrideMaterials;                                          // 0x0328   (0x0010)  
	UStaticMesh*                                       InstancedMesh;                                              // 0x0338   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapePtr
/// Size: 0x0038 (0x000028 - 0x000060)
class UHoudiniLandscapePtr : public UObject
{ 
public:
	TWeakObjectPtr<ALandscapeProxy*>                   LandscapeSoftPtr;                                           // 0x0028   (0x0028)  
	EHoudiniLandscapeOutputBakeType                    BakeType;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FName                                              EditLayerName;                                              // 0x0054   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapeEditLayer
/// Size: 0x0038 (0x000028 - 0x000060)
class UHoudiniLandscapeEditLayer : public UObject
{ 
public:
	TWeakObjectPtr<ALandscapeProxy*>                   LandscapeSoftPtr;                                           // 0x0028   (0x0028)  
	FString                                            LayerName;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniOutput
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UHoudiniOutput : public UObject
{ 
public:
	EHoudiniOutputType                                 Type;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FHoudiniGeoPartObject>                      HoudiniGeoPartObjects;                                      // 0x0030   (0x0010)  
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;                                      // 0x0040   (0x0050)  
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;                                // 0x0090   (0x0050)  
	TMap<FString, UMaterialInterface*>                 AssignementMaterials;                                       // 0x00E0   (0x0050)  
	TMap<FString, UMaterialInterface*>                 ReplacementMaterials;                                       // 0x0130   (0x0050)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0180   (0x0004)  MISSED
	bool                                               bLandscapeWorldComposition;                                 // 0x0184   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0185   (0x0003)  MISSED
	TArray<AActor*>                                    HoudiniCreatedSocketActors;                                 // 0x0188   (0x0010)  
	TArray<AActor*>                                    HoudiniAttachedSocketActors;                                // 0x0198   (0x0010)  
	bool                                               bIsEditableNode;                                            // 0x01A8   (0x0001)  
	bool                                               bHasEditableNodeBuilt;                                      // 0x01A9   (0x0001)  
	bool                                               bIsUpdating;                                                // 0x01AA   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x01AB   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameter
/// Size: 0x00E0 (0x000028 - 0x000108)
class UHoudiniParameter : public UObject
{ 
public:
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            Label;                                                      // 0x0038   (0x0010)  
	EHoudiniParameterType                              ParmType;                                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	uint32_t                                           TupleSize;                                                  // 0x004C   (0x0004)  
	int32_t                                            NodeId;                                                     // 0x0050   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x0054   (0x0004)  
	int32_t                                            ParentParmId;                                               // 0x0058   (0x0004)  
	int32_t                                            ChildIndex;                                                 // 0x005C   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x0060   (0x0001)  
	bool                                               bIsParentFolderVisible;                                     // 0x0061   (0x0001)  
	bool                                               bIsDisabled;                                                // 0x0062   (0x0001)  
	bool                                               bHasChanged;                                                // 0x0063   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x0064   (0x0001)  
	bool                                               bIsDefault;                                                 // 0x0065   (0x0001)  
	bool                                               bIsSpare;                                                   // 0x0066   (0x0001)  
	bool                                               bJoinNext;                                                  // 0x0067   (0x0001)  
	bool                                               bIsChildOfMultiParm;                                        // 0x0068   (0x0001)  
	bool                                               bIsDirectChildOfMultiParm;                                  // 0x0069   (0x0001)  
	bool                                               bPendingRevertToDefault;                                    // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x006B   (0x0005)  MISSED
	TArray<int32_t>                                    TuplePendingRevertToDefault;                                // 0x0070   (0x0010)  
	FString                                            help;                                                       // 0x0080   (0x0010)  
	uint32_t                                           TagCount;                                                   // 0x0090   (0x0004)  
	int32_t                                            ValueIndex;                                                 // 0x0094   (0x0004)  
	bool                                               bHasExpression;                                             // 0x0098   (0x0001)  
	bool                                               bShowExpression;                                            // 0x0099   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	FString                                            ParamExpression;                                            // 0x00A0   (0x0010)  
	TMap<FString, FString>                             Tags;                                                       // 0x00B0   (0x0050)  
	bool                                               bAutoUpdate;                                                // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButton
/// Size: 0x0000 (0x000108 - 0x000108)
class UHoudiniParameterButton : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButtonStrip
/// Size: 0x0028 (0x000108 - 0x000130)
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{ 
public:
	int32_t                                            count;                                                      // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	TArray<FString>                                    Labels;                                                     // 0x0110   (0x0010)  
	TArray<int32_t>                                    Values;                                                     // 0x0120   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterChoice
/// Size: 0x0070 (0x000108 - 0x000178)
class UHoudiniParameterChoice : public UHoudiniParameter
{ 
public:
	int32_t                                            IntValue;                                                   // 0x0108   (0x0004)  
	int32_t                                            DefaultIntValue;                                            // 0x010C   (0x0004)  
	FString                                            StringValue;                                                // 0x0110   (0x0010)  
	FString                                            DefaultStringValue;                                         // 0x0120   (0x0010)  
	TArray<FString>                                    StringChoiceValues;                                         // 0x0130   (0x0010)  
	TArray<FString>                                    StringChoiceLabels;                                         // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0150   (0x0010)  MISSED
	bool                                               bIsChildOfRamp;                                             // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<int32_t>                                    IntValuesArray;                                             // 0x0168   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterColor
/// Size: 0x0028 (0x000108 - 0x000130)
class UHoudiniParameterColor : public UHoudiniParameter
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0108   (0x0010)  
	FLinearColor                                       DefaultColor;                                               // 0x0118   (0x0010)  
	bool                                               bIsChildOfRamp;                                             // 0x0128   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFile
/// Size: 0x0038 (0x000108 - 0x000140)
class UHoudiniParameterFile : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<FString>                                    DefaultValues;                                              // 0x0118   (0x0010)  
	FString                                            Filters;                                                    // 0x0128   (0x0010)  
	bool                                               bIsReadOnly;                                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFloat
/// Size: 0x0050 (0x000108 - 0x000158)
class UHoudiniParameterFloat : public UHoudiniParameter
{ 
public:
	TArray<float>                                      Values;                                                     // 0x0108   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0118   (0x0010)  
	FString                                            Unit;                                                       // 0x0128   (0x0010)  
	bool                                               bNoSwap;                                                    // 0x0138   (0x0001)  
	bool                                               bHasMin;                                                    // 0x0139   (0x0001)  
	bool                                               bHasMax;                                                    // 0x013A   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x013B   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x013C   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x013E   (0x0002)  MISSED
	float                                              Min;                                                        // 0x0140   (0x0004)  
	float                                              Max;                                                        // 0x0144   (0x0004)  
	float                                              UIMin;                                                      // 0x0148   (0x0004)  
	float                                              UIMax;                                                      // 0x014C   (0x0004)  
	bool                                               bIsChildOfRamp;                                             // 0x0150   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolder
/// Size: 0x0010 (0x000108 - 0x000118)
class UHoudiniParameterFolder : public UHoudiniParameter
{ 
public:
	EHoudiniFolderParameterType                        FolderType;                                                 // 0x0108   (0x0001)  
	bool                                               bExpanded;                                                  // 0x0109   (0x0001)  
	bool                                               bChosen;                                                    // 0x010A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x010B   (0x0001)  MISSED
	int32_t                                            ChildCounter;                                               // 0x010C   (0x0004)  
	bool                                               bIsContentShown;                                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolderList
/// Size: 0x0018 (0x000108 - 0x000120)
class UHoudiniParameterFolderList : public UHoudiniParameter
{ 
public:
	bool                                               bIsTabMenu;                                                 // 0x0108   (0x0001)  
	bool                                               bIsTabsShown;                                               // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x010A   (0x0006)  MISSED
	TArray<UHoudiniParameterFolder*>                   TabFolders;                                                 // 0x0110   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterInt
/// Size: 0x0048 (0x000108 - 0x000150)
class UHoudiniParameterInt : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0118   (0x0010)  
	FString                                            Unit;                                                       // 0x0128   (0x0010)  
	bool                                               bHasMin;                                                    // 0x0138   (0x0001)  
	bool                                               bHasMax;                                                    // 0x0139   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x013A   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x013B   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x013C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x013D   (0x0003)  MISSED
	int32_t                                            Min;                                                        // 0x0140   (0x0004)  
	int32_t                                            Max;                                                        // 0x0144   (0x0004)  
	int32_t                                            UIMin;                                                      // 0x0148   (0x0004)  
	int32_t                                            UIMax;                                                      // 0x014C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterLabel
/// Size: 0x0010 (0x000108 - 0x000118)
class UHoudiniParameterLabel : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    LabelStrings;                                               // 0x0108   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterMultiParm
/// Size: 0x0048 (0x000108 - 0x000150)
class UHoudiniParameterMultiParm : public UHoudiniParameter
{ 
public:
	bool                                               bIsShown;                                                   // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x010C   (0x0004)  
	FString                                            TemplateName;                                               // 0x0110   (0x0010)  
	int32_t                                            MultiparmValue;                                             // 0x0120   (0x0004)  
	uint32_t                                           MultiParmInstanceNum;                                       // 0x0124   (0x0004)  
	uint32_t                                           MultiParmInstanceLength;                                    // 0x0128   (0x0004)  
	uint32_t                                           MultiParmInstanceCount;                                     // 0x012C   (0x0004)  
	uint32_t                                           InstanceStartOffset;                                        // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0134   (0x0004)  MISSED
	TArray<EHoudiniMultiParmModificationType>          MultiParmInstanceLastModifyArray;                           // 0x0138   (0x0010)  
	int32_t                                            DefaultInstanceCount;                                       // 0x0148   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterOperatorPath
/// Size: 0x0008 (0x000108 - 0x000110)
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{ 
public:
	TWeakObjectPtr<UHoudiniInput*>                     HoudiniInput;                                               // 0x0108   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
/// Size: 0x0028 (0x000028 - 0x000050)
class UHoudiniParameterRampModificationEvent : public UObject
{ 
public:
	bool                                               bIsInsertEvent;                                             // 0x0028   (0x0001)  
	bool                                               bIsFloatRamp;                                               // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            DeleteInstanceIndex;                                        // 0x002C   (0x0004)  
	float                                              InsertPosition;                                             // 0x0030   (0x0004)  
	float                                              InsertFloat;                                                // 0x0034   (0x0004)  
	FLinearColor                                       InsertColor;                                                // 0x0038   (0x0010)  
	EHoudiniRampInterpolationType                      InsertInterpolation;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
/// Size: 0x0028 (0x000028 - 0x000050)
class UHoudiniParameterRampFloatPoint : public UObject
{ 
public:
	float                                              Position;                                                   // 0x0028   (0x0004)  
	float                                              Value;                                                      // 0x002C   (0x0004)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x0034   (0x0004)  
	UHoudiniParameterFloat*                            PositionParentParm;                                         // 0x0038   (0x0008)  
	UHoudiniParameterFloat*                            ValueParentParm;                                            // 0x0040   (0x0008)  
	UHoudiniParameterChoice*                           InterpolationParentParm;                                    // 0x0048   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColorPoint
/// Size: 0x0038 (0x000028 - 0x000060)
class UHoudiniParameterRampColorPoint : public UObject
{ 
public:
	float                                              Position;                                                   // 0x0028   (0x0004)  
	FLinearColor                                       Value;                                                      // 0x002C   (0x0010)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	UHoudiniParameterFloat*                            PositionParentParm;                                         // 0x0048   (0x0008)  
	UHoudiniParameterColor*                            ValueParentParm;                                            // 0x0050   (0x0008)  
	UHoudiniParameterChoice*                           InterpolationParentParm;                                    // 0x0058   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloat
/// Size: 0x0068 (0x000150 - 0x0001B8)
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{ 
public:
	TArray<UHoudiniParameterRampFloatPoint*>           Points;                                                     // 0x0150   (0x0010)  
	TArray<UHoudiniParameterRampFloatPoint*>           CachedPoints;                                               // 0x0160   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0170   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0180   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x0190   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01A0   (0x0004)  
	bool                                               bCaching;                                                   // 0x01A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01A5   (0x0003)  MISSED
	TArray<UHoudiniParameterRampModificationEvent*>    ModificationEvents;                                         // 0x01A8   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColor
/// Size: 0x0070 (0x000150 - 0x0001C0)
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{ 
public:
	TArray<UHoudiniParameterRampColorPoint*>           Points;                                                     // 0x0150   (0x0010)  
	bool                                               bCaching;                                                   // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<UHoudiniParameterRampColorPoint*>           CachedPoints;                                               // 0x0168   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0178   (0x0010)  
	TArray<FLinearColor>                               DefaultValues;                                              // 0x0188   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x0198   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01A8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01AC   (0x0004)  MISSED
	TArray<UHoudiniParameterRampModificationEvent*>    ModificationEvents;                                         // 0x01B0   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterSeparator
/// Size: 0x0000 (0x000108 - 0x000108)
class UHoudiniParameterSeparator : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterString
/// Size: 0x0038 (0x000108 - 0x000140)
class UHoudiniParameterString : public UHoudiniParameter
{ 
public:
	TArray<FString>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<FString>                                    DefaultValues;                                              // 0x0118   (0x0010)  
	TArray<UObject*>                                   ChosenAssets;                                               // 0x0128   (0x0010)  
	bool                                               bIsAssetRef;                                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterToggle
/// Size: 0x0020 (0x000108 - 0x000128)
class UHoudiniParameterToggle : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0108   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0118   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.TOPNode
/// Size: 0x03F8 (0x000028 - 0x000420)
class UTOPNode : public UObject
{ 
public:
	int32_t                                            NodeId;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            NodeName;                                                   // 0x0030   (0x0010)  
	FString                                            NodePath;                                                   // 0x0040   (0x0010)  
	FString                                            ParentName;                                                 // 0x0050   (0x0010)  
	UObject*                                           WorkResultParent;                                           // 0x0060   (0x0008)  
	TArray<FTOPWorkResult>                             WorkResult;                                                 // 0x0068   (0x0010)  
	bool                                               bHidden;                                                    // 0x0078   (0x0001)  
	bool                                               bAutoLoad;                                                  // 0x0079   (0x0001)  
	EPDGNodeState                                      NodeState;                                                  // 0x007A   (0x0001)  
	bool                                               bCachedHaveNotLoadedWorkResults;                            // 0x007B   (0x0001)  
	bool                                               bCachedHaveLoadedWorkResults;                               // 0x007C   (0x0001)  
	bool                                               bHasChildNodes;                                             // 0x007D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x007E   (0x0002)  MISSED
	TSet<FString>                                      ClearedLandscapeLayers;                                     // 0x0080   (0x0050)  
	unsigned char                                      UnknownData02_5[0x80];                                      // 0x00D0   (0x0080)  MISSED
	bool                                               bShow;                                                      // 0x0150   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0151   (0x0007)  MISSED
	TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;                            // 0x0158   (0x0050)  
	FWorkItemTally                                     WorkItemTally;                                              // 0x01A8   (0x0238)  
	FAggregatedWorkItemTally                           AggregatedWorkItemTally;                                    // 0x03E0   (0x0028)  
	bool                                               bHasReceivedCookCompleteEvent;                              // 0x0408   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0409   (0x0007)  MISSED
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0410   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.TOPNetwork
/// Size: 0x0070 (0x000028 - 0x000098)
class UTOPNetwork : public UObject
{ 
public:
	int32_t                                            NodeId;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            NodeName;                                                   // 0x0030   (0x0010)  
	FString                                            NodePath;                                                   // 0x0040   (0x0010)  
	TArray<UTOPNode*>                                  AllTOPNodes;                                                // 0x0050   (0x0010)  
	int32_t                                            SelectedTOPIndex;                                           // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FString                                            ParentName;                                                 // 0x0068   (0x0010)  
	bool                                               bShowResults;                                               // 0x0078   (0x0001)  
	bool                                               bAutoLoadResults;                                           // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1E];                                      // 0x007A   (0x001E)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniPDGAssetLink
/// Size: 0x0108 (0x000028 - 0x000130)
class UHoudiniPDGAssetLink : public UObject
{ 
public:
	FString                                            AssetName;                                                  // 0x0028   (0x0010)  
	FString                                            AssetNodePath;                                              // 0x0038   (0x0010)  
	int32_t                                            AssetId;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<UTOPNetwork*>                               AllTOPNetworks;                                             // 0x0050   (0x0010)  
	int32_t                                            SelectedTOPNetworkIndex;                                    // 0x0060   (0x0004)  
	EPDGLinkState                                      LinkState;                                                  // 0x0064   (0x0001)  
	bool                                               bAutoCook;                                                  // 0x0065   (0x0001)  
	bool                                               bUseTOPNodeFilter;                                          // 0x0066   (0x0001)  
	bool                                               bUseTOPOutputFilter;                                        // 0x0067   (0x0001)  
	FString                                            TOPNodeFilter;                                              // 0x0068   (0x0010)  
	FString                                            TOPOutputFilter;                                            // 0x0078   (0x0010)  
	int32_t                                            NumWorkItems;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FAggregatedWorkItemTally                           WorkItemTally;                                              // 0x0090   (0x0028)  
	FString                                            OutputCachePath;                                            // 0x00B8   (0x0010)  
	bool                                               bNeedsUIRefresh;                                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	AActor*                                            OutputParentActor;                                          // 0x00D0   (0x0008)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x00E8   (0x0048)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniRuntimeSettings
/// Size: 0x02B0 (0x000028 - 0x0002D8)
class UHoudiniRuntimeSettings : public UObject
{ 
public:
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType>    SessionType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            ServerHost;                                                 // 0x0030   (0x0010)  
	int32_t                                            ServerPort;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            ServerPipeName;                                             // 0x0048   (0x0010)  
	bool                                               bStartAutomaticServer;                                      // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              AutomaticServerTimeout;                                     // 0x005C   (0x0004)  
	bool                                               bSyncWithHoudiniCook;                                       // 0x0060   (0x0001)  
	bool                                               bCookUsingHoudiniTime;                                      // 0x0061   (0x0001)  
	bool                                               bSyncViewport;                                              // 0x0062   (0x0001)  
	bool                                               bSyncHoudiniViewport;                                       // 0x0063   (0x0001)  
	bool                                               bSyncUnrealViewport;                                        // 0x0064   (0x0001)  
	bool                                               bShowMultiAssetDialog;                                      // 0x0065   (0x0001)  
	bool                                               bPreferHdaMemoryCopyOverHdaSourceFile;                      // 0x0066   (0x0001)  
	bool                                               bPauseCookingOnStart;                                       // 0x0067   (0x0001)  
	bool                                               bDisplaySlateCookingNotifications;                          // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            DefaultTemporaryCookFolder;                                 // 0x0070   (0x0010)  
	FString                                            DefaultBakeFolder;                                          // 0x0080   (0x0010)  
	bool                                               bEnableTheReferenceCountedInputSystem;                      // 0x0090   (0x0001)  
	bool                                               MarshallingLandscapesUseDefaultUnrealScaling;               // 0x0091   (0x0001)  
	bool                                               MarshallingLandscapesUseFullResolution;                     // 0x0092   (0x0001)  
	bool                                               MarshallingLandscapesForceMinMaxValues;                     // 0x0093   (0x0001)  
	float                                              MarshallingLandscapesForcedMinValue;                        // 0x0094   (0x0004)  
	float                                              MarshallingLandscapesForcedMaxValue;                        // 0x0098   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x009C   (0x0001)  
	bool                                               bUseLegacyInputCurves;                                      // 0x009D   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x009E   (0x0002)  MISSED
	float                                              MarshallingSplineResolution;                                // 0x00A0   (0x0004)  
	bool                                               bEnableProxyStaticMesh;                                     // 0x00A4   (0x0001)  
	bool                                               bShowDefaultMesh;                                           // 0x00A5   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimer;                    // 0x00A6   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x00A7   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSeconds;                          // 0x00A8   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorld;             // 0x00AC   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIE;              // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x00AE   (0x0002)  MISSED
	bool                                               bDoubleSidedGeometry;                                       // 0x00B0:0 (0x0001)  
	unsigned char                                      UnknownData07_4[0x7];                                       // 0x00B1   (0x0007)  MISSED
	UPhysicalMaterial*                                 PhysMaterial;                                               // 0x00B8   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x00C0   (0x0130)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                         // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x01F1   (0x0003)  MISSED
	int32_t                                            LightMapResolution;                                         // 0x01F4   (0x0004)  
	float                                              LpvBiasMultiplier;                                          // 0x01F8   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x01FC   (0x0004)  
	FWalkableSlopeOverride                             WalkableSlopeOverride;                                      // 0x0200   (0x0010)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0210   (0x0004)  
	bool                                               bUseMaximumStreamingTexelRatio;                             // 0x0214:0 (0x0001)  
	unsigned char                                      UnknownData09_4[0x3];                                       // 0x0215   (0x0003)  MISSED
	float                                              StreamingDistanceMultiplier;                                // 0x0218   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x021C   (0x0004)  MISSED
	UFoliageType_InstancedStaticMesh*                  FoliageDefaultSettings;                                     // 0x0220   (0x0008)  
	TArray<UAssetUserData*>                            AssetUserData;                                              // 0x0228   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0238   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	int32_t                                            SrcLightmapIndex;                                           // 0x023C   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x0240   (0x0004)  
	int32_t                                            MinLightmapResolution;                                      // 0x0244   (0x0004)  
	bool                                               bRemoveDegenerates;                                         // 0x0248   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  GenerateLightmapUVsFlag;                                    // 0x0249   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeNormalsFlag;                                       // 0x024A   (0x0001)  
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeTangentsFlag;                                      // 0x024B   (0x0001)  
	bool                                               bUseMikkTSpace;                                             // 0x024C   (0x0001)  
	bool                                               bBuildAdjacencyBuffer;                                      // 0x024D   (0x0001)  
	bool                                               bComputeWeightedNormals;                                    // 0x024E:0 (0x0001)  
	bool                                               bBuildReversedIndexBuffer;                                  // 0x024E:1 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis;                              // 0x024E:2 (0x0001)  
	unsigned char                                      UnknownData12_4[0x1];                                       // 0x024F   (0x0001)  MISSED
	float                                              DistanceFieldResolutionScale;                               // 0x0250   (0x0004)  
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                         // 0x0254:0 (0x0001)  
	bool                                               bSupportFaceRemap;                                          // 0x0254:1 (0x0001)  
	bool                                               bPDGAsyncCommandletImportEnabled;                           // 0x0255   (0x0001)  
	bool                                               bEnableBackwardCompatibility;                               // 0x0256   (0x0001)  
	bool                                               bAutomaticLegacyHDARebuild;                                 // 0x0257   (0x0001)  
	bool                                               bUseCustomHoudiniLocation;                                  // 0x0258   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0259   (0x0007)  MISSED
	FDirectoryPath                                     CustomHoudiniLocation;                                      // 0x0260   (0x0010)  
	TEnumAsByte<EHoudiniExecutableType>                HoudiniExecutable;                                          // 0x0270   (0x0001)  
	unsigned char                                      UnknownData14_5[0x3];                                       // 0x0271   (0x0003)  MISSED
	int32_t                                            CookingThreadStackSize;                                     // 0x0274   (0x0004)  
	FString                                            HoudiniEnvironmentFiles;                                    // 0x0278   (0x0010)  
	FString                                            SyncNetDiscPath;                                            // 0x0288   (0x0010)  
	FString                                            OtlSearchPath;                                              // 0x0298   (0x0010)  
	FString                                            DsoSearchPath;                                              // 0x02A8   (0x0010)  
	FString                                            ImageDsoSearchPath;                                         // 0x02B8   (0x0010)  
	FString                                            AudioDsoSearchPath;                                         // 0x02C8   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent
/// Size: 0x02A0 (0x000320 - 0x0005C0)
class UHoudiniSplineComponent : public USceneComponent
{ 
public:
	TArray<FTransform>                                 CurvePoints;                                                // 0x0320   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0330   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0340   (0x0010)  
	FString                                            HoudiniSplineName;                                          // 0x0350   (0x0010)  
	bool                                               bClosed;                                                    // 0x0360   (0x0001)  
	bool                                               bReversed;                                                  // 0x0361   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0362   (0x0002)  MISSED
	int32_t                                            CurveOrder;                                                 // 0x0364   (0x0004)  
	bool                                               bIsHoudiniSplineVisible;                                    // 0x0368   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0369   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x036A   (0x0001)  
	EHoudiniCurveBreakpointParameterization            CurveBreakpointParameterization;                            // 0x036B   (0x0001)  
	bool                                               bIsOutputCurve;                                             // 0x036C   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x036D   (0x0001)  
	bool                                               bIsLegacyInputCurve;                                        // 0x036E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x231];                                     // 0x036F   (0x0231)  MISSED
	bool                                               bHasChanged;                                                // 0x05A0   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x05A1   (0x0001)  
	bool                                               bIsInputCurve;                                              // 0x05A2   (0x0001)  
	bool                                               bIsEditableOutputCurve;                                     // 0x05A3   (0x0001)  
	int32_t                                            NodeId;                                                     // 0x05A4   (0x0004)  
	FString                                            PartName;                                                   // 0x05A8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x05B8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMesh
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UHoudiniStaticMesh : public UObject
{ 
public:
	bool                                               bHasNormals;                                                // 0x0028   (0x0001)  
	bool                                               bHasTangents;                                               // 0x0029   (0x0001)  
	bool                                               bHasColors;                                                 // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x002B   (0x0001)  MISSED
	uint32_t                                           NumUVLayers;                                                // 0x002C   (0x0004)  
	bool                                               bHasPerFaceMaterials;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FVector>                                    VertexPositions;                                            // 0x0038   (0x0010)  
	TArray<FIntVector>                                 TriangleIndices;                                            // 0x0048   (0x0010)  
	TArray<FColor>                                     VertexInstanceColors;                                       // 0x0058   (0x0010)  
	TArray<FVector>                                    VertexInstanceNormals;                                      // 0x0068   (0x0010)  
	TArray<FVector>                                    VertexInstanceUTangents;                                    // 0x0078   (0x0010)  
	TArray<FVector>                                    VertexInstanceVTangents;                                    // 0x0088   (0x0010)  
	TArray<FVector2D>                                  VertexInstanceUVs;                                          // 0x0098   (0x0010)  
	TArray<int32_t>                                    MaterialIDsPerTriangle;                                     // 0x00A8   (0x0010)  
	TArray<FStaticMaterial>                            StaticMaterials;                                            // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
	void SetVertexPosition(uint32_t InVertexIndex, FVector& InPosition);                                                     // [0x8804e0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InVTangent);               // [0x8803c0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
	void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, FVector2D& InUV);         // [0x880260] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InUTangent);               // [0x880140] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InNormal);                   // [0x880020] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, FIntVector& InTriangleVertexIndices);                            // [0x87ff50] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
	void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, FColor& InColor);                      // [0x87fe30] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID);                                              // [0x87fd60] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
	void SetStaticMaterial(uint32_t InMaterialIndex, FStaticMaterial& InStaticMaterial);                                     // [0x87fc50] Final|Native|Public|HasOutParms 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
	void SetNumUVLayers(uint32_t InNumUVLayers);                                                                             // [0x87fbc0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials);                                                               // [0x87fb30] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
	void SetHasTangents(bool bInHasTangents);                                                                                // [0x87faa0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);                                                                // [0x87fa10] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
	void SetHasNormals(bool bInHasNormals);                                                                                  // [0x87f980] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
	void SetHasColors(bool bInHasColors);                                                                                    // [0x87f8f0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
	void Optimize();                                                                                                         // [0x87f8d0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
	bool IsValid(bool bInSkipVertexIndicesCheck);                                                                            // [0x87f830] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials); // [0x87f5c0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
	bool HasTangents();                                                                                                      // [0x87f5a0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
	bool HasPerFaceMaterials();                                                                                              // [0x87f580] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
	bool HasNormals();                                                                                                       // [0x87f560] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
	bool HasColors();                                                                                                        // [0x87f540] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
	TArray<FVector> GetVertexPositions();                                                                                    // [0x87f510] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
	TArray<FVector> GetVertexInstanceVTangents();                                                                            // [0x87f4e0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
	TArray<FVector2D> GetVertexInstanceUVs();                                                                                // [0x87f450] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
	TArray<FVector> GetVertexInstanceUTangents();                                                                            // [0x87f420] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
	TArray<FVector> GetVertexInstanceNormals();                                                                              // [0x87f3f0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
	TArray<FColor> GetVertexInstanceColors();                                                                                // [0x87f360] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
	TArray<FIntVector> GetTriangleIndices();                                                                                 // [0x87f2d0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
	TArray<FStaticMaterial> GetStaticMaterials();                                                                            // [0x87f240] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
	uint32_t GetNumVertices();                                                                                               // [0x87f220] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
	uint32_t GetNumVertexInstances();                                                                                        // [0x87f200] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
	uint32_t GetNumUVLayers();                                                                                               // [0x87f1e0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
	uint32_t GetNumTriangles();                                                                                              // [0x87f1c0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
	uint32_t GetNumStaticMaterials();                                                                                        // [0x87f1a0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
	int32_t GetMaterialIndex(FName InMaterialSlotName);                                                                      // [0x87f100] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
	TArray<int32_t> GetMaterialIDsPerTriangle();                                                                             // [0x87f070] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
	UMaterialInterface* GetMaterial(int32_t InMaterialIndex);                                                                // [0x87efd0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
	void CalculateTangents(bool bInComputeWeightedNormals);                                                                  // [0x87ef40] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
	void CalculateNormals(bool bInComputeWeightedNormals);                                                                   // [0x87eeb0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
	FBox CalcBounds();                                                                                                       // [0x87ee60] Final|Native|Public|HasDefaults|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
	uint32_t AddStaticMaterial(FStaticMaterial& InStaticMaterial);                                                           // [0x87ed50] Final|Native|Public|HasOutParms 
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent
/// Size: 0x0020 (0x000580 - 0x0005A0)
class UHoudiniStaticMeshComponent : public UMeshComponent
{ 
public:
	UHoudiniStaticMesh*                                Mesh;                                                       // 0x0578   (0x0008)  
	FBox                                               LocalBounds;                                                // 0x0580   (0x001C)  
	bool                                               bHoudiniIconVisible;                                        // 0x059C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x059D   (0x0003)  MISSED


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
	void SetMesh(UHoudiniStaticMesh* InMesh);                                                                                // [0x880900] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible);                                                                  // [0x880870] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
	void NotifyMeshUpdated();                                                                                                // [0x880850] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
	bool IsHoudiniIconVisible();                                                                                             // [0x880830] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
	UHoudiniStaticMesh* GetMesh();                                                                                           // [0x880810] Final|Native|Public  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetStateEvents
/// Size: 0x0000 (0x000028 - 0x000028)
class UHoudiniAssetStateEvents : public UInterface
{ 
public:
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
/// Size: 0x00B8 (0x000058 - 0x000110)
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData
{ 
	UHoudiniAsset*                                     HoudiniAsset;                                               // 0x0058   (0x0008)  
	int32_t                                            AssetId;                                                    // 0x0060   (0x0004)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	uint32_t                                           SubAssetIndex;                                              // 0x0068   (0x0004)  
	uint32_t                                           AssetCookCount;                                             // 0x006C   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x0070   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x0071   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x0072   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x0073   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x0074   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x0075   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x0076   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x0077   (0x0001)  
	FGuid                                              ComponentGUID;                                              // 0x0078   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x0088   (0x0010)  
	bool                                               bRegisteredComponentTemplate;                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            SourceName;                                                 // 0x00A0   (0x0010)  
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniAssetBlueprintOutput> Outputs;                                    // 0x00B0   (0x0050)  
	TArray<UHoudiniInput*>                             Inputs;                                                     // 0x0100   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
/// Size: 0x0040 (0x000000 - 0x000040)
struct FHoudiniOutputObjectIdentifier
{ 
	int32_t                                            ObjectId;                                                   // 0x0000   (0x0004)  
	int32_t                                            GeoId;                                                      // 0x0004   (0x0004)  
	int32_t                                            PartID;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            SplitIdentifier;                                            // 0x0010   (0x0010)  
	FString                                            PartName;                                                   // 0x0020   (0x0010)  
	int32_t                                            PrimitiveIndex;                                             // 0x0030   (0x0004)  
	int32_t                                            PointIndex;                                                 // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
/// Size: 0x0100 (0x000000 - 0x000100)
struct FHoudiniAssetBlueprintOutput
{ 
	int32_t                                            OutputIndex;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FHoudiniOutputObject                               OutputObject;                                               // 0x0008   (0x00F8)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObject
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FHoudiniOutputObject
{ 
	UObject*                                           OutputObject;                                               // 0x0000   (0x0008)  
	UObject*                                           OutputComponent;                                            // 0x0008   (0x0008)  
	UObject*                                           ProxyObject;                                                // 0x0010   (0x0008)  
	UObject*                                           ProxyComponent;                                             // 0x0018   (0x0008)  
	bool                                               bProxyIsCurrent;                                            // 0x0020   (0x0001)  
	bool                                               bIsImplicit;                                                // 0x0021   (0x0001)  
	bool                                               bIsGeometryCollectionPiece;                                 // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	FString                                            GeometryCollectionPieceName;                                // 0x0028   (0x0010)  
	FString                                            BakeName;                                                   // 0x0038   (0x0010)  
	FHoudiniCurveOutputProperties                      CurveOutputProperty;                                        // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TMap<FString, FString>                             CachedAttributes;                                           // 0x0058   (0x0050)  
	TMap<FString, FString>                             CachedTokens;                                               // 0x00A8   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveOutputProperties
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHoudiniCurveOutputProperties
{ 
	EHoudiniCurveOutputType                            CurveOutputType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumPoints;                                                  // 0x0004   (0x0004)  
	bool                                               bClosed;                                                    // 0x0008   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0009   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGenericAttribute
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHoudiniGenericAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	EAttribStorageType                                 AttributeType;                                              // 0x0010   (0x0001)  
	EAttribOwner                                       AttributeOwner;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            AttributeCount;                                             // 0x0014   (0x0004)  
	int32_t                                            AttributeTupleSize;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<double>                                     DoubleValues;                                               // 0x0020   (0x0010)  
	TArray<int64_t>                                    IntValues;                                                  // 0x0030   (0x0010)  
	TArray<FString>                                    StringValues;                                               // 0x0040   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHoudiniGenericAttributeChangedProperty
{ 
	UObject*                                           Object;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0008   (0x0090)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoPartObject
/// Size: 0x0230 (0x000000 - 0x000230)
struct FHoudiniGeoPartObject
{ 
	int32_t                                            AssetId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            AssetName;                                                  // 0x0008   (0x0010)  
	int32_t                                            ObjectId;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ObjectName;                                                 // 0x0020   (0x0010)  
	int32_t                                            GeoId;                                                      // 0x0030   (0x0004)  
	int32_t                                            PartID;                                                     // 0x0034   (0x0004)  
	FString                                            PartName;                                                   // 0x0038   (0x0010)  
	bool                                               bHasCustomPartName;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FString>                                    SplitGroups;                                                // 0x0050   (0x0010)  
	FTransform                                         TransformMatrix;                                            // 0x0060   (0x0030)  
	FString                                            NodePath;                                                   // 0x0090   (0x0010)  
	EHoudiniPartType                                   Type;                                                       // 0x00A0   (0x0001)  
	EHoudiniInstancerType                              InstancerType;                                              // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x00A2   (0x0006)  MISSED
	FString                                            VolumeName;                                                 // 0x00A8   (0x0010)  
	bool                                               bHasEditLayers;                                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	FString                                            VolumeLayerName;                                            // 0x00C0   (0x0010)  
	int32_t                                            VolumeTileIndex;                                            // 0x00D0   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x00D4   (0x0001)  
	bool                                               bIsEditable;                                                // 0x00D5   (0x0001)  
	bool                                               bIsTemplated;                                               // 0x00D6   (0x0001)  
	bool                                               bIsInstanced;                                               // 0x00D7   (0x0001)  
	bool                                               bHasGeoChanged;                                             // 0x00D8   (0x0001)  
	bool                                               bHasPartChanged;                                            // 0x00D9   (0x0001)  
	bool                                               bHasTransformChanged;                                       // 0x00DA   (0x0001)  
	bool                                               bHasMaterialsChanged;                                       // 0x00DB   (0x0001)  
	unsigned char                                      UnknownData05_5[0x144];                                     // 0x00DC   (0x0144)  MISSED
	TArray<FHoudiniMeshSocket>                         AllMeshSockets;                                             // 0x0220   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniMeshSocket
/// Size: 0x0060 (0x000000 - 0x000060)
struct FHoudiniMeshSocket
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveInfo
/// Size: 0x001C (0x000000 - 0x00001C)
struct FHoudiniCurveInfo
{ 
	unsigned char                                      UnknownData00_1[0x1C];                                      // 0x0000   (0x001C)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniVolumeInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FHoudiniVolumeInfo
{ 
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPartInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FHoudiniPartInfo
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FHoudiniGeoInfo
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniObjectInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FHoudiniObjectInfo
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBrushInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FHoudiniBrushInfo
{ 
	TWeakObjectPtr<ABrush*>                            BrushActor;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         CachedTransform;                                            // 0x0010   (0x0030)  
	FVector                                            CachedOrigin;                                               // 0x0040   (0x000C)  
	FVector                                            CachedExtent;                                               // 0x004C   (0x000C)  
	TEnumAsByte<EBrushType>                            CachedBrushType;                                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	uint64_t                                           CachedSurfaceHash;                                          // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniInputLandscapeTransferParams
/// Size: 0x00C8 (0x000000 - 0x0000C8)
struct FHoudiniInputLandscapeTransferParams
{ 
	ETransferHeightMode                                TransferHeightMode;                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TSet<FName>                                        HeightSpecifiedLayerNames;                                  // 0x0008   (0x0050)  
	FName                                              HeightUnderSpecifiedLayerName;                              // 0x0058   (0x0008)  
	ETransferLayerMode                                 TransferLayerMode;                                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	TSet<FName>                                        LayerSpecifiedLayerNames;                                   // 0x0068   (0x0050)  
	FName                                              LayerUnderSpecifiedLayerName;                               // 0x00B8   (0x0008)  
	bool                                               bTransferWeightmap;                                         // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutput
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHoudiniBakedOutput
{ 
	TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> BakedOutputObjects;                       // 0x0000   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHoudiniBakedOutputObjectIdentifier
{ 
	int32_t                                            PartID;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            SplitIdentifier;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObject
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FHoudiniBakedOutputObject
{ 
	FString                                            Actor;                                                      // 0x0000   (0x0010)  
	FString                                            Blueprint;                                                  // 0x0010   (0x0010)  
	FName                                              ActorBakeName;                                              // 0x0020   (0x0008)  
	FString                                            BakedObject;                                                // 0x0028   (0x0010)  
	FString                                            BakedComponent;                                             // 0x0038   (0x0010)  
	TArray<FString>                                    InstancedActors;                                            // 0x0048   (0x0010)  
	TArray<FString>                                    InstancedComponents;                                        // 0x0058   (0x0010)  
	TMap<FName, FString>                               LandscapeLayers;                                            // 0x0068   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniInstancedOutput
/// Size: 0x0088 (0x000000 - 0x000088)
struct FHoudiniInstancedOutput
{ 
	TWeakObjectPtr<UObject*>                           OriginalObject;                                             // 0x0000   (0x0028)  
	int32_t                                            OriginalObjectIndex;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FTransform>                                 OriginalTransforms;                                         // 0x0030   (0x0010)  
	TArray<TWeakObjectPtr>                             VariationObjects;                                           // 0x0040   (0x0010)  
	TArray<FTransform>                                 VariationTransformOffsets;                                  // 0x0050   (0x0010)  
	TArray<int32_t>                                    TransformVariationIndices;                                  // 0x0060   (0x0010)  
	TArray<int32_t>                                    OriginalInstanceIndices;                                    // 0x0070   (0x0010)  
	bool                                               bChanged;                                                   // 0x0080   (0x0001)  
	bool                                               bStale;                                                     // 0x0081   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0082   (0x0006)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHoudiniPDGWorkResultObjectBakedOutput
{ 
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTallyBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWorkItemTallyBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.AggregatedWorkItemTally
/// Size: 0x0020 (0x000008 - 0x000028)
struct FAggregatedWorkItemTally : FWorkItemTallyBase
{ 
	int32_t                                            TotalWorkItems;                                             // 0x0008   (0x0004)  
	int32_t                                            WaitingWorkItems;                                           // 0x000C   (0x0004)  
	int32_t                                            ScheduledWorkItems;                                         // 0x0010   (0x0004)  
	int32_t                                            CookingWorkItems;                                           // 0x0014   (0x0004)  
	int32_t                                            CookedWorkItems;                                            // 0x0018   (0x0004)  
	int32_t                                            ErroredWorkItems;                                           // 0x001C   (0x0004)  
	int32_t                                            CookCancelledWorkItems;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTally
/// Size: 0x0230 (0x000008 - 0x000238)
struct FWorkItemTally : FWorkItemTallyBase
{ 
	TSet<int32_t>                                      AllWorkItems;                                               // 0x0008   (0x0050)  
	TSet<int32_t>                                      WaitingWorkItems;                                           // 0x0058   (0x0050)  
	TSet<int32_t>                                      ScheduledWorkItems;                                         // 0x00A8   (0x0050)  
	TSet<int32_t>                                      CookingWorkItems;                                           // 0x00F8   (0x0050)  
	TSet<int32_t>                                      CookedWorkItems;                                            // 0x0148   (0x0050)  
	TSet<int32_t>                                      ErroredWorkItems;                                           // 0x0198   (0x0050)  
	TSet<int32_t>                                      CookCancelledWorkItems;                                     // 0x01E8   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTOPWorkResult
{ 
	int32_t                                            WorkItemIndex;                                              // 0x0000   (0x0004)  
	int32_t                                            WorkItemID;                                                 // 0x0004   (0x0004)  
	TArray<FTOPWorkResultObject>                       ResultObjects;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResultObject
/// Size: 0x0058 (0x000000 - 0x000058)
struct FTOPWorkResultObject
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            FilePath;                                                   // 0x0018   (0x0010)  
	EPDGWorkResultState                                State;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            WorkItemResultInfoIndex;                                    // 0x002C   (0x0004)  
	TArray<UHoudiniOutput*>                            ResultOutputs;                                              // 0x0030   (0x0010)  
	bool                                               bAutoBakedSinceLastLoad;                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0048   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.OutputActorOwner
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOutputActorOwner
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	AActor*                                            OutputActor;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
/// Size: 0x0180 (0x000000 - 0x000180)
struct FHoudiniStaticMeshGenerationProperties
{ 
	bool                                               bGeneratedDoubleSidedGeometry;                              // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	UPhysicalMaterial*                                 GeneratedPhysMaterial;                                      // 0x0008   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x0010   (0x0130)  
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                                // 0x0140   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x0144   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x0148   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x0158   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio;                    // 0x015C:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x015D   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x0160   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	UFoliageType_InstancedStaticMesh*                  GeneratedFoliageDefaultSettings;                            // 0x0168   (0x0008)  
	TArray<UAssetUserData*>                            GeneratedAssetUserData;                                     // 0x0170   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
/// Size: 0x0030 (0x000058 - 0x000088)
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData
{ 
	TArray<FTransform>                                 CurvePoints;                                                // 0x0058   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0068   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0078   (0x0010)  
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniStaticMeshMethod
/// Size: 0x04
enum EHoudiniStaticMeshMethod : uint8_t
{
	EHoudiniStaticMeshMethod__RawMesh                                                = 0,
	EHoudiniStaticMeshMethod__FMeshDescription                                       = 1,
	EHoudiniStaticMeshMethod__UHoudiniStaticMesh                                     = 2,
	EHoudiniStaticMeshMethod__EHoudiniStaticMeshMethod_MAX                           = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetStateResult
/// Size: 0x07
enum EHoudiniAssetStateResult : uint8_t
{
	EHoudiniAssetStateResult__None                                                   = 0,
	EHoudiniAssetStateResult__Working                                                = 1,
	EHoudiniAssetStateResult__Success                                                = 2,
	EHoudiniAssetStateResult__FinishedWithError                                      = 3,
	EHoudiniAssetStateResult__FinishedWithFatalError                                 = 4,
	EHoudiniAssetStateResult__Aborted                                                = 5,
	EHoudiniAssetStateResult__EHoudiniAssetStateResult_MAX                           = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetState
/// Size: 0x15
enum EHoudiniAssetState : uint8_t
{
	EHoudiniAssetState__NeedInstantiation                                            = 0,
	EHoudiniAssetState__NewHDA                                                       = 1,
	EHoudiniAssetState__PreInstantiation                                             = 2,
	EHoudiniAssetState__Instantiating                                                = 3,
	EHoudiniAssetState__PreCook                                                      = 4,
	EHoudiniAssetState__Cooking                                                      = 5,
	EHoudiniAssetState__PostCook                                                     = 6,
	EHoudiniAssetState__PreProcess                                                   = 7,
	EHoudiniAssetState__Processing                                                   = 8,
	EHoudiniAssetState__None                                                         = 9,
	EHoudiniAssetState__NeedRebuild                                                  = 10,
	EHoudiniAssetState__NeedDelete                                                   = 11,
	EHoudiniAssetState__Deleting                                                     = 12,
	EHoudiniAssetState__ProcessTemplate                                              = 13,
	EHoudiniAssetState__EHoudiniAssetState_MAX                                       = 14
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
/// Size: 0x05
enum EHoudiniProxyRefineRequestResult : uint8_t
{
	EHoudiniProxyRefineRequestResult__Invalid                                        = 0,
	EHoudiniProxyRefineRequestResult__None                                           = 1,
	EHoudiniProxyRefineRequestResult__PendingCooks                                   = 2,
	EHoudiniProxyRefineRequestResult__Refined                                        = 3,
	EHoudiniProxyRefineRequestResult__EHoudiniProxyRefineRequestResult_MAX           = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniProxyRefineResult
/// Size: 0x05
enum EHoudiniProxyRefineResult : uint8_t
{
	EHoudiniProxyRefineResult__Invalid                                               = 0,
	EHoudiniProxyRefineResult__Failed                                                = 1,
	EHoudiniProxyRefineResult__Success                                               = 2,
	EHoudiniProxyRefineResult__Skipped                                               = 3,
	EHoudiniProxyRefineResult__EHoudiniProxyRefineResult_MAX                         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeExportType
/// Size: 0x04
enum EHoudiniLandscapeExportType : uint8_t
{
	EHoudiniLandscapeExportType__Heightfield                                         = 0,
	EHoudiniLandscapeExportType__Mesh                                                = 1,
	EHoudiniLandscapeExportType__Points                                              = 2,
	EHoudiniLandscapeExportType__EHoudiniLandscapeExportType_MAX                     = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
/// Size: 0x05
enum EHoudiniCurveBreakpointParameterization : uint8_t
{
	EHoudiniCurveBreakpointParameterization__Invalid                                 = -1,
	EHoudiniCurveBreakpointParameterization__Uniform                                 = 0,
	EHoudiniCurveBreakpointParameterization__Chord                                   = 1,
	EHoudiniCurveBreakpointParameterization__Centripetal                             = 2,
	EHoudiniCurveBreakpointParameterization__EHoudiniCurveBreakpointParameterization_MAX = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveMethod
/// Size: 0x05
enum EHoudiniCurveMethod : uint8_t
{
	EHoudiniCurveMethod__Invalid                                                     = -1,
	EHoudiniCurveMethod__CVs                                                         = 0,
	EHoudiniCurveMethod__Breakpoints                                                 = 1,
	EHoudiniCurveMethod__Freehand                                                    = 2,
	EHoudiniCurveMethod__EHoudiniCurveMethod_MAX                                     = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveType
/// Size: 0x06
enum EHoudiniCurveType : uint8_t
{
	EHoudiniCurveType__Invalid                                                       = -1,
	EHoudiniCurveType__Polygon                                                       = 0,
	EHoudiniCurveType__Nurbs                                                         = 1,
	EHoudiniCurveType__Bezier                                                        = 2,
	EHoudiniCurveType__Points                                                        = 3,
	EHoudiniCurveType__EHoudiniCurveType_MAX                                         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniOutputType
/// Size: 0x10
enum EHoudiniOutputType : uint8_t
{
	EHoudiniOutputType__Invalid                                                      = 0,
	EHoudiniOutputType__Mesh                                                         = 1,
	EHoudiniOutputType__Instancer                                                    = 2,
	EHoudiniOutputType__Landscape                                                    = 3,
	EHoudiniOutputType__Curve                                                        = 4,
	EHoudiniOutputType__Skeletal                                                     = 5,
	EHoudiniOutputType__GeometryCollection                                           = 6,
	EHoudiniOutputType__DataTable                                                    = 7,
	EHoudiniOutputType__Texture                                                      = 8,
	EHoudiniOutputType__EHoudiniOutputType_MAX                                       = 9
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputType
/// Size: 0x14
enum EHoudiniInputType : uint8_t
{
	EHoudiniInputType__Invalid                                                       = 0,
	EHoudiniInputType__Geometry                                                      = 1,
	EHoudiniInputType__Curve                                                         = 2,
	EHoudiniInputType__Asset                                                         = 3,
	EHoudiniInputType__Landscape                                                     = 4,
	EHoudiniInputType__World                                                         = 5,
	EHoudiniInputType__Skeletal                                                      = 6,
	EHoudiniInputType__GeometryCollection                                            = 7,
	EHoudiniInputType__Foliage                                                       = 8,
	EHoudiniInputType__WorldStaticMeshComponents                                     = 9,
	EHoudiniInputType__PointCloud                                                    = 10,
	EHoudiniInputType__LandscapeSplines                                              = 11,
	EHoudiniInputType__Texture                                                       = 12,
	EHoudiniInputType__EHoudiniInputType_MAX                                         = 13
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
/// Size: 0x05
enum EHoudiniLandscapeOutputBakeType : uint8_t
{
	EHoudiniLandscapeOutputBakeType__Detachment                                      = 0,
	EHoudiniLandscapeOutputBakeType__BakeToImage                                     = 1,
	EHoudiniLandscapeOutputBakeType__BakeToWorld                                     = 2,
	EHoudiniLandscapeOutputBakeType__InValid                                         = 3,
	EHoudiniLandscapeOutputBakeType__EHoudiniLandscapeOutputBakeType_MAX             = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampInterpolationType
/// Size: 0x09
enum EHoudiniRampInterpolationType : uint8_t
{
	EHoudiniRampInterpolationType__InValid                                           = -1,
	EHoudiniRampInterpolationType__CONSTANT                                          = 0,
	EHoudiniRampInterpolationType__LINEAR                                            = 1,
	EHoudiniRampInterpolationType__CATMULL_ROM                                       = 2,
	EHoudiniRampInterpolationType__MONOTONE_CUBIC                                    = 3,
	EHoudiniRampInterpolationType__BEZIER                                            = 4,
	EHoudiniRampInterpolationType__BSPLINE                                           = 5,
	EHoudiniRampInterpolationType__HERMITE                                           = 6,
	EHoudiniRampInterpolationType__EHoudiniRampInterpolationType_MAX                 = 7
};

/// Enum /Script/HoudiniEngineRuntime.EAttribOwner
/// Size: 0x06
enum EAttribOwner : uint8_t
{
	EAttribOwner__Invalid                                                            = -1,
	EAttribOwner__Vertex                                                             = 0,
	EAttribOwner__Point                                                              = 1,
	EAttribOwner__Prim                                                               = 2,
	EAttribOwner__Detail                                                             = 3,
	EAttribOwner__EAttribOwner_MAX                                                   = 4
};

/// Enum /Script/HoudiniEngineRuntime.EAttribStorageType
/// Size: 0x07
enum EAttribStorageType : uint8_t
{
	EAttribStorageType__Invalid                                                      = -1,
	EAttribStorageType__INT                                                          = 0,
	EAttribStorageType__INT64                                                        = 1,
	EAttribStorageType__FLOAT                                                        = 2,
	EAttribStorageType__FLOAT64                                                      = 3,
	EAttribStorageType__STRING                                                       = 4,
	EAttribStorageType__EAttribStorageType_MAX                                       = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInstancerType
/// Size: 0x07
enum EHoudiniInstancerType : uint8_t
{
	EHoudiniInstancerType__Invalid                                                   = 0,
	EHoudiniInstancerType__ObjectInstancer                                           = 1,
	EHoudiniInstancerType__PackedPrimitive                                           = 2,
	EHoudiniInstancerType__AttributeInstancer                                        = 3,
	EHoudiniInstancerType__OldSchoolAttributeInstancer                               = 4,
	EHoudiniInstancerType__GeometryCollection                                        = 5,
	EHoudiniInstancerType__EHoudiniInstancerType_MAX                                 = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniPartType
/// Size: 0x08
enum EHoudiniPartType : uint8_t
{
	EHoudiniPartType__Invalid                                                        = 0,
	EHoudiniPartType__Mesh                                                           = 1,
	EHoudiniPartType__Instancer                                                      = 2,
	EHoudiniPartType__Curve                                                          = 3,
	EHoudiniPartType__Volume                                                         = 4,
	EHoudiniPartType__DataTable                                                      = 5,
	EHoudiniPartType__Texture                                                        = 6,
	EHoudiniPartType__EHoudiniPartType_MAX                                           = 7
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniGeoType
/// Size: 0x06
enum EHoudiniGeoType : uint8_t
{
	EHoudiniGeoType__Invalid                                                         = 0,
	EHoudiniGeoType__Default                                                         = 1,
	EHoudiniGeoType__Intermediate                                                    = 2,
	EHoudiniGeoType__Input                                                           = 3,
	EHoudiniGeoType__Curve                                                           = 4,
	EHoudiniGeoType__EHoudiniGeoType_MAX                                             = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniHandleType
/// Size: 0x04
enum EHoudiniHandleType : uint8_t
{
	EHoudiniHandleType__Xform                                                        = 0,
	EHoudiniHandleType__Bounder                                                      = 1,
	EHoudiniHandleType__Unsupported                                                  = 2,
	EHoudiniHandleType__EHoudiniHandleType_MAX                                       = 3
};

/// Enum /Script/HoudiniEngineRuntime.EXformParameter
/// Size: 0x11
enum EXformParameter : uint8_t
{
	EXformParameter__TX                                                              = 0,
	EXformParameter__TY                                                              = 1,
	EXformParameter__TZ                                                              = 2,
	EXformParameter__RX                                                              = 3,
	EXformParameter__RY                                                              = 4,
	EXformParameter__RZ                                                              = 5,
	EXformParameter__SX                                                              = 6,
	EXformParameter__SY                                                              = 7,
	EXformParameter__SZ                                                              = 8,
	EXformParameter__COUNT                                                           = 9,
	EXformParameter__EXformParameter_MAX                                             = 10
};

/// Enum /Script/HoudiniEngineRuntime.ETransferLayerMode
/// Size: 0x05
enum ETransferLayerMode : uint8_t
{
	ETransferLayerMode__Default                                                      = 0,
	ETransferLayerMode__NoneLayer                                                    = 1,
	ETransferLayerMode__SpecifiedLayer                                               = 2,
	ETransferLayerMode__UnderSpecifiedLayer                                          = 3,
	ETransferLayerMode__ETransferLayerMode_MAX                                       = 4
};

/// Enum /Script/HoudiniEngineRuntime.ETransferHeightMode
/// Size: 0x05
enum ETransferHeightMode : uint8_t
{
	ETransferHeightMode__Default                                                     = 0,
	ETransferHeightMode__AllLayer                                                    = 1,
	ETransferHeightMode__SpecifiedLayer                                              = 2,
	ETransferHeightMode__UnderSpecifiedLayer                                         = 3,
	ETransferHeightMode__ETransferHeightMode_MAX                                     = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputObjectType
/// Size: 0x26
enum EHoudiniInputObjectType : uint8_t
{
	EHoudiniInputObjectType__Invalid                                                 = 0,
	EHoudiniInputObjectType__Object                                                  = 1,
	EHoudiniInputObjectType__StaticMesh                                              = 2,
	EHoudiniInputObjectType__SkeletalMesh                                            = 3,
	EHoudiniInputObjectType__SceneComponent                                          = 4,
	EHoudiniInputObjectType__StaticMeshComponent                                     = 5,
	EHoudiniInputObjectType__InstancedStaticMeshComponent                            = 6,
	EHoudiniInputObjectType__SplineComponent                                         = 7,
	EHoudiniInputObjectType__HoudiniSplineComponent                                  = 8,
	EHoudiniInputObjectType__HoudiniAssetComponent                                   = 9,
	EHoudiniInputObjectType__Actor                                                   = 10,
	EHoudiniInputObjectType__Landscape                                               = 11,
	EHoudiniInputObjectType__Brush                                                   = 12,
	EHoudiniInputObjectType__CameraComponent                                         = 13,
	EHoudiniInputObjectType__DataTable                                               = 14,
	EHoudiniInputObjectType__HoudiniAssetActor                                       = 15,
	EHoudiniInputObjectType__FoliageType_InstancedStaticMesh                         = 16,
	EHoudiniInputObjectType__GeometryCollection                                      = 17,
	EHoudiniInputObjectType__GeometryCollectionComponent                             = 18,
	EHoudiniInputObjectType__GeometryCollectionActor_Deprecated                      = 19,
	EHoudiniInputObjectType__SkeletalMeshComponent                                   = 20,
	EHoudiniInputObjectType__Blueprint                                               = 21,
	EHoudiniInputObjectType__InstancedFoliageActor                                   = 22,
	EHoudiniInputObjectType__LandscapeSplinesComponent                               = 23,
	EHoudiniInputObjectType__Texture                                                 = 24,
	EHoudiniInputObjectType__EHoudiniInputObjectType_MAX                             = 25
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniXformType
/// Size: 0x04
enum EHoudiniXformType : uint8_t
{
	EHoudiniXformType__None                                                          = 0,
	EHoudiniXformType__IntoThisObject                                                = 1,
	EHoudiniXformType__Auto                                                          = 2,
	EHoudiniXformType__EHoudiniXformType_MAX                                         = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveOutputType
/// Size: 0x03
enum EHoudiniCurveOutputType : uint8_t
{
	EHoudiniCurveOutputType__UnrealSpline                                            = 0,
	EHoudiniCurveOutputType__HoudiniSpline                                           = 1,
	EHoudiniCurveOutputType__EHoudiniCurveOutputType_MAX                             = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniParameterType
/// Size: 0x24
enum EHoudiniParameterType : uint8_t
{
	EHoudiniParameterType__Invalid                                                   = 0,
	EHoudiniParameterType__Button                                                    = 1,
	EHoudiniParameterType__ButtonStrip                                               = 2,
	EHoudiniParameterType__Color                                                     = 3,
	EHoudiniParameterType__ColorRamp                                                 = 4,
	EHoudiniParameterType__File                                                      = 5,
	EHoudiniParameterType__FileDir                                                   = 6,
	EHoudiniParameterType__FileGeo                                                   = 7,
	EHoudiniParameterType__FileImage                                                 = 8,
	EHoudiniParameterType__Float                                                     = 9,
	EHoudiniParameterType__FloatRamp                                                 = 10,
	EHoudiniParameterType__Folder                                                    = 11,
	EHoudiniParameterType__FolderList                                                = 12,
	EHoudiniParameterType__Input                                                     = 13,
	EHoudiniParameterType__Int                                                       = 14,
	EHoudiniParameterType__IntChoice                                                 = 15,
	EHoudiniParameterType__Label                                                     = 16,
	EHoudiniParameterType__MultiParm                                                 = 17,
	EHoudiniParameterType__Separator                                                 = 18,
	EHoudiniParameterType__String                                                    = 19,
	EHoudiniParameterType__StringChoice                                              = 20,
	EHoudiniParameterType__StringAssetRef                                            = 21,
	EHoudiniParameterType__Toggle                                                    = 22,
	EHoudiniParameterType__EHoudiniParameterType_MAX                                 = 23
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniFolderParameterType
/// Size: 0x07
enum EHoudiniFolderParameterType : uint8_t
{
	EHoudiniFolderParameterType__Invalid                                             = 0,
	EHoudiniFolderParameterType__Collapsible                                         = 1,
	EHoudiniFolderParameterType__Simple                                              = 2,
	EHoudiniFolderParameterType__Tabs                                                = 3,
	EHoudiniFolderParameterType__Radio                                               = 4,
	EHoudiniFolderParameterType__Other                                               = 5,
	EHoudiniFolderParameterType__EHoudiniFolderParameterType_MAX                     = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniMultiParmModificationType
/// Size: 0x05
enum EHoudiniMultiParmModificationType : uint8_t
{
	EHoudiniMultiParmModificationType__None                                          = 0,
	EHoudiniMultiParmModificationType__Inserted                                      = 1,
	EHoudiniMultiParmModificationType__Removed                                       = 2,
	EHoudiniMultiParmModificationType__Modified                                      = 3,
	EHoudiniMultiParmModificationType__EHoudiniMultiParmModificationType_MAX         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
/// Size: 0x06
enum EHoudiniRampPointConstructStatus : uint8_t
{
	EHoudiniRampPointConstructStatus__None                                           = 0,
	EHoudiniRampPointConstructStatus__INITIALIZED                                    = 1,
	EHoudiniRampPointConstructStatus__POSITION_INSERTED                              = 2,
	EHoudiniRampPointConstructStatus__VALUE_INSERTED                                 = 3,
	EHoudiniRampPointConstructStatus__INTERPTYPE_INSERTED                            = 4,
	EHoudiniRampPointConstructStatus__EHoudiniRampPointConstructStatus_MAX           = 5
};

/// Enum /Script/HoudiniEngineRuntime.EPDGWorkResultState
/// Size: 0x09
enum EPDGWorkResultState : uint8_t
{
	EPDGWorkResultState__None                                                        = 0,
	EPDGWorkResultState__ToLoad                                                      = 1,
	EPDGWorkResultState__Loading                                                     = 2,
	EPDGWorkResultState__Loaded                                                      = 3,
	EPDGWorkResultState__ToDelete                                                    = 4,
	EPDGWorkResultState__Deleting                                                    = 5,
	EPDGWorkResultState__Deleted                                                     = 6,
	EPDGWorkResultState__NotLoaded                                                   = 7,
	EPDGWorkResultState__EPDGWorkResultState_MAX                                     = 8
};

/// Enum /Script/HoudiniEngineRuntime.EPDGNodeState
/// Size: 0x07
enum EPDGNodeState : uint8_t
{
	EPDGNodeState__None                                                              = 0,
	EPDGNodeState__Dirtied                                                           = 1,
	EPDGNodeState__Dirtying                                                          = 2,
	EPDGNodeState__Cooking                                                           = 3,
	EPDGNodeState__Cook_Complete                                                     = 4,
	EPDGNodeState__Cook_Failed                                                       = 5,
	EPDGNodeState__EPDGNodeState_MAX                                                 = 6
};

/// Enum /Script/HoudiniEngineRuntime.EPDGLinkState
/// Size: 0x05
enum EPDGLinkState : uint8_t
{
	EPDGLinkState__Inactive                                                          = 0,
	EPDGLinkState__Linking                                                           = 1,
	EPDGLinkState__Linked                                                            = 2,
	EPDGLinkState__Error_Not_Linked                                                  = 3,
	EPDGLinkState__EPDGLinkState_MAX                                                 = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniExecutableType
/// Size: 0x05
enum EHoudiniExecutableType : uint8_t
{
	HRSHE_Houdini                                                                    = 0,
	HRSHE_HoudiniFX                                                                  = 1,
	HRSHE_HoudiniCore                                                                = 2,
	HRSHE_HoudiniIndie                                                               = 3,
	HRSHE_MAX                                                                        = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
/// Size: 0x04
enum EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                                                                     = 0,
	HRSRF_OnlyIfMissing                                                              = 1,
	HRSRF_Never                                                                      = 2,
	HRSRF_MAX                                                                        = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
/// Size: 0x05
enum EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                                                                  = 0,
	HRSST_Socket                                                                     = 1,
	HRSST_NamedPipe                                                                  = 2,
	HRSST_None                                                                       = 3,
	HRSST_MAX                                                                        = 4
};

