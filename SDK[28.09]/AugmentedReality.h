/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AugmentedReality.

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0028 (0x000030 - 0x000058)
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0030 (0x000058 - 0x000088)
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(UObject* WorldContextObject);                                           // [0x30ffda0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x0048 (0x000058 - 0x0000A0)
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	FMulticastInlineDelegate                           OnSuccess;                                                  // 0x0058   (0x0010)  
	FMulticastInlineDelegate                           OnFailed;                                                   // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0078   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent); // [0x30ffc70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0000 (0x000028 - 0x000028)
class UARLightEstimate : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0018 (0x000028 - 0x000040)
class UARBasicLightEstimate : public UARLightEstimate
{ 
public:
	float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	float GetAmbientIntensityLumens();                                                                                       // [0x3100c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	float GetAmbientColorTemperatureKelvin();                                                                                // [0x3100bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	FLinearColor GetAmbientColor();                                                                                          // [0x3100bb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0000 (0x000228 - 0x000228)
class AAROriginActor : public AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UARPin : public UObject
{ 
public:
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0028   (0x0008)  
	USceneComponent*                                   PinnedComponent;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1F];                                      // 0x00A1   (0x001F)  MISSED
	FMulticastInlineDelegate                           OnARTrackingStateChanged;                                   // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnARTransformUpdated;                                       // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00E0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	EARTrackingState GetTrackingState();                                                                                     // [0x3100f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	UARTrackedGeometry* GetTrackedGeometry();                                                                                // [0x31016e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	USceneComponent* GetPinnedComponent();                                                                                   // [0x21bad80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform();                                                                                   // [0x3101220] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform();                                                                                // [0x31010a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	FName GetDebugName();                                                                                                    // [0x3100e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	void DebugDraw(UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                                // [0x31001c0] Native|Public|HasOutParms|HasDefaults|Const 
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UARSessionConfig : public UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x0037   (0x0001)  
	EARSessionType                                     SessionType;                                                // 0x0038   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x0039   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x003A   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x003B   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x003C   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x003D   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x003E   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x003F   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x0040   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x0041   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0043   (0x0005)  MISSED
	TArray<UARCandidateImage*>                         CandidateImages;                                            // 0x0048   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)  
	TArray<UARCandidateObject*>                        CandidateObjects;                                           // 0x0070   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008C   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008D   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x008E   (0x0002)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0090   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	bool ShouldResetTrackedObjects();                                                                                        // [0x3102910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	bool ShouldResetCameraTracking();                                                                                        // [0x31028e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	bool ShouldRenderCameraOverlay();                                                                                        // [0x31028b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	bool ShouldEnableCameraTracking();                                                                                       // [0x3102880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	bool ShouldEnableAutoFocus();                                                                                            // [0x3102850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	void SetWorldMapData(TArray<char> WorldMapData);                                                                         // [0x3102760] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                              // [0x31026e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	void SetResetTrackedObjects(bool bNewValue);                                                                             // [0x3102650] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	void SetResetCameraTracking(bool bNewValue);                                                                             // [0x31025c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                              // [0x3102540] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                     // [0x31024c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	void SetEnableAutoFocus(bool bNewValue);                                                                                 // [0x3102430] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                    // [0x3102390] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0x31022e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	TArray<char> GetWorldMapData();                                                                                          // [0x3101870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	EARWorldAlignment GetWorldAlignment();                                                                                   // [0x3101840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	EARSessionType GetSessionType();                                                                                         // [0x169caa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	EARPlaneDetectionMode GetPlaneDetectionMode();                                                                           // [0x3101430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	int32_t GetMaxNumSimultaneousImagesTracked();                                                                            // [0x31013a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	EARLightEstimationMode GetLightEstimationMode();                                                                         // [0x3101070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	EARFrameSyncMode GetFrameSyncMode();                                                                                     // [0x3101040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                           // [0x3101010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	EARFaceTrackingDirection GetFaceTrackingDirection();                                                                     // [0x3100fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                         // [0x3100fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                            // [0x3100f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	FARVideoFormat GetDesiredVideoFormat();                                                                                  // [0x3100e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0x3100d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0x3100cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	void AddCandidateObject(UARCandidateObject* CandidateObject);                                                            // [0x30ffec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	void AddCandidateImage(UARCandidateImage* NewCandidateImage);                                                            // [0x30ffe30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x0068 (0x000310 - 0x000378)
class AARSharedWorldGameMode : public AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x0310   (0x0004)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x0314   (0x0064)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	void SetPreviewImageData(TArray<char> ImageData);                                                                        // [0x3107b80] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	void SetARWorldSharingIsReady();                                                                                         // [0x3107890] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	void SetARSharedWorldData(TArray<char> ARWorldData);                                                                     // [0x31077a0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	AARSharedWorldGameState* GetARSharedWorldGameState();                                                                    // [0x3106f40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0038 (0x000298 - 0x0002D0)
class AARSharedWorldGameState : public AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0298   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x02A8   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x02B8   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x02BC   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x02C0   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	void K2_OnARWorldMapIsReady();                                                                                           // [0x2649560] Event|Public|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0008 (0x0005A8 - 0x0005B0)
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x05A8   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x0010 (0x000238 - 0x000248)
class AARSkyLight : public ASkyLight
{ 
public:
	UAREnvironmentCaptureProbe*                        CaptureProbe;                                               // 0x0238   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0240   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);                                             // [0x3107a00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UARTexture : public UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x00BC   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x00C0   (0x0010)  
	FVector2D                                          Size;                                                       // 0x00D0   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UARTextureCameraImage : public UARTexture
{ 
public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UARTextureCameraDepth : public UARTexture
{ 
public:
	EARDepthQuality                                    DepthQuality;                                               // 0x00D8   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x00D9   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00DB   (0x0005)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0020 (0x000110 - 0x000130)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x0114   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0118   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0128   (0x0008)  
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTraceResultDummy : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UARTrackedGeometry : public UObject
{ 
public:
	FGuid                                              UniqueId;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0030)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x0070   (0x0030)  
	EARTrackingState                                   TrackingState;                                              // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x00A1   (0x000F)  MISSED
	UMRMeshComponent*                                  UnderlyingMesh;                                             // 0x00B0   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x17];                                      // 0x00B9   (0x0017)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	bool IsTracked();                                                                                                        // [0x3107720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	UMRMeshComponent* GetUnderlyingMesh();                                                                                   // [0x3107630] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	EARTrackingState GetTrackingState();                                                                                     // [0x3100f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	EARObjectClassification GetObjectClassification();                                                                       // [0x3107540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	FTransform GetLocalToWorldTransform();                                                                                   // [0x31074e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	FTransform GetLocalToTrackingTransform();                                                                                // [0x31010a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	float GetLastUpdateTimestamp();                                                                                          // [0x3107410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	int32_t GetLastUpdateFrameNumber();                                                                                      // [0x31073e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	FName GetDebugName();                                                                                                    // [0x3107240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                Orientation;                                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FVector                                            Center;                                                     // 0x00EC   (0x000C)  
	FVector                                            Extent;                                                     // 0x00F8   (0x000C)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0104   (0x0014)  MISSED
	UARPlaneGeometry*                                  SubsumedBy;                                                 // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	UARPlaneGeometry* GetSubsumedBy();                                                                                       // [0x31075e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	EARPlaneOrientation GetOrientation();                                                                                    // [0x3107580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	FVector GetExtent();                                                                                                     // [0x3107350] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	FVector GetCenter();                                                                                                     // [0x3107210] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0x31070d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
	UARCandidateImage*                                 DetectedImage;                                              // 0x00E8   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	FVector2D GetEstimateSize();                                                                                             // [0x31072d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	UARCandidateImage* GetDetectedImage();                                                                                   // [0x3107280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0010 (0x000100 - 0x000110)
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
	FString                                            QRCode;                                                     // 0x00F8   (0x0010)  
	int32_t                                            Version;                                                    // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x00F0 (0x0000F0 - 0x0001E0)
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x00E8   (0x000C)  
	bool                                               bIsTracked;                                                 // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                                // 0x00F8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x0148   (0x0098)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                        // [0x3107660] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                        // [0x3107440] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                                  // [0x3106f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0x3107000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	UAREnvironmentCaptureProbeTexture*                 EnvironmentCaptureTexture;                                  // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	FVector GetExtent();                                                                                                     // [0x3107310] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                                       // [0x31072a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UARTrackedObject : public UARTrackedGeometry
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	UARCandidateObject* GetDetectedObject();                                                                                 // [0x3107280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x0050 (0x0000F0 - 0x000140)
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x0150 (0x0000B0 - 0x000200)
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnAddTrackedGeometry;                                       // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedGeometry;                                    // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedGeometry;                                    // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPlane;                                          // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPlane;                                       // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPlane;                                       // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedPoint;                                          // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedPoint;                                       // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedPoint;                                       // 0x0130   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedImage;                                          // 0x0140   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedImage;                                       // 0x0150   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedImage;                                       // 0x0160   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedFace;                                           // 0x0170   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedFace;                                        // 0x0180   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedFace;                                        // 0x0190   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedEnvProbe;                                       // 0x01A0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedEnvProbe;                                    // 0x01B0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedEnvProbe;                                    // 0x01C0   (0x0010)  
	FMulticastInlineDelegate                           OnAddTrackedObject;                                         // 0x01D0   (0x0010)  
	FMulticastInlineDelegate                           OnUpdateTrackedObject;                                      // 0x01E0   (0x0010)  
	FMulticastInlineDelegate                           OnRemoveTrackedObject;                                      // 0x01F0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0000 (0x000028 - 0x000028)
class UARTypesDummyClass : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0028 (0x000030 - 0x000058)
class UARCandidateImage : public UDataAsset
{ 
public:
	UTexture2D*                                        CandidateTexture;                                           // 0x0030   (0x0008)  
	FString                                            FriendlyName;                                               // 0x0038   (0x0010)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              Height;                                                     // 0x004C   (0x0004)  
	EARCandidateImageOrientation                       Orientation;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	float GetPhysicalWidth();                                                                                                // [0x31075c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	float GetPhysicalHeight();                                                                                               // [0x31075a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	EARCandidateImageOrientation GetOrientation();                                                                           // [0x3107560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	FString GetFriendlyName();                                                                                               // [0x3107380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	UTexture2D* GetCandidateTexture();                                                                                       // [0x31071f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0040 (0x000030 - 0x000070)
class UARCandidateObject : public UDataAsset
{ 
public:
	TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)  
	FString                                            FriendlyName;                                               // 0x0040   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0050   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	void SetFriendlyName(FString NewName);                                                                                   // [0x3107a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                            // [0x3107950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	void SetBoundingBox(FBox& InBoundingBox);                                                                                // [0x31078b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	FString GetFriendlyName();                                                                                               // [0x31073b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	TArray<char> GetCandidateObjectData();                                                                                   // [0x31071c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	FBox GetBoundingBox();                                                                                                   // [0x3107190] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0060 (0x000000 - 0x000060)
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0010   (0x0030)  
	UARTrackedGeometry*                                TrackedGeometry;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (0x000000 - 0x000050)
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (0x000000 - 0x000048)
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (0x000000 - 0x00000C)
struct FARVideoFormat
{ 
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (0x000000 - 0x000018)
struct FARSessionStatus
{ 
	FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)  
	EARSessionStatus                                   status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x05
enum EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3,
	EARTrackingState__EARTrackingState_MAX                                           = 4
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x05
enum EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX                         = 4
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x03
enum EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX                                 = 2
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x04
enum EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX               = 3
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x03
enum EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX                                           = 2
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x04
enum EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX                               = 3
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x04
enum EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX                                 = 3
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x08
enum EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__EARSessionType_MAX                                               = 7
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x04
enum EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2,
	EARWorldAlignment__EARWorldAlignment_MAX                                         = 3
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x04
enum EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX                                           = 3
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x04
enum EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2,
	EARDepthQuality__EARDepthQuality_MAX                                             = 3
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x04
enum EARTextureType : uint8_t
{
	EARTextureType__CameraImage                                                      = 0,
	EARTextureType__CameraDepth                                                      = 1,
	EARTextureType__EnvironmentCapture                                               = 2,
	EARTextureType__EARTextureType_MAX                                               = 3
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x03
enum EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1,
	EAREye__EAREye_MAX                                                               = 2
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x62
enum EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60,
	EARFaceBlendShape__MAX                                                           = 61
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x03
enum EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX                           = 2
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x03
enum EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX                   = 2
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x03
enum EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX                               = 2
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x13
enum EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__EARObjectClassification_MAX                             = 12
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x04
enum EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX                                     = 3
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x05
enum EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3,
	EARWorldMappingState__EARWorldMappingState_MAX                                   = 4
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x08
enum EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6,
	EARSessionStatus__EARSessionStatus_MAX                                           = 7
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x06
enum EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX                           = 5
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x04
enum EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2,
	EARTrackingQuality__EARTrackingQuality_MAX                                       = 3
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x06
enum EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8,
	EARLineTraceChannels__EARLineTraceChannels_MAX                                   = 9
};

