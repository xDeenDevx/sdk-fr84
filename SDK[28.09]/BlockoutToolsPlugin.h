/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package BlockoutToolsPlugin.

/// Class /Script/BlockoutToolsPlugin.BlockoutToolsParent
/// Size: 0x0088 (0x000228 - 0x0002B0)
class ABlockoutToolsParent : public AActor
{ 
public:
	USceneComponent*                                   Root;                                                       // 0x0228   (0x0008)  
	UBillboardComponent*                               Billboard;                                                  // 0x0230   (0x0008)  
	UMaterialInterface*                                BlockoutGridParent;                                         // 0x0238   (0x0008)  
	UMaterialInstanceDynamic*                          BlockoutGridMID;                                            // 0x0240   (0x0008)  
	UMaterialInterface*                                BlockoutCurrentMaterial;                                    // 0x0248   (0x0008)  
	TArray<UStaticMeshComponent*>                      BlockoutMeshComponents;                                     // 0x0250   (0x0010)  
	TEnumAsByte<EBlockoutMaterialType>                 BlockoutMaterialType;                                       // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	FLinearColor                                       BlockoutMaterialColor;                                      // 0x0264   (0x0010)  
	bool                                               bBlockoutMaterialUseGrid;                                   // 0x0274   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0275   (0x0003)  MISSED
	float                                              BlockoutMaterialGridSize;                                   // 0x0278   (0x0004)  
	float                                              BlockoutMaterialCheckerLuminance;                           // 0x027C   (0x0004)  
	bool                                               bBlockoutMaterialUseTopColor;                               // 0x0280   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0281   (0x0003)  MISSED
	FLinearColor                                       BlockoutMaterialTopColor;                                   // 0x0284   (0x0010)  
	bool                                               bUseCustomMaterial;                                         // 0x0294   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	UMaterialInterface*                                CustomMaterial;                                             // 0x0298   (0x0008)  
	UMaterialInterface*                                BlockoutCustomMaterial;                                     // 0x02A0   (0x0008)  
	bool                                               bBlockoutEnableCollisions;                                  // 0x02A8   (0x0001)  
	bool                                               bBlockoutCastShadows;                                       // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x02AA   (0x0006)  MISSED


	/// Functions
	// Function /Script/BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript
	void RerunConstructionScript();                                                                                          // [0x818050] Final|Native|Private|BlueprintCallable 
	// Function /Script/BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial
	void BlockoutSetMaterial();                                                                                              // [0x818030] Final|Native|Private|BlueprintCallable 
};

/// Struct /Script/BlockoutToolsPlugin.BlockoutMaterialPreset
/// Size: 0x0030 (0x000008 - 0x000038)
struct FBlockoutMaterialPreset : FTableRowBase
{ 
	bool                                               bUseGrid;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              GridSize;                                                   // 0x000C   (0x0004)  
	float                                              CheckerLuminance;                                           // 0x0010   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0014   (0x0010)  
	bool                                               bUseTopColor;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FLinearColor                                       TopColor;                                                   // 0x0028   (0x0010)  
};

/// Enum /Script/BlockoutToolsPlugin.EBlockoutMaterialType
/// Size: 0x03
enum EBlockoutMaterialType : uint8_t
{
	BlockoutMaterialType_Grid                                                        = 0,
	BlockoutMaterialType_CustomMaterial                                              = 1,
	BlockoutMaterialType_MAX                                                         = 2
};

