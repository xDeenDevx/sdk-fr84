namespace offsets
{
	namespace AGameJobManager
	{
			constexpr auto SideListChangeEvent = 0x228; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SideData = 0x238; // Size: 16, Type: struct TArray<struct FSCMSideData>
			constexpr auto SideIndexMap = 0x248; // Size: 80, Type: struct TMap<struct FString, uint32_t>
			constexpr auto PlayerIndexMap = 0x298; // Size: 80, Type: struct TMap<struct FString, struct ASCMPlayerState*>
			constexpr auto OBPlayerList = 0x2e8; // Size: 16, Type: struct TArray<struct ASCMPlayerState*>
			constexpr auto JobDataTable = 0x318; // Size: 8, Type: struct UDataTable*
			constexpr auto SideAttributeSets = 0x320; // Size: 288, Type: struct FSideAttributeSetArray
	}
} 
