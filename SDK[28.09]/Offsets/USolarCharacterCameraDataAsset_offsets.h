namespace offsets
{
	namespace USolarCharacterCameraDataAsset
	{
			constexpr auto ThirdPersonVerticalOffset = 0x30; // Size: 4, Type: float
			constexpr auto ThirdPersonVerticalOffsetWhenCrouched = 0x34; // Size: 4, Type: float
			constexpr auto ThirdPersonVerticalOffsetWhenCrouchMoving = 0x38; // Size: 4, Type: float
			constexpr auto ThirdPersonHorizontalOffset = 0x3c; // Size: 4, Type: float
			constexpr auto FollowForwardOffsetCurve = 0x40; // Size: 8, Type: struct UCurveFloat*
			constexpr auto FollowForwardOffsetMultiplier = 0x48; // Size: 4, Type: float
			constexpr auto CrouchCameraLagTime = 0x4c; // Size: 4, Type: float
			constexpr auto UnCrouchCameraLagTime = 0x50; // Size: 4, Type: float
			constexpr auto ShoulderShotVerticalOffset = 0x54; // Size: 4, Type: float
			constexpr auto ShoulderShotVerticalOffsetWhenCrouched = 0x58; // Size: 4, Type: float
			constexpr auto ShoulderShotHorizontalOffset = 0x5c; // Size: 4, Type: float
			constexpr auto ShoulderShotDistanceToTarget = 0x60; // Size: 4, Type: float
			constexpr auto ShoulderShotFollowDistanceCurve = 0x68; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ShoulderShotCameraFOV = 0x70; // Size: 4, Type: float
			constexpr auto ShoulderShotCameraZoomInOutTime = 0x74; // Size: 4, Type: float
			constexpr auto ScopeShotVerticalOffsetWithStanding = 0x78; // Size: 4, Type: float
			constexpr auto ScopeShotVerticalOffsetWhenCrouch = 0x7c; // Size: 4, Type: float
			constexpr auto DistanceToScopePivot = 0x80; // Size: 4, Type: float
			constexpr auto ArmDistanceToCamera = 0x84; // Size: 4, Type: float
			constexpr auto ScopeHorizontalOffset = 0x88; // Size: 4, Type: float
			constexpr auto SwimDistanceToTarget = 0x8c; // Size: 4, Type: float
			constexpr auto SwimDistSwitchSpeed = 0x90; // Size: 4, Type: float
			constexpr auto TakeOffCamPitchMin = 0x94; // Size: 4, Type: float
			constexpr auto TakeOffCamPitchMax = 0x98; // Size: 4, Type: float
			constexpr auto LandingSpeedThreshold = 0x9c; // Size: 4, Type: float
			constexpr auto ParkourCamSettings = 0xa0; // Size: 56, Type: struct FCamEffectSettings
			constexpr auto CruiseCameraOffset = 0xd8; // Size: 12, Type: struct FVector
			constexpr auto CruiseTargetOffset = 0xe4; // Size: 12, Type: struct FVector
			constexpr auto CruiseDistanceToTarget = 0xf0; // Size: 4, Type: float
			constexpr auto SkydiveCameraOffset = 0xf4; // Size: 12, Type: struct FVector
			constexpr auto SkydiveTargetOffset = 0x100; // Size: 12, Type: struct FVector
			constexpr auto SkydiveDistanceToTarget = 0x10c; // Size: 4, Type: float
			constexpr auto SkydiveDistanceToTargetOnBoosting = 0x110; // Size: 4, Type: float
			constexpr auto SkydiveViewPitchMax = 0x114; // Size: 4, Type: float
			constexpr auto SkydiveViewPitchMin = 0x118; // Size: 4, Type: float
			constexpr auto JetFlySettingsVertical = 0x11c; // Size: 32, Type: struct FCameraSettings
			constexpr auto JetFlySettingsFront = 0x13c; // Size: 32, Type: struct FCameraSettings
			constexpr auto JetFlySettingsBack = 0x15c; // Size: 32, Type: struct FCameraSettings
			constexpr auto JetFlySettingsLeft = 0x17c; // Size: 32, Type: struct FCameraSettings
			constexpr auto JetFlySettingsRight = 0x19c; // Size: 32, Type: struct FCameraSettings
			constexpr auto JetFlyFadeInCurve = 0x1c0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto JetFlyFadeOutCurve = 0x248; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto CameraShakeSkydiveFlying = 0x2d0; // Size: 8, Type: UCameraShake*
			constexpr auto CameraShakeSkydiveFlyingSpeedMin = 0x2d8; // Size: 4, Type: float
			constexpr auto CameraShakeSkydiveFlyingSpeedMax = 0x2dc; // Size: 4, Type: float
			constexpr auto CameraShakeJetPackLaunch = 0x2e0; // Size: 8, Type: UCameraShake*
			constexpr auto CameraShakeLand = 0x2e8; // Size: 8, Type: UCameraShake*
			constexpr auto CameraShakeVehicleEjectLaunch = 0x2f0; // Size: 8, Type: UCameraShake*
			constexpr auto CameraShakeLandDistanceMin = 0x2f8; // Size: 4, Type: float
			constexpr auto CameraShakeLandDistanceMax = 0x2fc; // Size: 4, Type: float
			constexpr auto CamShakeConfig = 0x300; // Size: 80, Type: struct TMap<enum class ECamShakeType, UCameraShake*>
			constexpr auto TargetOffsetLerpSpeed = 0x350; // Size: 4, Type: float
	}
} 
