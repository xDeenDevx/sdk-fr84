// Class CinematicCamera.CineCameraActor
// Size: 0x860 (Inherited: 0x800)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x800(0x50)
	char pad_850[0x10]; // 0x850(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35371b0
};

// Class CinematicCamera.CameraRig_Crane
// Size: 0x258 (Inherited: 0x228)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x228(0x04)
	float CraneYaw; // 0x22c(0x04)
	float CraneArmLength; // 0x230(0x04)
	bool bLockMountPitch; // 0x234(0x01)
	bool bLockMountYaw; // 0x235(0x01)
	char pad_236[0x2]; // 0x236(0x02)
	struct USceneComponent* TransformComponent; // 0x238(0x08)
	struct USceneComponent* CraneYawControl; // 0x240(0x08)
	struct USceneComponent* CranePitchControl; // 0x248(0x08)
	struct USceneComponent* CraneCameraMount; // 0x250(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x248 (Inherited: 0x228)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x228(0x04)
	bool bLockOrientationToRail; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct USceneComponent* TransformComponent; // 0x230(0x08)
	struct USplineComponent* RailSplineComponent; // 0x238(0x08)
	struct USceneComponent* RailCameraMount; // 0x240(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x35374a0
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xa30 (Inherited: 0x930)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x930(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x93c(0x0c)
	struct FCameraLensSettings LensSettings; // 0x948(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x960(0x58)
	float CurrentFocalLength; // 0x9b8(0x04)
	float CurrentAperture; // 0x9bc(0x04)
	float CurrentFocusDistance; // 0x9c0(0x04)
	char pad_9C4[0xc]; // 0x9c4(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x9d0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x9e0(0x10)
	struct FString DefaultFilmbackPresetName; // 0x9f0(0x10)
	struct FString DefaultFilmbackPreset; // 0xa00(0x10)
	struct FString DefaultLensPresetName; // 0xa10(0x10)
	float DefaultLensFocalLength; // 0xa20(0x04)
	float DefaultLensFStop; // 0xa24(0x04)
	char pad_A28[0x8]; // 0xa28(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x3537630
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x3537590
	void SetCurrentFocalLength(float& InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x35374f0
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35374c0
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35373c0
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3537340
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3537310
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3537290
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x35371d0
};

