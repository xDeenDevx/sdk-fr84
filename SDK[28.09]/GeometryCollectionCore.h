/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCollectionCore.

/// Struct /Script/GeometryCollectionCore.RecordedTransformTrack
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRecordedTransformTrack
{ 
	TArray<FRecordedFrame>                             Records;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/GeometryCollectionCore.RecordedFrame
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FRecordedFrame
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)  
	TArray<int32_t>                                    TransformIndices;                                           // 0x0010   (0x0010)  
	TArray<int32_t>                                    PreviousTransformIndices;                                   // 0x0020   (0x0010)  
	TArray<bool>                                       DisabledFlags;                                              // 0x0030   (0x0010)  
	TArray<FSolverCollisionData>                       Collisions;                                                 // 0x0040   (0x0010)  
	TArray<FSolverBreakingData>                        Breakings;                                                  // 0x0050   (0x0010)  
	TSet<FSolverTrailingData>                          Trailings;                                                  // 0x0060   (0x0050)  
	float                                              Timestamp;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionCore.SolverTrailingData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSolverTrailingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)  
	float                                              Mass;                                                       // 0x0024   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x002C   (0x0004)  
};

/// Struct /Script/GeometryCollectionCore.SolverBreakingData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSolverBreakingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)  
	float                                              Mass;                                                       // 0x0024   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x002C   (0x0004)  
};

/// Struct /Script/GeometryCollectionCore.SolverCollisionData
/// Size: 0x006C (0x000000 - 0x00006C)
struct FSolverCollisionData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            AccumulatedImpulse;                                         // 0x000C   (0x000C)  
	FVector                                            Normal;                                                     // 0x0018   (0x000C)  
	FVector                                            Velocity1;                                                  // 0x0024   (0x000C)  
	FVector                                            Velocity2;                                                  // 0x0030   (0x000C)  
	FVector                                            AngularVelocity1;                                           // 0x003C   (0x000C)  
	FVector                                            AngularVelocity2;                                           // 0x0048   (0x000C)  
	float                                              Mass1;                                                      // 0x0054   (0x0004)  
	float                                              Mass2;                                                      // 0x0058   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x005C   (0x0004)  
	int32_t                                            LevelsetIndex;                                              // 0x0060   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x0064   (0x0004)  
	int32_t                                            LevelsetIndexMesh;                                          // 0x0068   (0x0004)  
};

/// Enum /Script/GeometryCollectionCore.EGeometryCollectionCacheType
/// Size: 0x05
enum EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None                                               = 0,
	EGeometryCollectionCacheType__Record                                             = 1,
	EGeometryCollectionCacheType__Play                                               = 2,
	EGeometryCollectionCacheType__RecordAndPlay                                      = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX                   = 4
};

