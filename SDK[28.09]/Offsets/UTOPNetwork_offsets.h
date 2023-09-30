namespace offsets
{
	namespace UTOPNetwork
	{
			constexpr auto NodeId = 0x28; // Size: 4, Type: int32_t
			constexpr auto NodeName = 0x30; // Size: 16, Type: struct FString
			constexpr auto NodePath = 0x40; // Size: 16, Type: struct FString
			constexpr auto AllTOPNodes = 0x50; // Size: 16, Type: struct TArray<struct UTOPNode*>
			constexpr auto SelectedTOPIndex = 0x60; // Size: 4, Type: int32_t
			constexpr auto ParentName = 0x68; // Size: 16, Type: struct FString
			constexpr auto bShowResults = 0x78; // Size: 1, Type: bool
			constexpr auto bAutoLoadResults = 0x79; // Size: 1, Type: bool
	}
} 
