namespace offsets
{
	namespace UChaosDestructionListener
	{
			constexpr auto bIsCollisionEventListeningEnabled = 0x318; // Size: 1, Type: char
			constexpr auto bIsBreakingEventListeningEnabled = 0x318; // Size: 1, Type: char
			constexpr auto bIsTrailingEventListeningEnabled = 0x318; // Size: 1, Type: char
			constexpr auto CollisionEventRequestSettings = 0x31c; // Size: 24, Type: struct FChaosCollisionEventRequestSettings
			constexpr auto BreakingEventRequestSettings = 0x334; // Size: 24, Type: struct FChaosBreakingEventRequestSettings
			constexpr auto TrailingEventRequestSettings = 0x34c; // Size: 24, Type: struct FChaosTrailingEventRequestSettings
			constexpr auto ChaosSolverActors = 0x368; // Size: 80, Type: struct TSet<struct AChaosSolverActor*>
			constexpr auto GeometryCollectionActors = 0x3b8; // Size: 80, Type: struct TSet<struct AGeometryCollectionActor*>
			constexpr auto OnCollisionEvents = 0x408; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBreakingEvents = 0x418; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTrailingEvents = 0x428; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
