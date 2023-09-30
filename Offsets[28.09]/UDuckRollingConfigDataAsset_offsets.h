namespace offsets
{
	namespace UDuckRollingConfigDataAsset
	{
			constexpr auto RollingMeshOverrideForSkin = 0x30; // Size: 80, Type: struct TMap<int32_t, struct FStaticMeshOverride>
			constexpr auto SwitchToRollingMeshDelay = 0x80; // Size: 4, Type: float
			constexpr auto bHideCharacterMesh = 0x84; // Size: 1, Type: bool
			constexpr auto VisibilityTag = 0x88; // Size: 8, Type: struct FGameplayTag
			constexpr auto SwitchToRollingMeshStatusTag = 0x90; // Size: 8, Type: struct FGameplayTag
			constexpr auto RollingBallScale = 0x98; // Size: 4, Type: float
			constexpr auto RollingBallRadius = 0x9c; // Size: 4, Type: float
			constexpr auto RollingBallCenterOffset = 0xa0; // Size: 12, Type: struct FVector
			constexpr auto bOverrideCameraDesiredDistance = 0xac; // Size: 1, Type: bool
			constexpr auto CameraDesiredDistanceOverride = 0xb0; // Size: 4, Type: float
			constexpr auto bOverrideCameraDistanceSmoothFactor = 0xb4; // Size: 1, Type: bool
			constexpr auto CameraDistanceSmoothFactorOverride = 0xb8; // Size: 4, Type: float
			constexpr auto RollingAngleDecelerationOnFalling = 0xbc; // Size: 4, Type: float
			constexpr auto RollingAngleFrictionOnFalling = 0xc0; // Size: 4, Type: float
			constexpr auto InitRollingAngleSpeed = 0xc4; // Size: 4, Type: float
			constexpr auto InitLocalRollingAxis = 0xc8; // Size: 12, Type: struct FVector
			constexpr auto RollingMoveRadius = 0xd4; // Size: 4, Type: float
			constexpr auto bOverrideMovementMaxAcceleration = 0xd8; // Size: 1, Type: bool
			constexpr auto MovementMaxAccelerationOverride = 0xdc; // Size: 4, Type: float
			constexpr auto bOverrideBrakingDecelerationWalking = 0xe0; // Size: 1, Type: bool
			constexpr auto BrakingDecelerationWalkingOverride = 0xe4; // Size: 4, Type: float
			constexpr auto bOverrideMinAccelerationProjectRatioForValidGroundSlide = 0xe8; // Size: 1, Type: bool
			constexpr auto MinAccelerationProjectRatioForValidGroundSlideOverride = 0xec; // Size: 4, Type: float
			constexpr auto bOverrideCustomJumpParams = 0xf0; // Size: 1, Type: bool
			constexpr auto OverrideCustomJumpParams = 0xf4; // Size: 12, Type: struct FCustomJumpParams
			constexpr auto JumpSoundGroupName = 0x100; // Size: 8, Type: struct FName
			constexpr auto CharacterHitConfig = 0x110; // Size: 160, Type: struct FDuckRollingCharacterHitConfig
			constexpr auto ReshapingPointParameterName = 0x1b0; // Size: 8, Type: struct FName
			constexpr auto ReshapingOrthoDirParameterName = 0x1b8; // Size: 8, Type: struct FName
			constexpr auto ReshapingMoveDirScaleParameterName = 0x1c0; // Size: 8, Type: struct FName
			constexpr auto ReshapingOrthoDirScaleParameterName = 0x1c8; // Size: 8, Type: struct FName
			constexpr auto ReshapingFlattenScaleParameterName = 0x1d0; // Size: 8, Type: struct FName
			constexpr auto BounceRequiredMinSpeedOnImpactNormal = 0x1d8; // Size: 4, Type: float
			constexpr auto BounceCollisionShapeScale = 0x1dc; // Size: 4, Type: float
			constexpr auto BounceTriggerCooldown = 0x1e0; // Size: 4, Type: float
			constexpr auto BounceGameplayCueTag = 0x1e4; // Size: 8, Type: struct FGameplayCueTag
			constexpr auto BounceDurationHoriCurve = 0x1f0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceDurationVertCurve = 0x278; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceReshapingMoveDirCurve = 0x300; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceReshapingOrthoDirCurve = 0x388; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceReshapingFlattenScaleCurve = 0x410; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceReshapingScaleCurve = 0x498; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceMoveHoriDurationScaleCurve = 0x520; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceMoveVertDurationScaleCurve = 0x5a8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceMoveHoriImmovableDurationScaleCurve = 0x630; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceMoveVertImmovableDurationScaleCurve = 0x6b8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceMoveRequiredMinSpeedOnImpactNormal = 0x740; // Size: 4, Type: float
			constexpr auto BounceMoveMaxAllowedHoriBounceSpeed = 0x744; // Size: 4, Type: float
			constexpr auto BounceMoveMaxAllowedVertBounceSpeed = 0x748; // Size: 4, Type: float
			constexpr auto BounceMoveHoriSpeedInheritanceCurve = 0x750; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto BounceMoveVertSpeedInheritanceCurve = 0x7d8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto JumpReshapingDuration = 0x860; // Size: 4, Type: float
			constexpr auto JumpReshapingMoveDirCurve = 0x868; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto JumpReshapingOrthoDirCurve = 0x8f0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SwitchReshapingDuration = 0x978; // Size: 4, Type: float
			constexpr auto SwitchReshapingMoveDirCurve = 0x980; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto SwitchReshapingOrthoDirCurve = 0xa08; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto RandomReshapingIntervalRange = 0xa90; // Size: 8, Type: struct FRangeFloat
			constexpr auto MinSpeedForRandomReshaping = 0xa98; // Size: 4, Type: float
			constexpr auto RandomReshapingDuration = 0xa9c; // Size: 4, Type: float
			constexpr auto RandomReshapingMoveDirCurve = 0xaa0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto RandomReshapingOrthoDirCurve = 0xb28; // Size: 136, Type: struct FRuntimeFloatCurve
	}
} 
