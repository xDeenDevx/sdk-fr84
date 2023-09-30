namespace offsets
{
	namespace UTOPNode
	{
			constexpr auto NodeId = 0x28; // Size: 4, Type: int32_t
			constexpr auto NodeName = 0x30; // Size: 16, Type: struct FString
			constexpr auto NodePath = 0x40; // Size: 16, Type: struct FString
			constexpr auto ParentName = 0x50; // Size: 16, Type: struct FString
			constexpr auto WorkResultParent = 0x60; // Size: 8, Type: struct UObject*
			constexpr auto WorkResult = 0x68; // Size: 16, Type: struct TArray<struct FTOPWorkResult>
			constexpr auto bHidden = 0x78; // Size: 1, Type: bool
			constexpr auto bAutoLoad = 0x79; // Size: 1, Type: bool
			constexpr auto NodeState = 0x7a; // Size: 1, Type: enum class EPDGNodeState
			constexpr auto bCachedHaveNotLoadedWorkResults = 0x7b; // Size: 1, Type: bool
			constexpr auto bCachedHaveLoadedWorkResults = 0x7c; // Size: 1, Type: bool
			constexpr auto bHasChildNodes = 0x7d; // Size: 1, Type: bool
			constexpr auto ClearedLandscapeLayers = 0x80; // Size: 80, Type: struct TSet<struct FString>
			constexpr auto bShow = 0x150; // Size: 1, Type: bool
			constexpr auto BakedWorkResultObjectOutputs = 0x158; // Size: 80, Type: struct TMap<struct FString, struct FHoudiniPDGWorkResultObjectBakedOutput>
			constexpr auto WorkItemTally = 0x1a8; // Size: 568, Type: struct FWorkItemTally
			constexpr auto AggregatedWorkItemTally = 0x3e0; // Size: 40, Type: struct FAggregatedWorkItemTally
			constexpr auto bHasReceivedCookCompleteEvent = 0x408; // Size: 1, Type: bool
			constexpr auto OutputActorOwner = 0x410; // Size: 16, Type: struct FOutputActorOwner
	}
} 
