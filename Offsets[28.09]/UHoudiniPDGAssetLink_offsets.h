namespace offsets
{
	namespace UHoudiniPDGAssetLink
	{
			constexpr auto AssetName = 0x28; // Size: 16, Type: struct FString
			constexpr auto AssetNodePath = 0x38; // Size: 16, Type: struct FString
			constexpr auto AssetId = 0x48; // Size: 4, Type: int32_t
			constexpr auto AllTOPNetworks = 0x50; // Size: 16, Type: struct TArray<struct UTOPNetwork*>
			constexpr auto SelectedTOPNetworkIndex = 0x60; // Size: 4, Type: int32_t
			constexpr auto LinkState = 0x64; // Size: 1, Type: enum class EPDGLinkState
			constexpr auto bAutoCook = 0x65; // Size: 1, Type: bool
			constexpr auto bUseTOPNodeFilter = 0x66; // Size: 1, Type: bool
			constexpr auto bUseTOPOutputFilter = 0x67; // Size: 1, Type: bool
			constexpr auto TOPNodeFilter = 0x68; // Size: 16, Type: struct FString
			constexpr auto TOPOutputFilter = 0x78; // Size: 16, Type: struct FString
			constexpr auto NumWorkItems = 0x88; // Size: 4, Type: int32_t
			constexpr auto WorkItemTally = 0x90; // Size: 40, Type: struct FAggregatedWorkItemTally
			constexpr auto OutputCachePath = 0xb8; // Size: 16, Type: struct FString
			constexpr auto bNeedsUIRefresh = 0xc8; // Size: 1, Type: bool
			constexpr auto OutputParentActor = 0xd0; // Size: 8, Type: struct AActor*
			constexpr auto BakeFolder = 0xd8; // Size: 16, Type: struct FDirectoryPath
	}
} 
