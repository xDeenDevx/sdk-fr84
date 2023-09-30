namespace offsets
{
	namespace AChaosSolverActor
	{
			constexpr auto TimeStepMultiplier = 0x228; // Size: 4, Type: float
			constexpr auto CollisionIterations = 0x22c; // Size: 4, Type: int32_t
			constexpr auto PushOutIterations = 0x230; // Size: 4, Type: int32_t
			constexpr auto PushOutPairIterations = 0x234; // Size: 4, Type: int32_t
			constexpr auto ClusterConnectionFactor = 0x238; // Size: 4, Type: float
			constexpr auto ClusterUnionConnectionType = 0x23c; // Size: 1, Type: enum class EClusterConnectionTypeEnum
			constexpr auto DoGenerateCollisionData = 0x23d; // Size: 1, Type: bool
			constexpr auto CollisionFilterSettings = 0x240; // Size: 16, Type: struct FSolverCollisionFilterSettings
			constexpr auto DoGenerateBreakingData = 0x250; // Size: 1, Type: bool
			constexpr auto BreakingFilterSettings = 0x254; // Size: 16, Type: struct FSolverBreakingFilterSettings
			constexpr auto DoGenerateTrailingData = 0x264; // Size: 1, Type: bool
			constexpr auto TrailingFilterSettings = 0x268; // Size: 16, Type: struct FSolverTrailingFilterSettings
			constexpr auto bHasFloor = 0x278; // Size: 1, Type: bool
			constexpr auto FloorHeight = 0x27c; // Size: 4, Type: float
			constexpr auto MassScale = 0x280; // Size: 4, Type: float
			constexpr auto bGenerateContactGraph = 0x284; // Size: 1, Type: bool
			constexpr auto ChaosDebugSubstepControl = 0x285; // Size: 3, Type: struct FChaosDebugSubstepControl
			constexpr auto SpriteComponent = 0x288; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto GameplayEventDispatcherComponent = 0x2a8; // Size: 8, Type: struct UChaosGameplayEventDispatcher*
	}
} 
