namespace offsets
{
	namespace USkydiveConfig
	{
			constexpr auto DefaultFallingSpeed = 0x30; // Size: 4, Type: float
			constexpr auto MinFallingSpeed = 0x34; // Size: 4, Type: float
			constexpr auto FallingBrakingDeceleration = 0x38; // Size: 4, Type: float
			constexpr auto FlyingForwardPitchMappingCurve = 0x40; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto MaxFlyingForwardSpeedCurve = 0xc8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto MaxFlyingSidewardSpeed = 0x150; // Size: 4, Type: float
			constexpr auto MaxFlyingAcceleration = 0x154; // Size: 4, Type: float
			constexpr auto MinFlyingBrakingDeceleration = 0x158; // Size: 4, Type: float
			constexpr auto MaxFlyingBrakingDeceleration = 0x15c; // Size: 4, Type: float
			constexpr auto FlyingRotationSmoothSpeedYaw = 0x160; // Size: 4, Type: float
			constexpr auto FlyingRotationSmoothSpeedPitch = 0x164; // Size: 4, Type: float
			constexpr auto FlyingRotationSmoothSpeedYawOnFollowing = 0x168; // Size: 4, Type: float
			constexpr auto FlyingRotationSmoothSpeedPitchOnFollowing = 0x16c; // Size: 4, Type: float
			constexpr auto LandingHeight = 0x170; // Size: 4, Type: float
			constexpr auto LandingFallingSpeed = 0x174; // Size: 4, Type: float
			constexpr auto LandingFallingBrakingDeceleration = 0x178; // Size: 4, Type: float
			constexpr auto LandingMaxFlyingSpeed = 0x17c; // Size: 4, Type: float
			constexpr auto LandingFlyingAcceleration = 0x180; // Size: 4, Type: float
			constexpr auto LandingIgnoredActorTags = 0x188; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto FollowFormation = 0x198; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto SmoothTimeToCatchUpWithLeaderOnBeginning = 0x1a8; // Size: 4, Type: float
			constexpr auto NetworkOptions = 0x1ac; // Size: 12, Type: struct FCharacterMovementNetworkOptions
	}
} 
