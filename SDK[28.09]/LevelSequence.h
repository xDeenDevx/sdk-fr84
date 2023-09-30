/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LevelSequence.

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x0150 (0x000348 - 0x000498)
class ULevelSequence : public UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0348   (0x0008)  
	FLevelSequenceObjectReferenceMap                   ObjectReferences;                                           // 0x0350   (0x0050)  
	FLevelSequenceBindingReferences                    BindingReferences;                                          // 0x03A0   (0x00A0)  
	TMap<FString, FLevelSequenceObject>                PossessedObjects;                                           // 0x0440   (0x0050)  
	UClass*                                            DirectorClass;                                              // 0x0490   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	void RemoveMetaDataByClass(UClass* InClass);                                                                             // [0x3690f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	UObject* FindOrAddMetaDataByClass(UClass* InClass);                                                                      // [0x3690890] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	UObject* FindMetaDataByClass(UClass* InClass);                                                                           // [0x3690890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	UObject* CopyMetaData(UObject* InMetaData);                                                                              // [0x3690890] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0090 (0x000228 - 0x0002B8)
class ALevelSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0228   (0x0010)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0238   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	ULevelSequencePlayer*                              SequencePlayer;                                             // 0x0250   (0x0008)  
	FSoftObjectPath                                    LevelSequence;                                              // 0x0258   (0x0018)  
	TArray<AActor*>                                    AdditionalEventReceivers;                                   // 0x0270   (0x0010)  
	FLevelSequenceCameraSettings                       CameraSettings;                                             // 0x0280   (0x0002)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0282   (0x0006)  MISSED
	ULevelSequenceBurnInOptions*                       BurnInOptions;                                              // 0x0288   (0x0008)  
	UMovieSceneBindingOverrides*                       BindingOverrides;                                           // 0x0290   (0x0008)  
	bool                                               bAutoPlay;                                                  // 0x0298:0 (0x0001)  
	bool                                               bOverrideInstanceData;                                      // 0x0298:1 (0x0001)  
	bool                                               bReplicatePlayback;                                         // 0x0298:2 (0x0001)  
	unsigned char                                      UnknownData03_4[0x7];                                       // 0x0299   (0x0007)  MISSED
	UObject*                                           DefaultInstanceData;                                        // 0x02A0   (0x0008)  
	ULevelSequenceBurnIn*                              BurnInInstance;                                             // 0x02A8   (0x0008)  
	bool                                               bShowBurnin;                                                // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x02B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	void ShowBurnin();                                                                                                       // [0x3691690] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	void SetSequence(ULevelSequence* InSequence);                                                                            // [0x3691600] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x3691570] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetEventReceivers
	void SetEventReceivers(TArray<AActor*> AdditionalReceivers);                                                             // [0x3691430] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                           // [0x3691200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x36910a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	void ResetBindings();                                                                                                    // [0x3691080] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x3690fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	void RemoveBindingByTag(FName Tag, AActor* Actor);                                                                       // [0x3690e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);                                                   // [0x3690d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	void OnLevelSequenceLoaded__DelegateSignature();                                                                         // [0x2649560] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.LoadSequence
	ULevelSequence* LoadSequence();                                                                                          // [0x3690d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	void HideBurnin();                                                                                                       // [0x3690d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	ULevelSequencePlayer* GetSequencePlayer();                                                                               // [0x3690cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	ULevelSequence* GetSequence();                                                                                           // [0x3690c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag);                                                         // [0x3690b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	FMovieSceneObjectBindingID FindNamedBinding(FName Tag);                                                                  // [0x3690a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);                                     // [0x3690780] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);                        // [0x3690630] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0048 (0x000028 - 0x000070)
class UDefaultLevelSequenceInstanceData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	AActor*                                            TransformOriginActor;                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         TransformOrigin;                                            // 0x0040   (0x0030)  
};

