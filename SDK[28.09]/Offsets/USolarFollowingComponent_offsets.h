namespace offsets
{
	namespace USolarFollowingComponent
	{
			constexpr auto bEnableOffmeshDetect = 0x2a0; // Size: 1, Type: bool
			constexpr auto MinDetectInterval = 0x2a4; // Size: 4, Type: float
			constexpr auto MaxDetectIteration = 0x2a8; // Size: 4, Type: uint32_t
			constexpr auto InitialOffmeshSolveExtent = 0x2ac; // Size: 12, Type: struct FVector
			constexpr auto MinZDiffDetectUndergroud = 0x2b8; // Size: 4, Type: float
			constexpr auto AgentSwimingHalfHeightPct = 0x2bc; // Size: 4, Type: float
			constexpr auto AgentNormalHalfHeightPct = 0x2c0; // Size: 4, Type: float
			constexpr auto ReachTestCheckAngleWV = 0x2c4; // Size: 4, Type: float
			constexpr auto MinSpeedLastSegmentWV = 0x2c8; // Size: 4, Type: float
			constexpr auto TurningSpeedWV = 0x2cc; // Size: 4, Type: float
			constexpr auto TurningSteeringThresholdWV = 0x2d0; // Size: 4, Type: float
			constexpr auto BlockDetectionDistanceCharacter = 0x2d4; // Size: 4, Type: float
			constexpr auto BlockDetectionDistanceVehicle = 0x2d8; // Size: 4, Type: float
			constexpr auto bEnableSolveBlock = 0x2ec; // Size: 1, Type: bool
			constexpr auto VehicleActor = 0x328; // Size: 8, Type: struct ASolarVehiclePawn*
			constexpr auto SensorTraceDistance = 0x33c; // Size: 4, Type: float
			constexpr auto bEnableDebug = 0x340; // Size: 1, Type: bool
			constexpr auto RightSensorAlpha = 0x344; // Size: 4, Type: float
			constexpr auto CentralSensorAlpha = 0x348; // Size: 4, Type: float
			constexpr auto LeftSensorAlpha = 0x34c; // Size: 4, Type: float
			constexpr auto SteeringAngle = 0x350; // Size: 4, Type: float
			constexpr auto VehicleSteeringSensitivity = 0x354; // Size: 4, Type: float
			constexpr auto BrakingForce = 0x358; // Size: 4, Type: float
			constexpr auto DecelerationDistance = 0x35c; // Size: 4, Type: float
			constexpr auto VehicleDecelerationSpeed = 0x360; // Size: 4, Type: float
			constexpr auto VehicleTurningSpeed = 0x364; // Size: 4, Type: float
			constexpr auto CheckReverseDistance = 0x368; // Size: 4, Type: float
			constexpr auto HoverCheckBlockSpeed = 0x36c; // Size: 4, Type: float
			constexpr auto WheeledCheckBlockSpeed = 0x370; // Size: 4, Type: float
			constexpr auto LeggedVehicleCheckBlockSpeed = 0x374; // Size: 4, Type: float
			constexpr auto CheckBlockTime = 0x37c; // Size: 4, Type: float
			constexpr auto TryReverseTimes = 0x388; // Size: 4, Type: int32_t
			constexpr auto TryReverseDurationTime = 0x38c; // Size: 4, Type: float
			constexpr auto SolveBlockGoFrontTime = 0x398; // Size: 4, Type: float
			constexpr auto bPathFinish = 0x3a0; // Size: 1, Type: bool
	}
} 
