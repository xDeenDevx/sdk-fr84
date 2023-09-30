namespace offsets
{
	namespace USolarNetMovementComponent
	{
			constexpr auto InterpolatedBackTime = 0xe4; // Size: 4, Type: float
			constexpr auto ServerBufferCheckMinSpeed = 0xe8; // Size: 4, Type: float
			constexpr auto ServerBufferIgnoreCheckTimer = 0xec; // Size: 4, Type: float
			constexpr auto AtRestThresholdCount = 0xf0; // Size: 4, Type: float
			constexpr auto ExtrapolationMode = 0xf4; // Size: 1, Type: enum class EExtrapolationMode
			constexpr auto bUseExtrapolationTimeLimit = 0xf5; // Size: 1, Type: bool
			constexpr auto ExtrapolationTimeLimit = 0xf8; // Size: 4, Type: float
			constexpr auto bUseExtrapolationDistanceLimit = 0xfc; // Size: 1, Type: bool
			constexpr auto ExtrapolationDistanceLimit = 0x100; // Size: 4, Type: float
			constexpr auto SendPositionThreshold = 0x104; // Size: 4, Type: float
			constexpr auto SendRotationThreshold = 0x108; // Size: 4, Type: float
			constexpr auto SendVelocityThreshold = 0x10c; // Size: 4, Type: float
			constexpr auto SendAngularVelocityThreshold = 0x110; // Size: 4, Type: float
			constexpr auto ResetTimeOffsetsThreshold = 0x114; // Size: 4, Type: float
			constexpr auto UsingRepLocationThreshold = 0x118; // Size: 4, Type: float
			constexpr auto LinearVelcolityForPositionThreshold = 0x11c; // Size: 4, Type: float
			constexpr auto ReceivedPositionThreshold = 0x120; // Size: 4, Type: float
			constexpr auto AngularVelocityForRotationThreshold = 0x124; // Size: 4, Type: float
			constexpr auto ReceivedRotationThreshold = 0x128; // Size: 4, Type: float
			constexpr auto PositionSnapThreshold = 0x12c; // Size: 4, Type: float
			constexpr auto RotationSnapThreshold = 0x130; // Size: 4, Type: float
			constexpr auto PositionLerpSpeed = 0x134; // Size: 4, Type: float
			constexpr auto RotationLerpSpeed = 0x138; // Size: 4, Type: float
			constexpr auto SpeedOfLerp = 0x13c; // Size: 4, Type: float
			constexpr auto SyncPosition = 0x140; // Size: 1, Type: enum class ESyncMode
			constexpr auto SyncRotation = 0x141; // Size: 1, Type: enum class ESyncMode
			constexpr auto SyncVelocity = 0x142; // Size: 1, Type: enum class ESyncMode
			constexpr auto SyncAngularVelocity = 0x143; // Size: 1, Type: enum class ESyncMode
			constexpr auto bSyncDesiredYaw = 0x144; // Size: 1, Type: bool
			constexpr auto isPositionCompressed = 0x145; // Size: 1, Type: bool
			constexpr auto isRotationCompressed = 0x146; // Size: 1, Type: bool
			constexpr auto isVelocityCompressed = 0x147; // Size: 1, Type: bool
			constexpr auto isAngularVelocityCompressed = 0x148; // Size: 1, Type: bool
			constexpr auto SendRate = 0x14c; // Size: 4, Type: float
			constexpr auto TimeSmoothing = 0x150; // Size: 4, Type: float
			constexpr auto bUsingOriginRebasing = 0x154; // Size: 1, Type: bool
			constexpr auto bAlwaysSendOrigin = 0x155; // Size: 1, Type: bool
			constexpr auto PrimitiveComponent = 0x190; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto RelativeComponent = 0x198; // Size: 8, Type: struct USceneComponent*
			constexpr auto PreviousBaseVehicleActor = 0x1a0; // Size: 8, Type: struct ASolarVehiclePawn*
			constexpr auto AtRestPositionThreshold = 0x510; // Size: 4, Type: float
			constexpr auto AtRestRotationThreshold = 0x514; // Size: 4, Type: float
			constexpr auto VehiclePawn = 0x528; // Size: 8, Type: struct ASolarVehiclePawn*
	}
} 
