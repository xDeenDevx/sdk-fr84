/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HeadMountedDisplay.

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x00C0 (0x000540 - 0x000600)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0540   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x0544   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0545   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0548   (0x0008)  
	bool                                               bDisableLowLatencyUpdate;                                   // 0x0550:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0551   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x0554   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x0555   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0556   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x0558   (0x0008)  
	UStaticMesh*                                       CustomDisplayMesh;                                          // 0x0560   (0x0008)  
	TArray<UMaterialInterface*>                        DisplayMeshMaterialOverrides;                               // 0x0568   (0x0010)  
	unsigned char                                      UnknownData03_5[0x68];                                      // 0x0578   (0x0068)  MISSED
	UPrimitiveComponent*                               DisplayComponent;                                           // 0x05E0   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x05E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	void SetTrackingSource(EControllerHand NewSource);                                                                       // [0x31180d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	void SetTrackingMotionSource(FName NewSource);                                                                           // [0x3117fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	void SetShowDeviceModel(bool bShowControllerModel);                                                                      // [0x3117c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	void SetDisplayModelSource(FName NewDisplayModelSource);                                                                 // [0x3117970] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	void SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh);                                                                  // [0x31178e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                        // [0x3117790] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	void OnMotionControllerUpdated();                                                                                        // [0x2649560] Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	bool IsTracked();                                                                                                        // [0x31176b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	EControllerHand GetTrackingSource();                                                                                     // [0x3116f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	float GetParameterValue(FName InName, bool& bValueFound);                                                                // [0x31167e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                     // [0x3116590] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x0090 (0x0000B0 - 0x000140)
class UVRNotificationsComponent : public UActorComponent
{ 
public:
	FMulticastInlineDelegate                           HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate;      // 0x00B0   (0x0010)  
	FMulticastInlineDelegate                           HMDTrackingInitializedDelegate;                             // 0x00C0   (0x0010)  
	FMulticastInlineDelegate                           HMDRecenteredDelegate;                                      // 0x00D0   (0x0010)  
	FMulticastInlineDelegate                           HMDLostDelegate;                                            // 0x00E0   (0x0010)  
	FMulticastInlineDelegate                           HMDReconnectedDelegate;                                     // 0x00F0   (0x0010)  
	FMulticastInlineDelegate                           HMDConnectCanceledDelegate;                                 // 0x0100   (0x0010)  
	FMulticastInlineDelegate                           HMDPutOnHeadDelegate;                                       // 0x0110   (0x0010)  
	FMulticastInlineDelegate                           HMDRemovedFromHeadDelegate;                                 // 0x0120   (0x0010)  
	FMulticastInlineDelegate                           VRControllerRecenteredDelegate;                             // 0x0130   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (0x000030 - 0x000060)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	FMulticastInlineDelegate                           OnModelLoaded;                                              // 0x0030   (0x0010)  
	FMulticastInlineDelegate                           OnLoadFailure;                                              // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0050   (0x0008)  MISSED
	UPrimitiveComponent*                               SpawnedComponent;                                           // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent); // [0x3115390] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent); // [0x3114d90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x000C (0x000000 - 0x00000C)
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceID;                                                   // 0x0008   (0x0004)  
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x07
enum EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX                                   = 256
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX                                   = 8
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2,
	EHMDWornState__EHMDWornState_MAX                                                 = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX                                       = 3
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX                             = 3
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2,
	ETrackingStatus__ETrackingStatus_MAX                                             = 3
};

