/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimationBudgetAllocator.

/// Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
/// Size: 0x0030 (0x000C20 - 0x000C50)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{ 
public:
	TEnumAsByte<ESkeletalMeshAnimDetailMode>           AnimDetailMode;                                             // 0x0C18   (0x0001)  
	unsigned char                                      UnknownData00_5[0x27];                                      // 0x0C19   (0x0027)  MISSED
	bool                                               bAutoRegisterWithBudgetAllocator;                           // 0x0C40:0 (0x0001)  
	bool                                               bAutoCalculateSignificance;                                 // 0x0C40:1 (0x0001)  
	bool                                               bShouldUseActorRenderedFlag;                                // 0x0C40:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0C41   (0x000F)  MISSED


	/// Functions
	// Function /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);                                        // [0x724710] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
/// Size: 0x0054 (0x000000 - 0x000054)
struct FAnimationBudgetAllocatorParameters
{ 
	float                                              BudgetInMs;                                                 // 0x0000   (0x0004)  
	float                                              MinQuality;                                                 // 0x0004   (0x0004)  
	int32_t                                            MaxTickRate;                                                // 0x0008   (0x0004)  
	float                                              WorkUnitSmoothingSpeed;                                     // 0x000C   (0x0004)  
	float                                              AlwaysTickFalloffAggression;                                // 0x0010   (0x0004)  
	float                                              InterpolationFalloffAggression;                             // 0x0014   (0x0004)  
	int32_t                                            InterpolationMaxRate;                                       // 0x0018   (0x0004)  
	int32_t                                            MaxInterpolatedComponents;                                  // 0x001C   (0x0004)  
	float                                              InterpolationTickMultiplier;                                // 0x0020   (0x0004)  
	float                                              InitialEstimatedWorkUnitTimeMs;                             // 0x0024   (0x0004)  
	int32_t                                            MaxTickedOffsreenComponents;                                // 0x0028   (0x0004)  
	int32_t                                            StateChangeThrottleInFrames;                                // 0x002C   (0x0004)  
	float                                              BudgetFactorBeforeReducedWork;                              // 0x0030   (0x0004)  
	float                                              BudgetFactorBeforeReducedWorkEpsilon;                       // 0x0034   (0x0004)  
	float                                              BudgetPressureSmoothingSpeed;                               // 0x0038   (0x0004)  
	int32_t                                            ReducedWorkThrottleMinInFrames;                             // 0x003C   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxInFrames;                             // 0x0040   (0x0004)  
	float                                              BudgetFactorBeforeAggressiveReducedWork;                    // 0x0044   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxPerFrame;                             // 0x0048   (0x0004)  
	float                                              BudgetPressureBeforeEmergencyReducedWork;                   // 0x004C   (0x0004)  
	float                                              AlwaysTickSignificanceThreshold;                            // 0x0050   (0x0004)  
};

/// Enum /Script/AnimationBudgetAllocator.ESkeletalMeshAnimDetailMode
/// Size: 0x04
enum ESkeletalMeshAnimDetailMode : uint8_t
{
	SMADM_Low                                                                        = 0,
	SMADM_Medium                                                                     = 1,
	SMADM_High                                                                       = 2,
	SMADM_MAX                                                                        = 3
};

