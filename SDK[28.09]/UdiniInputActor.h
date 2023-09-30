/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UdiniInputActor.

/// Class /Script/UdiniInputActor.UdiniInputActorBase
/// Size: 0x0008 (0x000228 - 0x000230)
class AUdiniInputActorBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Class /Script/UdiniInputActor.AInputStaticmeshActorRuntime
/// Size: 0x0020 (0x000230 - 0x000250)
class AAInputStaticmeshActorRuntime : public AUdiniInputActorBase
{ 
public:
	TArray<UStaticMeshComponent*>                      InstanceComponent;                                          // 0x0230   (0x0010)  
	TArray<UStaticMesh*>                               Meshs;                                                      // 0x0240   (0x0010)  
};

/// Class /Script/UdiniInputActor.EditorMeshComponet
/// Size: 0x0000 (0x0005E0 - 0x0005E0)
class UEditorMeshComponet : public UProceduralMeshComponent
{ 
public:
};

/// Class /Script/UdiniInputActor.InputDataListAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputDataListAsset : public UObject
{ 
public:
};

/// Class /Script/UdiniInputActor.IUdiniInputCoreInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UIUdiniInputCoreInterface : public UInterface
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniAttribute
/// Size: 0x00E0 (0x000028 - 0x000108)
class UUdiniAttribute : public UObject
{ 
public:
	FString                                            AttributeName;                                              // 0x0028   (0x0010)  
	FString                                            help;                                                       // 0x0038   (0x0010)  
	EUdiniAttributeType                                AttributeType;                                              // 0x0048   (0x0001)  
	EUdiniAttributeClass                               AttributeOwner;                                             // 0x0049   (0x0001)  
	bool                                               bIsHide;                                                    // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x004B   (0x0001)  MISSED
	int32_t                                            AttributeCount;                                             // 0x004C   (0x0004)  
	int32_t                                            AttributeTupleSize;                                         // 0x0050   (0x0004)  
	float                                              MaxValue;                                                   // 0x0054   (0x0004)  
	float                                              MinValue;                                                   // 0x0058   (0x0004)  
	bool                                               hasMin;                                                     // 0x005C   (0x0001)  
	bool                                               hasMax;                                                     // 0x005D   (0x0001)  
	bool                                               hasUIMin;                                                   // 0x005E   (0x0001)  
	bool                                               hasUIMax;                                                   // 0x005F   (0x0001)  
	float                                              UIMax;                                                      // 0x0060   (0x0004)  
	float                                              UIMin;                                                      // 0x0064   (0x0004)  
	float                                              ShowValueSize;                                              // 0x0068   (0x0004)  
	bool                                               ShowAttributeValueAsDir;                                    // 0x006C   (0x0001)  
	bool                                               ShowAttributeValueAsText;                                   // 0x006D   (0x0001)  
	bool                                               EnableShowBackGroundValue;                                  // 0x006E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x99];                                      // 0x006F   (0x0099)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniAttaibutFloat
/// Size: 0x0018 (0x000108 - 0x000120)
class UUdiniAttaibutFloat : public UUdiniAttribute
{ 
public:
	TArray<float>                                      Value;                                                      // 0x0108   (0x0010)  
	float                                              DefaultValue;                                               // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniAttaibutVector3
/// Size: 0x0020 (0x000108 - 0x000128)
class UUdiniAttaibutVector3 : public UUdiniAttribute
{ 
public:
	TArray<FVector>                                    Value;                                                      // 0x0108   (0x0010)  
	FVector                                            DefaultValue;                                               // 0x0118   (0x000C)  
	bool                                               bShowOnlyDir;                                               // 0x0124   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0125   (0x0003)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniAttaibutVector2
/// Size: 0x0018 (0x000108 - 0x000120)
class UUdiniAttaibutVector2 : public UUdiniAttribute
{ 
public:
	TArray<FVector2D>                                  Value;                                                      // 0x0108   (0x0010)  
	FVector2D                                          DefaultValue;                                               // 0x0118   (0x0008)  
};

/// Class /Script/UdiniInputActor.UdiniAttaibutVector4
/// Size: 0x0028 (0x000108 - 0x000130)
class UUdiniAttaibutVector4 : public UUdiniAttribute
{ 
public:
	TArray<FVector4>                                   Value;                                                      // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0118   (0x0008)  MISSED
	FVector4                                           DefaultValue;                                               // 0x0120   (0x0010)  
};

/// Class /Script/UdiniInputActor.UdiniAttaibutIntBase
/// Size: 0x0018 (0x000108 - 0x000120)
class UUdiniAttaibutIntBase : public UUdiniAttribute
{ 
public:
	TArray<int32_t>                                    Value;                                                      // 0x0108   (0x0010)  
	int32_t                                            DefaultValue;                                               // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniAttaibutInt
/// Size: 0x0000 (0x000120 - 0x000120)
class UUdiniAttaibutInt : public UUdiniAttaibutIntBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniAttaibutTog
/// Size: 0x0000 (0x000120 - 0x000120)
class UUdiniAttaibutTog : public UUdiniAttaibutIntBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniAttaibutButton
/// Size: 0x0000 (0x000120 - 0x000120)
class UUdiniAttaibutButton : public UUdiniAttaibutIntBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniAttaibutString
/// Size: 0x0020 (0x000108 - 0x000128)
class UUdiniAttaibutString : public UUdiniAttribute
{ 
public:
	TArray<FString>                                    Value;                                                      // 0x0108   (0x0010)  
	FString                                            DefaultValue;                                               // 0x0118   (0x0010)  
};

/// Class /Script/UdiniInputActor.UdiniAttaibutStringChoiseList
/// Size: 0x0020 (0x000128 - 0x000148)
class UUdiniAttaibutStringChoiseList : public UUdiniAttaibutString
{ 
public:
	TArray<FString>                                    ChoseListStringLable;                                       // 0x0128   (0x0010)  
	TArray<FString>                                    ChoseListStringValue;                                       // 0x0138   (0x0010)  
};

/// Class /Script/UdiniInputActor.UdiniAttaibutIntChoiselist
/// Size: 0x0020 (0x000120 - 0x000140)
class UUdiniAttaibutIntChoiselist : public UUdiniAttaibutIntBase
{ 
public:
	TArray<FString>                                    ChoseListStringLable;                                       // 0x0120   (0x0010)  
	TArray<int32_t>                                    ChoseListIntValue;                                          // 0x0130   (0x0010)  
};

/// Class /Script/UdiniInputActor.UdiniInputVolum
/// Size: 0x0000 (0x000260 - 0x000260)
class AUdiniInputVolum : public AVolume
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniCollisionInputVolum
/// Size: 0x0000 (0x000260 - 0x000260)
class AUdiniCollisionInputVolum : public AUdiniInputVolum
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniDataPart
/// Size: 0x00E8 (0x000028 - 0x000110)
class UUdiniDataPart : public UObject
{ 
public:
	EUdiniDataPartType                                 PartType;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FVector>                                    VertexPosition;                                             // 0x0030   (0x0010)  
	TArray<FLinearColor>                               VertexColors;                                               // 0x0040   (0x0010)  
	TArray<FLinearColor>                               VertexColorsCatche;                                         // 0x0050   (0x0010)  
	TArray<FVector>                                    VertexNormal;                                               // 0x0060   (0x0010)  
	TArray<FVector2D>                                  VertexUV;                                                   // 0x0070   (0x0010)  
	TArray<int32_t>                                    PointEnableDraw;                                            // 0x0080   (0x0010)  
	TArray<float>                                      PointDrawSize;                                              // 0x0090   (0x0010)  
	TArray<float>                                      PrimDrawLineThinkness;                                      // 0x00A0   (0x0010)  
	TMap<FString, UUdiniAttribute*>                    UdiniAttributesMap;                                         // 0x00B0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0100   (0x0010)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniInputPin
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UUdiniInputPin : public UActorComponent
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniInputVolumActor
/// Size: 0x0008 (0x000228 - 0x000230)
class AUdiniInputVolumActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniOutputObjectBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UUdiniOutputObjectBase : public UObject
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniInstanceOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UUdiniInstanceOutput : public UUdiniOutputObjectBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniInstanceToFoliageOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UUdiniInstanceToFoliageOutput : public UUdiniOutputObjectBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniInstanceToHierarchicalOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UUdiniInstanceToHierarchicalOutput : public UUdiniOutputObjectBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniInstanceToStaticmeshComponentOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UUdiniInstanceToStaticmeshComponentOutput : public UUdiniOutputObjectBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniLandmassOutput
/// Size: 0x0000 (0x000028 - 0x000028)
class UUdiniLandmassOutput : public UUdiniOutputObjectBase
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniMeshDataPart
/// Size: 0x0098 (0x000110 - 0x0001A8)
class UUdiniMeshDataPart : public UUdiniDataPart
{ 
public:
	TArray<FOnePoly>                                   PolyArray;                                                  // 0x0110   (0x0010)  
	TArray<int32_t>                                    PrimIndex;                                                  // 0x0120   (0x0010)  
	TArray<int32_t>                                    PrimID;                                                     // 0x0130   (0x0010)  
	TArray<int32_t>                                    PrimEnableDraw;                                             // 0x0140   (0x0010)  
	TArray<int32_t>                                    bIsPrimHide;                                                // 0x0150   (0x0010)  
	TArray<int32_t>                                    bIsPointHide;                                               // 0x0160   (0x0010)  
	TArray<float>                                      PrimDrawSize;                                               // 0x0170   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0180   (0x0010)  MISSED
	bool                                               GeneraProcaduralMesh;                                       // 0x0190   (0x0001)  
	bool                                               bIsMask;                                                    // 0x0191   (0x0001)  
	unsigned char                                      UnknownData01_6[0x16];                                      // 0x0192   (0x0016)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniPointDataPart
/// Size: 0x0000 (0x000110 - 0x000110)
class UUdiniPointDataPart : public UUdiniDataPart
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniSnapGridComponent
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UUdiniSnapGridComponent : public UActorComponent
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniSopAsset
/// Size: 0x0000 (0x000028 - 0x000028)
class UUdiniSopAsset : public UObject
{ 
public:
};

/// Class /Script/UdiniInputActor.UdiniSplineComponent
/// Size: 0x0020 (0x000630 - 0x000650)
class UUdiniSplineComponent : public USplineComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0630   (0x0020)  MISSED
};

/// Class /Script/UdiniInputActor.UdiniSplineDataPart
/// Size: 0x0080 (0x000110 - 0x000190)
class UUdiniSplineDataPart : public UUdiniDataPart
{ 
public:
	TArray<FOneLine>                                   PolyArray;                                                  // 0x0110   (0x0010)  
	TArray<int32_t>                                    PrimID;                                                     // 0x0120   (0x0010)  
	TArray<int32_t>                                    Curveconts;                                                 // 0x0130   (0x0010)  
	TArray<int32_t>                                    PrimEnableDraw;                                             // 0x0140   (0x0010)  
	TArray<int32_t>                                    bIsPrimHide;                                                // 0x0150   (0x0010)  
	TArray<int32_t>                                    bIsPointHide;                                               // 0x0160   (0x0010)  
	TArray<float>                                      PrimDrawSize;                                               // 0x0170   (0x0010)  
	TArray<FIndexCluster>                              VertexClusterIndex;                                         // 0x0180   (0x0010)  
};

/// Class /Script/UdiniInputActor.UdiniSSCoreComponet
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UUdiniSSCoreComponet : public UActorComponent
{ 
public:
};

/// Class /Script/UdiniInputActor.HeightFieldTexture
/// Size: 0x0020 (0x000028 - 0x000048)
class UHeightFieldTexture : public UObject
{ 
public:
	float                                              MinVisHeight;                                               // 0x0028   (0x0004)  
	float                                              MaxVisHeight;                                               // 0x002C   (0x0004)  
	TArray<float>                                      PixData;                                                    // 0x0030   (0x0010)  
	FVector2D                                          ImageSize;                                                  // 0x0040   (0x0008)  
};

/// Class /Script/UdiniInputActor.VolumBoxShow
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UVolumBoxShow : public UActorComponent
{ 
public:
};

/// Struct /Script/UdiniInputActor.UdiniAssetData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FUdiniAssetData : FTableRowBase
{ 
	bool                                               bIsDebug;                                                   // 0x0008   (0x0001)  
	EUdiniTableType                                    TableType;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/UdiniInputActor.UdiniTableDatas
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FUdiniTableDatas
{ 
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0000   (0x00E0)  MISSED
};

/// Struct /Script/UdiniInputActor.UdiniFoliageTypeDataTable
/// Size: 0x0070 (0x000010 - 0x000080)
struct FUdiniFoliageTypeDataTable : FUdiniAssetData
{ 
	FString                                            RowName;                                                    // 0x0010   (0x0010)  
	TArray<UFoliageType_InstancedStaticMesh*>          FoliageTypes;                                               // 0x0020   (0x0010)  
	TMap<FString, FString>                             Attributes;                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/UdiniInputActor.UdiniHeightFieldDatable
/// Size: 0x0070 (0x000010 - 0x000080)
struct FUdiniHeightFieldDatable : FUdiniAssetData
{ 
	FString                                            RowName;                                                    // 0x0010   (0x0010)  
	TArray<UHeightFieldTexture*>                       TextureList;                                                // 0x0020   (0x0010)  
	TMap<FString, FString>                             Attributes;                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/UdiniInputActor.InputDataList
/// Size: 0x0050 (0x000000 - 0x000050)
struct FInputDataList
{ 
	TMap<FString, FManOpData>                          ManOpDatasList;                                             // 0x0000   (0x0050)  
};

/// Struct /Script/UdiniInputActor.ManOpData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FManOpData
{ 
	FString                                            MainOpName;                                                 // 0x0000   (0x0010)  
	FString                                            Icon;                                                       // 0x0010   (0x0010)  
	TMap<FString, FSubOpData>                          SubOpDatas;                                                 // 0x0020   (0x0050)  
};

/// Struct /Script/UdiniInputActor.SubOpData
/// Size: 0x0288 (0x000000 - 0x000288)
struct FSubOpData
{ 
	FString                                            Icon;                                                       // 0x0000   (0x0010)  
	FString                                            SubOpName;                                                  // 0x0010   (0x0010)  
	FString                                            MainOpName;                                                 // 0x0020   (0x0010)  
	FString                                            Parent;                                                     // 0x0030   (0x0010)  
	FString                                            SubOpToolTip;                                               // 0x0040   (0x0010)  
	FString                                            HdaTypeName;                                                // 0x0050   (0x0010)  
	bool                                               IsClosedCurve;                                              // 0x0060   (0x0001)  
	bool                                               IsPoint;                                                    // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              SnapGridSize;                                               // 0x0064   (0x0004)  
	float                                              SnapGridNum;                                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            OperationModeType;                                          // 0x0070   (0x0010)  
	FString                                            OutputTypeClassName;                                        // 0x0080   (0x0010)  
	FString                                            ActorOwnerClassName;                                        // 0x0090   (0x0010)  
	FString                                            ImportClassName;                                            // 0x00A0   (0x0010)  
	FString                                            HelpURL;                                                    // 0x00B0   (0x0010)  
	FString                                            LevelName;                                                  // 0x00C0   (0x0010)  
	int32_t                                            EnableResetMeshPart;                                        // 0x00D0   (0x0004)  
	int32_t                                            EnableResetPolyLinePart;                                    // 0x00D4   (0x0004)  
	FString                                            AutoUpdateHdaName;                                          // 0x00D8   (0x0010)  
	FString                                            ModifyLandscapeLayer;                                       // 0x00E8   (0x0010)  
	TMap<FString, FHoudiniParmData>                    SubCurveAttribute;                                          // 0x00F8   (0x0050)  
	TMap<FString, FHoudiniParmData>                    SubCoutrlAttribute;                                         // 0x0148   (0x0050)  
	TMap<FString, FHoudiniParmData>                    SubPointAttribute;                                          // 0x0198   (0x0050)  
	TMap<FString, FHoudiniParmData>                    SubPrimAttribute;                                           // 0x01E8   (0x0050)  
	TMap<FString, FHoudiniParmData>                    SubDetailAttribute;                                         // 0x0238   (0x0050)  
};

/// Struct /Script/UdiniInputActor.HoudiniParmData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FHoudiniParmData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            help;                                                       // 0x0010   (0x0010)  
	EUdiniAttributeType                                AttributeType;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            TupleSize;                                                  // 0x0024   (0x0004)  
	TArray<float>                                      FloatValue;                                                 // 0x0028   (0x0010)  
	TArray<int32_t>                                    IntValue;                                                   // 0x0038   (0x0010)  
	TArray<FString>                                    StringValue;                                                // 0x0048   (0x0010)  
	TArray<float>                                      DefaultFloatValue;                                          // 0x0058   (0x0010)  
	TArray<int32_t>                                    DefaultFIntValue;                                           // 0x0068   (0x0010)  
	TArray<FString>                                    DefaultFStringValue;                                        // 0x0078   (0x0010)  
	TArray<FString>                                    ChoseListStringLable;                                       // 0x0088   (0x0010)  
	TArray<FString>                                    ChoseListStringValue;                                       // 0x0098   (0x0010)  
	TArray<int32_t>                                    ChoseListIntValue;                                          // 0x00A8   (0x0010)  
	float                                              MaxValue;                                                   // 0x00B8   (0x0004)  
	float                                              MinValue;                                                   // 0x00BC   (0x0004)  
	bool                                               bIsHide;                                                    // 0x00C0   (0x0001)  
	bool                                               hasMin;                                                     // 0x00C1   (0x0001)  
	bool                                               hasMax;                                                     // 0x00C2   (0x0001)  
	bool                                               hasUIMin;                                                   // 0x00C3   (0x0001)  
	bool                                               hasUIMax;                                                   // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              UIMax;                                                      // 0x00C8   (0x0004)  
	float                                              UIMin;                                                      // 0x00CC   (0x0004)  
	FString                                            VisibilityCondition;                                        // 0x00D0   (0x0010)  
};

/// Struct /Script/UdiniInputActor.InputDynamicData
/// Size: 0x02B8 (0x000000 - 0x0002B8)
struct FInputDynamicData
{ 
	float                                              PaintScale;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSubOpData                                         StaticSubOpData;                                            // 0x0008   (0x0288)  
	FString                                            PaintAttValue;                                              // 0x0290   (0x0010)  
	FString                                            PaintAttName;                                               // 0x02A0   (0x0010)  
	bool                                               bIsUsePaintDir;                                             // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02B1   (0x0007)  MISSED
};

/// Struct /Script/UdiniInputActor.UdiniTextureDatable
/// Size: 0x0070 (0x000010 - 0x000080)
struct FUdiniTextureDatable : FUdiniAssetData
{ 
	FString                                            RowName;                                                    // 0x0010   (0x0010)  
	TArray<UTexture2D*>                                TextureList;                                                // 0x0020   (0x0010)  
	TMap<FString, FString>                             Attributes;                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/UdiniInputActor.UdiniDataTable
/// Size: 0x0070 (0x000010 - 0x000080)
struct FUdiniDataTable : FUdiniAssetData
{ 
	FString                                            RowName;                                                    // 0x0010   (0x0010)  
	TArray<UStaticMesh*>                               StaticMesh;                                                 // 0x0020   (0x0010)  
	TMap<FString, FString>                             Attributes;                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/UdiniInputActor.UdiniMatDatable
/// Size: 0x0070 (0x000010 - 0x000080)
struct FUdiniMatDatable : FUdiniAssetData
{ 
	FString                                            RowName;                                                    // 0x0010   (0x0010)  
	TArray<UMaterialInstance*>                         MatInstance;                                                // 0x0020   (0x0010)  
	TMap<FString, FString>                             Attributes;                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/UdiniInputActor.OnePoly
/// Size: 0x0038 (0x000000 - 0x000038)
struct FOnePoly
{ 
	TArray<int32_t>                                    polyPosIndex;                                               // 0x0000   (0x0010)  
	TArray<int32_t>                                    polyNonSharedEdgeArray;                                     // 0x0010   (0x0010)  
	TArray<int32_t>                                    polyTrianglePrimIndex;                                      // 0x0020   (0x0010)  
	int32_t                                            __Primitive_Id_;                                            // 0x0030   (0x0004)  
	bool                                               bIsHid;                                                     // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/UdiniInputActor.UdiniOtherUobjectDataTable
/// Size: 0x0070 (0x000010 - 0x000080)
struct FUdiniOtherUobjectDataTable : FUdiniAssetData
{ 
	FString                                            RowName;                                                    // 0x0010   (0x0010)  
	TArray<UClass*>                                    ActorInstance;                                              // 0x0020   (0x0010)  
	TMap<FString, FString>                             Attributes;                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/UdiniInputActor.SnapPoint
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSnapPoint
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/UdiniInputActor.UdiniOpParmSelf
/// Size: 0x0005 (0x000000 - 0x000005)
struct FUdiniOpParmSelf
{ 
	bool                                               EnableShowBackGround;                                       // 0x0000   (0x0001)  
	bool                                               ShowAttributeValueAsText;                                   // 0x0001   (0x0001)  
	bool                                               ShowAttributeValueAsDir;                                    // 0x0002   (0x0001)  
	bool                                               EnableShowBackGroundText;                                   // 0x0003   (0x0001)  
	bool                                               EnableShowColor;                                            // 0x0004   (0x0001)  
};

/// Struct /Script/UdiniInputActor.OneLine
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOneLine
{ 
	TArray<int32_t>                                    polyPosIndex;                                               // 0x0000   (0x0010)  
	bool                                               bIsHid;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/UdiniInputActor.IndexCluster
/// Size: 0x0010 (0x000000 - 0x000010)
struct FIndexCluster
{ 
	TArray<int32_t>                                    Indexs;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/UdiniInputActor.UdiniStaticMeshDataTable
/// Size: 0x0070 (0x000010 - 0x000080)
struct FUdiniStaticMeshDataTable : FUdiniAssetData
{ 
	FString                                            RowName;                                                    // 0x0010   (0x0010)  
	TArray<UStaticMesh*>                               StaticMesh;                                                 // 0x0020   (0x0010)  
	TMap<FString, FString>                             Attributes;                                                 // 0x0030   (0x0050)  
};

/// Struct /Script/UdiniInputActor.UdiniInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FUdiniInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/UdiniInputActor.OutPutContext
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOutPutContext
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/UdiniInputActor.HoudiniPartData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FHoudiniPartData
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Enum /Script/UdiniInputActor.EUdiniTableType
/// Size: 0x08
enum EUdiniTableType : uint8_t
{
	EUdiniTableType__TYPE_Mat                                                        = 0,
	EUdiniTableType__TYPE_Staticmesh                                                 = 1,
	EUdiniTableType__TYPE_FoliageType                                                = 2,
	EUdiniTableType__TYPE_Pic                                                        = 3,
	EUdiniTableType__TYPE_Heigfield                                                  = 4,
	EUdiniTableType__TYPE_OtherUobject                                               = 5,
	EUdiniTableType__TYPE_Other                                                      = 6,
	EUdiniTableType__TYPE_MAX                                                        = 7
};

/// Enum /Script/UdiniInputActor.EUdiniPart
/// Size: 0x06
enum EUdiniPart : uint8_t
{
	EUdiniPart__Part_Mesh                                                            = 0,
	EUdiniPart__Part_Curve                                                           = 1,
	EUdiniPart__Part_Point                                                           = 2,
	EUdiniPart__Part_Curve_ReadOnly                                                  = 3,
	EUdiniPart__Part_Point_ReadOnly                                                  = 4,
	EUdiniPart__Part_MAX                                                             = 5
};

/// Enum /Script/UdiniInputActor.EUdiniAttributeClass
/// Size: 0x10
enum EUdiniAttributeClass : uint8_t
{
	EUdiniAttributeClass__Class_None                                                 = 0,
	EUdiniAttributeClass__Class_Core                                                 = 1,
	EUdiniAttributeClass__Class_CurvePrimAtt                                         = 2,
	EUdiniAttributeClass__Class_MeshPrimAtt                                          = 3,
	EUdiniAttributeClass__Class_MeshPointAtt                                         = 4,
	EUdiniAttributeClass__Class_MeshDetailAtt                                        = 5,
	EUdiniAttributeClass__Class_MeshControlAtt                                       = 6,
	EUdiniAttributeClass__Class_PolyLinePrimAtt                                      = 7,
	EUdiniAttributeClass__Class_PolyLinePointAtt                                     = 8,
	EUdiniAttributeClass__Class_MAX                                                  = 9
};

/// Enum /Script/UdiniInputActor.EUdiniAttributeType
/// Size: 0x13
enum EUdiniAttributeType : uint8_t
{
	EUdiniAttributeType__TYPE_STRING                                                 = 0,
	EUdiniAttributeType__TYPE_INT                                                    = 1,
	EUdiniAttributeType__TYPE_FLOAT                                                  = 2,
	EUdiniAttributeType__TYPE_VECTOR3                                                = 3,
	EUdiniAttributeType__TYPE_VECTOR4                                                = 4,
	EUdiniAttributeType__TYPE_VECTOR2                                                = 5,
	EUdiniAttributeType__TYPE_StringList                                             = 6,
	EUdiniAttributeType__TYPE_IntList                                                = 7,
	EUdiniAttributeType__TYPE_Tog                                                    = 8,
	EUdiniAttributeType__TYPE_Button                                                 = 9,
	EUdiniAttributeType__TYPE_CheckBox                                               = 10,
	EUdiniAttributeType__TYPE_UOBJECT                                                = 11,
	EUdiniAttributeType__TYPE_MAX                                                    = 12
};

/// Enum /Script/UdiniInputActor.EUdiniDataPartType
/// Size: 0x06
enum EUdiniDataPartType : uint8_t
{
	EUdiniDataPartType__Part_Point                                                   = 0,
	EUdiniDataPartType__Part_Mesh                                                    = 1,
	EUdiniDataPartType__Part_Polyline                                                = 2,
	EUdiniDataPartType__Part_Splineline                                              = 3,
	EUdiniDataPartType__Part_Volum                                                   = 4,
	EUdiniDataPartType__Part_Max                                                     = 5
};

/// Enum /Script/UdiniInputActor.EUdiniPartType
/// Size: 0x09
enum EUdiniPartType : uint8_t
{
	EUdiniPartType__Part_StaticmeshMesh                                              = 0,
	EUdiniPartType__Part_Instance                                                    = 1,
	EUdiniPartType__Part_InstanceForlage                                             = 2,
	EUdiniPartType__Part_HRISInstance                                                = 3,
	EUdiniPartType__Part_UobjectInstance                                             = 4,
	EUdiniPartType__Part_Image                                                       = 5,
	EUdiniPartType__Part_Landscape                                                   = 6,
	EUdiniPartType__Part_HLOD                                                        = 7,
	EUdiniPartType__Part_MAX                                                         = 8
};

