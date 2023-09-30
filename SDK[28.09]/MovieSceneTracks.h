/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieSceneTracks.

/// Class /Script/MovieSceneTracks.MovieSceneSpawnTrack
/// Size: 0x0020 (0x000058 - 0x000078)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0058   (0x0010)  
	FGuid                                              ObjectGuid;                                                 // 0x0068   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSection
/// Size: 0x0060 (0x0000E0 - 0x000140)
class UMovieSceneParameterSection : public UMovieSceneSection
{ 
public:
	TArray<FBoolParameterNameAndCurve>                 BoolParameterNamesAndCurves;                                // 0x00E0   (0x0010)  
	TArray<FScalarParameterNameAndCurve>               ScalarParameterNamesAndCurves;                              // 0x00F0   (0x0010)  
	TArray<FVector2DParameterNameAndCurves>            Vector2DParameterNamesAndCurves;                            // 0x0100   (0x0010)  
	TArray<FVectorParameterNameAndCurves>              VectorParameterNamesAndCurves;                              // 0x0110   (0x0010)  
	TArray<FColorParameterNameAndCurves>               ColorParameterNamesAndCurves;                               // 0x0120   (0x0010)  
	TArray<FTransformParameterNameAndCurves>           TransformParameterNamesAndCurves;                           // 0x0130   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyTrack
/// Size: 0x0030 (0x000058 - 0x000088)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{ 
public:
	UMovieSceneSection*                                SectionToKey;                                               // 0x0058   (0x0008)  
	FName                                              PropertyName;                                               // 0x0060   (0x0008)  
	FString                                            PropertyPath;                                               // 0x0068   (0x0010)  
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0078   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOrigin
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTransformOrigin : public UInterface
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintSection
/// Size: 0x0028 (0x0000E0 - 0x000108)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{ 
public:
	FGuid                                              ConstraintId;                                               // 0x00E0   (0x0010)  
	FMovieSceneObjectBindingID                         ConstraintBindingID;                                        // 0x00F0   (0x0018)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	void SetConstraintBindingID(FMovieSceneObjectBindingID& InConstraintBindingID);                                          // [0x3452d60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
	FMovieSceneObjectBindingID GetConstraintBindingID();                                                                     // [0x3452ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachSection
/// Size: 0x0018 (0x000108 - 0x000120)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{ 
public:
	FName                                              AttachSocketName;                                           // 0x0108   (0x0008)  
	FName                                              AttachComponentName;                                        // 0x0110   (0x0008)  
	EAttachmentRule                                    AttachmentLocationRule;                                     // 0x0118   (0x0001)  
	EAttachmentRule                                    AttachmentRotationRule;                                     // 0x0119   (0x0001)  
	EAttachmentRule                                    AttachmentScaleRule;                                        // 0x011A   (0x0001)  
	EDetachmentRule                                    DetachmentLocationRule;                                     // 0x011B   (0x0001)  
	EDetachmentRule                                    DetachmentRotationRule;                                     // 0x011C   (0x0001)  
	EDetachmentRule                                    DetachmentScaleRule;                                        // 0x011D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x011E   (0x0002)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{ 
public:
	TArray<UMovieSceneSection*>                        ConstraintSections;                                         // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachTrack
/// Size: 0x0000 (0x000068 - 0x000068)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathSection
/// Size: 0x00A8 (0x000108 - 0x0001B0)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{ 
public:
	FMovieSceneFloatChannel                            TimingCurve;                                                // 0x0108   (0x00A0)  
	MovieScene3DPathSection_Axis                       FrontAxisEnum;                                              // 0x01A8   (0x0001)  
	MovieScene3DPathSection_Axis                       UpAxisEnum;                                                 // 0x01A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01AA   (0x0002)  MISSED
	bool                                               bFollow;                                                    // 0x01AC:0 (0x0001)  
	bool                                               bReverse;                                                   // 0x01AC:1 (0x0001)  
	bool                                               bForceUpright;                                              // 0x01AC:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathTrack
/// Size: 0x0000 (0x000068 - 0x000068)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSection
/// Size: 0x0650 (0x0000E0 - 0x000730)
class UMovieScene3DTransformSection : public UMovieSceneSection
{ 
public:
	FMovieSceneTransformMask                           TransformMask;                                              // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x00E8   (0x01E0)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x02C8   (0x01E0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x04A8   (0x01E0)  
	FMovieSceneFloatChannel                            ManualWeight;                                               // 0x0688   (0x00A0)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0728   (0x0004)  MISSED
	bool                                               bUseQuaternionInterpolation;                                // 0x072C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x072D   (0x0003)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection
/// Size: 0x0140 (0x0000E0 - 0x000220)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{ 
public:
	FMovieSceneActorReferenceData                      ActorReferenceData;                                         // 0x00E0   (0x00B0)  
	FIntegralCurve                                     ActorGuidIndexCurve;                                        // 0x0190   (0x0080)  
	TArray<FString>                                    ActorGuidStrings;                                           // 0x0210   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSection
/// Size: 0x0250 (0x0000E0 - 0x000330)
class UMovieSceneAudioSection : public UMovieSceneSection
{ 
public:
	USoundBase*                                        Sound;                                                      // 0x00E0   (0x0008)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x00E8   (0x0004)  
	float                                              StartOffset;                                                // 0x00EC   (0x0004)  
	float                                              AudioStartTime;                                             // 0x00F0   (0x0004)  
	float                                              AudioDilationFactor;                                        // 0x00F4   (0x0004)  
	float                                              AudioVolume;                                                // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            SoundVolume;                                                // 0x0100   (0x00A0)  
	FMovieSceneFloatChannel                            PitchMultiplier;                                            // 0x01A0   (0x00A0)  
	FMovieSceneActorReferenceData                      AttachActorData;                                            // 0x0240   (0x00B0)  
	bool                                               bSuppressSubtitles;                                         // 0x02F0   (0x0001)  
	bool                                               bOverrideAttenuation;                                       // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x02F2   (0x0006)  MISSED
	USoundAttenuation*                                 AttenuationSettings;                                        // 0x02F8   (0x0008)  
	FDelegateProperty                                  OnQueueSubtitles;                                           // 0x0300   (0x0010)  
	FMulticastInlineDelegate                           OnAudioFinished;                                            // 0x0310   (0x0010)  
	FMulticastInlineDelegate                           OnAudioPlaybackPercent;                                     // 0x0320   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	void SetStartOffset(FFrameNumber InStartOffset);                                                                         // [0x3452eb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.SetSound
	void SetSound(USoundBase* InSound);                                                                                      // [0x3452e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	FFrameNumber GetStartOffset();                                                                                           // [0x3452d40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneAudioSection.GetSound
	USoundBase* GetSound();                                                                                                  // [0x3452d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        AudioSections;                                              // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolSection
/// Size: 0x0098 (0x0000E0 - 0x000178)
class UMovieSceneBoolSection : public UMovieSceneSection
{ 
public:
	bool                                               DefaultValue;                                               // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FMovieSceneBoolChannel                             BoolCurve;                                                  // 0x00E8   (0x0090)  
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneByteSection
/// Size: 0x0098 (0x0000E0 - 0x000178)
class UMovieSceneByteSection : public UMovieSceneSection
{ 
public:
	FMovieSceneByteChannel                             ByteCurve;                                                  // 0x00E0   (0x0098)  
};

/// Class /Script/MovieSceneTracks.MovieSceneByteTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{ 
public:
	UEnum*                                             Enum;                                                       // 0x0088   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraAnimSection
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{ 
public:
	FMovieSceneCameraAnimSectionData                   AnimData;                                                   // 0x00E0   (0x0020)  
	UCameraAnim*                                       CameraAnim;                                                 // 0x0100   (0x0008)  
	float                                              PlayRate;                                                   // 0x0108   (0x0004)  
	float                                              PlayScale;                                                  // 0x010C   (0x0004)  
	float                                              BlendInTime;                                                // 0x0110   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0114   (0x0004)  
	bool                                               bLooping;                                                   // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraAnimTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        CameraAnimSections;                                         // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutSection
/// Size: 0x0028 (0x0000E0 - 0x000108)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{ 
public:
	FGuid                                              CameraGuid;                                                 // 0x00E0   (0x0010)  
	FMovieSceneObjectBindingID                         CameraBindingID;                                            // 0x00F0   (0x0018)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	void SetCameraBindingID(FMovieSceneObjectBindingID& InCameraBindingID);                                                  // [0x3452d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
	FMovieSceneObjectBindingID GetCameraBindingID();                                                                         // [0x3452ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack
/// Size: 0x0018 (0x000058 - 0x000070)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{ 
public:
	bool                                               bCanBlend;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0060   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{ 
public:
	FMovieSceneCameraShakeSectionData                  ShakeData;                                                  // 0x00E0   (0x0020)  
	UClass*                                            ShakeClass;                                                 // 0x0100   (0x0008)  
	float                                              PlayScale;                                                  // 0x0108   (0x0004)  
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                  // 0x010C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x010D   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0110   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        CameraShakeSections;                                        // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
/// Size: 0x0028 (0x000158 - 0x000180)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{ 
public:
	FString                                            ShotDisplayName;                                            // 0x0158   (0x0010)  
	FText                                              DisplayName;                                                // 0x0168   (0x0018)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	void SetShotDisplayName(FString InShotDisplayName);                                                                      // [0x3458fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
	FString GetShotDisplayName();                                                                                            // [0x3458e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack
/// Size: 0x0000 (0x000068 - 0x000068)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorSection
/// Size: 0x0280 (0x0000E0 - 0x000360)
class UMovieSceneColorSection : public UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            RedCurve;                                                   // 0x00E0   (0x00A0)  
	FMovieSceneFloatChannel                            GreenCurve;                                                 // 0x0180   (0x00A0)  
	FMovieSceneFloatChannel                            BlueCurve;                                                  // 0x0220   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaCurve;                                                 // 0x02C0   (0x00A0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneColorTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{ 
public:
	bool                                               bIsSlateColor;                                              // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumSection
/// Size: 0x0098 (0x0000E0 - 0x000178)
class UMovieSceneEnumSection : public UMovieSceneSection
{ 
public:
	FMovieSceneByteChannel                             EnumCurve;                                                  // 0x00E0   (0x0098)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{ 
public:
	UEnum*                                             Enum;                                                       // 0x0088   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSectionBase
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneEventSectionBase : public UMovieSceneSection
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventRepeaterSection
/// Size: 0x0028 (0x0000E0 - 0x000108)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{ 
public:
	FMovieSceneEvent                                   Event;                                                      // 0x00E0   (0x0028)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSection
/// Size: 0x0100 (0x0000E0 - 0x0001E0)
class UMovieSceneEventSection : public UMovieSceneSection
{ 
public:
	FNameCurve                                         Events;                                                     // 0x00E0   (0x0078)  
	FMovieSceneEventSectionData                        EventData;                                                  // 0x0158   (0x0088)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTrack
/// Size: 0x0028 (0x000058 - 0x000080)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{ 
public:
	bool                                               bFireEventsWhenForwards;                                    // 0x0058:0 (0x0001)  
	bool                                               bFireEventsWhenBackwards;                                   // 0x0058:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0059   (0x0003)  MISSED
	EFireEventsAtPosition                              EventPosition;                                              // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<FMovieSceneObjectBindingID>                 EventReceivers;                                             // 0x0060   (0x0010)  
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTriggerSection
/// Size: 0x0088 (0x0000E0 - 0x000168)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{ 
public:
	FMovieSceneEventChannel                            EventChannel;                                               // 0x00E0   (0x0088)  
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatSection
/// Size: 0x00A0 (0x0000E0 - 0x000180)
class UMovieSceneFloatSection : public UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            FloatCurve;                                                 // 0x00E0   (0x00A0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSection
/// Size: 0x0018 (0x000180 - 0x000198)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{ 
public:
	FLinearColor                                       FadeColor;                                                  // 0x0180   (0x0010)  
	bool                                               bFadeAudio;                                                 // 0x0190:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerSection
/// Size: 0x0090 (0x0000E0 - 0x000170)
class UMovieSceneIntegerSection : public UMovieSceneSection
{ 
public:
	FMovieSceneIntegerChannel                          IntegerCurve;                                               // 0x00E0   (0x0090)  
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
/// Size: 0x0018 (0x0000E0 - 0x0000F8)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{ 
public:
	ELevelVisibility                                   Visibility;                                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	TArray<FName>                                      LevelNames;                                                 // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	void SetVisibility(ELevelVisibility InVisibility);                                                                       // [0x34590d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	void SetLevelNames(TArray<FName>& InLevelNames);                                                                         // [0x3458f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	ELevelVisibility GetVisibility();                                                                                        // [0x3458ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
	TArray<FName> GetLevelNames();                                                                                           // [0x3458e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
/// Size: 0x0008 (0x000068 - 0x000070)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{ 
public:
	UMaterialParameterCollection*                      MPC;                                                        // 0x0068   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
/// Size: 0x0008 (0x000068 - 0x000070)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{ 
public:
	int32_t                                            MaterialIndex;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertySection
/// Size: 0x00C0 (0x0000E0 - 0x0001A0)
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{ 
public:
	FMovieSceneObjectPathChannel                       ObjectChannel;                                              // 0x00E0   (0x00C0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{ 
public:
	UClass*                                            PropertyClass;                                              // 0x0088   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleSection
/// Size: 0x0098 (0x0000E0 - 0x000178)
class UMovieSceneParticleSection : public UMovieSceneSection
{ 
public:
	FMovieSceneParticleChannel                         ParticleKeys;                                               // 0x00E0   (0x0098)  
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleTrack
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        ParticleSections;                                           // 0x0058   (0x0010)  
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection
/// Size: 0x00C0 (0x0000E0 - 0x0001A0)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{ 
public:
	FMovieSceneObjectPathChannel                       MaterialChannel;                                            // 0x00E0   (0x00C0)  
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{ 
public:
	int32_t                                            MaterialIndex;                                              // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
/// Size: 0x0100 (0x0000E0 - 0x0001E0)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{ 
public:
	FMovieSceneSkeletalAnimationParams                 Params;                                                     // 0x00E0   (0x00D8)  
	UAnimSequence*                                     AnimSequence;                                               // 0x01B8   (0x0008)  
	UAnimSequenceBase*                                 Animation;                                                  // 0x01C0   (0x0008)  
	float                                              StartOffset;                                                // 0x01C8   (0x0004)  
	float                                              EndOffset;                                                  // 0x01CC   (0x0004)  
	float                                              PlayRate;                                                   // 0x01D0   (0x0004)  
	bool                                               bReverse;                                                   // 0x01D4:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x01D5   (0x0003)  MISSED
	FName                                              SlotName;                                                   // 0x01D8   (0x0008)  
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
/// Size: 0x0018 (0x000058 - 0x000070)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<UMovieSceneSection*>                        AnimationSections;                                          // 0x0058   (0x0010)  
	bool                                               bUseLegacySectionIndexBlend;                                // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoSection
/// Size: 0x0000 (0x000180 - 0x000180)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSpawnSection
/// Size: 0x0000 (0x000178 - 0x000178)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneStringSection
/// Size: 0x00A0 (0x0000E0 - 0x000180)
class UMovieSceneStringSection : public UMovieSceneSection
{ 
public:
	FMovieSceneStringChannel                           StringCurve;                                                // 0x00E0   (0x00A0)  
};

/// Class /Script/MovieSceneTracks.MovieSceneStringTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/MovieSceneTracks.MovieSceneVectorSection
/// Size: 0x0288 (0x0000E0 - 0x000368)
class UMovieSceneVectorSection : public UMovieSceneSection
{ 
public:
	FMovieSceneFloatChannel                            Curves;                                                     // 0x00E0   (0x0280)  
	int32_t                                            ChannelsUsed;                                               // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0364   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneVectorTrack
/// Size: 0x0008 (0x000088 - 0x000090)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{ 
public:
	int32_t                                            NumChannelsUsed;                                            // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack
/// Size: 0x0000 (0x000088 - 0x000088)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{ 
public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneSpawnSectionTemplate
/// Size: 0x0090 (0x000020 - 0x0000B0)
struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneBoolChannel                             Curve;                                                      // 0x0020   (0x0090)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
/// Size: 0x0060 (0x000020 - 0x000080)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	TArray<FScalarParameterNameAndCurve>               Scalars;                                                    // 0x0020   (0x0010)  
	TArray<FBoolParameterNameAndCurve>                 Bools;                                                      // 0x0030   (0x0010)  
	TArray<FVector2DParameterNameAndCurves>            Vector2Ds;                                                  // 0x0040   (0x0010)  
	TArray<FVectorParameterNameAndCurves>              Vectors;                                                    // 0x0050   (0x0010)  
	TArray<FColorParameterNameAndCurves>               Colors;                                                     // 0x0060   (0x0010)  
	TArray<FTransformParameterNameAndCurves>           Transforms;                                                 // 0x0070   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.TransformParameterNameAndCurves
/// Size: 0x05A8 (0x000000 - 0x0005A8)
struct FTransformParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            Translation;                                                // 0x0008   (0x01E0)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x01E8   (0x01E0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x03C8   (0x01E0)  
};

/// Struct /Script/MovieSceneTracks.ColorParameterNameAndCurves
/// Size: 0x0288 (0x000000 - 0x000288)
struct FColorParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            RedCurve;                                                   // 0x0008   (0x00A0)  
	FMovieSceneFloatChannel                            GreenCurve;                                                 // 0x00A8   (0x00A0)  
	FMovieSceneFloatChannel                            BlueCurve;                                                  // 0x0148   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaCurve;                                                 // 0x01E8   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.VectorParameterNameAndCurves
/// Size: 0x01E8 (0x000000 - 0x0001E8)
struct FVectorParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            XCurve;                                                     // 0x0008   (0x00A0)  
	FMovieSceneFloatChannel                            YCurve;                                                     // 0x00A8   (0x00A0)  
	FMovieSceneFloatChannel                            ZCurve;                                                     // 0x0148   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.Vector2DParameterNameAndCurves
/// Size: 0x0148 (0x000000 - 0x000148)
struct FVector2DParameterNameAndCurves
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            XCurve;                                                     // 0x0008   (0x00A0)  
	FMovieSceneFloatChannel                            YCurve;                                                     // 0x00A8   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.BoolParameterNameAndCurve
/// Size: 0x0098 (0x000000 - 0x000098)
struct FBoolParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneBoolChannel                             ParameterCurve;                                             // 0x0008   (0x0090)  
};

/// Struct /Script/MovieSceneTracks.ScalarParameterNameAndCurve
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FScalarParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneFloatChannel                            ParameterCurve;                                             // 0x0008   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.MovieScene3DAttachSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneObjectBindingID                         AttachBindingID;                                            // 0x0020   (0x0018)  
	FName                                              AttachSocketName;                                           // 0x0038   (0x0008)  
	FName                                              AttachComponentName;                                        // 0x0040   (0x0008)  
	EAttachmentRule                                    AttachmentLocationRule;                                     // 0x0048   (0x0001)  
	EAttachmentRule                                    AttachmentRotationRule;                                     // 0x0049   (0x0001)  
	EAttachmentRule                                    AttachmentScaleRule;                                        // 0x004A   (0x0001)  
	EDetachmentRule                                    DetachmentLocationRule;                                     // 0x004B   (0x0001)  
	EDetachmentRule                                    DetachmentRotationRule;                                     // 0x004C   (0x0001)  
	EDetachmentRule                                    DetachmentScaleRule;                                        // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
/// Size: 0x00C0 (0x000020 - 0x0000E0)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneObjectBindingID                         PathBindingID;                                              // 0x0020   (0x0018)  
	FMovieSceneFloatChannel                            TimingCurve;                                                // 0x0038   (0x00A0)  
	MovieScene3DPathSection_Axis                       FrontAxisEnum;                                              // 0x00D8   (0x0001)  
	MovieScene3DPathSection_Axis                       UpAxisEnum;                                                 // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00DA   (0x0002)  MISSED
	bool                                               bFollow;                                                    // 0x00DC:0 (0x0001)  
	bool                                               bReverse;                                                   // 0x00DC:1 (0x0001)  
	bool                                               bForceUpright;                                              // 0x00DC:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieSceneTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
/// Size: 0x0040 (0x000008 - 0x000048)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0014   (0x000C)  
	FVector                                            Scale;                                                      // 0x0020   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x002C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Scale;                                                      // 0x0008   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct
{ 
	FRotator                                           Rotation;                                                   // 0x0008   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FFrameNumber                                       Time;                                                       // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
/// Size: 0x0650 (0x000020 - 0x000670)
struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieScene3DTransformTemplateData                 TemplateData;                                               // 0x0020   (0x0650)  
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformTemplateData
/// Size: 0x0650 (0x000000 - 0x000650)
struct FMovieScene3DTransformTemplateData
{ 
	FMovieSceneFloatChannel                            TranslationCurve;                                           // 0x0000   (0x01E0)  
	FMovieSceneFloatChannel                            RotationCurve;                                              // 0x01E0   (0x01E0)  
	FMovieSceneFloatChannel                            ScaleCurve;                                                 // 0x03C0   (0x01E0)  
	FMovieSceneFloatChannel                            ManualWeight;                                               // 0x05A0   (0x00A0)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x0640   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0641   (0x0003)  MISSED
	FMovieSceneTransformMask                           Mask;                                                       // 0x0644   (0x0004)  
	bool                                               bUseQuaternionInterpolation;                                // 0x0648   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0649   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceData
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_5[0x28];                                      // 0x0018   (0x0028)  MISSED
	TArray<FMovieSceneActorReferenceKey>               KeyValues;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0050   (0x0060)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceKey
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneActorReferenceKey
{ 
	FMovieSceneObjectBindingID                         Object;                                                     // 0x0000   (0x0018)  
	FName                                              ComponentName;                                              // 0x0018   (0x0008)  
	FName                                              SocketName;                                                 // 0x0020   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
/// Size: 0x00D8 (0x000020 - 0x0000F8)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieScenePropertySectionData                     PropertyData;                                               // 0x0020   (0x0028)  
	FMovieSceneActorReferenceData                      ActorReferenceData;                                         // 0x0048   (0x00B0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate
{ 
	UMovieSceneAudioSection*                           AudioSection;                                               // 0x0020   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneCameraAnimSectionData
{ 
	UCameraAnim*                                       CameraAnim;                                                 // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              PlayScale;                                                  // 0x000C   (0x0004)  
	float                                              BlendInTime;                                                // 0x0010   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0014   (0x0004)  
	bool                                               bLooping;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{ 
	FMovieSceneCameraShakeSectionData                  SourceData;                                                 // 0x0020   (0x0020)  
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneCameraShakeSectionData
{ 
	UClass*                                            ShakeClass;                                                 // 0x0000   (0x0008)  
	float                                              PlayScale;                                                  // 0x0008   (0x0004)  
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FRotator                                           UserDefinedPlaySpace;                                       // 0x0010   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate
{ 
	FMovieSceneCameraAnimSectionData                   SourceData;                                                 // 0x0020   (0x0020)  
	FFrameNumber                                       SectionStartTime;                                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraCutSectionTemplate
/// Size: 0x0060 (0x000020 - 0x000080)
struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneObjectBindingID                         CameraBindingID;                                            // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         CutTransform;                                               // 0x0040   (0x0030)  
	bool                                               bHasCutTransform;                                           // 0x0070   (0x0001)  
	bool                                               bIsFinalSection;                                            // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0072   (0x000E)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorKeyStruct
/// Size: 0x0030 (0x000008 - 0x000038)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct
{ 
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	FFrameNumber                                       Time;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x001C   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorSectionTemplate
/// Size: 0x0288 (0x000048 - 0x0002D0)
struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            Curves;                                                     // 0x0048   (0x0280)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02C9   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEvent
{ 
	FMovieSceneEventPtrs                               Ptrs;                                                       // 0x0000   (0x0028)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPtrs
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEventPtrs
{ 
	UFunction*                                         Function;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPayloadVariable
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneEventPayloadVariable
{ 
	FString                                            Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventChannel
/// Size: 0x0080 (0x000008 - 0x000088)
struct FMovieSceneEventChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0008   (0x0010)  
	TArray<FMovieSceneEvent>                           KeyValues;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionData
/// Size: 0x0080 (0x000008 - 0x000088)
struct FMovieSceneEventSectionData : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0008   (0x0010)  
	TArray<FEventPayload>                              KeyValues;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Struct /Script/MovieSceneTracks.EventPayload
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEventPayload
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
	FMovieSceneEventParameters                         Parameters;                                                 // 0x0008   (0x0028)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventParameters
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMovieSceneEventParameters
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventTemplateBase
/// Size: 0x0018 (0x000020 - 0x000038)
struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate
{ 
	TArray<FMovieSceneObjectBindingID>                 EventReceivers;                                             // 0x0020   (0x0010)  
	bool                                               bFireEventsWhenForwards;                                    // 0x0030:0 (0x0001)  
	bool                                               bFireEventsWhenBackwards;                                   // 0x0030:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventRepeaterTemplate
/// Size: 0x0028 (0x000038 - 0x000060)
struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase
{ 
	FMovieSceneEventPtrs                               EventToTrigger;                                             // 0x0038   (0x0028)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventTriggerTemplate
/// Size: 0x0020 (0x000038 - 0x000058)
struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase
{ 
	TArray<FFrameNumber>                               EventTimes;                                                 // 0x0038   (0x0010)  
	TArray<FMovieSceneEventPtrs>                       Events;                                                     // 0x0048   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
/// Size: 0x0088 (0x000038 - 0x0000C0)
struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase
{ 
	FMovieSceneEventSectionData                        EventData;                                                  // 0x0038   (0x0088)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneFadeSectionTemplate
/// Size: 0x00B8 (0x000020 - 0x0000D8)
struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneFloatChannel                            FadeCurve;                                                  // 0x0020   (0x00A0)  
	FLinearColor                                       FadeColor;                                                  // 0x00C0   (0x0010)  
	bool                                               bFadeAudio;                                                 // 0x00D0:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate
{ 
	ELevelVisibility                                   Visibility;                                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FName>                                      LevelNames;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
/// Size: 0x0008 (0x000080 - 0x000088)
struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate
{ 
	UMaterialParameterCollection*                      MPC;                                                        // 0x0080   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneObjectPropertyTemplate
/// Size: 0x00C0 (0x000048 - 0x000108)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneObjectPathChannel                       ObjectChannel;                                              // 0x0048   (0x00C0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
/// Size: 0x0008 (0x000080 - 0x000088)
struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleChannel
/// Size: 0x0000 (0x000098 - 0x000098)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel
{ 
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate
/// Size: 0x0098 (0x000020 - 0x0000B8)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneParticleChannel                         ParticleKeys;                                               // 0x0020   (0x0098)  
};

/// Struct /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
/// Size: 0x00C8 (0x000020 - 0x0000E8)
struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMovieSceneObjectPathChannel                       MaterialChannel;                                            // 0x0028   (0x00C0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
/// Size: 0x0650 (0x000048 - 0x000698)
struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieScene3DTransformTemplateData                 TemplateData;                                               // 0x0048   (0x0650)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
/// Size: 0x0650 (0x000048 - 0x000698)
struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieScene3DTransformTemplateData                 TemplateData;                                               // 0x0048   (0x0650)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
/// Size: 0x0288 (0x000048 - 0x0002D0)
struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            ComponentCurves;                                            // 0x0048   (0x0280)  
	int32_t                                            NumChannelsUsed;                                            // 0x02C8   (0x0004)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02CD   (0x0003)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringPropertySectionTemplate
/// Size: 0x00A0 (0x000048 - 0x0000E8)
struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneStringChannel                           StringCurve;                                                // 0x0048   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringChannel
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FMovieSceneStringChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               Times;                                                      // 0x0008   (0x0010)  
	TArray<FString>                                    Values;                                                     // 0x0018   (0x0010)  
	FString                                            DefaultValue;                                               // 0x0028   (0x0010)  
	bool                                               bHasDefaultValue;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x67];                                      // 0x0039   (0x0067)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
/// Size: 0x0098 (0x000048 - 0x0000E0)
struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerCurve;                                               // 0x0048   (0x0090)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
/// Size: 0x0098 (0x000048 - 0x0000E0)
struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneByteChannel                             EnumCurve;                                                  // 0x0048   (0x0098)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneBytePropertySectionTemplate
/// Size: 0x0098 (0x000048 - 0x0000E0)
struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneByteChannel                             ByteCurve;                                                  // 0x0048   (0x0098)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
/// Size: 0x00A8 (0x000048 - 0x0000F0)
struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatFunction;                                              // 0x0048   (0x00A0)  
	EMovieSceneBlendType                               BlendType;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
/// Size: 0x0090 (0x000048 - 0x0000D8)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolCurve;                                                  // 0x0048   (0x0090)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
/// Size: 0x00D8 (0x000000 - 0x0000D8)
struct FMovieSceneSkeletalAnimationParams
{ 
	UAnimSequenceBase*                                 Animation;                                                  // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse;                                                   // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              SlotName;                                                   // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0028   (0x00A0)  
	bool                                               bSkipAnimNotifiers;                                         // 0x00C8   (0x0001)  
	bool                                               bForceCustomMode;                                           // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	float                                              StartOffset;                                                // 0x00CC   (0x0004)  
	float                                              EndOffset;                                                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
/// Size: 0x00E0 (0x000020 - 0x000100)
struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                  // 0x0020   (0x00E0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x00D8   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x00DC   (0x0004)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate
/// Size: 0x00A0 (0x000020 - 0x0000C0)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneFloatChannel                            SlomoCurve;                                                 // 0x0020   (0x00A0)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct
{ 
	FFrameNumber                                       Time;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x000C   (0x001C)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4KeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector4                                           Vector;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase
{ 
	FVector                                            Vector;                                                     // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
/// Size: 0x0008 (0x000028 - 0x000030)
struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase
{ 
	FVector2D                                          Vector;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/MovieSceneTracks.MovieSceneVisibilitySectionTemplate
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate
{ 
};

/// Enum /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
/// Size: 0x07
enum MovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X                                                  = 0,
	MovieScene3DPathSection_Axis__Y                                                  = 1,
	MovieScene3DPathSection_Axis__Z                                                  = 2,
	MovieScene3DPathSection_Axis__NEG_X                                              = 3,
	MovieScene3DPathSection_Axis__NEG_Y                                              = 4,
	MovieScene3DPathSection_Axis__NEG_Z                                              = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX                        = 6
};

/// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
/// Size: 0x04
enum EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation                                       = 0,
	EFireEventsAtPosition__AtEndOfEvaluation                                         = 1,
	EFireEventsAtPosition__AfterSpawn                                                = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX                                 = 3
};

/// Enum /Script/MovieSceneTracks.ELevelVisibility
/// Size: 0x03
enum ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible                                                        = 0,
	ELevelVisibility__Hidden                                                         = 1,
	ELevelVisibility__ELevelVisibility_MAX                                           = 2
};

/// Enum /Script/MovieSceneTracks.EParticleKey
/// Size: 0x04
enum EParticleKey : uint8_t
{
	EParticleKey__Activate                                                           = 0,
	EParticleKey__Deactivate                                                         = 1,
	EParticleKey__Trigger                                                            = 2,
	EParticleKey__EParticleKey_MAX                                                   = 3
};

