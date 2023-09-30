namespace offsets
{
	namespace USolarHoverVehicleMovement
	{
			constexpr auto VehicleMesh = 0x230; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto MinLocationDiffForThrusterTrace = 0x238; // Size: 4, Type: float
			constexpr auto MinRotationDiffForThrusterTrace = 0x23c; // Size: 4, Type: float
			constexpr auto DriverJustOnTimer = 0x240; // Size: 4, Type: float
			constexpr auto MassOffset = 0x244; // Size: 12, Type: struct FVector
			constexpr auto HoverForce = 0x250; // Size: 4, Type: float
			constexpr auto HoverSpringCoefficient = 0x254; // Size: 4, Type: float
			constexpr auto HoverDampingCoefficient = 0x258; // Size: 4, Type: float
			constexpr auto HoverHeight = 0x25c; // Size: 4, Type: float
			constexpr auto MinHoverHeight = 0x260; // Size: 4, Type: float
			constexpr auto BouncinessForMinHoverHeight = 0x264; // Size: 4, Type: float
			constexpr auto ThrusterDataArray = 0x268; // Size: 16, Type: struct TArray<struct FThrusterData>
			constexpr auto DustEffectScaleCurve = 0x278; // Size: 8, Type: struct UCurveFloat*
			constexpr auto ThrusterTargetAnimationBlendSpeed = 0x280; // Size: 4, Type: float
			constexpr auto YawDegreeDifference = 0x284; // Size: 4, Type: float
			constexpr auto SpoilerRotateSpeed = 0x288; // Size: 4, Type: float
			constexpr auto MaxRudderRoll = 0x28c; // Size: 4, Type: float
			constexpr auto MinRudderRoll = 0x290; // Size: 4, Type: float
			constexpr auto MaxRudderYaw = 0x294; // Size: 4, Type: float
			constexpr auto MinRudderYaw = 0x298; // Size: 4, Type: float
			constexpr auto AccelerationCurve = 0x2a0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto MaxSideMovingSpeed = 0x328; // Size: 4, Type: float
			constexpr auto MaxBackwardMovingSpeed = 0x32c; // Size: 4, Type: float
			constexpr auto DecelerationDegree = 0x330; // Size: 4, Type: float
			constexpr auto DecelerationOnInput = 0x334; // Size: 4, Type: float
			constexpr auto DecelerationOnMovingDirection = 0x338; // Size: 4, Type: float
			constexpr auto MinDecelerationOnMovingDirection = 0x33c; // Size: 4, Type: float
			constexpr auto IgnoreDecelerationOnMovingDirectionTags = 0x340; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto DecelerationOnSide = 0x360; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto AccelerationMultiplierForSideVelocity = 0x3e8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto MaxControllableDegree = 0x470; // Size: 4, Type: float
			constexpr auto InAirControllableTags = 0x478; // Size: 32, Type: struct FGameplayTagContainer
			constexpr auto AdditionalDegreeForStabilize = 0x498; // Size: 4, Type: float
			constexpr auto StabilizeDampingCurve = 0x4a0; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto StabilizeSpeedCurve = 0x528; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto TimerForAntiStuck = 0x5b0; // Size: 4, Type: float
			constexpr auto StuckAcceleration = 0x5b4; // Size: 4, Type: float
			constexpr auto StuckAccelerationLerpSpeed = 0x5b8; // Size: 4, Type: float
			constexpr auto GravityAcceleration = 0x5bc; // Size: 4, Type: float
			constexpr auto GravityWithoutDriver = 0x5c0; // Size: 4, Type: float
			constexpr auto LandingDuration = 0x5c4; // Size: 4, Type: float
			constexpr auto MaximumVelocityOnZWithoutDriver = 0x5c8; // Size: 4, Type: float
			constexpr auto DecelerationRateWithoutDriver = 0x5cc; // Size: 4, Type: float
			constexpr auto AngularDampingWithoutDriver = 0x5d0; // Size: 4, Type: float
			constexpr auto WaterLineForFloatingForce = 0x5d4; // Size: 4, Type: float
			constexpr auto UpwardAccelerationFloatingOnWater = 0x5d8; // Size: 4, Type: float
			constexpr auto WaterAlignSpeed = 0x5dc; // Size: 4, Type: float
			constexpr auto WaterHeightWithoutDriver = 0x5e0; // Size: 4, Type: float
			constexpr auto UpwardForcePIDController = 0x5e4; // Size: 28, Type: struct FPIDController
			constexpr auto RotateAccelaration = 0x600; // Size: 4, Type: float
			constexpr auto RotateDecelaration = 0x604; // Size: 4, Type: float
			constexpr auto MaxAngularSpeed = 0x608; // Size: 4, Type: float
			constexpr auto HoverHeightMultiplierAfterBroken = 0x60c; // Size: 4, Type: float
			constexpr auto ParticleMultiplierAfterBroken = 0x610; // Size: 4, Type: float
			constexpr auto ThrusterParticles = 0x618; // Size: 16, Type: struct TArray<struct FVehicleVFX>
			constexpr auto MovementParticles[4] = 0x630; // Size: 576, Type: struct FVehicleVFX
			constexpr auto ThrusterStateArray = 0x8e8; // Size: 16, Type: struct TArray<struct FThrusterState>
			constexpr auto VehiclePawn = 0x8f8; // Size: 8, Type: struct ASolarVehiclePawn*
			constexpr auto VehicleNetMovement = 0x900; // Size: 8, Type: struct USolarNetMovementComponent*
			constexpr auto AkComponent = 0x908; // Size: 8, Type: struct UAkComponent*
	}
} 
