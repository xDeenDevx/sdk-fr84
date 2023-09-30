/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ControlRig.

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0338 (0x000028 - 0x000360)
class UControlRig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x4C];                                      // 0x0028   (0x004C)  MISSED
	ERigExecutionType                                  ExecutionType;                                              // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	URigVM*                                            VM;                                                         // 0x0078   (0x0008)  
	FRigHierarchyContainer                             Hierarchy;                                                  // 0x0080   (0x01B0)  
	TWeakObjectPtr<UControlRigGizmoLibrary*>           GizmoLibrary;                                               // 0x0230   (0x0028)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0258   (0x0010)  MISSED
	TMap<FName, FCachedPropertyPath>                   InputProperties;                                            // 0x0268   (0x0050)  
	TMap<FName, FCachedPropertyPath>                   OutputProperties;                                           // 0x02B8   (0x0050)  
	FControlRigDrawContainer                           DrawContainer;                                              // 0x0308   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0318   (0x0008)  MISSED
	UAnimationDataSourceRegistry*                      DataSourceRegistry;                                         // 0x0320   (0x0008)  
	unsigned char                                      UnknownData04_6[0x38];                                      // 0x0328   (0x0038)  MISSED
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (0x000360 - 0x000370)
class UAdditiveControlRig : public UControlRig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0360   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigBindingTrack
/// Size: 0x0000 (0x000078 - 0x000078)
class UControlRigBindingTrack : public UMovieSceneSpawnTrack
{ 
public:
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0x000328 - 0x000328)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x0048 (0x0000B0 - 0x0000F8)
class UControlRigComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           OnPreInitializeDelegate;                                    // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           OnPostInitializeDelegate;                                   // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           OnPreEvaluateDelegate;                                      // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           OnPostEvaluateDelegate;                                     // 0x00E0   (0x0010)  
	UControlRig*                                       ControlRig;                                                 // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize
	void OnPreInitialize();                                                                                                  // [0x7d41a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreEvaluate
	void OnPreEvaluate();                                                                                                    // [0xc455a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	void OnPostInitialize();                                                                                                 // [0xc45580] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostEvaluate
	void OnPostEvaluate();                                                                                                   // [0xc45560] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.BP_GetControlRig
	UControlRig* BP_GetControlRig();                                                                                         // [0xc45530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigGizmoLibrary
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UControlRigGizmoLibrary : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FControlRigGizmoDefinition                         DefaultGizmo;                                               // 0x0030   (0x0060)  
	TWeakObjectPtr<UMaterial*>                         DefaultMaterial;                                            // 0x0090   (0x0028)  
	FName                                              MaterialColorParameter;                                     // 0x00B8   (0x0008)  
	TArray<FControlRigGizmoDefinition>                 Gizmos;                                                     // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0000 (0x000270 - 0x000270)
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigObjectHolder : public UObject
{ 
public:
	TArray<UObject*>                                   Objects;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0058 (0x000498 - 0x0004F0)
class UControlRigSequence : public ULevelSequence
{ 
public:
	TWeakObjectPtr<UAnimSequence*>                     LastExportedToAnimationSequence;                            // 0x0498   (0x0028)  
	TWeakObjectPtr<USkeletalMesh*>                     LastExportedUsingSkeletalMesh;                              // 0x04C0   (0x0028)  
	float                                              LastExportedFrameRate;                                      // 0x04E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x04EC   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigSequencerAnimInstance
/// Size: 0x0010 (0x000270 - 0x000280)
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0270   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigManipulatable
/// Size: 0x0000 (0x000028 - 0x000028)
class UControlRigManipulatable : public UInterface
{ 
public:
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x0138 (0x000140 - 0x000278)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
	UControlRig*                                       ControlRig;                                                 // 0x0140   (0x0008)  
	TArray<bool>                                       ControlsMask;                                               // 0x0148   (0x0010)  
	FMovieSceneTransformMask                           TransformMask;                                              // 0x0158   (0x0004)  
	bool                                               bAdditive;                                                  // 0x015C   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x015D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x015E   (0x0002)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0160   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0170   (0x00A0)  
	TMap<FName, FChannelMapInfo>                       ControlChannelMap;                                          // 0x0210   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0260   (0x0018)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x0028 (0x000058 - 0x000080)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	UControlRig*                                       ControlRig;                                                 // 0x0058   (0x0008)  
	UMovieSceneSection*                                SectionToKey;                                               // 0x0060   (0x0008)  
	TArray<UMovieSceneSection*>                        Sections;                                                   // 0x0068   (0x0010)  
	FName                                              TrackName;                                                  // 0x0078   (0x0008)  
};

/// Class /Script/ControlRig.MovieSceneControlRigSection
/// Size: 0x00B8 (0x000158 - 0x000210)
class UMovieSceneControlRigSection : public UMovieSceneSubSection
{ 
public:
	bool                                               bAdditive;                                                  // 0x0158   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0159   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x015A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0160   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0170   (0x00A0)  
};

/// Class /Script/ControlRig.MovieSceneControlRigTrack
/// Size: 0x0000 (0x000068 - 0x000068)
class UMovieSceneControlRigTrack : public UMovieSceneSubTrack
{ 
public:
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
	TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FConstraintNodeData
{ 
	FTransform                                         RelativeParent;                                             // 0x0000   (0x0030)  
	FConstraintOffset                                  ConstraintOffset;                                           // 0x0030   (0x0060)  
	FName                                              LinkedNode;                                                 // 0x0090   (0x0008)  
	TArray<FTransformConstraint>                       Constraints;                                                // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0118 (0x000058 - 0x000170)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	TMap<FName, uint16_t>                              ControlRigBoneMapping;                                      // 0x0068   (0x0050)  
	TMap<FName, uint16_t>                              ControlRigCurveMapping;                                     // 0x00B8   (0x0050)  
	TMap<FName, uint16_t>                              InputToCurveMappingUIDs;                                    // 0x0108   (0x0050)  
	TWeakObjectPtr<UNodeMappingContainer*>             NodeMappingContainer;                                       // 0x0158   (0x0008)  
	FControlRigIOSettings                              InputSettings;                                              // 0x0160   (0x0002)  
	FControlRigIOSettings                              OutputSettings;                                             // 0x0162   (0x0002)  
	bool                                               bExecute;                                                   // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0165   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FControlRigIOSettings
{ 
	bool                                               bUpdatePose;                                                // 0x0000   (0x0001)  
	bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x01F0 (0x000170 - 0x000360)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
	UClass*                                            ControlRigClass;                                            // 0x0170   (0x0008)  
	UControlRig*                                       ControlRig;                                                 // 0x0178   (0x0008)  
	float                                              Alpha;                                                      // 0x0180   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0184   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0185:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0186   (0x0002)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0188   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0190   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x01D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x01E0   (0x0030)  
	TMap<FName, FName>                                 InputMapping;                                               // 0x0210   (0x0050)  
	TMap<FName, FName>                                 OutputMapping;                                              // 0x0260   (0x0050)  
	unsigned char                                      UnknownData01_6[0xB0];                                      // 0x02B0   (0x00B0)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000170 - 0x000178)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
	TWeakObjectPtr<UControlRig*>                       ControlRig;                                                 // 0x0170   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigBindingTemplate
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
struct FControlRigBindingTemplate : FMovieSceneSpawnSectionTemplate
{ 
};

/// Struct /Script/ControlRig.ControlRigComponentInstanceData
/// Size: 0x0008 (0x000058 - 0x000060)
struct FControlRigComponentInstanceData : FActorComponentInstanceData
{ 
	UControlRig*                                       AnimControlRig;                                             // 0x0058   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0008 (0x000010 - 0x000018)
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigDrawContainer
{ 
	TArray<FControlRigDrawInstruction>                 Instructions;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigDrawInstruction
/// Size: 0x0070 (0x000000 - 0x000070)
struct FControlRigDrawInstruction
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TEnumAsByte<EControlRigDrawSettings>               PrimitiveType;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x0010   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0020   (0x0010)  
	float                                              Thickness;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.ControlRigDrawInterface
/// Size: 0x0008 (0x000010 - 0x000018)
struct FControlRigDrawInterface : FControlRigDrawContainer
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigGizmoDefinition
/// Size: 0x0060 (0x000000 - 0x000060)
struct FControlRigGizmoDefinition
{ 
	FName                                              GizmoName;                                                  // 0x0000   (0x0008)  
	TWeakObjectPtr<UStaticMesh*>                       StaticMesh;                                                 // 0x0008   (0x0028)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A0 (0x0006E0 - 0x000780)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x06E0   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.CRFourPointBezier
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCRFourPointBezier
{ 
	FVector                                            A;                                                          // 0x0000   (0x000C)  
	FVector                                            B;                                                          // 0x000C   (0x000C)  
	FVector                                            C;                                                          // 0x0018   (0x000C)  
	FVector                                            D;                                                          // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FControlRigSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigSequenceObjectReferences
{ 
	TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FControlRigSequenceObjectReference
{ 
	UClass*                                            ControlRigClass;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
/// Size: 0x02A0 (0x000930 - 0x000BD0)
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x2A0];                                     // 0x0930   (0x02A0)  MISSED
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCRSimContainer
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              TimeStep;                                                   // 0x0008   (0x0004)  
	float                                              AccumulatedTime;                                            // 0x000C   (0x0004)  
	float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCRSimLinearSpring
{ 
	int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)  
	float                                              Coefficient;                                                // 0x0008   (0x0004)  
	float                                              Equilibrium;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.CRSimPoint
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCRSimPoint
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              InheritMotion;                                              // 0x000C   (0x0004)  
	FVector                                            Position;                                                   // 0x0010   (0x000C)  
	FVector                                            LinearVelocity;                                             // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0024 (0x000000 - 0x000024)
struct FCRSimPointConstraint
{ 
	ECRSimConstraintType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)  
	FVector                                            DataA;                                                      // 0x000C   (0x000C)  
	FVector                                            DataB;                                                      // 0x0018   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
struct FCRSimPointContainer : FCRSimContainer
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0018   (0x0010)  
	TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)  
	TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)  
	TArray<FCRSimPoint>                                PreviousStep;                                               // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCRSimSoftCollision
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	ECRSimSoftCollisionType                            ShapeType;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0034   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0038   (0x0004)  
	EControlRigAnimEasingType                          FalloffType;                                                // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              Coefficient;                                                // 0x0040   (0x0004)  
	bool                                               bInverted;                                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0045   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCRSimPointForce
{ 
	ECRSimPointForceType                               ForceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0004   (0x000C)  
	float                                              Coefficient;                                                // 0x0010   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x00D0 (0x000008 - 0x0000D8)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
	bool                                               bAdditive;                                                  // 0x0008   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x00A0)  
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x00C0   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChannelMapInfo
{ 
	int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigBoneHierarchy
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FRigBone>                                   Bones;                                                      // 0x0008   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0018   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Index;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x00C8 (0x000018 - 0x0000E0)
struct FRigBone : FRigElement
{ 
	FName                                              ParentName;                                                 // 0x0018   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         GlobalTransform;                                            // 0x0060   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0090   (0x0030)  
	TArray<int32_t>                                    Dependents;                                                 // 0x00C0   (0x0010)  
	ERigBoneType                                       Type;                                                       // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRigControlHierarchy
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FRigControl>                                Controls;                                                   // 0x0008   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0018   (0x0050)  
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x0168 (0x000018 - 0x000180)
struct FRigControl : FRigElement
{ 
	ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x001C   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)  
	FName                                              SpaceName;                                                  // 0x0028   (0x0008)  
	int32_t                                            SpaceIndex;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FRigControlValue                                   InitialValue;                                               // 0x0040   (0x0030)  
	FRigControlValue                                   Value;                                                      // 0x0070   (0x0030)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x00A0   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x00A1   (0x0001)  
	bool                                               bAnimatable;                                                // 0x00A2   (0x0001)  
	bool                                               bLimitTranslation;                                          // 0x00A3   (0x0001)  
	bool                                               bLimitRotation;                                             // 0x00A4   (0x0001)  
	bool                                               bLimitScale;                                                // 0x00A5   (0x0001)  
	bool                                               bDrawLimits;                                                // 0x00A6   (0x0001)  
	unsigned char                                      UnknownData02_5[0x9];                                       // 0x00A7   (0x0009)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x00B0   (0x0030)  
	FRigControlValue                                   MaximumValue;                                               // 0x00E0   (0x0030)  
	bool                                               bGizmoEnabled;                                              // 0x0110   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	FName                                              GizmoName;                                                  // 0x0114   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FTransform                                         GizmoTransform;                                             // 0x0120   (0x0030)  
	FLinearColor                                       GizmoColor;                                                 // 0x0150   (0x0010)  
	TArray<int32_t>                                    Dependents;                                                 // 0x0160   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x0170   (0x0001)  
	unsigned char                                      UnknownData05_6[0xF];                                       // 0x0171   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigControlValue
{ 
	FTransform                                         Storage;                                                    // 0x0000   (0x0030)  
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigCurveContainer
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FRigCurve>                                  Curves;                                                     // 0x0008   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0018   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigCurve : FRigElement
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigHierarchyRef
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x01B0 (0x000000 - 0x0001B0)
struct FRigHierarchyContainer
{ 
	FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0070)  
	FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0070   (0x0068)  
	FRigControlHierarchy                               ControlHierarchy;                                           // 0x00D8   (0x0068)  
	FRigCurveContainer                                 CurveContainer;                                             // 0x0140   (0x0070)  
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRigSpaceHierarchy
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FRigSpace>                                  Spaces;                                                     // 0x0008   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0018   (0x0050)  
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x0078 (0x000018 - 0x000090)
struct FRigSpace : FRigElement
{ 
	ERigSpaceType                                      SpaceType;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x001C   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0060   (0x0030)  
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigHierarchyCopyPasteContent
{ 
	TArray<ERigElementType>                            Types;                                                      // 0x0000   (0x0010)  
	TArray<FString>                                    Contents;                                                   // 0x0010   (0x0010)  
	TArray<FTransform>                                 LocalTransforms;                                            // 0x0020   (0x0010)  
	TArray<FTransform>                                 GlobalTransforms;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigElementKey
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ERigElementType                                    Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnitMutable : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_SimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorRange
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            AccumulatedMinimum;                                         // 0x002C   (0x000C)  
	FVector                                            AccumulatedMaximum;                                         // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatRange
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)  
	float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformLerp
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TargetValue;                                                // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	float                                              Blend;                                                      // 0x0070   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0075   (0x000B)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatLerp
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              TargetValue;                                                // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	float                                              Blend;                                                      // 0x0030   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0035   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
{ 
	FVector                                            TargetValue;                                                // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	float                                              Blend;                                                      // 0x0020   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0034   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatLerp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
{ 
	float                                              TargetValue;                                                // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	float                                              Blend;                                                      // 0x0010   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformMul
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Multiplier;                                                 // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	bool                                               bFlipOrder;                                                 // 0x0070   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatMul
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Multiplier;                                                 // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	bool                                               bFlipOrder;                                                 // 0x0030   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0032   (0x000E)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorMul
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
{ 
	FVector                                            Multiplier;                                                 // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatMul
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
{ 
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorAdd
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
{ 
	FVector                                            Increment;                                                  // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatAdd
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
{ 
	float                                              Increment;                                                  // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0050 (0x000020 - 0x000070)
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	bool                                               bPostMultiply;                                              // 0x0064   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0065   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0066   (0x0002)  MISSED
	int32_t                                            CachedBoneIndex;                                            // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x00C0 (0x000020 - 0x0000E0)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0020   (0x0008)  
	FRigUnit_AimBone_Target                            Primary;                                                    // 0x0028   (0x0028)  
	FRigUnit_AimBone_Target                            Secondary;                                                  // 0x0050   (0x0028)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0080   (0x0040)  
	int32_t                                            BoneIndex;                                                  // 0x00C0   (0x0004)  
	FName                                              PrimaryCachedSpaceName;                                     // 0x00C4   (0x0008)  
	int32_t                                            PrimaryCachedSpaceIndex;                                    // 0x00CC   (0x0004)  
	FName                                              SecondaryCachedSpaceName;                                   // 0x00D0   (0x0008)  
	int32_t                                            SecondaryCachedSpaceIndex;                                  // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_AimBone_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_AimBone_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	FVector                                            Axis;                                                       // 0x0004   (0x000C)  
	FVector                                            Target;                                                     // 0x0010   (0x000C)  
	EControlRigVectorKind                              Kind;                                                       // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              Space;                                                      // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0058 (0x000020 - 0x000078)
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0020   (0x0008)  
	EAimMode                                           AimMode;                                                    // 0x0028   (0x0001)  
	EAimMode                                           UpMode;                                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	FVector                                            AimVector;                                                  // 0x002C   (0x000C)  
	FVector                                            UpVector;                                                   // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FAimTarget>                                 AimTargets;                                                 // 0x0048   (0x0010)  
	TArray<FAimTarget>                                 UpTargets;                                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAimTarget
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            AlignVector;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpVector
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Scale;                                                      // 0x0014   (0x0004)  
	float                                              Bias;                                                       // 0x0018   (0x0004)  
	bool                                               bMapRange;                                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0020   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0028   (0x0008)  
	bool                                               bClampResult;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0034   (0x0004)  
	float                                              ClampMax;                                                   // 0x0038   (0x0004)  
	bool                                               bInterpResult;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0040   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0044   (0x0004)  
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0054   (0x0030)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterp
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
	float                                              Bias;                                                       // 0x0010   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0018   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)  
	bool                                               bClampResult;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x002C   (0x0004)  
	float                                              ClampMax;                                                   // 0x0030   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)  
	float                                              Result;                                                     // 0x0040   (0x0004)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_AnimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AnimEasing
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	EControlRigAnimEasingType                          Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0010   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0014   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0018   (0x0004)  
	float                                              TargetMaximum;                                              // 0x001C   (0x0004)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEasingType
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{ 
	EControlRigAnimEasingType                          Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEvalRichCurve
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
	float                                              SourceMinimum;                                              // 0x0098   (0x0004)  
	float                                              SourceMaximum;                                              // 0x009C   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00A0   (0x0004)  
	float                                              TargetMaximum;                                              // 0x00A4   (0x0004)  
	float                                              Result;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimRichCurve
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x0090 (0x000020 - 0x0000B0)
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x0060   (0x0009)  
	EApplyTransformMode                                ApplyTransformMode;                                         // 0x0069   (0x0001)  
	ETransformSpaceMode                                ApplyTransformSpace;                                        // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x006B   (0x0005)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0070   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_BeginExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_BlendTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	TArray<FBlendTarget>                               Targets;                                                    // 0x0040   (0x0010)  
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0040 (0x000000 - 0x000040)
struct FBlendTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x0080 (0x000020 - 0x0000A0)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x0020   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0030   (0x000C)  
	FVector                                            WaveFrequency;                                              // 0x003C   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0048   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x0054   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x0060   (0x000C)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x0070   (0x0004)  
	float                                              WaveMaximum;                                                // 0x0074   (0x0004)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0078   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0079   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x007A   (0x0006)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_BoneHarmonics_WorkData
{ 
	TArray<int32_t>                                    BoneIndices;                                                // 0x0000   (0x0010)  
	FVector                                            WaveTime;                                                   // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	float                                              Ratio;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_ControlName : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_SpaceName : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_BoneName : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x00C0 (0x000020 - 0x0000E0)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0020   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0028   (0x0008)  
	FTransform                                         EffectorTransform;                                          // 0x0030   (0x0030)  
	float                                              Precision;                                                  // 0x0060   (0x0004)  
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x0068   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x0078   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x0090   (0x0048)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_CCDIK_WorkData
{ 
	TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)  
	TArray<int32_t>                                    BoneIndices;                                                // 0x0010   (0x0010)  
	TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)  
	TArray<float>                                      RotationLimitsPerBone;                                      // 0x0030   (0x0010)  
	int32_t                                            EffectorIndex;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_CCDIK_RotationLimit
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	float                                              Limit;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0210 (0x000020 - 0x000230)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              ChainRoot;                                                  // 0x0020   (0x0008)  
	FVector                                            Speed;                                                      // 0x0028   (0x000C)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0034   (0x0028)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x005C   (0x0040)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00A0   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0128   (0x003C)  
	bool                                               bDrawDebug;                                                 // 0x0164   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0165   (0x000B)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x0170   (0x0030)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01A0   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_ChainHarmonics_WorkData
{ 
	FVector                                            Time;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<int32_t>                                    Bones;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      Ratio;                                                      // 0x0020   (0x0010)  
	TArray<FVector>                                    LocalTip;                                                   // 0x0030   (0x0010)  
	TArray<FVector>                                    PendulumTip;                                                // 0x0040   (0x0010)  
	TArray<FVector>                                    PendulumPosition;                                           // 0x0050   (0x0010)  
	TArray<FVector>                                    PendulumVelocity;                                           // 0x0060   (0x0010)  
	TArray<FVector>                                    HierarchyLine;                                              // 0x0070   (0x0010)  
	TArray<FVector>                                    VelocityLines;                                              // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x003C (0x000000 - 0x00003C)
struct FRigUnit_ChainHarmonics_Pendulum
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PendulumStiffness;                                          // 0x0004   (0x0004)  
	FVector                                            PendulumGravity;                                            // 0x0008   (0x000C)  
	float                                              PendulumBlend;                                              // 0x0014   (0x0004)  
	float                                              PendulumDrag;                                               // 0x0018   (0x0004)  
	float                                              PendulumMinimum;                                            // 0x001C   (0x0004)  
	float                                              PendulumMaximum;                                            // 0x0020   (0x0004)  
	EControlRigAnimEasingType                          PendulumEase;                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            UnwindAxis;                                                 // 0x0028   (0x000C)  
	float                                              UnwindMinimum;                                              // 0x0034   (0x0004)  
	float                                              UnwindMaximum;                                              // 0x0038   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_ChainHarmonics_Wave
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            WaveFrequency;                                              // 0x0004   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0010   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x001C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x0028   (0x000C)  
	float                                              WaveMinimum;                                                // 0x0034   (0x0004)  
	float                                              WaveMaximum;                                                // 0x0038   (0x0004)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_ChainHarmonics_Reach
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            ReachTarget;                                                // 0x0004   (0x000C)  
	FVector                                            ReachAxis;                                                  // 0x0010   (0x000C)  
	float                                              ReachMinimum;                                               // 0x001C   (0x0004)  
	float                                              ReachMaximum;                                               // 0x0020   (0x0004)  
	EControlRigAnimEasingType                          ReachEase;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_Control : FRigUnit
{ 
	FEulerTransform                                    Transform;                                                  // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Base;                                                       // 0x0030   (0x0030)  
	FTransform                                         InitTransform;                                              // 0x0060   (0x0030)  
	FTransform                                         Result;                                                     // 0x0090   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x00C0   (0x0009)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
	FTransform                                         MeshTransform;                                              // 0x00D0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	FRotator                                           Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ConvertRotation : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
	FEulerTransform                                    Input;                                                      // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_ConvertTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_DebugBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x00A0 (0x000020 - 0x0000C0)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0020   (0x0030)  
	float                                              MinimumU;                                                   // 0x0050   (0x0004)  
	float                                              MaximumU;                                                   // 0x0054   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0058   (0x0010)  
	float                                              Thickness;                                                  // 0x0068   (0x0004)  
	int32_t                                            Detail;                                                     // 0x006C   (0x0004)  
	FName                                              Space;                                                      // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0080   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x0060 (0x000020 - 0x000080)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{ 
	TEnumAsByte<EControlRigDrawHierarchyMode>          Mode;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0024   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0028   (0x0010)  
	float                                              Thickness;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0040   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x0080 (0x000020 - 0x0000A0)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0020   (0x000C)  
	FVector                                            B;                                                          // 0x002C   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0038   (0x0010)  
	float                                              Thickness;                                                  // 0x0048   (0x0004)  
	FName                                              Space;                                                      // 0x004C   (0x0008)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0054   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0060   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x0070 (0x000020 - 0x000090)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0020   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0030   (0x0010)  
	float                                              Thickness;                                                  // 0x0040   (0x0004)  
	FName                                              Space;                                                      // 0x0044   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0050   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0081   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPointMutable
/// Size: 0x0070 (0x000020 - 0x000090)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{ 
	FVector                                            Vector;                                                     // 0x0020   (0x000C)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0030   (0x0010)  
	float                                              Scale;                                                      // 0x0040   (0x0004)  
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	FName                                              Space;                                                      // 0x0048   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x0050   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0081   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPoint
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{ 
	FVector                                            Vector;                                                     // 0x0008   (0x000C)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	float                                              Thickness;                                                  // 0x002C   (0x0004)  
	FName                                              Space;                                                      // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0040   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x00A0 (0x000020 - 0x0000C0)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x0050   (0x0010)  
	float                                              Radius;                                                     // 0x0060   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x0064   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x0068   (0x0004)  
	float                                              Thickness;                                                  // 0x006C   (0x0004)  
	int32_t                                            Detail;                                                     // 0x0070   (0x0004)  
	FName                                              Space;                                                      // 0x0074   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0080   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x0090 (0x000020 - 0x0000B0)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x0050   (0x0010)  
	float                                              Scale;                                                      // 0x0060   (0x0004)  
	float                                              Thickness;                                                  // 0x0064   (0x0004)  
	FName                                              Space;                                                      // 0x0068   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x0070   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x0090 (0x000020 - 0x0000B0)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0020   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0034   (0x0010)  
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FName                                              Space;                                                      // 0x004C   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0054   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0060   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	FRigUnit_DebugTransformArrayMutable_WorkData       WorkData;                                                   // 0x0098   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x00A0 (0x000020 - 0x0000C0)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0054   (0x0010)  
	float                                              Thickness;                                                  // 0x0064   (0x0004)  
	float                                              Scale;                                                      // 0x0068   (0x0004)  
	FName                                              Space;                                                      // 0x006C   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0080   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0044   (0x0010)  
	float                                              Thickness;                                                  // 0x0054   (0x0004)  
	float                                              Scale;                                                      // 0x0058   (0x0004)  
	FName                                              Space;                                                      // 0x005C   (0x0008)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0064   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0070   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Delta;                                                      // 0x0040   (0x0030)  
	FTransform                                         PreviousValue;                                              // 0x0070   (0x0030)  
	FTransform                                         Cache;                                                      // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Delta;                                                      // 0x0020   (0x0010)  
	FQuat                                              PreviousValue;                                              // 0x0030   (0x0010)  
	FQuat                                              Cache;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Delta;                                                      // 0x0014   (0x000C)  
	FVector                                            PreviousValue;                                              // 0x0020   (0x000C)  
	FVector                                            Cache;                                                      // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Delta;                                                      // 0x000C   (0x0004)  
	float                                              PreviousValue;                                              // 0x0010   (0x0004)  
	float                                              Cache;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0078 (0x000020 - 0x000098)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0020   (0x0008)  
	FName                                              EndBone;                                                    // 0x0028   (0x0008)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0030   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0040   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0048   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_DistributeRotation_WorkData
{ 
	TArray<int32_t>                                    BoneIndices;                                                // 0x0000   (0x0010)  
	TArray<int32_t>                                    BoneRotationA;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    BoneRotationB;                                              // 0x0020   (0x0010)  
	TArray<float>                                      BoneRotationT;                                              // 0x0030   (0x0010)  
	TArray<FTransform>                                 BoneLocalTransforms;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_DistributeRotation_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0040 (0x000020 - 0x000060)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x000020 - 0x000030)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0020   (0x0008)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0018 (0x000020 - 0x000038)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0020   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
	FName                                              InstructionName;                                            // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x0080 (0x000020 - 0x0000A0)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0020   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0028   (0x0008)  
	FTransform                                         EffectorTransform;                                          // 0x0030   (0x0030)  
	float                                              Precision;                                                  // 0x0060   (0x0004)  
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x006C   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x0070   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_FABRIK_WorkData
{ 
	TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)  
	TArray<int32_t>                                    BoneIndices;                                                // 0x0010   (0x0010)  
	int32_t                                            EffectorIndex;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0190 (0x000020 - 0x0001B0)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0020   (0x0008)  
	FName                                              EndBone;                                                    // 0x0028   (0x0008)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0030   (0x0030)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x0064   (0x0004)  
	float                                              Maximum;                                                    // 0x0068   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x006C   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0070   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x007C   (0x000C)  
	FVector                                            PoleVectorPosition;                                         // 0x0088   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0098   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x00A8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x00B0   (0x0060)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0110   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigUnit_FitChainToCurve_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector>                                    BonePositions;                                              // 0x0008   (0x0010)  
	TArray<float>                                      BoneSegments;                                               // 0x0018   (0x0010)  
	TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)  
	TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)  
	TArray<int32_t>                                    BoneIndices;                                                // 0x0048   (0x0010)  
	TArray<int32_t>                                    BoneRotationA;                                              // 0x0058   (0x0010)  
	TArray<int32_t>                                    BoneRotationB;                                              // 0x0068   (0x0010)  
	TArray<float>                                      BoneRotationT;                                              // 0x0078   (0x0010)  
	TArray<FTransform>                                 BoneLocalTransforms;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_FitChainToCurve_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MapRange_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              MinIn;                                                      // 0x000C   (0x0004)  
	float                                              MaxIn;                                                      // 0x0010   (0x0004)  
	float                                              MinOut;                                                     // 0x0014   (0x0004)  
	float                                              MaxOut;                                                     // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Clamp_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Min;                                                        // 0x000C   (0x0004)  
	float                                              Max;                                                        // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
	float                                              Argument0;                                                  // 0x0008   (0x0004)  
	float                                              Argument1;                                                  // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	int32_t                                            CachedBoneIndex;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	int32_t                                            CachedControlIndex;                                         // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_GetControlTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FTransform                                         Minimum;                                                    // 0x0050   (0x0030)  
	FTransform                                         Maximum;                                                    // 0x0080   (0x0030)  
	int32_t                                            CachedControlIndex;                                         // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00B4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetControlRotator : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRotator                                           Rotator;                                                    // 0x0014   (0x000C)  
	FRotator                                           Minimum;                                                    // 0x0020   (0x000C)  
	FRotator                                           Maximum;                                                    // 0x002C   (0x000C)  
	int32_t                                            CachedControlIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetControlVector : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0014   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0020   (0x000C)  
	FVector                                            Maximum;                                                    // 0x002C   (0x000C)  
	int32_t                                            CachedControlIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Minimum;                                                    // 0x0018   (0x0008)  
	FVector2D                                          Maximum;                                                    // 0x0020   (0x0008)  
	int32_t                                            CachedControlIndex;                                         // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_GetControlFloat : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	int32_t                                            CachedControlIndex;                                         // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_GetControlBool : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            CachedControlIndex;                                         // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_GetCurveValue : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x0008)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	int32_t                                            CachedCurveIndex;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_GetDeltaTime
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{ 
	float                                              Result;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	int32_t                                            CachedBoneIndex;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x0080 (0x000020 - 0x0000A0)
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0020   (0x0008)  
	ETransformGetterType                               Type;                                                       // 0x0028   (0x0001)  
	ETransformSpaceMode                                TransformSpace;                                             // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0030   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Output;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	FName                                              Space;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	int32_t                                            CachedBoneIndex;                                            // 0x0050   (0x0004)  
	int32_t                                            CachedSpaceIndex;                                           // 0x0054   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	int32_t                                            CachedSpaceIndex;                                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetWorldTime
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{ 
	float                                              Year;                                                       // 0x0008   (0x0004)  
	float                                              Month;                                                      // 0x000C   (0x0004)  
	float                                              Day;                                                        // 0x0010   (0x0004)  
	float                                              WeekDay;                                                    // 0x0014   (0x0004)  
	float                                              Hours;                                                      // 0x0018   (0x0004)  
	float                                              Minutes;                                                    // 0x001C   (0x0004)  
	float                                              Seconds;                                                    // 0x0020   (0x0004)  
	float                                              OverallSeconds;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_KalmanTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	int32_t                                            BufferSize;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	int32_t                                            BufferSize;                                                 // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0028   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNotEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOr
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolAnd
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Result;                                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNot
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstFalse
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstTrue
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	float                                              T;                                                          // 0x0028   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathColorMul
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorSub
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorAdd
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorFromFloat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLawOfCosine
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              C;                                                          // 0x0010   (0x0004)  
	float                                              AlphaAngle;                                                 // 0x0014   (0x0004)  
	float                                              BetaAngle;                                                  // 0x0018   (0x0004)  
	float                                              GammaAngle;                                                 // 0x001C   (0x0004)  
	bool                                               bValid;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAtan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAcos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAsin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatTan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRad
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDeg
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSelectBool
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              IfTrue;                                                     // 0x000C   (0x0004)  
	float                                              IfFalse;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Tolerance;                                                  // 0x0010   (0x0004)  
	bool                                               Result;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Tolerance;                                                  // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLess
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreater
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRemap
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SourceMinimum;                                              // 0x000C   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0010   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0014   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0018   (0x0004)  
	bool                                               bClamp;                                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLerp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              T;                                                          // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatClamp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSign
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRound
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCeil
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatFloor
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAbs
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNegate
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSqrt
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatPow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMax
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMod
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDiv
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMul
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSub
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAdd
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{ 
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSwingTwist
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	FVector                                            Vector;                                                     // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnit
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionDot
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              Result;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FQuat                                              IfTrue;                                                     // 0x0010   (0x0010)  
	FQuat                                              IfFalse;                                                    // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionNotEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSlerp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              T;                                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionInverse
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMul
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToRotator
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToEuler
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotator
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{ 
	FRotator                                           Rotator;                                                    // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Euler;                                                      // 0x0008   (0x000C)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0015   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              Angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformClampSpatially
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0040   (0x0001)  
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0044   (0x0004)  
	float                                              Maximum;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0050   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0084   (0x0010)  
	float                                              DebugThickness;                                             // 0x0094   (0x0004)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromSRT
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Rotation;                                                   // 0x0014   (0x000C)  
	EControlRigRotationOrder                           RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0024   (0x000C)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	FEulerTransform                                    EulerTransform;                                             // 0x0060   (0x0024)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformTransformVector
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Location;                                                   // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformRotateVector
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Direction;                                                  // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformSelectBool
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         IfTrue;                                                     // 0x0010   (0x0030)  
	FTransform                                         IfFalse;                                                    // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformLerp
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	float                                              T;                                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformUnaryOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Result;                                                     // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformInverse
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeAbsolute
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Local;                                                      // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Global;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeRelative
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Global;                                                     // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Local;                                                      // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryOp
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMul
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformToEulerTransform
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{ 
	FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampSpatially
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0014   (0x0001)  
	TEnumAsByte<EControlRigClampSpatialMode>           Type;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0018   (0x0004)  
	float                                              Maximum;                                                    // 0x001C   (0x0004)  
	FTransform                                         Space;                                                      // 0x0020   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0054   (0x0010)  
	float                                              DebugThickness;                                             // 0x0064   (0x0004)  
	FVector                                            Result;                                                     // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
	float                                              T;                                                          // 0x0038   (0x0004)  
	FVector                                            Result;                                                     // 0x003C   (0x000C)  
	FVector                                            Tangent;                                                    // 0x0048   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorOrthogonal
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorParallel
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAngle
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirror
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampLength
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              MinimumLength;                                              // 0x0014   (0x0004)  
	float                                              MaximumLength;                                              // 0x0018   (0x0004)  
	FVector                                            Result;                                                     // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSetLength
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Length;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnaryOp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnit
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDot
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCross
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDistance
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLength
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLengthSquared
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRad
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDeg
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSelectBool
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FVector                                            IfTrue;                                                     // 0x000C   (0x000C)  
	FVector                                            IfFalse;                                                    // 0x0018   (0x000C)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Tolerance;                                                  // 0x0020   (0x0004)  
	bool                                               Result;                                                     // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Tolerance;                                                  // 0x0014   (0x0004)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNotEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRemap
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            SourceMinimum;                                              // 0x0014   (0x000C)  
	FVector                                            SourceMaximum;                                              // 0x0020   (0x000C)  
	FVector                                            TargetMinimum;                                              // 0x002C   (0x000C)  
	FVector                                            TargetMaximum;                                              // 0x0038   (0x000C)  
	bool                                               bClamp;                                                     // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              T;                                                          // 0x0020   (0x0004)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClamp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSign
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRound
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCeil
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFloor
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAbs
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNegate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMax
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMin
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMod
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDiv
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorScale
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Factor;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMul
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSub
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAdd
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFromFloat
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FVector                                            Result;                                                     // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (0x000020 - 0x000050)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x0020   (0x0010)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	float                                              WeightMinimum;                                              // 0x0034   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0038   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_ModifyBoneTransforms_WorkData
{ 
	TArray<int32_t>                                    CachedBoneIndices;                                          // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x0088 (0x000020 - 0x0000A8)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              RootBone;                                                   // 0x0020   (0x0008)  
	TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x0028   (0x0010)  
	float                                              Precision;                                                  // 0x0038   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x0048   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_MultiFABRIK_WorkData
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigUnit_MultiFABRIK_EndEffector
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{ 
	FVector                                            Position;                                                   // 0x0008   (0x000C)  
	FVector                                            Speed;                                                      // 0x0014   (0x000C)  
	FVector                                            Frequency;                                                  // 0x0020   (0x000C)  
	float                                              Minimum;                                                    // 0x002C   (0x0004)  
	float                                              Maximum;                                                    // 0x0030   (0x0004)  
	FVector                                            Result;                                                     // 0x0034   (0x000C)  
	FVector                                            Time;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Speed;                                                      // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	float                                              Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SimBaseMutable
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0190 (0x000020 - 0x0001B0)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0020   (0x0010)  
	TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0030   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0040   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0050   (0x0010)  
	float                                              SimulatedStepsPerSecond;                                    // 0x0060   (0x0004)  
	ECRSimPointIntegrateType                           IntegratorType;                                             // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              VerletBlend;                                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x0070   (0x0010)  
	bool                                               bLimitLocalPosition;                                        // 0x0080   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0081   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	FVector                                            PrimaryAimAxis;                                             // 0x0084   (0x000C)  
	FVector                                            SecondaryAimAxis;                                           // 0x0090   (0x000C)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x00A0   (0x0050)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x00F0   (0x0030)  
	FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x0120   (0x0088)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FRigUnit_PointSimulation_WorkData
{ 
	FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)  
	TArray<int32_t>                                    BoneIndices;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_PointSimulation_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	float                                              CollisionScale;                                             // 0x0008   (0x0004)  
	bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigUnit_PointSimulation_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	int32_t                                            TranslationPoint;                                           // 0x0008   (0x0004)  
	int32_t                                            PrimaryAimPoint;                                            // 0x000C   (0x0004)  
	int32_t                                            SecondaryAimPoint;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0020 (0x000020 - 0x000040)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{ 
	int32_t                                            NumberOfMeasurements;                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            Prefix;                                                     // 0x0028   (0x0010)  
	float                                              AccumulatedTime;                                            // 0x0038   (0x0004)  
	int32_t                                            MeasurementsLeft;                                           // 0x003C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Argument;                                                   // 0x0020   (0x0010)  
	float                                              Angle;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              Angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument0;                                                  // 0x0010   (0x0010)  
	FQuat                                              Argument1;                                                  // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_RandomVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_RandomVector : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	FVector                                            LastResult;                                                 // 0x0024   (0x000C)  
	int32_t                                            LastSeed;                                                   // 0x0030   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_RandomFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              LastResult;                                                 // 0x001C   (0x0004)  
	int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0030 (0x000020 - 0x000050)
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0044   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            CachedBoneIndex;                                            // 0x004C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0050 (0x000020 - 0x000070)
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            CachedBoneIndex;                                            // 0x006C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0028 (0x000020 - 0x000048)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0020   (0x0008)  
	FVector                                            Translation;                                                // 0x0028   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0038   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            CachedBoneIndex;                                            // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0020 (0x000020 - 0x000040)
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0020   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0028   (0x0010)  
	int32_t                                            CachedControlIndex;                                         // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0050 (0x000020 - 0x000070)
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0020   (0x0008)  
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            CachedControlIndex;                                         // 0x0064   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0020 (0x000020 - 0x000040)
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0020   (0x0008)  
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	FRotator                                           Rotator;                                                    // 0x002C   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            CachedControlIndex;                                         // 0x003C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0020 (0x000020 - 0x000040)
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0020   (0x0008)  
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	FVector                                            Vector;                                                     // 0x002C   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            CachedControlIndex;                                         // 0x003C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0018 (0x000020 - 0x000038)
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0020   (0x0008)  
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	FVector2D                                          Vector;                                                     // 0x002C   (0x0008)  
	int32_t                                            CachedControlIndex;                                         // 0x0034   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0018 (0x000020 - 0x000038)
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0020   (0x0008)  
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	float                                              FloatValue;                                                 // 0x002C   (0x0004)  
	int32_t                                            CachedControlIndex;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0010 (0x000020 - 0x000030)
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0020   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            CachedControlIndex;                                         // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0010 (0x000020 - 0x000030)
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0020   (0x0008)  
	float                                              Value;                                                      // 0x0028   (0x0004)  
	int32_t                                            CachedCurveIndex;                                           // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x0050 (0x000020 - 0x000070)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0020   (0x0008)  
	FName                                              Space;                                                      // 0x0028   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	int32_t                                            CachedBoneIndex;                                            // 0x0068   (0x0004)  
	int32_t                                            CachedSpaceIndex;                                           // 0x006C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0050 (0x000020 - 0x000070)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
	FName                                              Space;                                                      // 0x0020   (0x0008)  
	float                                              Weight;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            CachedSpaceIndex;                                           // 0x0064   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x000020 - 0x000080)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0020   (0x0008)  
	FName                                              EndBone;                                                    // 0x0028   (0x0008)  
	float                                              SlideAmount;                                                // 0x0030   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0038   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_SlideChain_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      BoneSegments;                                               // 0x0008   (0x0010)  
	TArray<int32_t>                                    BoneIndices;                                                // 0x0018   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x0160 (0x000020 - 0x000180)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0020   (0x0008)  
	FName                                              EndBone;                                                    // 0x0028   (0x0008)  
	float                                              HierarchyStrength;                                          // 0x0030   (0x0004)  
	float                                              EffectorStrength;                                           // 0x0034   (0x0004)  
	float                                              EffectorRatio;                                              // 0x0038   (0x0004)  
	float                                              RootStrength;                                               // 0x003C   (0x0004)  
	float                                              RootRatio;                                                  // 0x0040   (0x0004)  
	float                                              Damping;                                                    // 0x0044   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x0048   (0x000C)  
	bool                                               bFlipPolePlane;                                             // 0x0054   (0x0001)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0055   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0056   (0x0002)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x0058   (0x0008)  
	FVector                                            PrimaryAxis;                                                // 0x0060   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x006C   (0x000C)  
	bool                                               bLiveSimulation;                                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x007C   (0x0004)  
	bool                                               bLimitLocalPosition;                                        // 0x0080   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0081   (0x0001)  
	unsigned char                                      UnknownData02_5[0xE];                                       // 0x0082   (0x000E)  MISSED
	FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x0090   (0x0050)  
	FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x00E0   (0x00A0)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FRigUnit_SpringIK_WorkData
{ 
	TArray<int32_t>                                    BoneIndices;                                                // 0x0000   (0x0010)  
	int32_t                                            PoleVectorIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0018   (0x0010)  
	FCRSimPointContainer                               Simulation;                                                 // 0x0028   (0x0078)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_SpringIK_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_Timeline
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Timeline : FRigUnit_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	float                                              SecondsAgo;                                                 // 0x0040   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0044   (0x0004)  
	float                                              TimeRange;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0090   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x00A0   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetVector
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              SecondsAgo;                                                 // 0x0014   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0018   (0x0004)  
	float                                              TimeRange;                                                  // 0x001C   (0x0004)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0030   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0040   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0054   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetFloat
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SecondsAgo;                                                 // 0x000C   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)  
	float                                              TimeRange;                                                  // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Argument0;                                                  // 0x0010   (0x0030)  
	FTransform                                         Argument1;                                                  // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00C0 (0x000020 - 0x0000E0)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0020   (0x0008)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0030   (0x0030)  
	FName                                              BaseBone;                                                   // 0x0060   (0x0008)  
	TArray<FConstraintTarget>                          Targets;                                                    // 0x0068   (0x0010)  
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x0078   (0x0060)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_TransformConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
	TMap<int32_t, int32_t>                             ConstraintDataToTargets;                                    // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0040 (0x000000 - 0x000040)
struct FConstraintTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0034   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x0035   (0x0009)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x01B0 (0x000020 - 0x0001D0)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
	FName                                              StartJoint;                                                 // 0x0020   (0x0008)  
	FName                                              EndJoint;                                                   // 0x0028   (0x0008)  
	FVector                                            PoleTarget;                                                 // 0x0030   (0x000C)  
	float                                              Spin;                                                       // 0x003C   (0x0004)  
	FTransform                                         EndEffector;                                                // 0x0040   (0x0030)  
	float                                              IKBlend;                                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         StartJointFKTransform;                                      // 0x0080   (0x0030)  
	FTransform                                         MidJointFKTransform;                                        // 0x00B0   (0x0030)  
	FTransform                                         EndJointFKTransform;                                        // 0x00E0   (0x0030)  
	float                                              PreviousFKIKBlend;                                          // 0x0110   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0114   (0x000C)  MISSED
	FTransform                                         StartJointIKTransform;                                      // 0x0120   (0x0030)  
	FTransform                                         MidJointIKTransform;                                        // 0x0150   (0x0030)  
	FTransform                                         EndJointIKTransform;                                        // 0x0180   (0x0030)  
	int32_t                                            StartJointIndex;                                            // 0x01B0   (0x0004)  
	int32_t                                            MidJointIndex;                                              // 0x01B4   (0x0004)  
	int32_t                                            EndJointIndex;                                              // 0x01B8   (0x0004)  
	float                                              UpperLimbLength;                                            // 0x01BC   (0x0004)  
	float                                              LowerLimbLength;                                            // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x01C4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Root;                                                       // 0x0010   (0x0030)  
	FVector                                            PoleVector;                                                 // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Effector;                                                   // 0x0050   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x0080   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x008C   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x0098   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x009C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00A0   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x00A4   (0x0004)  
	float                                              BoneALength;                                                // 0x00A8   (0x0004)  
	float                                              BoneBLength;                                                // 0x00AC   (0x0004)  
	FTransform                                         Elbow;                                                      // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
	FVector                                            Root;                                                       // 0x0008   (0x000C)  
	FVector                                            PoleVector;                                                 // 0x0014   (0x000C)  
	FVector                                            Effector;                                                   // 0x0020   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0030   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0034   (0x0004)  
	float                                              BoneALength;                                                // 0x0038   (0x0004)  
	float                                              BoneBLength;                                                // 0x003C   (0x0004)  
	FVector                                            Elbow;                                                      // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x00F0 (0x000020 - 0x000110)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              BoneA;                                                      // 0x0020   (0x0008)  
	FName                                              BoneB;                                                      // 0x0028   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         Effector;                                                   // 0x0040   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x0070   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x007C   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x0088   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x008C   (0x000C)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x009C   (0x0008)  
	bool                                               bEnableStretch;                                             // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00A5   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00A8   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x00AC   (0x0004)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	float                                              BoneALength;                                                // 0x00B4   (0x0004)  
	float                                              BoneBLength;                                                // 0x00B8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x00C0   (0x0040)  
	int32_t                                            BoneAIndex;                                                 // 0x0100   (0x0004)  
	int32_t                                            BoneBIndex;                                                 // 0x0104   (0x0004)  
	int32_t                                            EffectorBoneIndex;                                          // 0x0108   (0x0004)  
	int32_t                                            PoleVectorSpaceIndex;                                       // 0x010C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_VerletIntegrateVector
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x000C)  
	float                                              Strength;                                                   // 0x0014   (0x0004)  
	float                                              Damp;                                                       // 0x0018   (0x0004)  
	float                                              Blend;                                                      // 0x001C   (0x0004)  
	FVector                                            Position;                                                   // 0x0020   (0x000C)  
	FVector                                            Velocity;                                                   // 0x002C   (0x000C)  
	FVector                                            Acceleration;                                               // 0x0038   (0x000C)  
	FCRSimPoint                                        Point;                                                      // 0x0044   (0x0028)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x004C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0024   (0x0004)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x002C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0014   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x0030   (0x0008)  
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStructReference
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x03
enum ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.EBoneGetterSetterMode
/// Size: 0x03
enum EBoneGetterSetterMode : uint8_t
{
	EBoneGetterSetterMode__LocalSpace                                                = 0,
	EBoneGetterSetterMode__GlobalSpace                                               = 1,
	EBoneGetterSetterMode__Max                                                       = 2
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x03
enum ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigClampSpatialMode
/// Size: 0x04
enum EControlRigClampSpatialMode : uint8_t
{
	EControlRigClampSpatialMode__Plane                                               = 0,
	EControlRigClampSpatialMode__Cylinder                                            = 1,
	EControlRigClampSpatialMode__Sphere                                              = 2,
	EControlRigClampSpatialMode__EControlRigClampSpatialMode_MAX                     = 3
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x05
enum ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.EControlRigDrawSettings
/// Size: 0x04
enum EControlRigDrawSettings : uint8_t
{
	EControlRigDrawSettings__Points                                                  = 0,
	EControlRigDrawSettings__Lines                                                   = 1,
	EControlRigDrawSettings__LineStrip                                               = 2,
	EControlRigDrawSettings__EControlRigDrawSettings_MAX                             = 3
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x02
enum EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EControlRigAnimEasingType
/// Size: 0x32
enum EControlRigAnimEasingType : uint8_t
{
	EControlRigAnimEasingType__Linear                                                = 0,
	EControlRigAnimEasingType__QuadraticEaseIn                                       = 1,
	EControlRigAnimEasingType__QuadraticEaseOut                                      = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut                                    = 3,
	EControlRigAnimEasingType__CubicEaseIn                                           = 4,
	EControlRigAnimEasingType__CubicEaseOut                                          = 5,
	EControlRigAnimEasingType__CubicEaseInOut                                        = 6,
	EControlRigAnimEasingType__QuarticEaseIn                                         = 7,
	EControlRigAnimEasingType__QuarticEaseOut                                        = 8,
	EControlRigAnimEasingType__QuarticEaseInOut                                      = 9,
	EControlRigAnimEasingType__QuinticEaseIn                                         = 10,
	EControlRigAnimEasingType__QuinticEaseOut                                        = 11,
	EControlRigAnimEasingType__QuinticEaseInOut                                      = 12,
	EControlRigAnimEasingType__SineEaseIn                                            = 13,
	EControlRigAnimEasingType__SineEaseOut                                           = 14,
	EControlRigAnimEasingType__SineEaseInOut                                         = 15,
	EControlRigAnimEasingType__CircularEaseIn                                        = 16,
	EControlRigAnimEasingType__CircularEaseOut                                       = 17,
	EControlRigAnimEasingType__CircularEaseInOut                                     = 18,
	EControlRigAnimEasingType__ExponentialEaseIn                                     = 19,
	EControlRigAnimEasingType__ExponentialEaseOut                                    = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut                                  = 21,
	EControlRigAnimEasingType__ElasticEaseIn                                         = 22,
	EControlRigAnimEasingType__ElasticEaseOut                                        = 23,
	EControlRigAnimEasingType__ElasticEaseInOut                                      = 24,
	EControlRigAnimEasingType__BackEaseIn                                            = 25,
	EControlRigAnimEasingType__BackEaseOut                                           = 26,
	EControlRigAnimEasingType__BackEaseInOut                                         = 27,
	EControlRigAnimEasingType__BounceEaseIn                                          = 28,
	EControlRigAnimEasingType__BounceEaseOut                                         = 29,
	EControlRigAnimEasingType__BounceEaseInOut                                       = 30,
	EControlRigAnimEasingType__EControlRigAnimEasingType_MAX                         = 31
};

/// Enum /Script/ControlRig.EControlRigRotationOrder
/// Size: 0x07
enum EControlRigRotationOrder : uint8_t
{
	EControlRigRotationOrder__XYZ                                                    = 0,
	EControlRigRotationOrder__XZY                                                    = 1,
	EControlRigRotationOrder__YXZ                                                    = 2,
	EControlRigRotationOrder__YZX                                                    = 3,
	EControlRigRotationOrder__ZXY                                                    = 4,
	EControlRigRotationOrder__ZYX                                                    = 5,
	EControlRigRotationOrder__EControlRigRotationOrder_MAX                           = 6
};

/// Enum /Script/ControlRig.ECRSimPointIntegrateType
/// Size: 0x03
enum ECRSimPointIntegrateType : uint8_t
{
	ECRSimPointIntegrateType__Verlet                                                 = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler                                      = 1,
	ECRSimPointIntegrateType__ECRSimPointIntegrateType_MAX                           = 2
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x05
enum ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3,
	ECRSimConstraintType__ECRSimConstraintType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x02
enum ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0,
	ECRSimPointForceType__ECRSimPointForceType_MAX                                   = 1
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x04
enum ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2,
	ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX                             = 3
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x03
enum ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1,
	ERigBoneType__ERigBoneType_MAX                                                   = 2
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x04
enum ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2,
	ERigControlAxis__ERigControlAxis_MAX                                             = 3
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x05
enum ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3,
	ERigControlValueType__ERigControlValueType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x09
enum ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Vector2D                                                        = 2,
	ERigControlType__Position                                                        = 3,
	ERigControlType__Scale                                                           = 4,
	ERigControlType__Rotator                                                         = 5,
	ERigControlType__Transform                                                       = 6,
	ERigControlType__TransformNoScale                                                = 7,
	ERigControlType__ERigControlType_MAX                                             = 8
};

/// Enum /Script/ControlRig.ERigHierarchyImportMode
/// Size: 0x05
enum ERigHierarchyImportMode : uint8_t
{
	ERigHierarchyImportMode__Append                                                  = 0,
	ERigHierarchyImportMode__Replace                                                 = 1,
	ERigHierarchyImportMode__ReplaceLocalTransform                                   = 2,
	ERigHierarchyImportMode__ReplaceGlobalTransform                                  = 3,
	ERigHierarchyImportMode__Max                                                     = 4
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x07
enum ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__All                                                             = 15,
	ERigElementType__ERigElementType_MAX                                             = 16
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x05
enum ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3,
	ERigSpaceType__ERigSpaceType_MAX                                                 = 4
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x03
enum EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1,
	EAimMode__MAX                                                                    = 2
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x03
enum EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugPointMode
/// Size: 0x03
enum ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugTransformMode
/// Size: 0x04
enum ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x03
enum EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1,
	EControlRigCurveAlignment__EControlRigCurveAlignment_MAX                         = 2
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x03
enum EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1,
	EControlRigVectorKind__EControlRigVectorKind_MAX                                 = 2
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x05
enum EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.ERigUnitVisualDebugPointMode
/// Size: 0x03
enum ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/ControlRig.EControlRigState
/// Size: 0x04
enum EControlRigState : uint8_t
{
	EControlRigState__Init                                                           = 0,
	EControlRigState__Update                                                         = 1,
	EControlRigState__Invalid                                                        = 2,
	EControlRigState__EControlRigState_MAX                                           = 3
};

