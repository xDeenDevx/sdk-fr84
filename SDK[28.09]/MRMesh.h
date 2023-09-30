/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MRMesh.

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshReconstructorBase : public UObject
{ 
public:
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x000320 - 0x000390)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	FMulticastInlineDelegate                           OnMeshTrackerUpdated;                                       // 0x0318   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0328   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0329   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x032A   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x032B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0330   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0340   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0350   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0360   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0364   (0x0004)  MISSED
	UMRMeshComponent*                                  MRMesh;                                                     // 0x0368   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0370   (0x0020)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x2649560] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	void DisconnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                    // [0x30f3bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	void ConnectMRMesh(UMRMeshComponent* InMRMeshPtr);                                                                       // [0x30f3b10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x0080 (0x000540 - 0x0005C0)
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0540   (0x0008)  MISSED
	UMaterialInterface*                                Material;                                                   // 0x0548   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0550   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0551   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0552   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0553   (0x0005)  MISSED
	UBodySetup*                                        CachedBodySetup;                                            // 0x0558   (0x0008)  
	TArray<UBodySetup*>                                BodySetups;                                                 // 0x0560   (0x0010)  
	UMaterialInterface*                                WireframeMaterial;                                          // 0x0570   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0578   (0x0048)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	bool IsConnected();                                                                                                      // [0x30f3c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	void ForceNavMeshUpdate();                                                                                               // [0x30f3c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	void Clear();                                                                                                            // [0x30f3ae0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX                     = 3
};

