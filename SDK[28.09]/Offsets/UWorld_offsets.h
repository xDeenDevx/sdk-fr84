namespace offsets
{
	namespace UWorld
	{
			constexpr auto PersistentLevel = 0x30; // Size: 8, Type: struct ULevel*
			constexpr auto NetDriver = 0x38; // Size: 8, Type: struct UNetDriver*
			constexpr auto LineBatcher = 0x40; // Size: 8, Type: struct ULineBatchComponent*
			constexpr auto PersistentLineBatcher = 0x48; // Size: 8, Type: struct ULineBatchComponent*
			constexpr auto ForegroundLineBatcher = 0x50; // Size: 8, Type: struct ULineBatchComponent*
			constexpr auto NetworkManager = 0x58; // Size: 8, Type: struct AGameNetworkManager*
			constexpr auto PhysicsCollisionHandler = 0x60; // Size: 8, Type: struct UPhysicsCollisionHandler*
			constexpr auto ExtraReferencedObjects = 0x68; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto PerModuleDataObjects = 0x78; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto LevelSequenceActors = 0x88; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto StreamingLevels = 0x120; // Size: 16, Type: struct TArray<struct ULevelStreaming*>
			constexpr auto StreamingLevelsToConsider = 0x130; // Size: 40, Type: struct FStreamingLevelsToConsider
			constexpr auto StreamingLevelsPrefix = 0x168; // Size: 16, Type: struct FString
			constexpr auto CurrentLevelPendingVisibility = 0x178; // Size: 8, Type: struct ULevel*
			constexpr auto CurrentLevelPendingInvisibility = 0x180; // Size: 8, Type: struct ULevel*
			constexpr auto DemoNetDriver = 0x188; // Size: 8, Type: struct UDemoNetDriver*
			constexpr auto MyParticleEventManager = 0x190; // Size: 8, Type: struct AParticleEventManager*
			constexpr auto DefaultPhysicsVolume = 0x198; // Size: 8, Type: struct APhysicsVolume*
			constexpr auto bAreConstraintsDirty = 0x1b6; // Size: 1, Type: char
			constexpr auto NavigationSystem = 0x1b8; // Size: 8, Type: struct UNavigationSystemBase*
			constexpr auto AuthorityGameMode = 0x1c0; // Size: 8, Type: struct AGameModeBase*
			constexpr auto GameState = 0x1c8; // Size: 8, Type: struct AGameStateBase*
			constexpr auto AISystem = 0x1d0; // Size: 8, Type: struct UAISystemBase*
			constexpr auto AvoidanceManager = 0x1d8; // Size: 8, Type: struct UAvoidanceManager*
			constexpr auto Levels = 0x1e0; // Size: 16, Type: struct TArray<struct ULevel*>
			constexpr auto LevelCollections = 0x1f0; // Size: 16, Type: struct TArray<struct FLevelCollection>
			constexpr auto OwningGameInstance = 0x220; // Size: 8, Type: struct UGameInstance*
			constexpr auto ParameterCollectionInstances = 0x228; // Size: 16, Type: struct TArray<struct UMaterialParameterCollectionInstance*>
			constexpr auto CanvasForRenderingToTarget = 0x238; // Size: 8, Type: struct UCanvas*
			constexpr auto CanvasForDrawMaterialToRenderTarget = 0x240; // Size: 8, Type: struct UCanvas*
			constexpr auto ComponentsThatNeedEndOfFrameUpdate = 0x298; // Size: 16, Type: struct TArray<struct UActorComponent*>
			constexpr auto ComponentsThatNeedEndOfFrameUpdate_OnGameThread = 0x2a8; // Size: 16, Type: struct TArray<struct UActorComponent*>
			constexpr auto WorldComposition = 0x660; // Size: 8, Type: struct UWorldComposition*
			constexpr auto PSCPool = 0x6f0; // Size: 88, Type: struct FWorldPSCPool
	}
} 
