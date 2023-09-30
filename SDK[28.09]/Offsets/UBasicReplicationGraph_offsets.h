namespace offsets
{
	namespace UBasicReplicationGraph
	{
			constexpr auto GridNode = 0x4f8; // Size: 8, Type: struct UReplicationGraphNode_GridSpatialization2D*
			constexpr auto AlwaysRelevantNode = 0x500; // Size: 8, Type: struct UReplicationGraphNode_ActorList*
			constexpr auto AlwaysRelevantForConnectionList = 0x508; // Size: 16, Type: struct TArray<struct FConnectionAlwaysRelevantNodePair>
			constexpr auto ActorsWithoutNetConnection = 0x518; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
