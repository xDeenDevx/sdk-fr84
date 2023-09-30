namespace offsets
{
	namespace USolarCharacterMovementComponent
	{
			constexpr auto SolarCharacterOwner = 0x6b0; // Size: 8, Type: struct ASolarCharacter*
			constexpr auto DefaultUnscaledCapsuleHalfHeight = 0x6b8; // Size: 4, Type: float
			constexpr auto DefaultLazyRefreshBonesDelay = 0x6bc; // Size: 4, Type: float
			constexpr auto bKeepWalkSpeedOnTurning = 0x6e0; // Size: 1, Type: bool
			constexpr auto MinJogSpeedScaleOnBlocked = 0x6e4; // Size: 4, Type: float
			constexpr auto MinRunSpeedScaleOnBlocked = 0x6e8; // Size: 4, Type: float
			constexpr auto MinSprintSpeedScaleOnBlocked = 0x6ec; // Size: 4, Type: float
			constexpr auto MinCrawlSpeedScaleOnBlocked = 0x6f0; // Size: 4, Type: float
			constexpr auto MinSwimSpeedScaleOnBlocked = 0x6f4; // Size: 4, Type: float
			constexpr auto MinAccelerationProjectRatioForValidGroundSlide = 0x6f8; // Size: 4, Type: float
			constexpr auto bOverrideFallingGravity = 0x6fc; // Size: 1, Type: bool
			constexpr auto OverriddenFallingGravity = 0x700; // Size: 4, Type: float
			constexpr auto FallingHorizontalSpeedUpperLimit = 0x704; // Size: 4, Type: float
			constexpr auto MaxLocationDifferenceToTrustClientMove = 0x708; // Size: 4, Type: float
			constexpr auto ClientMoveTrustType = 0x70c; // Size: 1, Type: enum class EClientMoveTrustType
			constexpr auto CurrentAirMoveMode = 0x742; // Size: 1, Type: enum class EAirMoveMode
			constexpr auto LastAirMoveMode = 0x743; // Size: 1, Type: enum class EAirMoveMode
			constexpr auto CustomJumpParams = 0x744; // Size: 12, Type: struct FCustomJumpParams
			constexpr auto CustomLaunchParams = 0x750; // Size: 12, Type: struct FCustomJumpParams
			constexpr auto JetPackConfig = 0x768; // Size: 8, Type: struct UJetPackConfig*
			constexpr auto SkydiveConfig = 0x788; // Size: 8, Type: struct USkydiveConfig*
			constexpr auto HinderAngel = 0x7b0; // Size: 4, Type: float
			constexpr auto HinderPercent = 0x7b4; // Size: 4, Type: float
			constexpr auto HinderZ = 0x7b8; // Size: 4, Type: float
			constexpr auto SwimSpeedWhenSprintLockConfig = 0x7bc; // Size: 4, Type: float
			constexpr auto SwimSpeedConfig = 0x7c0; // Size: 4, Type: float
			constexpr auto SwimSpeedSmoothSpeed = 0x7c4; // Size: 4, Type: float
			constexpr auto SwimMaxFloatingUpSpeed = 0x7c8; // Size: 4, Type: float
			constexpr auto SwimMaxSinkingSpeed = 0x7cc; // Size: 4, Type: float
			constexpr auto NextPhysicsVolume = 0x7d0; // Size: 8, Type: struct TWeakObjectPtr<APhysicsVolume>
			constexpr auto bWantDeathVerge = 0x855; // Size: 1, Type: bool
			constexpr auto DeathVergeBodyRadius = 0x858; // Size: 4, Type: float
			constexpr auto DeathVergeHalfHeight = 0x85c; // Size: 4, Type: float
			constexpr auto HangingTargetObj = 0x868; // Size: 8, Type: struct AActor*
			constexpr auto HangingTargetVelocity = 0x870; // Size: 12, Type: struct FVector
			constexpr auto UseHangingTargetVelocity = 0x87c; // Size: 1, Type: bool
			constexpr auto UseHangingTargetPos = 0x87d; // Size: 1, Type: bool
	}
} 
