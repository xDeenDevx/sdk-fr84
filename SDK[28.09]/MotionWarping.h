/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MotionWarping.

/// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{ 
public:
	URootMotionModifier*                               RootMotionModifier;                                         // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	void OnWarpUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);                            // [0x2649560] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	void OnWarpEnd(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);                               // [0x2649560] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	void OnWarpBegin(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);                             // [0x2649560] Event|Public|BlueprintEvent|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	void OnRootMotionModifierUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);              // [0x8924c0] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	void OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);          // [0x8923f0] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	void OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);            // [0x892320] Final|Native|Public|Const 
	// Function /Script/MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	URootMotionModifier* AddRootMotionModifier(UMotionWarpingComponent* MotionWarpingComp, UAnimSequenceBase* Animation, float StartTime, float EndTime); // [0x8913f0] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MotionWarping.MotionWarpingUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/MotionWarping.MotionWarpingComponent
/// Size: 0x0098 (0x0000B0 - 0x000148)
class UMotionWarpingComponent : public UActorComponent
{ 
public:
	bool                                               bSearchForWindowsInAnimsWithinMontages;                     // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FMulticastInlineDelegate                           OnPreUpdate;                                                // 0x00B8   (0x0010)  
	TWeakObjectPtr<ACharacter*>                        CharacterOwner;                                             // 0x00C8   (0x0008)  
	TArray<URootMotionModifier*>                       Modifiers;                                                  // 0x00D0   (0x0010)  
	TMap<FName, FMotionWarpingTarget>                  WarpTargetMap;                                              // 0x00E0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0130   (0x0018)  MISSED


