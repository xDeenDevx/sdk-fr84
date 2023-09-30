/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AssetRegistry.

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x0750 (0x000028 - 0x000778)
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x750];                                     // 0x0028   (0x0750)  MISSED
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistryHelpers : public UObject
{ 
public:
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistry : public UInterface
{ 
public:
};

/// Struct /Script/AssetRegistry.AssetData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAssetData
{ 
	FName                                              ObjectPath;                                                 // 0x0000   (0x0008)  
	FName                                              PackageName;                                                // 0x0008   (0x0008)  
	FName                                              PackagePath;                                                // 0x0010   (0x0008)  
	FName                                              AssetName;                                                  // 0x0018   (0x0008)  
	FName                                              AssetClass;                                                 // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Struct /Script/AssetRegistry.ARFilter
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FARFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FName>                                      ObjectPaths;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0040   (0x0050)  MISSED
	TSet<FName>                                        RecursiveClassesExclusionSet;                               // 0x0090   (0x0050)  
	bool                                               bRecursivePaths;                                            // 0x00E0   (0x0001)  
	bool                                               bRecursiveClasses;                                          // 0x00E1   (0x0001)  
	bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x00E2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x00E3   (0x0005)  MISSED
};

/// Struct /Script/AssetRegistry.AssetBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAssetBundleData
{ 
	TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetBundleEntry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAssetBundleEntry
{ 
	FPrimaryAssetId                                    BundleScope;                                                // 0x0000   (0x0010)  
	FName                                              BundleName;                                                 // 0x0010   (0x0008)  
	TArray<FSoftObjectPath>                            BundleAssets;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (0x000000 - 0x000005)
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

