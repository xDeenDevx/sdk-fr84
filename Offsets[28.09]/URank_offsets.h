namespace offsets
{
	namespace URank
	{
			constexpr auto SpecificRankChangeEventMap = 0x28; // Size: 80, Type: struct TMap<uint32_t, struct FMulticastInlineDelegate>
			constexpr auto RankListChangeMulticasts = 0x78; // Size: 16, Type: struct TArray<struct FSCMRankListMulticast>
			constexpr auto RankType = 0xa8; // Size: 1, Type: enum class ESCMDataRankType
			constexpr auto HostType = 0xa9; // Size: 1, Type: enum class ESCMHostType
	}
} 