	/// Functions
	// Function /Script/MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	int32_t RemoveWarpTarget(FName WarpTargetName);                                                                          // [0x892590] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	void DisableAllRootMotionModifiers();                                                                                    // [0x891df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);                               // [0x8912b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation); // [0x891110] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);                                    // [0x891010] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, USceneComponent* Component, FName BoneName, bool bFollowComponent); // [0x890eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	void AddOrUpdateWarpTarget(FName WarpTargetName, FMotionWarpingTarget& WarpTarget);                                      // [0x890d70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier
/// Size: 0x0098 (0x000028 - 0x0000C0)
class URootMotionModifier : public UObject
{ 
public:
	TWeakObjectPtr<UAnimSequenceBase*>                 Animation;                                                  // 0x0028   (0x0008)  
	float                                              StartTime;                                                  // 0x0030   (0x0004)  
	float                                              EndTime;                                                    // 0x0034   (0x0004)  
	float                                              PreviousPosition;                                           // 0x0038   (0x0004)  
	float                                              CurrentPosition;                                            // 0x003C   (0x0004)  
	float                                              Weight;                                                     // 0x0040   (0x0004)  
	bool                                               bInLocalSpace;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0045   (0x000B)  MISSED
	FTransform                                         StartTransform;                                             // 0x0050   (0x0030)  
	float                                              ActualStartTime;                                            // 0x0080   (0x0004)  
	FDelegateProperty                                  OnActivateDelegate;                                         // 0x0084   (0x0010)  
	FDelegateProperty                                  OnUpdateDelegate;                                           // 0x0094   (0x0010)  
	FDelegateProperty                                  OnDeactivateDelegate;                                       // 0x00A4   (0x0010)  
	ERootMotionModifierState                           State;                                                      // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x00B5   (0x000B)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_Warp
/// Size: 0x00F0 (0x0000C0 - 0x0001B0)
class URootMotionModifier_Warp : public URootMotionModifier
{ 
public:
	FName                                              WarpTargetName;                                             // 0x00B8   (0x0008)  
	EWarpPointAnimProvider                             WarpPointAnimProvider;                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x00C1   (0x000F)  MISSED
	FTransform                                         WarpPointAnimTransform;                                     // 0x00D0   (0x0030)  
	FName                                              WarpPointAnimBoneName;                                      // 0x0100   (0x0008)  
	bool                                               bWarpTranslation;                                           // 0x0108   (0x0001)  
	bool                                               bIgnoreZAxis;                                               // 0x0109   (0x0001)  
	bool                                               bOnlyZAxis;                                                 // 0x010A   (0x0001)  
	bool                                               bWarpRotation;                                              // 0x010B   (0x0001)  
	EMotionWarpRotationType                            RotationType;                                               // 0x010C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              WarpRotationTimeMultiplier;                                 // 0x0110   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0114   (0x000C)  MISSED
	FTransform                                         CachedTargetTransform;                                      // 0x0120   (0x0030)  
	unsigned char                                      UnknownData03_6[0x60];                                      // 0x0150   (0x0060)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_SimpleWarp
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{ 
public:
};

/// Class /Script/MotionWarping.RootMotionModifier_Scale
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class URootMotionModifier_Scale : public URootMotionModifier
{ 
public:
	FVector                                            Scale;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
/// Size: 0x00D0 (0x0001B0 - 0x000280)
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{ 
public:
	bool                                               bWarpIKBones;                                               // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	TArray<FName>                                      IKBones;                                                    // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x01C8   (0x0008)  MISSED
	FTransform                                         CachedMeshTransform;                                        // 0x01D0   (0x0030)  
	FTransform                                         CachedMeshRelativeTransform;                                // 0x0200   (0x0030)  
	FTransform                                         CachedRootMotion;                                           // 0x0230   (0x0030)  
	FAnimSequenceTrackContainer                        Result;                                                     // 0x0260   (0x0020)  


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp.GetAdjustmentBlendIKBoneTransformAndAlpha
	void GetAdjustmentBlendIKBoneTransformAndAlpha(ACharacter* Character, FName BoneName, FTransform& OutTransform, float& OutAlpha); // [0x891f60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp.AddRootMotionModifierAdjustmentBlendWarp
	URootMotionModifier_AdjustmentBlendWarp* AddRootMotionModifierAdjustmentBlendWarp(UMotionWarpingComponent* InMotionWarpingComp, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, bool bInWarpIKBones, TArray<FName>& InIKBones); // [0x891550] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
/// Size: 0x0020 (0x0001B0 - 0x0001D0)
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x01B0   (0x0004)  MISSED
	float                                              MaxWarpDistance;                                            // 0x01B4   (0x0004)  
	bool                                               bClampByWarpDir2D;                                          // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x01B9   (0x0017)  MISSED


	/// Functions
	// Function /Script/MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(UMotionWarpingComponent* InMotionWarpingComp, UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier); // [0x8919b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MotionWarping.MotionWarpingWindowData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMotionWarpingWindowData
{ 
	UAnimNotifyState_MotionWarping*                    AnimNotify;                                                 // 0x0000   (0x0008)  
	float                                              StartTime;                                                  // 0x0008   (0x0004)  
	float                                              EndTime;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/MotionWarping.MotionWarpingTarget
/// Size: 0x0050 (0x000000 - 0x000050)
struct FMotionWarpingTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	TWeakObjectPtr<USceneComponent*>                   Component;                                                  // 0x0030   (0x0008)  
	FName                                              BoneName;                                                   // 0x0038   (0x0008)  
	bool                                               bFollowComponent;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0041   (0x000F)  MISSED
};

/// Struct /Script/MotionWarping.MotionDeltaTrackContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMotionDeltaTrackContainer
{ 
	TArray<FMotionDeltaTrack>                          Tracks;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MotionWarping.MotionDeltaTrack
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMotionDeltaTrack
{ 
	TArray<FTransform>                                 BoneTransformTrack;                                         // 0x0000   (0x0010)  
	TArray<FVector>                                    DeltaTranslationTrack;                                      // 0x0010   (0x0010)  
	TArray<FRotator>                                   DeltaRotationTrack;                                         // 0x0020   (0x0010)  
	FVector                                            TotalTranslation;                                           // 0x0030   (0x000C)  
	FRotator                                           TotalRotation;                                              // 0x003C   (0x000C)  
};

/// Enum /Script/MotionWarping.EWarpPointAnimProvider
/// Size: 0x04
enum EWarpPointAnimProvider : uint8_t
{
	EWarpPointAnimProvider__None                                                     = 0,
	EWarpPointAnimProvider__Static                                                   = 1,
	EWarpPointAnimProvider__Bone                                                     = 2,
	EWarpPointAnimProvider__EWarpPointAnimProvider_MAX                               = 3
};

/// Enum /Script/MotionWarping.EMotionWarpRotationType
/// Size: 0x03
enum EMotionWarpRotationType : uint8_t
{
	EMotionWarpRotationType__Default                                                 = 0,
	EMotionWarpRotationType__Facing                                                  = 1,
	EMotionWarpRotationType__EMotionWarpRotationType_MAX                             = 2
};

/// Enum /Script/MotionWarping.ERootMotionModifierState
/// Size: 0x05
enum ERootMotionModifierState : uint8_t
{
	ERootMotionModifierState__Waiting                                                = 0,
	ERootMotionModifierState__Active                                                 = 1,
	ERootMotionModifierState__MarkedForRemoval                                       = 2,
	ERootMotionModifierState__Disabled                                               = 3,
	ERootMotionModifierState__ERootMotionModifierState_MAX                           = 4
};

