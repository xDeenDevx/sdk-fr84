namespace offsets
{
	namespace UNetReplicationGraphConnection
	{
			constexpr auto NetConnection = 0x28; // Size: 8, Type: struct UNetConnection*
			constexpr auto DebugActor = 0x210; // Size: 8, Type: struct AReplicationGraphDebugActor*
			constexpr auto LastGatherLocations = 0x228; // Size: 16, Type: struct TArray<struct FLastLocationGatherInfo>
			constexpr auto ConnectionGraphNodes = 0x240; // Size: 16, Type: struct TArray<struct UReplicationGraphNode*>
			constexpr auto TearOffNode = 0x250; // Size: 8, Type: struct UReplicationGraphNode_TearOff_ForConnection*
	}
} 
