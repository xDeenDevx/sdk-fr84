/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HotPatcherRuntime.

/// Class /Script/HotPatcherRuntime.FlibAssetManageHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class UFlibAssetManageHelper : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HotPatcherRuntime.FlibPakHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class UFlibPakHelper : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HotPatcherRuntime.FlibPatchParserHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class UFlibPatchParserHelper : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HotPatcherRuntime.FlibShaderPipelineCacheHelper
/// Size: 0x0000 (0x000028 - 0x000028)
class UFlibShaderPipelineCacheHelper : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HotPatcherRuntime.MountListener
/// Size: 0x0070 (0x000028 - 0x000098)
class UMountListener : public UObject
{ 
public:
	FMulticastInlineDelegate                           OnMountPakDelegate;                                         // 0x0028   (0x0010)  
	FMulticastInlineDelegate                           OnUnMountPakDelegate;                                       // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/HotPatcherRuntime.MountListener.Init
	void Init();                                                                                                             // [0x17121a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HotPatcherRuntime.ScopedSlowTaskContext
/// Size: 0x0008 (0x000028 - 0x000030)
class UScopedSlowTaskContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/HotPatcherRuntime.PakMountInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPakMountInfo
{ 
	FString                                            Pak;                                                        // 0x0000   (0x0010)  
	int32_t                                            PakOrder;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/HotPatcherRuntime.AssetDependenciesDetail
/// Size: 0x0060 (0x000000 - 0x000060)
struct FAssetDependenciesDetail
{ 
	FString                                            ModuleCategory;                                             // 0x0000   (0x0010)  
	TMap<FString, FAssetDetail>                        AssetDependencyDetails;                                     // 0x0010   (0x0050)  
};

/// Struct /Script/HotPatcherRuntime.AssetDetail
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAssetDetail
{ 
	FName                                              PackagePath;                                                // 0x0000   (0x0008)  
	FName                                              AssetType;                                                  // 0x0008   (0x0008)  
	FName                                              Guid;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/HotPatcherRuntime.AssetDependenciesInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAssetDependenciesInfo
{ 
	TMap<FString, FAssetDependenciesDetail>            AssetsDependenciesMap;                                      // 0x0000   (0x0050)  
};

/// Struct /Script/HotPatcherRuntime.BinariesPatchConfig
/// Size: 0x0050 (0x000000 - 0x000050)
struct FBinariesPatchConfig
{ 
	EBinariesPatchFeature                              BinariesPatchType;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x0001   (0x0017)  MISSED
	FPakEncryptSettings                                EncryptSettings;                                            // 0x0018   (0x0018)  
	TArray<FPlatformBasePak>                           BaseVersionPaks;                                            // 0x0030   (0x0010)  
	TArray<FMatchRule>                                 MatchRules;                                                 // 0x0040   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.MatchRule
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMatchRule
{ 
	EMatchRule                                         Rule;                                                       // 0x0000   (0x0001)  
	EMatchOperator                                     Operator;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              Size;                                                       // 0x0004   (0x0004)  
	TArray<FString>                                    Formaters;                                                  // 0x0008   (0x0010)  
	TArray<FString>                                    AssetTypes;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PlatformBasePak
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPlatformBasePak
{ 
	ETargetPlatform                                    Platform;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FFilePath>                                  Paks;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PakEncryptSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPakEncryptSettings
{ 
	bool                                               bUseDefaultCryptoIni;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FFilePath                                          CryptoKeys;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.ChunkAssetDescribe
/// Size: 0x0148 (0x000000 - 0x000148)
struct FChunkAssetDescribe
{ 
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0000   (0x0148)  MISSED
};

/// Struct /Script/HotPatcherRuntime.ChunkPakCommand
/// Size: 0x0040 (0x000000 - 0x000040)
struct FChunkPakCommand
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/HotPatcherRuntime.ChunkInfo
/// Size: 0x0088 (0x000000 - 0x000088)
struct FChunkInfo
{ 
	FString                                            ChunkName;                                                  // 0x0000   (0x0010)  
	bool                                               bMonolithic;                                                // 0x0010   (0x0001)  
	EMonolithicPathMode                                MonolithicPathMode;                                         // 0x0011   (0x0001)  
	bool                                               bStorageUnrealPakList;                                      // 0x0012   (0x0001)  
	bool                                               bStorageIoStorePakList;                                     // 0x0013   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FDirectoryPath>                             AssetIncludeFilters;                                        // 0x0018   (0x0010)  
	TArray<FDirectoryPath>                             AssetIgnoreFilters;                                         // 0x0028   (0x0010)  
	bool                                               bAnalysisFilterDependencies;                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<EAssetRegistryDependencyTypeEx>             AssetRegistryDependencyTypes;                               // 0x0040   (0x0010)  
	TArray<FPatcherSpecifyAsset>                       IncludeSpecifyAssets;                                       // 0x0050   (0x0010)  
	TArray<FPlatformExternAssets>                      AddExternAssetsToPlatform;                                  // 0x0060   (0x0010)  
	FPakInternalInfo                                   InternalFiles;                                              // 0x0070   (0x0006)  
	unsigned char                                      UnknownData02_6[0x12];                                      // 0x0076   (0x0012)  MISSED
};

/// Struct /Script/HotPatcherRuntime.PakInternalInfo
/// Size: 0x0006 (0x000000 - 0x000006)
struct FPakInternalInfo
{ 
	unsigned char                                      UnknownData00_2[0x3];                                       // 0x0000   (0x0003)  MISSED
	bool                                               bIncludeEngineIni;                                          // 0x0003   (0x0001)  
	bool                                               bIncludePluginIni;                                          // 0x0004   (0x0001)  
	bool                                               bIncludeProjectIni;                                         // 0x0005   (0x0001)  
};

/// Struct /Script/HotPatcherRuntime.PlatformExternAssets
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPlatformExternAssets
{ 
	ETargetPlatform                                    TargetPlatform;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FExternFileInfo>                            AddExternFileToPak;                                         // 0x0008   (0x0010)  
	TArray<FExternDirectoryInfo>                       AddExternDirectoryToPak;                                    // 0x0018   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.ExternDirectoryInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FExternDirectoryInfo
{ 
	FDirectoryPath                                     DirectoryPath;                                              // 0x0000   (0x0010)  
	FString                                            MountPoint;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.ExternFileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FExternFileInfo
{ 
	FFilePath                                          FilePath;                                                   // 0x0000   (0x0010)  
	FString                                            MountPath;                                                  // 0x0010   (0x0010)  
	FString                                            FileHash;                                                   // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/HotPatcherRuntime.PatcherSpecifyAsset
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPatcherSpecifyAsset
{ 
	FSoftObjectPath                                    Asset;                                                      // 0x0000   (0x0018)  
	bool                                               bAnalysisAssetDependencies;                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<EAssetRegistryDependencyTypeEx>             AssetRegistryDependencyTypes;                               // 0x0020   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PakFileProxy
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPakFileProxy
{ 
	FString                                            ChunkStoreName;                                             // 0x0000   (0x0010)  
	ETargetPlatform                                    Platform;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            StorageDirectory;                                           // 0x0018   (0x0010)  
	FString                                            PakCommandSavePath;                                         // 0x0028   (0x0010)  
	FString                                            PakSavePath;                                                // 0x0038   (0x0010)  
	TArray<FPakCommand>                                PakCommands;                                                // 0x0048   (0x0010)  
	TArray<FString>                                    IoStoreCommands;                                            // 0x0058   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PakCommand
/// Size: 0x0058 (0x000000 - 0x000058)
struct FPakCommand
{ 
	FString                                            ChunkName;                                                  // 0x0000   (0x0010)  
	FString                                            MountPath;                                                  // 0x0010   (0x0010)  
	FString                                            AssetPackage;                                               // 0x0020   (0x0010)  
	TArray<FString>                                    PakCommands;                                                // 0x0030   (0x0010)  
	TArray<FString>                                    IoStoreCommands;                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Struct /Script/HotPatcherRuntime.CookerConfig
/// Size: 0x0088 (0x000000 - 0x000088)
struct FCookerConfig
{ 
	FString                                            EngineBin;                                                  // 0x0000   (0x0010)  
	FString                                            ProjectPath;                                                // 0x0010   (0x0010)  
	FString                                            EngineParams;                                               // 0x0020   (0x0010)  
	TArray<FString>                                    CookPlatforms;                                              // 0x0030   (0x0010)  
	bool                                               bCookAllMap;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FString>                                    CookMaps;                                                   // 0x0048   (0x0010)  
	TArray<FString>                                    CookFilter;                                                 // 0x0058   (0x0010)  
	TArray<FString>                                    CookSettings;                                               // 0x0068   (0x0010)  
	FString                                            options;                                                    // 0x0078   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PatcherEntitySettingBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPatcherEntitySettingBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/HotPatcherRuntime.HotPatcherSettingBase
/// Size: 0x0030 (0x000008 - 0x000038)
struct FHotPatcherSettingBase : FPatcherEntitySettingBase
{ 
	bool                                               bStorageConfig;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FDirectoryPath                                     SavePath;                                                   // 0x0010   (0x0010)  
	bool                                               bStandaloneMode;                                            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FString>                                    AdditionalCommandletArgs;                                   // 0x0028   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.ExportPatchSettings
/// Size: 0x02F0 (0x000038 - 0x000328)
struct FExportPatchSettings : FHotPatcherSettingBase
{ 
	bool                                               bByBaseVersion;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FFilePath                                          BaseVersion;                                                // 0x0040   (0x0010)  
	FString                                            VersionId;                                                  // 0x0050   (0x0010)  
	bool                                               bBinariesPatch;                                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	FBinariesPatchConfig                               BinariesPatchConfig;                                        // 0x0068   (0x0050)  
	TArray<FDirectoryPath>                             AssetIncludeFilters;                                        // 0x00B8   (0x0010)  
	TArray<FDirectoryPath>                             AssetIgnoreFilters;                                         // 0x00C8   (0x0010)  
	bool                                               bForceSkipContent;                                          // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	TArray<FDirectoryPath>                             ForceSkipContentRules;                                      // 0x00E0   (0x0010)  
	TArray<FSoftObjectPath>                            ForceSkipAssets;                                            // 0x00F0   (0x0010)  
	bool                                               bIncludeHasRefAssetsOnly;                                   // 0x0100   (0x0001)  
	bool                                               bAnalysisFilterDependencies;                                // 0x0101   (0x0001)  
	bool                                               bAnalysisDiffAssetDependenciesOnly;                         // 0x0102   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x0103   (0x0005)  MISSED
	TArray<EAssetRegistryDependencyTypeEx>             AssetRegistryDependencyTypes;                               // 0x0108   (0x0010)  
	TArray<FPatcherSpecifyAsset>                       IncludeSpecifyAssets;                                       // 0x0118   (0x0010)  
	bool                                               bRecursiveWidgetTree;                                       // 0x0128   (0x0001)  
	bool                                               bPackageTracker;                                            // 0x0129   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x012A   (0x0004)  MISSED
	bool                                               bIncludeEngineIni;                                          // 0x012E   (0x0001)  
	bool                                               bIncludePluginIni;                                          // 0x012F   (0x0001)  
	bool                                               bIncludeProjectIni;                                         // 0x0130   (0x0001)  
	bool                                               bEnableExternFilesDiff;                                     // 0x0131   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x0132   (0x0006)  MISSED
	TArray<FString>                                    IgnoreDeletionModulesAsset;                                 // 0x0138   (0x0010)  
	unsigned char                                      UnknownData06_5[0x20];                                      // 0x0148   (0x0020)  MISSED
	TArray<FPlatformExternAssets>                      AddExternAssetsToPlatform;                                  // 0x0168   (0x0010)  
	unsigned char                                      UnknownData07_5[0x18];                                      // 0x0178   (0x0018)  MISSED
	bool                                               bEnableChunk;                                               // 0x0190   (0x0001)  
	bool                                               bCreateDefaultChunk;                                        // 0x0191   (0x0001)  
	unsigned char                                      UnknownData08_5[0x6];                                       // 0x0192   (0x0006)  MISSED
	TArray<FChunkInfo>                                 ChunkInfos;                                                 // 0x0198   (0x0010)  
	bool                                               bCookPatchAssets;                                           // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x01A9   (0x0007)  MISSED
	FCookShaderOptions                                 CookShaderOptions;                                          // 0x01B0   (0x0028)  
	FAssetRegistryOptions                              SerializeAssetRegistryOptions;                              // 0x01D8   (0x0030)  
	FIoStoreSettings                                   IoStoreSettings;                                            // 0x0208   (0x0080)  
	FUnrealPakSettings                                 UnrealPakSettings;                                          // 0x0288   (0x0028)  
	TArray<FString>                                    DefaultPakListOptions;                                      // 0x02B0   (0x0010)  
	TArray<FString>                                    DefaultCommandletOptions;                                   // 0x02C0   (0x0010)  
	FPakEncryptSettings                                EncryptSettings;                                            // 0x02D0   (0x0018)  
	TArray<FReplaceText>                               ReplacePakListTexts;                                        // 0x02E8   (0x0010)  
	TArray<ETargetPlatform>                            PakTargetPlatforms;                                         // 0x02F8   (0x0010)  
	bool                                               bCustomPakNameRegular;                                      // 0x0308   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0309   (0x0007)  MISSED
	FString                                            PakNameRegular;                                             // 0x0310   (0x0010)  
	bool                                               bStorageNewRelease;                                         // 0x0320   (0x0001)  
	bool                                               bStoragePakFileInfo;                                        // 0x0321   (0x0001)  
	bool                                               bIgnoreDeleatedAssetsInfo;                                  // 0x0322   (0x0001)  
	bool                                               bStorageDeletedAssetsToNewReleaseJson;                      // 0x0323   (0x0001)  
	bool                                               bStorageDiffAnalysisResults;                                // 0x0324   (0x0001)  
	bool                                               bBackupMetadata;                                            // 0x0325   (0x0001)  
	unsigned char                                      UnknownData11_5[0x1];                                       // 0x0326   (0x0001)  MISSED
	bool                                               bEnableProfiling;                                           // 0x0327   (0x0001)  
};

/// Struct /Script/HotPatcherRuntime.ReplaceText
/// Size: 0x0028 (0x000000 - 0x000028)
struct FReplaceText
{ 
	FString                                            From;                                                       // 0x0000   (0x0010)  
	FString                                            To;                                                         // 0x0010   (0x0010)  
	ESearchCaseMode                                    SearchCase;                                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/HotPatcherRuntime.UnrealPakSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FUnrealPakSettings
{ 
	TArray<FString>                                    UnrealPakListOptions;                                       // 0x0000   (0x0010)  
	TArray<FString>                                    UnrealCommandletOptions;                                    // 0x0010   (0x0010)  
	bool                                               bStoragePakList;                                            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/HotPatcherRuntime.IoStoreSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FIoStoreSettings
{ 
	bool                                               bIoStore;                                                   // 0x0000   (0x0001)  
	bool                                               bAllowBulkDataInIoStore;                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FString>                                    IoStorePakListOptions;                                      // 0x0008   (0x0010)  
	TArray<FString>                                    IoStoreCommandletOptions;                                   // 0x0018   (0x0010)  
	TMap<ETargetPlatform, FIoStorePlatformContainers>  PlatformContainers;                                         // 0x0028   (0x0050)  
	bool                                               bStoragePakList;                                            // 0x0078   (0x0001)  
	bool                                               bStorageBulkDataInfo;                                       // 0x0079   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x007A   (0x0006)  MISSED
};

/// Struct /Script/HotPatcherRuntime.IoStorePlatformContainers
/// Size: 0x0038 (0x000000 - 0x000038)
struct FIoStorePlatformContainers
{ 
	FDirectoryPath                                     BasePackageStagedRootDir;                                   // 0x0000   (0x0010)  
	bool                                               bGenerateDiffPatch;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FFilePath                                          GlobalContainersOverride;                                   // 0x0018   (0x0010)  
	FFilePath                                          PatchSourceOverride;                                        // 0x0028   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.AssetRegistryOptions
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAssetRegistryOptions
{ 
	bool                                               bSerializeAssetRegistry;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            AssetRegistryMountPointRegular;                             // 0x0008   (0x0010)  
	EAssetRegistryRule                                 AssetRegistryRule;                                          // 0x0018   (0x0001)  
	bool                                               bCustomAssetRegistryName;                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	FString                                            AssetRegistryNameRegular;                                   // 0x0020   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.CookShaderOptions
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCookShaderOptions
{ 
	bool                                               bSharedShaderLibrary;                                       // 0x0000   (0x0001)  
	bool                                               bNativeShader;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0002   (0x0001)  MISSED
	EShaderLibNameRule                                 ShaderNameRule;                                             // 0x0003   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            CustomShaderName;                                           // 0x0008   (0x0010)  
	FString                                            ShderLibMountPointRegular;                                  // 0x0018   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.ExportReleaseSettings
/// Size: 0x00C8 (0x000038 - 0x000100)
struct FExportReleaseSettings : FHotPatcherSettingBase
{ 
	FString                                            VersionId;                                                  // 0x0038   (0x0010)  
	bool                                               ByPakList;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FPlatformPakListFiles>                      PlatformsPakListFiles;                                      // 0x0050   (0x0010)  
	TArray<FDirectoryPath>                             AssetIncludeFilters;                                        // 0x0060   (0x0010)  
	TArray<FDirectoryPath>                             AssetIgnoreFilters;                                         // 0x0070   (0x0010)  
	bool                                               bAnalysisFilterDependencies;                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	TArray<EAssetRegistryDependencyTypeEx>             AssetRegistryDependencyTypes;                               // 0x0088   (0x0010)  
	bool                                               bIncludeHasRefAssetsOnly;                                   // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	TArray<FPatcherSpecifyAsset>                       IncludeSpecifyAssets;                                       // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x00B0   (0x0020)  MISSED
	TArray<FPlatformExternAssets>                      AddExternAssetsToPlatform;                                  // 0x00D0   (0x0010)  
	bool                                               bBackupMetadata;                                            // 0x00E0   (0x0001)  
	bool                                               bBackupProjectConfig;                                       // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData04_5[0x6];                                       // 0x00E2   (0x0006)  MISSED
	TArray<ETargetPlatform>                            BackupMetadataPlatforms;                                    // 0x00E8   (0x0010)  
	bool                                               bNoShaderCompile;                                           // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Struct /Script/HotPatcherRuntime.PlatformPakListFiles
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPlatformPakListFiles
{ 
	ETargetPlatform                                    TargetPlatform;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FFilePath>                                  PakResponseFiles;                                           // 0x0008   (0x0010)  
	TArray<FFilePath>                                  PakFiles;                                                   // 0x0018   (0x0010)  
	FString                                            AESKey;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.HotPatcherAssetDependency
/// Size: 0x0038 (0x000000 - 0x000038)
struct FHotPatcherAssetDependency
{ 
	FAssetDetail                                       Asset;                                                      // 0x0000   (0x0018)  
	TArray<FAssetDetail>                               AssetReference;                                             // 0x0018   (0x0010)  
	TArray<FAssetDetail>                               AssetDependency;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.HotPatcherVersion
/// Size: 0x0118 (0x000000 - 0x000118)
struct FHotPatcherVersion
{ 
	FString                                            VersionId;                                                  // 0x0000   (0x0010)  
	FString                                            BaseVersionId;                                              // 0x0010   (0x0010)  
	FString                                            Date;                                                       // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_5[0x48];                                      // 0x0030   (0x0048)  MISSED
	FAssetDependenciesInfo                             AssetInfo;                                                  // 0x0078   (0x0050)  
	TMap<ETargetPlatform, FPlatformExternAssets>       PlatformAssets;                                             // 0x00C8   (0x0050)  
};

/// Struct /Script/HotPatcherRuntime.PackageInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPackageInfo
{ 
	FString                                            AssetName;                                                  // 0x0000   (0x0010)  
	FString                                            AssetGuid;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PakEncryptionKeys
/// Size: 0x0088 (0x000000 - 0x000088)
struct FPakEncryptionKeys
{ 
	FEncryptionKeyEntry                                EncryptionKey;                                              // 0x0000   (0x0030)  
	TArray<FEncryptionKeyEntry>                        SecondaryEncryptionKeys;                                    // 0x0030   (0x0010)  
	bool                                               bEnablePakIndexEncryption;                                  // 0x0040   (0x0001)  
	bool                                               bEnablePakIniEncryption;                                    // 0x0041   (0x0001)  
	bool                                               bEnablePakUAssetEncryption;                                 // 0x0042   (0x0001)  
	bool                                               bEnablePakFullAssetEncryption;                              // 0x0043   (0x0001)  
	bool                                               bDataCryptoRequired;                                        // 0x0044   (0x0001)  
	bool                                               PakEncryptionRequired;                                      // 0x0045   (0x0001)  
	bool                                               PakSigningRequired;                                         // 0x0046   (0x0001)  
	bool                                               bEnablePakSigning;                                          // 0x0047   (0x0001)  
	FSignKeyEntry                                      SigningKey;                                                 // 0x0048   (0x0040)  
};

/// Struct /Script/HotPatcherRuntime.SignKeyEntry
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSignKeyEntry
{ 
	FSignKeyItem                                       PublicKey;                                                  // 0x0000   (0x0020)  
	FSignKeyItem                                       PrivateKey;                                                 // 0x0020   (0x0020)  
};

/// Struct /Script/HotPatcherRuntime.SignKeyItem
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSignKeyItem
{ 
	FString                                            Exponent;                                                   // 0x0000   (0x0010)  
	FString                                            Modulus;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.EncryptionKeyEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEncryptionKeyEntry
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Guid;                                                       // 0x0010   (0x0010)  
	FString                                            Key;                                                        // 0x0020   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PakFilesMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPakFilesMap
{ 
	TMap<FString, FPakFileArray>                       PakFilesMap;                                                // 0x0000   (0x0050)  
};

/// Struct /Script/HotPatcherRuntime.PakFileArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPakFileArray
{ 
	TArray<FPakFileInfo>                               PakFileInfos;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PakFileInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPakFileInfo
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FString                                            Hash;                                                       // 0x0010   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/HotPatcherRuntime.PakVersion
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPakVersion
{ 
	FString                                            VersionId;                                                  // 0x0000   (0x0010)  
	FString                                            BaseVersionId;                                              // 0x0010   (0x0010)  
	FString                                            Date;                                                       // 0x0020   (0x0010)  
	FString                                            CheckCode;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PatchVersionAssetDiff
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FPatchVersionAssetDiff
{ 
	FAssetDependenciesInfo                             AddAssetDependInfo;                                         // 0x0000   (0x0050)  
	FAssetDependenciesInfo                             ModifyAssetDependInfo;                                      // 0x0050   (0x0050)  
	FAssetDependenciesInfo                             DeleteAssetDependInfo;                                      // 0x00A0   (0x0050)  
};

/// Struct /Script/HotPatcherRuntime.PatchVersionDiff
/// Size: 0x0140 (0x000000 - 0x000140)
struct FPatchVersionDiff
{ 
	FPatchVersionAssetDiff                             AssetDiffInfo;                                              // 0x0000   (0x00F0)  
	TMap<ETargetPlatform, FPatchVersionExternDiff>     PlatformExternDiffInfo;                                     // 0x00F0   (0x0050)  
};

/// Struct /Script/HotPatcherRuntime.PatchVersionExternDiff
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPatchVersionExternDiff
{ 
	ETargetPlatform                                    Platform;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FExternFileInfo>                            AddExternalFiles;                                           // 0x0008   (0x0010)  
	TArray<FExternFileInfo>                            ModifyExternalFiles;                                        // 0x0018   (0x0010)  
	TArray<FExternFileInfo>                            DeleteExternalFiles;                                        // 0x0028   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.PlatformExternFiles
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPlatformExternFiles
{ 
	ETargetPlatform                                    Platform;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FExternFileInfo>                            ExternFiles;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/HotPatcherRuntime.HotPatcherContext
/// Size: 0x0058 (0x000000 - 0x000058)
struct FHotPatcherContext
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
	UScopedSlowTaskContext*                            UnrealPakSlowTask;                                          // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Struct /Script/HotPatcherRuntime.HotPatcherReleaseContext
/// Size: 0x0118 (0x000058 - 0x000170)
struct FHotPatcherReleaseContext : FHotPatcherContext
{ 
	FHotPatcherVersion                                 NewReleaseVersion;                                          // 0x0058   (0x0118)  
};

/// Struct /Script/HotPatcherRuntime.HotPatcherPatchContext
/// Size: 0x0588 (0x000058 - 0x0005E0)
struct FHotPatcherPatchContext : FHotPatcherContext
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0058   (0x0008)  MISSED
	FHotPatcherVersion                                 BaseVersion;                                                // 0x0060   (0x0118)  
	FHotPatcherVersion                                 CurrentVersion;                                             // 0x0178   (0x0118)  
	FPatchVersionDiff                                  VersionDiff;                                                // 0x0290   (0x0140)  
	FHotPatcherVersion                                 NewReleaseVersion;                                          // 0x03D0   (0x0118)  
	FChunkInfo                                         NewVersionChunk;                                            // 0x04E8   (0x0088)  
	TArray<FChunkInfo>                                 PakChunks;                                                  // 0x0570   (0x0010)  
	TArray<FPakCommand>                                AdditionalFileToPak;                                        // 0x0580   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0590   (0x0050)  MISSED
};

/// Enum /Script/HotPatcherRuntime.ETargetPlatform
/// Size: 0x03
enum ETargetPlatform : uint8_t
{
	ETargetPlatform__None                                                            = 0,
	ETargetPlatform__AllPlatforms                                                    = 1,
	ETargetPlatform__ETargetPlatform_MAX                                             = 2
};

/// Enum /Script/HotPatcherRuntime.EMatchOperator
/// Size: 0x05
enum EMatchOperator : uint8_t
{
	EMatchOperator__None                                                             = 0,
	EMatchOperator__GREAT_THAN                                                       = 1,
	EMatchOperator__LESS_THAN                                                        = 2,
	EMatchOperator__EQUAL                                                            = 3,
	EMatchOperator__EMatchOperator_MAX                                               = 4
};

/// Enum /Script/HotPatcherRuntime.EMatchRule
/// Size: 0x04
enum EMatchRule : uint8_t
{
	EMatchRule__None                                                                 = 0,
	EMatchRule__MATCH                                                                = 1,
	EMatchRule__IGNORE                                                               = 2,
	EMatchRule__EMatchRule_MAX                                                       = 3
};

/// Enum /Script/HotPatcherRuntime.EMonolithicPathMode
/// Size: 0x03
enum EMonolithicPathMode : uint8_t
{
	EMonolithicPathMode__MountPath                                                   = 0,
	EMonolithicPathMode__PackagePath                                                 = 1,
	EMonolithicPathMode__EMonolithicPathMode_MAX                                     = 2
};

/// Enum /Script/HotPatcherRuntime.EAssetRegistryRule
/// Size: 0x04
enum EAssetRegistryRule : uint8_t
{
	EAssetRegistryRule__PATCH                                                        = 0,
	EAssetRegistryRule__PER_CHUNK                                                    = 1,
	EAssetRegistryRule__CUSTOM                                                       = 2,
	EAssetRegistryRule__EAssetRegistryRule_MAX                                       = 3
};

/// Enum /Script/HotPatcherRuntime.EShaderLibNameRule
/// Size: 0x04
enum EShaderLibNameRule : uint8_t
{
	EShaderLibNameRule__VERSION_ID                                                   = 0,
	EShaderLibNameRule__PROJECT_NAME                                                 = 1,
	EShaderLibNameRule__CUSTOM                                                       = 2,
	EShaderLibNameRule__EShaderLibNameRule_MAX                                       = 3
};

/// Enum /Script/HotPatcherRuntime.EAssetRegistryDependencyTypeEx
/// Size: 0x10
enum EAssetRegistryDependencyTypeEx : uint8_t
{
	EAssetRegistryDependencyTypeEx__None                                             = 0,
	EAssetRegistryDependencyTypeEx__Soft                                             = 1,
	EAssetRegistryDependencyTypeEx__Hard                                             = 2,
	EAssetRegistryDependencyTypeEx__SearchableName                                   = 4,
	EAssetRegistryDependencyTypeEx__SoftManage                                       = 8,
	EAssetRegistryDependencyTypeEx__HardManage                                       = 16,
	EAssetRegistryDependencyTypeEx__Packages                                         = 3,
	EAssetRegistryDependencyTypeEx__Manage                                           = 24,
	EAssetRegistryDependencyTypeEx__All                                              = 31,
	EAssetRegistryDependencyTypeEx__EAssetRegistryDependencyTypeEx_MAX               = 32
};

/// Enum /Script/HotPatcherRuntime.EPSOSaveMode
/// Size: 0x04
enum EPSOSaveMode : uint8_t
{
	EPSOSaveMode__Incremental                                                        = 0,
	EPSOSaveMode__BoundPSOsOnly                                                      = 1,
	EPSOSaveMode__SortedBoundPSOs                                                    = 2,
	EPSOSaveMode__EPSOSaveMode_MAX                                                   = 3
};

/// Enum /Script/HotPatcherRuntime.ESearchCaseMode
/// Size: 0x03
enum ESearchCaseMode : uint8_t
{
	ESearchCaseMode__CaseSensitive                                                   = 0,
	ESearchCaseMode__IgnoreCase                                                      = 1,
	ESearchCaseMode__ESearchCaseMode_MAX                                             = 2
};

