/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EnhancedInput.

/// Class /Script/EnhancedInput.EnhancedInputActionDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionDelegateBindings;                                // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputActionValueBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionValueBindings;                                   // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputComponent
/// Size: 0x0030 (0x000138 - 0x000168)
class UEnhancedInputComponent : public UInputComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0138   (0x0030)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputSubsystemInterface : public UInterface
{ 
public:
};

/// Class /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputEngineSubsystem
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UEnhancedInputEngineSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0030   (0x00B0)  MISSED
	UEnhancedPlayerInput*                              PlayerInput;                                                // 0x00E0   (0x0008)  
};

/// Class /Script/EnhancedInput.EnhancedPlayerInput
/// Size: 0x0258 (0x0003A8 - 0x000600)
class UEnhancedPlayerInput : public UPlayerInput
{ 
public:
	TMap<UInputMappingContext*, int32_t>               AppliedInputContexts;                                       // 0x03A8   (0x0050)  
	TArray<FEnhancedActionKeyMapping>                  EnhancedActionMappings;                                     // 0x03F8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0408   (0x0050)  MISSED
	TMap<UInputAction*, FInputActionInstance>          ActionInstanceData;                                         // 0x0458   (0x0050)  
	unsigned char                                      UnknownData01_6[0x158];                                     // 0x04A8   (0x0158)  MISSED
};

/// Class /Script/EnhancedInput.InputAction
/// Size: 0x0028 (0x000030 - 0x000058)
class UInputAction : public UDataAsset
{ 
public:
	bool                                               bConsumeInput;                                              // 0x0030   (0x0001)  
	bool                                               bTriggerWhenPaused;                                         // 0x0031   (0x0001)  
	bool                                               bReserveAllMappings;                                        // 0x0032   (0x0001)  
	EInputActionValueType                              ValueType;                                                  // 0x0033   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<UInputTrigger*>                             Triggers;                                                   // 0x0038   (0x0010)  
	TArray<UInputModifier*>                            Modifiers;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/EnhancedInput.InputDebugKeyDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintInputDebugKeyDelegateBinding>     InputDebugKeyDelegateBindings;                              // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.InputMappingContext
/// Size: 0x0028 (0x000030 - 0x000058)
class UInputMappingContext : public UDataAsset
{ 
public:
	TArray<FEnhancedActionKeyMapping>                  Mappings;                                                   // 0x0030   (0x0010)  
	FText                                              ContextDescription;                                         // 0x0040   (0x0018)  