/// Class /Script/LevelSequence.LevelSequenceMetaData
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceMetaData : public UInterface
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceBurnInInitSettings : public UObject
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0028 (0x000028 - 0x000050)
class ULevelSequenceBurnInOptions : public UObject
{ 
public:
	bool                                               bUseBurnIn;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSoftClassPath                                     BurnInClass;                                                // 0x0030   (0x0018)  
	ULevelSequenceBurnInInitSettings*                  Settings;                                                   // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	void SetBurnIn(FSoftClassPath InBurnInClass);                                                                            // [0x3691330] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C0 (0x000260 - 0x000320)
class ULevelSequenceBurnIn : public UUserWidget
{ 
public:
	FLevelSequencePlayerSnapshot                       FrameInformation;                                           // 0x0260   (0x00B8)  
	ALevelSequenceActor*                               LevelSequenceActor;                                         // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	void SetSettings(UObject* InSettings);                                                                                   // [0x2649560] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	UClass* GetSettingsClass();                                                                                              // [0x3690ce0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0008 (0x000028 - 0x000030)
class ULevelSequenceDirector : public UObject
{ 
public:
	ULevelSequencePlayer*                              Player;                                                     // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	void OnCreated();                                                                                                        // [0x2649560] Event|Public|BlueprintEvent 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0118 (0x000888 - 0x0009A0)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	FMulticastInlineDelegate                           OnCameraCut;                                                // 0x0888   (0x0010)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x0898   (0x0108)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	UCameraComponent* GetActiveCameraComponent();                                                                            // [0x3690c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor); // [0x3690910] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x000228 - 0x000250)
class ALevelSequenceMediaController : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0228   (0x0008)  MISSED
	ALevelSequenceActor*                               Sequence;                                                   // 0x0230   (0x0008)  
	UMediaComponent*                                   MediaComponent;                                             // 0x0238   (0x0008)  
	float                                              ServerStartTimeSeconds;                                     // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0244   (0x000C)  MISSED


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	void SynchronizeToServer(float DesyncThresholdSeconds);                                                                  // [0x36916b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	void Play();                                                                                                             // [0x3690d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	void OnRep_ServerStartTimeSeconds();                                                                                     // [0x3690d50] Final|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	ALevelSequenceActor* GetSequence();                                                                                      // [0x3690c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	UMediaComponent* GetMediaComponent();                                                                                    // [0x35374a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FLevelSequenceCameraSettings
{ 
	bool                                               bOverrideAspectRatioAxisConstraint;                         // 0x0000   (0x0001)  
	TEnumAsByte<EAspectRatioAxisConstraint>            AspectRatioAxisConstraint;                                  // 0x0001   (0x0001)  
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
struct FBoundActorProxy
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FLevelSequenceBindingReferences
{ 
	TMap<FGuid, FLevelSequenceBindingReferenceArray>   BindingIdToReferences;                                      // 0x0000   (0x0050)  
	TSet<FGuid>                                        AnimSequenceInstances;                                      // 0x0050   (0x0050)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLevelSequenceBindingReferenceArray
{ 
	TArray<FLevelSequenceBindingReference>             References;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceBindingReference
{ 
	FString                                            PackageName;                                                // 0x0000   (0x0010)  
	FSoftObjectPath                                    ExternalObjectPath;                                         // 0x0010   (0x0018)  
	FString                                            ObjectPath;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLevelSequenceObjectReferenceMap
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
struct FLevelSequenceLegacyObjectReference
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLevelSequenceObject
{ 
	TLazyObjectPtr<UObject*>                           ObjectOrOwner;                                              // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0020   (0x0010)  
	TWeakObjectPtr<UObject*>                           CachedComponent;                                            // 0x0030   (0x0008)  
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FLevelSequencePlayerSnapshot
{ 
	FString                                            MasterName;                                                 // 0x0000   (0x0010)  
	FQualifiedFrameTime                                MasterTime;                                                 // 0x0010   (0x0010)  
	FQualifiedFrameTime                                SourceTime;                                                 // 0x0020   (0x0010)  
	FString                                            CurrentShotName;                                            // 0x0030   (0x0010)  
	FQualifiedFrameTime                                CurrentShotLocalTime;                                       // 0x0040   (0x0010)  
	FQualifiedFrameTime                                CurrentShotSourceTime;                                      // 0x0050   (0x0010)  
	FString                                            SourceTimecode;                                             // 0x0060   (0x0010)  
	TWeakObjectPtr<UCameraComponent*>                  CameraComponent;                                            // 0x0070   (0x0028)  
	FLevelSequenceSnapshotSettings                     Settings;                                                   // 0x0098   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	ULevelSequence*                                    ActiveShot;                                                 // 0x00A8   (0x0008)  
	FMovieSceneSequenceID                              ShotID;                                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FLevelSequenceSnapshotSettings
{ 
	char                                               ZeroPadAmount;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0004   (0x0008)  
};

