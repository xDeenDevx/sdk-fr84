namespace offsets
{
	namespace UPhysicsSettings
	{
			constexpr auto DefaultGravityZ = 0x38; // Size: 4, Type: float
			constexpr auto DefaultTerminalVelocity = 0x3c; // Size: 4, Type: float
			constexpr auto DefaultFluidFriction = 0x40; // Size: 4, Type: float
			constexpr auto SimulateScratchMemorySize = 0x44; // Size: 4, Type: int32_t
			constexpr auto RagdollAggregateThreshold = 0x48; // Size: 4, Type: int32_t
			constexpr auto TriangleMeshTriangleMinAreaThreshold = 0x4c; // Size: 4, Type: float
			constexpr auto bEnableShapeSharing = 0x50; // Size: 1, Type: bool
			constexpr auto bEnablePCM = 0x51; // Size: 1, Type: bool
			constexpr auto bEnableStabilization = 0x52; // Size: 1, Type: bool
			constexpr auto bWarnMissingLocks = 0x53; // Size: 1, Type: bool
			constexpr auto bEnable2DPhysics = 0x54; // Size: 1, Type: bool
			constexpr auto PhysicErrorCorrection = 0x58; // Size: 52, Type: struct FRigidBodyErrorCorrection
			constexpr auto LockedAxis = 0x8c; // Size: 1, Type: enum class ESettingsLockedAxis
			constexpr auto DefaultDegreesOfFreedom = 0x8d; // Size: 1, Type: enum class ESettingsDOF
			constexpr auto BounceThresholdVelocity = 0x90; // Size: 4, Type: float
			constexpr auto FrictionCombineMode = 0x94; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto RestitutionCombineMode = 0x95; // Size: 1, Type: enum class EFrictionCombineMode
			constexpr auto MaxAngularVelocity = 0x98; // Size: 4, Type: float
			constexpr auto MaxDepenetrationVelocity = 0x9c; // Size: 4, Type: float
			constexpr auto ContactOffsetMultiplier = 0xa0; // Size: 4, Type: float
			constexpr auto MinContactOffset = 0xa4; // Size: 4, Type: float
			constexpr auto MaxContactOffset = 0xa8; // Size: 4, Type: float
			constexpr auto bSimulateSkeletalMeshOnDedicatedServer = 0xac; // Size: 1, Type: bool
			constexpr auto DefaultShapeComplexity = 0xad; // Size: 1, Type: enum class ECollisionTraceFlag
			constexpr auto bDefaultHasComplexCollision = 0xae; // Size: 1, Type: bool
			constexpr auto bSuppressFaceRemapTable = 0xaf; // Size: 1, Type: bool
			constexpr auto bSupportUVFromHitResults = 0xb0; // Size: 1, Type: bool
			constexpr auto bDisableActiveActors = 0xb1; // Size: 1, Type: bool
			constexpr auto bDisableKinematicStaticPairs = 0xb2; // Size: 1, Type: bool
			constexpr auto bDisableKinematicKinematicPairs = 0xb3; // Size: 1, Type: bool
			constexpr auto bDisableCCD = 0xb4; // Size: 1, Type: bool
			constexpr auto bEnableEnhancedDeterminism = 0xb5; // Size: 1, Type: bool
			constexpr auto AnimPhysicsMinDeltaTime = 0xb8; // Size: 4, Type: float
			constexpr auto bSimulateAnimPhysicsAfterReset = 0xbc; // Size: 1, Type: bool
			constexpr auto MaxPhysicsDeltaTime = 0xc0; // Size: 4, Type: float
			constexpr auto bSubstepping = 0xc4; // Size: 1, Type: bool
			constexpr auto bSubsteppingAsync = 0xc5; // Size: 1, Type: bool
			constexpr auto MaxSubstepDeltaTime = 0xc8; // Size: 4, Type: float
			constexpr auto MaxSubsteps = 0xcc; // Size: 4, Type: int32_t
			constexpr auto SyncSceneSmoothingFactor = 0xd0; // Size: 4, Type: float
			constexpr auto InitialAverageFrameRate = 0xd4; // Size: 4, Type: float
			constexpr auto PhysXTreeRebuildRate = 0xd8; // Size: 4, Type: int32_t
			constexpr auto PhysicalSurfaces = 0xe0; // Size: 16, Type: struct TArray<struct FPhysicalSurfaceName>
			constexpr auto DefaultBroadphaseSettings = 0xf0; // Size: 64, Type: struct FBroadphaseSettings
			constexpr auto ChaosSettings = 0x130; // Size: 3, Type: struct FChaosPhysicsSettings
	}
} 
