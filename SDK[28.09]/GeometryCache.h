/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCache.

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0040 (0x000028 - 0x000068)
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<UMaterialInterface*>                        Materials;                                                  // 0x0030   (0x0010)  
	TArray<UGeometryCacheTrack*>                       Tracks;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0060   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0064   (0x0004)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000228 - 0x000230)
class AGeometryCacheActor : public AActor
{ 
public:
	UGeometryCacheComponent*                           GeometryCacheComponent;                                     // 0x0228   (0x0008)  


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	UGeometryCacheComponent* GetGeometryCacheComponent();                                                                    // [0x17572e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UGeometryCacheCodecBase : public UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0008 (0x000038 - 0x000040)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0050 (0x000580 - 0x0005D0)
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	UGeometryCache*                                    GeometryCache;                                              // 0x0578   (0x0008)  
	bool                                               bRunning;                                                   // 0x0580   (0x0001)  
	bool                                               bLooping;                                                   // 0x0581   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0582   (0x0002)  MISSED
	float                                              StartTimeOffset;                                            // 0x0584   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x0588   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x058C   (0x0004)  
	float                                              ElapsedTime;                                                // 0x0590   (0x0004)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0594   (0x0030)  MISSED
	float                                              Duration;                                                   // 0x05C4   (0x0004)  
	bool                                               bManualTick;                                                // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x05C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x1757950] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	void Stop();                                                                                                             // [0x1757930] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x17578b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x1757830] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	void SetLooping(bool bNewLooping);                                                                                       // [0x17575a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	bool SetGeometryCache(UGeometryCache* NewGeomCache);                                                                     // [0x1757500] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	void PlayReversedFromEnd();                                                                                              // [0x17574e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	void PlayReversed();                                                                                                     // [0x17574c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	void PlayFromStart();                                                                                                    // [0x17574a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	void Play();                                                                                                             // [0x1757480] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	void Pause();                                                                                                            // [0x1757460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	bool IsPlayingReversed();                                                                                                // [0x1757430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	bool IsPlaying();                                                                                                        // [0x1757400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	bool IsLooping();                                                                                                        // [0x17573d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	float GetStartTimeOffset();                                                                                              // [0x17573a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	float GetPlaybackSpeed();                                                                                                // [0x1757370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	float GetPlaybackDirection();                                                                                            // [0x1757340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	int32_t GetNumberOfFrames();                                                                                             // [0x1757310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	float GetDuration();                                                                                                     // [0x17572b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	float GetAnimationTime();                                                                                                // [0x1757280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0030 (0x000028 - 0x000058)
class UGeometryCacheTrack : public UObject
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000058 - 0x000080)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x005C   (0x0024)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x1757030] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x0078 (0x000058 - 0x0000D0)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	UGeometryCacheCodecBase*                           Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_5[0x68];                                      // 0x0060   (0x0068)  MISSED
	float                                              StartSampleTime;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x00A8 (0x000058 - 0x000100)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0058   (0x00A8)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x00A8 (0x000058 - 0x000100)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0058   (0x00A8)  MISSED
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0000   (0x00A8)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