	/// Functions
	// Function /Script/EnhancedInput.InputMappingContext.UnmapKey
	void UnmapKey(UInputAction* Action, FKey Key);                                                                           // [0xc91730] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAll
	void UnmapAll();                                                                                                         // [0xc91710] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAction
	void UnmapAction(UInputAction* Action);                                                                                  // [0xc91680] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.MapKey
	FEnhancedActionKeyMapping MapKey(UInputAction* Action, FKey ToKey);                                                      // [0xc90bd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.InputModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifier : public UObject
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierDeadZone
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputModifierDeadZone : public UInputModifier
{ 
public:
	float                                              LowerThreshold;                                             // 0x0028   (0x0004)  
	float                                              UpperThreshold;                                             // 0x002C   (0x0004)  
	EDeadZoneType                                      Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierScalar
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputModifierScalar : public UInputModifier
{ 
public:
	FVector                                            Scalar;                                                     // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierNegate
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierNegate : public UInputModifier
{ 
public:
	bool                                               bX;                                                         // 0x0028   (0x0001)  
	bool                                               bY;                                                         // 0x0029   (0x0001)  
	bool                                               bZ;                                                         // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierSmooth
/// Size: 0x0020 (0x000028 - 0x000048)
class UInputModifierSmooth : public UInputModifier
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveExponential
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputModifierResponseCurveExponential : public UInputModifier
{ 
public:
	FVector                                            CurveExponent;                                              // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveUser
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveUser : public UInputModifier
{ 
public:
	UCurveFloat*                                       ResponseX;                                                  // 0x0028   (0x0008)  
	UCurveFloat*                                       ResponseY;                                                  // 0x0030   (0x0008)  
	UCurveFloat*                                       ResponseZ;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/EnhancedInput.InputModifierFOVScaling
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierFOVScaling : public UInputModifier
{ 
public:
	float                                              FOVScale;                                                   // 0x0028   (0x0004)  
	EFOVScalingType                                    FOVScalingType;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierToWorldSpace
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierToWorldSpace : public UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierSwizzleAxis
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierSwizzleAxis : public UInputModifier
{ 
public:
	EInputAxisSwizzle                                  Order;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierCollection
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierCollection : public UInputModifier
{ 
public:
	TArray<UInputModifier*>                            Modifiers;                                                  // 0x0028   (0x0010)  
	bool                                               bPermitValueTypeModification;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTrigger
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputTrigger : public UObject
{ 
public:
	float                                              ActuationThreshold;                                         // 0x0028   (0x0004)  
	FInputActionValue                                  LastValue;                                                  // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/EnhancedInput.InputTrigger.UpdateState
	ETriggerState UpdateState(UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);          // [0xc91860] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EnhancedInput.InputTrigger.IsActuated
	bool IsActuated(FInputActionValue& ForValue);                                                                            // [0xc90970] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputTrigger.GetTriggerType
	ETriggerTypeEx GetTriggerType();                                                                                         // [0x8f2200] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.InputTriggerTimedBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UInputTriggerTimedBase : public UInputTrigger
{ 
public:
	float                                              HeldDuration;                                               // 0x0040   (0x0004)  
	bool                                               bAffectedByTimeDilation;                                    // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerDown
/// Size: 0x0000 (0x000040 - 0x000040)
class UInputTriggerDown : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerPressed
/// Size: 0x0000 (0x000040 - 0x000040)
class UInputTriggerPressed : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerReleased
/// Size: 0x0000 (0x000040 - 0x000040)
class UInputTriggerReleased : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerHold
/// Size: 0x0010 (0x000048 - 0x000058)
class UInputTriggerHold : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0048   (0x0004)  MISSED
	float                                              HoldTimeThreshold;                                          // 0x004C   (0x0004)  
	bool                                               bIsOneShot;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerHoldAndRelease
/// Size: 0x0008 (0x000048 - 0x000050)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{ 
public:
	float                                              HoldTimeThreshold;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerTap
/// Size: 0x0008 (0x000048 - 0x000050)
class UInputTriggerTap : public UInputTriggerTimedBase
{ 
public:
	float                                              TapReleaseTimeThreshold;                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerPulse
/// Size: 0x0010 (0x000048 - 0x000058)
class UInputTriggerPulse : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bTriggerOnStart;                                            // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              Interval;                                                   // 0x0050   (0x0004)  
	int32_t                                            TriggerLimit;                                               // 0x0054   (0x0004)  
};

/// Class /Script/EnhancedInput.InputTriggerChordAction
/// Size: 0x0008 (0x000040 - 0x000048)
class UInputTriggerChordAction : public UInputTrigger
{ 
public:
	UInputAction*                                      ChordAction;                                                // 0x0040   (0x0008)  
};

/// Class /Script/EnhancedInput.InputTriggerChordBlocker
/// Size: 0x0000 (0x000048 - 0x000048)
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{ 
public:
};

/// Struct /Script/EnhancedInput.InputActionValue
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInputActionValue
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/EnhancedInput.EnhancedActionKeyMapping
/// Size: 0x0048 (0x000000 - 0x000048)
struct FEnhancedActionKeyMapping
{ 
	UInputAction*                                      Action;                                                     // 0x0000   (0x0008)  
	FKey                                               Key;                                                        // 0x0008   (0x0018)  
	bool                                               bShouldBeIgnored;                                           // 0x0020:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<UInputTrigger*>                             Triggers;                                                   // 0x0028   (0x0010)  
	TArray<UInputModifier*>                            Modifiers;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBlueprintEnhancedInputActionBinding
{ 
	UInputAction*                                      InputAction;                                                // 0x0000   (0x0008)  
	ETriggerEvent                                      TriggerEvent;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/EnhancedInput.InputActionInstance
/// Size: 0x0070 (0x000000 - 0x000070)
struct FInputActionInstance
{ 
	UInputAction*                                      SourceAction;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	TArray<UInputTrigger*>                             Triggers;                                                   // 0x0010   (0x0010)  
	TArray<UInputModifier*>                            Modifiers;                                                  // 0x0020   (0x0010)  
	TArray<UInputModifier*>                            PerInputModifiers;                                          // 0x0030   (0x0010)  
	TArray<UInputModifier*>                            FinalValueModifiers;                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	float                                              ElapsedProcessedTime;                                       // 0x0060   (0x0004)  
	float                                              ElapsedTriggeredTime;                                       // 0x0064   (0x0004)  
	ETriggerEvent                                      TriggerEvent;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBlueprintInputDebugKeyDelegateBinding
{ 
	FInputChord                                        InputChord;                                                 // 0x0000   (0x0020)  
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x0024   (0x0008)  
	bool                                               bExecuteWhenPaused;                                         // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/EnhancedInput.MappingQueryIssue
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMappingQueryIssue
{ 
	EMappingQueryIssue                                 Issue;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	UInputMappingContext*                              BlockingContext;                                            // 0x0008   (0x0008)  
	UInputAction*                                      BlockingAction;                                             // 0x0010   (0x0008)  
};

/// Enum /Script/EnhancedInput.EInputActionValueType
/// Size: 0x05
enum EInputActionValueType : uint8_t
{
	EInputActionValueType__Boolean                                                   = 0,
	EInputActionValueType__Axis1D                                                    = 1,
	EInputActionValueType__Axis2D                                                    = 2,
	EInputActionValueType__Axis3D                                                    = 3,
	EInputActionValueType__EInputActionValueType_MAX                                 = 4
};

/// Enum /Script/EnhancedInput.EMappingQueryIssue
/// Size: 0x08
enum EMappingQueryIssue : uint8_t
{
	EMappingQueryIssue__NoIssue                                                      = 0,
	EMappingQueryIssue__ReservedByAction                                             = 1,
	EMappingQueryIssue__HidesExistingMapping                                         = 2,
	EMappingQueryIssue__HiddenByExistingMapping                                      = 4,
	EMappingQueryIssue__CollisionWithMappingInSameContext                            = 8,
	EMappingQueryIssue__ForcesTypePromotion                                          = 16,
	EMappingQueryIssue__ForcesTypeDemotion                                           = 32,
	EMappingQueryIssue__EMappingQueryIssue_MAX                                       = 33
};

/// Enum /Script/EnhancedInput.EMappingQueryResult
/// Size: 0x06
enum EMappingQueryResult : uint8_t
{
	EMappingQueryResult__Error_EnhancedInputNotEnabled                               = 0,
	EMappingQueryResult__Error_InputContextNotInActiveContexts                       = 1,
	EMappingQueryResult__Error_InvalidAction                                         = 2,
	EMappingQueryResult__NotMappable                                                 = 3,
	EMappingQueryResult__MappingAvailable                                            = 4,
	EMappingQueryResult__EMappingQueryResult_MAX                                     = 5
};

/// Enum /Script/EnhancedInput.EInputAxisSwizzle
/// Size: 0x06
enum EInputAxisSwizzle : uint8_t
{
	EInputAxisSwizzle__YXZ                                                           = 0,
	EInputAxisSwizzle__ZYX                                                           = 1,
	EInputAxisSwizzle__XZY                                                           = 2,
	EInputAxisSwizzle__YZX                                                           = 3,
	EInputAxisSwizzle__ZXY                                                           = 4,
	EInputAxisSwizzle__EInputAxisSwizzle_MAX                                         = 5
};

/// Enum /Script/EnhancedInput.EFOVScalingType
/// Size: 0x03
enum EFOVScalingType : uint8_t
{
	EFOVScalingType__Standard                                                        = 0,
	EFOVScalingType__UE4_BackCompat                                                  = 1,
	EFOVScalingType__EFOVScalingType_MAX                                             = 2
};

/// Enum /Script/EnhancedInput.EDeadZoneType
/// Size: 0x03
enum EDeadZoneType : uint8_t
{
	EDeadZoneType__Axial                                                             = 0,
	EDeadZoneType__Radial                                                            = 1,
	EDeadZoneType__EDeadZoneType_MAX                                                 = 2
};

/// Enum /Script/EnhancedInput.EModifierExecutionPhase
/// Size: 0x04
enum EModifierExecutionPhase : uint8_t
{
	EModifierExecutionPhase__PerInput                                                = 0,
	EModifierExecutionPhase__FinalValue                                              = 1,
	EModifierExecutionPhase__NumPhases                                               = 2,
	EModifierExecutionPhase__EModifierExecutionPhase_MAX                             = 3
};

/// Enum /Script/EnhancedInput.ETriggerTypeEx
/// Size: 0x04
enum ETriggerTypeEx : uint8_t
{
	ETriggerTypeEx__Explicit                                                         = 0,
	ETriggerTypeEx__Implicit                                                         = 1,
	ETriggerTypeEx__Blocker                                                          = 2,
	ETriggerTypeEx__ETriggerTypeEx_MAX                                               = 3
};

/// Enum /Script/EnhancedInput.ETriggerEvent
/// Size: 0x07
enum ETriggerEvent : uint8_t
{
	ETriggerEvent__None                                                              = 0,
	ETriggerEvent__Started                                                           = 1,
	ETriggerEvent__Ongoing                                                           = 2,
	ETriggerEvent__Canceled                                                          = 3,
	ETriggerEvent__Triggered                                                         = 4,
	ETriggerEvent__Completed                                                         = 5,
	ETriggerEvent__ETriggerEvent_MAX                                                 = 6
};

/// Enum /Script/EnhancedInput.ETriggerState
/// Size: 0x04
enum ETriggerState : uint8_t
{
	ETriggerState__None                                                              = 0,
	ETriggerState__Ongoing                                                           = 1,
	ETriggerState__Triggered                                                         = 2,
	ETriggerState__ETriggerState_MAX                                                 = 3
};

