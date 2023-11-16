/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CinematicCamera.

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0060 (0x000800 - 0x000860)
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x0800   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0850   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	UCineCameraComponent* GetCineCameraComponent();                                                                          // [0x35371b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000228 - 0x000258)
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0228   (0x0004)  
	float                                              CraneYaw;                                                   // 0x022C   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0230   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x0234   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x0235   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0236   (0x0002)  MISSED
	USceneComponent*                                   TransformComponent;                                         // 0x0238   (0x0008)  
	USceneComponent*                                   CraneYawControl;                                            // 0x0240   (0x0008)  
	USceneComponent*                                   CranePitchControl;                                          // 0x0248   (0x0008)  
	USceneComponent*                                   CraneCameraMount;                                           // 0x0250   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000228 - 0x000248)
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0228   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x022C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x022D   (0x0003)  MISSED
	USceneComponent*                                   TransformComponent;                                         // 0x0230   (0x0008)  
	USplineComponent*                                  RailSplineComponent;                                        // 0x0238   (0x0008)  
	USceneComponent*                                   RailCameraMount;                                            // 0x0240   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	USplineComponent* GetRailSplineComponent();                                                                              // [0x35374a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0100 (0x000930 - 0x000A30)
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0930   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x093C   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0948   (0x0018)  
	FCameraFocusSettings                               FocusSettings;                                              // 0x0960   (0x0058)  
	float                                              CurrentFocalLength;                                         // 0x09B8   (0x0004)  
	float                                              CurrentAperture;                                            // 0x09BC   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x09C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x09C4   (0x000C)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x09D0   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x09E0   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x09F0   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x0A00   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x0A10   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0A20   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x0A24   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0A28   (0x0008)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	void SetLensPresetByName(FString InPresetName);                                                                          // [0x3537630] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x3537590] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	void SetCurrentFocalLength(float& InFocalLength);                                                                        // [0x35374f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	float GetVerticalFieldOfView();                                                                                          // [0x35374c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x35373c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	FString GetLensPresetName();                                                                                             // [0x3537340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	float GetHorizontalFieldOfView();                                                                                        // [0x3537310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	FString GetFilmbackPresetName();                                                                                         // [0x3537290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	FString GetDefaultFilmbackPresetName();                                                                                  // [0x35371d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking;                                      // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition;                           // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	TWeakObjectPtr<AActor*>                            ActorToTrack;                                               // 0x0018   (0x0028)  
	FVector                                            RelativeOffset;                                             // 0x0040   (0x000C)  
	bool                                               bAllowRoll;                                                 // 0x004C:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0038)  
	bool                                               bDrawDebugFocusPlane;                                       // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	FColor                                             DebugFocusPlaneColor;                                       // 0x0044   (0x0004)  
	bool                                               bSmoothFocusChanges;                                        // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x004C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCameraTrackingFocusSettings
{ 
	TWeakObjectPtr<AActor*>                            ActorToTrack;                                               // 0x0000   (0x0028)  
	FVector                                            RelativeOffset;                                             // 0x0028   (0x000C)  
	bool                                               bDrawDebugTrackingFocusPoint;                               // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x0018)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x05
enum ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3,
	ECameraFocusMethod__MAX                                                          = 4
};
