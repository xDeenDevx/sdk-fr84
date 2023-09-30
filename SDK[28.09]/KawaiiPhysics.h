/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package KawaiiPhysics.

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
/// Size: 0x0030 (0x000030 - 0x000060)
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{ 
public:
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0030   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0040   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0050   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x0188 (0x0000C8 - 0x000250)
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RootBone;                                                   // 0x00C8   (0x0010)  
	TArray<FBoneReference>                             ExcludeBones;                                               // 0x00D8   (0x0010)  
	int32_t                                            TargetFramerate;                                            // 0x00E8   (0x0004)  
	bool                                               OverrideTargetFramerate;                                    // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00ED   (0x0003)  MISSED
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x00F0   (0x0018)  
	UCurveFloat*                                       DampingCurve;                                               // 0x0108   (0x0008)  
	UCurveFloat*                                       WorldDampingLocationCurve;                                  // 0x0110   (0x0008)  
	UCurveFloat*                                       WorldDampingRotationCurve;                                  // 0x0118   (0x0008)  
	UCurveFloat*                                       StiffnessCurve;                                             // 0x0120   (0x0008)  
	UCurveFloat*                                       RadiusCurve;                                                // 0x0128   (0x0008)  
	UCurveFloat*                                       LimitAngleCurve;                                            // 0x0130   (0x0008)  
	bool                                               bUpdatePhysicsSettingsInGame;                               // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              DummyBoneLength;                                            // 0x013C   (0x0004)  
	EBoneForwardAxis                                   BoneForwardAxis;                                            // 0x0140   (0x0001)  
	EPlanarConstraint                                  PlanarConstraint;                                           // 0x0141   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0142   (0x0006)  MISSED
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0148   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0158   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0168   (0x0010)  
	UKawaiiPhysicsLimitsDataAsset*                     LimitsDataAsset;                                            // 0x0178   (0x0008)  
	TArray<FSphericalLimit>                            SphericalLimitsData;                                        // 0x0180   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimitsData;                                          // 0x0190   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimitsData;                                           // 0x01A0   (0x0010)  
	float                                              TeleportDistanceThreshold;                                  // 0x01B0   (0x0004)  
	float                                              TeleportRotationThreshold;                                  // 0x01B4   (0x0004)  
	FVector                                            Gravity;                                                    // 0x01B8   (0x000C)  
	bool                                               bEnableWind;                                                // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	float                                              WindScale;                                                  // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x01CC   (0x0004)  MISSED
	TArray<FKawaiiPhysicsModifyBone>                   ModifyBones;                                                // 0x01D0   (0x0010)  
	float                                              TotalBoneLength;                                            // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData05_5[0xC];                                       // 0x01E4   (0x000C)  MISSED
	FTransform                                         PreSkelCompTransform;                                       // 0x01F0   (0x0030)  
	bool                                               bInitPhysicsSettings;                                       // 0x0220   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2F];                                      // 0x0221   (0x002F)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FKawaiiPhysicsModifyBone
{ 
	FBoneReference                                     BoneRef;                                                    // 0x0000   (0x0010)  
	int32_t                                            ParentIndex;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<int32_t>                                    ChildIndexs;                                                // 0x0018   (0x0010)  
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0028   (0x0018)  
	FVector                                            Location;                                                   // 0x0040   (0x000C)  
	FVector                                            PrevLocation;                                               // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FQuat                                              PrevRotation;                                               // 0x0060   (0x0010)  
	FVector                                            PoseLocation;                                               // 0x0070   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FQuat                                              PoseRotation;                                               // 0x0080   (0x0010)  
	FVector                                            PoseScale;                                                  // 0x0090   (0x000C)  
	float                                              LengthFromRoot;                                             // 0x009C   (0x0004)  
	bool                                               bDummy;                                                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FKawaiiPhysicsSettings
{ 
	float                                              Damping;                                                    // 0x0000   (0x0004)  
	float                                              WorldDampingLocation;                                       // 0x0004   (0x0004)  
	float                                              WorldDampingRotation;                                       // 0x0008   (0x0004)  
	float                                              Stiffness;                                                  // 0x000C   (0x0004)  
	float                                              Radius;                                                     // 0x0010   (0x0004)  
	float                                              LimitAngle;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCollisionLimitBase
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FVector                                            OffsetLocation;                                             // 0x0010   (0x000C)  
	FRotator                                           OffsetRotation;                                             // 0x001C   (0x000C)  
	FVector                                            Location;                                                   // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Rotation;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x0010 (0x000050 - 0x000060)
struct FPlanarLimit : FCollisionLimitBase
{ 
	FPlane                                             Plane;                                                      // 0x0050   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0010 (0x000050 - 0x000060)
struct FCapsuleLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	float                                              Length;                                                     // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0010 (0x000050 - 0x000060)
struct FSphericalLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0055   (0x000B)  MISSED
};

/// Struct /Script/KawaiiPhysics.CollisionLimitDataBase
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCollisionLimitDataBase
{ 
	FName                                              DrivingBoneName;                                            // 0x0000   (0x0008)  
	FVector                                            OffsetLocation;                                             // 0x0008   (0x000C)  
	FRotator                                           OffsetRotation;                                             // 0x0014   (0x000C)  
	FVector                                            Location;                                                   // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.PlanarLimitData
/// Size: 0x0010 (0x000050 - 0x000060)
struct FPlanarLimitData : FCollisionLimitDataBase
{ 
	FPlane                                             Plane;                                                      // 0x0050   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.CapsuleLimitData
/// Size: 0x0010 (0x000050 - 0x000060)
struct FCapsuleLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	float                                              Length;                                                     // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimitData
/// Size: 0x0010 (0x000050 - 0x000060)
struct FSphericalLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0055   (0x000B)  MISSED
};

/// Enum /Script/KawaiiPhysics.ECollisionLimitType
/// Size: 0x05
enum ECollisionLimitType : uint8_t
{
	ECollisionLimitType__None                                                        = 0,
	ECollisionLimitType__Spherical                                                   = 1,
	ECollisionLimitType__Capsule                                                     = 2,
	ECollisionLimitType__Planar                                                      = 3,
	ECollisionLimitType__ECollisionLimitType_MAX                                     = 4
};

/// Enum /Script/KawaiiPhysics.EBoneForwardAxis
/// Size: 0x07
enum EBoneForwardAxis : uint8_t
{
	EBoneForwardAxis__X_Positive                                                     = 0,
	EBoneForwardAxis__X_Negative                                                     = 1,
	EBoneForwardAxis__Y_Positive                                                     = 2,
	EBoneForwardAxis__Y_Negative                                                     = 3,
	EBoneForwardAxis__Z_Positive                                                     = 4,
	EBoneForwardAxis__Z_Negative                                                     = 5,
	EBoneForwardAxis__EBoneForwardAxis_MAX                                           = 6
};

/// Enum /Script/KawaiiPhysics.EPlanarConstraint
/// Size: 0x05
enum EPlanarConstraint : uint8_t
{
	EPlanarConstraint__None                                                          = 0,
	EPlanarConstraint__X                                                             = 1,
	EPlanarConstraint__Y                                                             = 2,
	EPlanarConstraint__Z                                                             = 3,
	EPlanarConstraint__EPlanarConstraint_MAX                                         = 4
};

