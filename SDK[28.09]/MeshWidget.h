/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MeshWidget.

/// Class /Script/MeshWidget.MeshWidgetUWidget
/// Size: 0x0010 (0x000138 - 0x000148)
class UMeshWidgetUWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0138   (0x0010)  MISSED
};

/// Class /Script/MeshWidget.ParticleWidget
/// Size: 0x0040 (0x000148 - 0x000188)
class UParticleWidget : public UMeshWidgetUWidget
{ 
public:
	USlateVectorArtData*                               TrailMeshAsset;                                             // 0x0148   (0x0008)  
	int32_t                                            MaxParticleCount;                                           // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x0154   (0x0034)  MISSED
};

/// Class /Script/MeshWidget.MeshRectangleWidget
/// Size: 0x0028 (0x000148 - 0x000170)
class UMeshRectangleWidget : public UMeshWidgetUWidget
{ 
public:
	UMaterialInterface*                                BaseMaterial;                                               // 0x0148   (0x0008)  
	int32_t                                            NumFloat4PerInstance;                                       // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0154   (0x001C)  MISSED


	/// Functions
	// Function /Script/MeshWidget.MeshRectangleWidget.SetInstanceNum
	void SetInstanceNum(int32_t NewNum);                                                                                     // [0x15b05a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshWidget.MeshRectangleWidget.ModifyInstanceNum
	void ModifyInstanceNum(int32_t dNum);                                                                                    // [0x15b05a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshWidget.MeshRectangleWidget.InitUnitTestProvider
	void InitUnitTestProvider();                                                                                             // [0x8f2720] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MeshWidget.TextMeshWidget
/// Size: 0x0030 (0x000148 - 0x000178)
class UTextMeshWidget : public UMeshWidgetUWidget
{ 
public:
	UMaterialInterface*                                BaseMaterial;                                               // 0x0148   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0150   (0x0028)  MISSED
};

/// Class /Script/MeshWidget.ProgressBarMeshWidget
/// Size: 0x0030 (0x000148 - 0x000178)
class UProgressBarMeshWidget : public UMeshWidgetUWidget
{ 
public:
	UMaterialInterface*                                BaseMaterial;                                               // 0x0148   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0150   (0x0028)  MISSED
};

