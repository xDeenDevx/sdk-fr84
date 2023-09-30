/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LunarMariaArea.

/// Class /Script/LunarMariaArea.LM_AreaData_Base
/// Size: 0x0010 (0x000030 - 0x000040)
class ULM_AreaData_Base : public UDataAsset
{ 
public:
	int32_t                                            ComponentSizeQuads;                                         // 0x0030   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0034   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x0038   (0x0004)  
	bool                                               bIsBitArea;                                                 // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/LunarMariaArea.LM_AreaData
/// Size: 0x0170 (0x000040 - 0x0001B0)
class ULM_AreaData : public ULM_AreaData_Base
{ 
public:
	bool                                               bDataTableDirty;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	ULandscapeInfo*                                    LandscapeInfo;                                              // 0x0048   (0x0008)  
	bool                                               IsProcessArea;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	TMap<FName, FAreaLayerData>                        LayerTextures;                                              // 0x0058   (0x0050)  
	TMap<FName, FAreaGroupSet>                         GroupSettings;                                              // 0x00A8   (0x0050)  
	TMap<FName, FLinearColor>                          DecalDisplayColorSettings;                                  // 0x00F8   (0x0050)  
	UScriptStruct*                                     AreaAttributeStruct;                                        // 0x0148   (0x0008)  
	UDataTable*                                        FinalAreaAttributeDataTable;                                // 0x0150   (0x0008)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0158   (0x0058)  MISSED
};

/// Struct /Script/LunarMariaArea.AreaGroupSet
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAreaGroupSet
{ 
	TArray<FName>                                      LayerNames;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LunarMariaArea.AreaLayerData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FAreaLayerData
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0008)  
	int32_t                                            CurrentBit;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TMap<FIntPoint, UTexture2D*>                       ComponentWeightMapTextures;                                 // 0x0010   (0x0050)  
	FName                                              GroupName;                                                  // 0x0060   (0x0008)  
};

