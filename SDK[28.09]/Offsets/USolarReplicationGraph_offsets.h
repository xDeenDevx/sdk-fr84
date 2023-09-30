namespace offsets
{
	namespace USolarReplicationGraph
	{
			constexpr auto SpatializedClasses = 0x4f8; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto NonSpatializedChildClasses = 0x508; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto AlwaysRelevantClasses = 0x518; // Size: 16, Type: struct TArray<UObject*>
			constexpr auto RejoinNode = 0x528; // Size: 8, Type: struct USolarReplicationGraphNode_ForceNetUpdate_ForRejoinConnection*
			constexpr auto GridNode = 0x530; // Size: 8, Type: struct USolarReplicationGraphNode_GridSpatialization2D*
			constexpr auto AlwaysRelevantNode = 0x538; // Size: 8, Type: struct UReplicationGraphNode_ActorList*
			constexpr auto CustomRelevancyNode = 0x540; // Size: 8, Type: struct USolarReplicationGraphNode_CustomRelevancy*
			constexpr auto AlwaysRelevantForTeamNodes = 0x598; // Size: 80, Type: struct TMap<char, struct USolarReplicationGraphNode_AlwaysRelevant_ForTeam*>
	}
} 
