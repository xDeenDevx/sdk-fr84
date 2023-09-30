/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TemplateSequence.

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00A8 (0x000348 - 0x0003F0)
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	UMovieScene*                                       MovieScene;                                                 // 0x0348   (0x0008)  
	TWeakObjectPtr<UClass*>                            BoundActorClass;                                            // 0x0350   (0x0028)  
	TWeakObjectPtr<AActor*>                            BoundPreviewActor;                                          // 0x0378   (0x0028)  
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x03A0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0050 (0x000228 - 0x000278)
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0228   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0230   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	UTemplateSequencePlayer*                           SequencePlayer;                                             // 0x0248   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0250   (0x0018)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0268   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0274   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	void SetSequence(UTemplateSequence* InSequence);                                                                         // [0x17aee10] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	void SetBinding(AActor* Actor);                                                                                          // [0x17aed80] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	UTemplateSequence* LoadSequence();                                                                                       // [0x17aed50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	UTemplateSequencePlayer* GetSequencePlayer();                                                                            // [0x17aed20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	UTemplateSequence* GetSequence();                                                                                        // [0x17aecf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x000888 - 0x000890)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0888   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0000 (0x000158 - 0x000158)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x000068 - 0x000068)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<UObject*>                           Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceInstanceData
/// Size: 0x0018 (0x000008 - 0x000020)
struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData
{ 
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x0008   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0020   (0x0004)  
	FGuid                                              OuterBindingId;                                             // 0x0024   (0x0010)  
	FMovieSceneEvaluationOperand                       InnerOperand;                                               // 0x0034   (0x0014)  
};

