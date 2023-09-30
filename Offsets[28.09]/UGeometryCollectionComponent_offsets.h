namespace offsets
{
	namespace UGeometryCollectionComponent
	{
			constexpr auto ChaosSolverActor = 0x580; // Size: 8, Type: struct AChaosSolverActor*
			constexpr auto RestCollection = 0x668; // Size: 8, Type: struct UGeometryCollection*
			constexpr auto InitializationFields = 0x670; // Size: 16, Type: struct TArray<struct AFieldSystemActor*>
			constexpr auto Simulating = 0x680; // Size: 1, Type: bool
			constexpr auto ObjectType = 0x688; // Size: 1, Type: enum class EObjectStateTypeEnum
			constexpr auto EnableClustering = 0x689; // Size: 1, Type: bool
			constexpr auto ClusterGroupIndex = 0x68c; // Size: 4, Type: int32_t
			constexpr auto MaxClusterLevel = 0x690; // Size: 4, Type: int32_t
			constexpr auto DamageThreshold = 0x698; // Size: 16, Type: struct TArray<float>
			constexpr auto ClusterConnectionType = 0x6a8; // Size: 1, Type: enum class EClusterConnectionTypeEnum
			constexpr auto CollisionGroup = 0x6ac; // Size: 4, Type: int32_t
			constexpr auto CollisionSampleFraction = 0x6b0; // Size: 4, Type: float
			constexpr auto LinearEtherDrag = 0x6b4; // Size: 4, Type: float
			constexpr auto AngularEtherDrag = 0x6b8; // Size: 4, Type: float
			constexpr auto PhysicalMaterial = 0x6c0; // Size: 8, Type: struct UChaosPhysicalMaterial*
			constexpr auto InitialVelocityType = 0x6c8; // Size: 1, Type: enum class EInitialVelocityTypeEnum
			constexpr auto InitialLinearVelocity = 0x6cc; // Size: 12, Type: struct FVector
			constexpr auto InitialAngularVelocity = 0x6d8; // Size: 12, Type: struct FVector
			constexpr auto CacheParameters = 0x6e8; // Size: 80, Type: struct FGeomComponentCacheParameters
			constexpr auto NotifyGeometryCollectionPhysicsStateChange = 0x738; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto NotifyGeometryCollectionPhysicsLoadingStateChange = 0x748; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChaosBreakEvent = 0x770; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DesiredCacheTime = 0x780; // Size: 4, Type: float
			constexpr auto CachePlayback = 0x784; // Size: 1, Type: bool
			constexpr auto OnChaosPhysicsCollision = 0x788; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bNotifyBreaks = 0x798; // Size: 1, Type: bool
			constexpr auto bNotifyCollisions = 0x799; // Size: 1, Type: bool
			constexpr auto DummyBodySetup = 0x998; // Size: 8, Type: struct UBodySetup*
	}
} 
